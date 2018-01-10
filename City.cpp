/************************************************************************
** Author: John Yoon
** Description: City [Implement] - The space where you save Elastagirl
from Omnidroid.
************************************************************************/

#include "City.hpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/*********************************************************************
** Function: getType
** Description: Returns the integer value unique to this space class.
** Parameters: None.
*********************************************************************/
int City::getType()
{
	return 3;
}

/*********************************************************************
** Function: activate
** Description: The gameplay for the City level.
** Parameters: None.
*********************************************************************/
void City::activate()
{
	int input;

	cout << "\n\nYou arrive at the abandoned City, and get the eerie feeling that you are being watched by someone" << endl;
	cout << "...or something from the skyscraper buildings." << endl;
	cout << "You, DASH, and VIOLET all start shouting for ELASTIGIRL, but all you hear is your echos shouting back at you." << endl;
	cout << "All of a sudden, you see a pair of red eyes staring at you. They belong to the MEGA-ROBOT, OMNIDROID, that is holding" << endl;
	cout << "your wife by its mechanical arms." << endl;
	cout << "Floating above OMNIDROID is your nemesis, SYNDROME." << endl;

	cout << "SYNDROME says that he has been secretly monitoring all the battles up until now, and uploaded the information to OMNIDROID" << endl;
	cout << "in order to defeat you. Then SYNDROME laughs maniacally and orders OMNIDROID to ATTACK!" << endl;
	cout << "What do you do?" << endl;

	cout << "\nENTER 1 to use COMBO with DASH/VIOLET" << endl;
	cout << "ENTER 2 to fight SOLO" << endl;

	cin >>input;
	cout << "\n\n";
	

	switch(input)
	{
		case 1: 
		{
			cout << "VIOLET turns you and DASH invisible." << endl;
			cout << "DASH then carries you and accelerates towards OMNIDROID" << endl;
			cout << "DASH THROWS you towards the robot, and you gather energy in your fist." << endl;
			cout << "OMNIDROID is confused by the new tactics, and is paralyzed by all the developments.\n" << endl;
			cout << "You use MEGA PUNCH to SMASH through OMNIDROID, and it collapses on the ground." << endl;
			cout << "You release your wife from the OMNIDROID's grasp, and the INCREDIBLES family surrounds SYNDROME." << endl;
			cout << "SYNDROME quickly floats into the sky, and shouts that if we want our baby, to come to the DESERT" << endl;
			cout << "at the outskirts of the City. He then flies away." << endl;

			cout << "What do you do?" << endl;

			cout << "\nENTER 1 to PREPARE a plan and WAIT a bit in the City" << endl;
			cout << "ENTER 2 to RUN after SYNDROME right away" << endl;
			cin >>input;
			cout << "\n\n";

			switch(input)
			{
				case 1:
				{
					cout << "You and your family stand around discussing potential plans to defeat SYNDROME." << endl;
					cout << "Unfortunately, SYNDROME has planted bombs throughout the city to detonate when he left." << endl;
					cout << "They all activate, and everyone dies." << endl;
					cout << "GAME OVER" << endl;
					alive = false;
					break;
				}	

				case 2:
				{
					cout << "You and your family go after SYNDROME, and keep him within your sights until you finally" << endl;
					cout << "arrive at the Desert at the outskirts of the City." << endl;
					break;
				}

				default:
				{
					cout << "Invalid input, PROGRAM EXITING." << endl;
					alive = false;
					break;
				}
			}
			break;
		}	

		case 2:
		{
			cout << "You are insane. SYNDROME just said his robot has been programmed with all your battle information, which" << endl;
			cout << "includes your fighting tactics and weaknesses. In other words, OMNIDROID utterly wrecks you within a minute." << endl;
			cout << "You Die." << endl;
			cout << "GAME OVER." << endl;
			alive = false;
			break;
		}
				

		default:
		{
			cout << "Invalid input, PROGRAM EXITING." << endl;
			alive = false;
			break;
		}
	}
}


/*********************************************************************
** Function: special
** Description: Displays the ASCII art of a City to represent City.
** Parameters: None.
*********************************************************************/
void City::special()
{
cout <<
"\n"                                       
"                         /Mh//////////////////dM/\n"                                       
"                         /My   .-        -.   yM/\n"                                       
"                         /My   hM-      -Mh   yM/\n"                                       
"                         /My   dM-      -Mh   yM/\n"                                       
"                         /My   dM-      -Mh   yM/\n"                                       
"                         /My   dM-      -Mh   yM/\n"                                       
"                         /My   /s`      `s/   yM/ `.....................`\n"               
"                         /My                  yM/ mMmmmmmmmmmmmmmmmmmmNMd\n"               
"                         /My                  yM/ NM`                 .Md\n"               
"                         /My   .-        -.   yM/ NM`   -`       .-   .Md\n"               
"                         /My   hM-      -Mh   yM/ NM`  :My       dM-  .Md\n"               
"                         /My   dM-      -Mh   yM/ NM`  :My       dM-  .Md\n"               
"                         /My   dM-      -Mh   yM/ NM`  :My       dM-  .Md\n"               
"                         /My   dM-      -Mh   yM/ NM`  :My       dM-  .Md\n"               
"  `````````````````````  /My   /s`      `s/   yM/ NM`  `s:       /s`  .Md\n"               
" hNmddddddddddddddddddNh /My                  yM/ NM`                 .Md\n"               
" mM:.................-MN /My                  yM/ NM`                 .Md\n"               
" mM.   :.       .:   .MN /My   .:        :.   yM/ NM`  `:.       .:   .Md\n"               
" mM.  -Mh       yM:  .MN /My   hN-      -Nh   yM/ NM`  :My       hN.  .Md\n"               
" mM.  -Md       hM:  .MN /My   dM-      -Mh   yM/ NM`  :My       dM-  .Md\n"               
" mM.  -Md       hM:  .MN /My   dM-      -Mh   yM/ NM`  :My       dM-  .Md\n"               
" mM.  -Md       hM:  .MN /My   dM-      -Mh   yM/ NM`  :My       dM-  .Md\n"               
" mM.  `s/       :s`  .MN /My   /s`      `s/   yM/ NM`  .s:       /s`  .Md\n"               
"hNM.                 `NNhdMs                  sMdhMM`                 .MNhhhh\n\n";                   
}