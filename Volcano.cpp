/************************************************************************
** Author: John Yoon
** Description: Volcano [Implement] The space where you save Violet
from Bomb Voyage.
************************************************************************/

#include "Volcano.hpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/*********************************************************************
** Function: getType
** Description: Returns the integer value unique to this space class.
** Parameters: None.
*********************************************************************/
int Volcano::getType()
{
	return 2;
}


/*********************************************************************
** Function: activate
** Description: The gameplay for the Volcano level.
** Parameters: None.
*********************************************************************/
void Volcano::activate()
{
	int input;

	cout << "\n\nAs you and DASH run, he updates you on what happened earlier." << endl;
	cout << "DASH describes how the family was preparing for dinner when a gernade filled with knockout-gas" << endl;
	cout << "flew into the window. His next memory was of waking up in the Jungle with Violet, who was eventually " << endl;
	cout << "sent to the Volcano.\n" << endl;

	cout << "As he finishes the story, you arrive at the looming volcano head of you." << endl;
	cout << "There appears to be a small opening at the base of the Volcano, but for the element of surprise, " << endl;
	cout << "you could see if there is a way in from the top of the Volcano." << endl;
	cout << "What do you do?" << endl;

	cout << "\nENTER 1 to go into the entrance at the BASE" << endl;
	cout << "ENTER 2 to look for an entrance near the TOP" << endl;

	cin >>input;
	cout << "\n\n";
	

	switch(input)
	{
		case 1: 
		{
			cout << "You go into the entrance by the base, and cautiously run through a long dark tunnel." << endl;
			cout << "Eventually you arrive at a brightly lit room at the center of the volcano." << endl;
			cout << "You see that VIOLET is in a cell by the villain, BOMB VOYAGE, who specializes in bomb attacks." << endl;
			cout << "Your entrance has caught the notice of BOMB VOYAGE, who quickly starts lighting up numerous bombs." << endl;
			cout << "What do you do?" << endl;

			cout << "\nENTER 1 for DASH to use his SPEED" << endl;
			cout << "ENTER 2 for you to use your STRENGTH" << endl;
			cin >>input;
			cout << "\n\n";

			switch(input)
			{
				case 1:
				{
					cout << "DASH rapidly defuses all the bombs and unlocks VIOLET, who joins the fray." << endl;
					cout << "VIOLET uses her invisible FORCE FIELD to protect you and DASH, as you both " << endl;
					cout << "move in on BOMB VOYAGE. DASH quickly disarms Bomb Voyage, and you land the knockout PUNCH." << endl;
					cout << "A key falls out of BOMB VOYAGE's beret.\n" << endl;
					tester = true;
					cout << "You pick up the key as VIOLET says that she overheard BOMB VOYAGE say that your wife, ELASTIGIRL," << endl;
					cout << "is being held in an abandoned city nearby." << endl;
					cout << "VIOLET uses her FORCE FIELD to levitate and quickly transport herself, you, and DASH to the CITY." << endl;

					break;
				}	

				case 2:
				{
					cout << "You lift up both of your mighty fists and bring them to the ground to use EARTHQUAKE SMASH." << endl;
					cout << "The floor beneath BOMB VOYAGE crumbles, and he falls to his doom into the lava underneath." << endl;
					cout << "Unfortunately, your brute strength creates structural instability in the volcano, and it collapses on" << endl;
					cout << "everyone inside. You die." << endl;
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
			break;
		}	

		case 2:
		{
			cout << "You climb to the top of the volcano, and look around for an entrance." << endl;
			cout << "DASH spots a metal vent that both of you take to enter the volcano." << endl;
			cout << "Eventually you arrive at a brightly lit room at the center of the volcano." << endl;
			cout << "You see that VIOLET is in a cell by the villain, BOMB VOYAGE, who specializes in bomb attacks." << endl;
			cout << "Your entrance has caught the notice of BOMB VOYAGE, who quickly starts lighting up numerous bombs." << endl;
			cout << "What do you do?" << endl;

			cout << "\nENTER 1 for DASH to use his SPEED" << endl;
			cout << "ENTER 2 for you to use your STRENGTH" << endl;
			cin >>input;
			cout << "\n\n";

			switch(input)
			{
				case 1:
				{
					cout << "DASH rapidly defuses all the bombs and unlocks VIOLET, who joins the fray." << endl;
					cout << "VIOLET uses her invisible FORCE FIELD to protect you and DASH, as you both " << endl;
					cout << "move in on Bomb Voyage. DASH quickly disarms Bomb Voyage, and you land the knockout PUNCH." << endl;
					cout << "VIOLET says that she overheard Bomb Voyage say that your wife, ELASTIGIRL," << endl;
					cout << "is being held in an abandoned city nearby." << endl;
					cout << "VIOLET uses her FORCE FIELD to levitate and quickly transport herself, you, and DASH to the CITY." << endl;

					break;
				}	

				case 2:
				{
					cout << "You lift up both of your mighty fists and bring them to the ground to use EARTHQUAKE SMASH." << endl;
					cout << "The floor beneath BOMB VOYAGE crumbles, and he falls to his doom into the lava underneath." << endl;
					cout << "Unfortunately, your brute strength creates structural instability in the volcano, and it collapses on" << endl;
					cout << "everyone inside. You die." << endl;
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
** Description: Displays the ASCII art of a volcano to represent Volcano.
** Parameters: None.
*********************************************************************/
void Volcano::special()
{
cout <<   
"\n"                                    								
"                                  `..-o     o-..\n"                                            
"                                `/o::s.     .s:/o-\n"                                         
"                                `o.`-:/::///::/-.`+-\n"                                         
"                              `o`                 +:\n"                                        
"                             `o`                   //\n"                                       
"                             `o.    .`         `.    :+\n"                                      
"                            `o.   -+-:/       /:-/-   -+`\n"                                    
"                           `+-   .o   s      :/   +:   .s-\n"                                   
"                          `o.    s`   s      y     s    `s/\n"                                  
"                         `o.    /:   `s      s     +-    `ss`\n"                                
"                        .h.    .o    +-     `o     -+      yy-\n"                               
"                      `:os   `:+`   -o      `o     `s      `s+/`\n"                             
"                     -+- ++://s     s`      .o      y       .o.+-\n"                            
"                  `./:   -/  +`    :/       +-      o.       o. //`\n"                          
"                `:/-    ::  -:     +-      .o       `s       ::  `+:`\n"                        
"             `./:.    `/.  `+      `+/.`.-/s         -+`    `o.    -+-\n"                       
"          `.//-      -/`  `+`        `---. o          `///////:      -+.\n"                     
"       `.//-       `/-   `+`               o                  ./.      :+-`\n"                  
"    `.//-        `::    `/`                +`                   ::`      -/:`\n"                
"  `//-         `::`     `                  -:                    `/-       .//.\n\n";             
}