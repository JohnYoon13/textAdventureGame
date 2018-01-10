/************************************************************************
** Author: John Yoon
** Description: Final Project - The main function that runs the game 
through all the various spaces, as long as the player stays alive.
Game ends if the user takes too long.

To make it all the way to the final level in the 'GOLD' room, use the
following combinations:
For 'Home' level: 1 & 2
For 'Jungle' level: 1 & 2
For 'Volcano' level: 1 & 1
For 'City' level: 1 & 2
For 'Desert' level: Either 1 or 2
************************************************************************/
#include "Space.hpp"
#include "Item.hpp"
#include "Home.hpp"
#include "Jungle.hpp"
#include "Volcano.hpp"
#include "City.hpp"
#include "Desert.hpp"
#include "Gold.hpp"

#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <signal.h>
#include <sys/signal.h>

#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

//Function that will activate upon the alarm reaching its limit.
void alarm_handle(int)
{
  cout << "You took too long. PROGRAM EXITING." << endl;
  exit(1);
}


int main()
{	
	int count = 0;

	//Container of Items for the adventure initialized to empty.
	Item* item[3];
	for(int i = 0; i < 3; i++)
	{
		item[i] = NULL;
	}


	//The various spaces that will be used later.
	Space *home = new Home;
	Space *jungle = new Jungle;
	Space *volcano = new Volcano;
	Space *city = new City;
	Space *desert = new Desert;

	//Links the home space with the other four spaces.
	home->setS1(jungle);
	home->setS2(volcano);
	home->setS3(city);
	home->setS4(desert);
	//Links the jungle space with the other four spaces.
	jungle->setS1(volcano);
	jungle->setS2(city);
	jungle->setS3(desert);
	jungle->setS4(home);
	//Links the volcano space with the other four spaces.
	volcano->setS1(city);
	volcano->setS2(desert);
	volcano->setS3(home);
	volcano->setS4(jungle);
	//Links the city space with the other four spaces.
	city->setS1(desert);
	city->setS2(home);
	city->setS3(jungle);
	city->setS4(volcano);
	//Links the desert space with the other four spaces.
	desert->setS1(home);
	desert->setS2(jungle);
	desert->setS3(volcano);
	desert->setS4(city);



	//The current space is set to the first level, home.
	Space *current = home;
	
	int input1;

	cout << "\n\nWould you like to PLAY the GAME?" << endl;

	cout << "\nENTER 1 for YES" << endl;
	cout << "ENTER 2 for NO" << endl;
	
	cin >>input1;
	cout << "\n\n";
	

	switch(input1)
	{
		case 1: 
		{
				/*Gameplay is activated: goes through all the different spaces as long as
				the user is still alive. Also updates your "utility belt" with the items
				you may have picked up in that space.*/
				do
				{	
					//Updates the current map
					if(count != 0)
					{
						current = current->getS1();	
					}

					//Cosmetic addition to make the sleep() function between the levels, and 
					//the waiting time less awkward.
					cout << "\nLevel is loading...get ready!" << endl;

					sleep(6); //Gives the user some time to read the story before the art pops up.
					current->special();
					//Sets time limit for user input. Program ends if passes the limit.
					signal(SIGALRM, alarm_handle);
					alarm(300);
					current->activate();
					count++;


					//Based on the player's decisions on the Jungle level, adds the card Item
					if((current->getBool() == true) && (current->getType() == 1))
					{	
						Item* card = new Item("card");
						item[0] = card;
						delete card;
					}
					//Based on the player's decisions on the Volcano level, adds the key Item
					if((current->getBool() == true) && (current->getType() == 2))
					{	
						Item* key = new Item("key");
						item[1] = key;
						delete key;
					}


					/*REMOVES AND ADDS SPACES based on:
					if by the end of the game, you have the card & key, and are still alive, you get
					the treasure at the newly added space*/
					if((current->getType() == 4) && (item[1] != NULL))
					{
						
						//Removes the home.
						desert->setS1(NULL);
						city->setS2(NULL);
						volcano->setS3(NULL);
						jungle->setS4(NULL);
			
						//Inserts the gold.
						Space* gold = new Gold;
						desert->setS1(gold);
						city->setS2(gold);
						volcano->setS3(gold);
						jungle->setS4(gold);
						
						//Set current to desert to the gold, and then applies its function.
						current = desert->getS1();
						current->special();
						current->activate();
						delete gold;

					}
				}while(current->getAlive());
			break;
		}	

		case 2:
		{
			break;
		}		

		default:
		{
			cout << "Invalid input, PROGRAM EXITING." << endl;
			break;
		}
	}

	delete home;
	delete jungle;
	delete volcano;
	delete city;
	delete desert;


	return 0;
}