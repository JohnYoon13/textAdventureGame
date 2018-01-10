/************************************************************************
** Author: John Yoon
** Description: Home [Implement] - The space where you find out your family
is in danger, and where you battle Frozone.
************************************************************************/

#include "Home.hpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
		

/*********************************************************************
** Function: getType
** Description: Returns the integer value unique to this space class.
** Parameters: None.
*********************************************************************/		
int Home::getType()
{
	return 0;
}


/*********************************************************************
** Function: activate
** Description: The gameplay for the Home level.
** Parameters: None.
*********************************************************************/
void Home::activate()
{	
	int input;

	cout << "\n\nAfter a long day of fighting crime as the superhero, Mr. Incredible, you return to your lovely home." << endl;
	cout << "As you enter the house, you expect to be greeted by your beautiful wife, Elastigirl, along with your three children." << endl;
	cout << "However, you immediately notice that something is wrong." << endl;
	cout << "Your home looks like a war zone, and you begin shouting for your family to see if they're safe.\n" << endl;
	cout << "As you run into the kitchen, you notice a tall shadowy figure standing by the fridge." << endl;
	cout << "You prepare to defend yourself, but relax a bit when you notice that it is just your best friend and fellow superhero, Frozone." << endl;
	cout << "ALL OF A SUDDEN, Frozone ATTACKS you with an ICE BLAST, what do you do?" << endl;

	cout << "\nENTER 1 to DUCK and DODGE" << endl;
	cout << "ENTER 2 to THROW KITCHEN TABLE" << endl;
	cout << "ENTER 3 to ATTACK" << endl;

	cin >>input;
	cout << "\n\n";

	switch(input)
	{
		case 1: 
		{
			cout << "You avoid the attack and quickly PUNCH Frozone in the face. He passes out." << endl;
			cout << "As you carefully check his vitals, you notice the mind-control device attached to his head." << endl;
			cout << "You remove it, and it starts to ominously BEEP..." << endl;
			cout << "What do you do?" << endl;

			cout << "\nENTER 1 to quickly SMASH the device" << endl;
			cout << "ENTER 2 to ANALYZE why it is beeping." << endl;
			cin >>input;
			cout << "\n\n";

			switch(input)
			{
				case 1:
				{
					cout << "You THROW the device against a far wall, and it EXPLODES!" << endl;
					cout << "You and Frozone DIE. :( " << endl;
					cout << "GAME OVER" << endl;
					alive = false;
					break;
				}	

				case 2:
				{
					cout << "You open the device and notice that it is broken due to the battle." << endl;
					cout << "The screen inside the device now only shows map coordinates to a Jungle." << endl;
					cout << "You record the coordinates, and drop off Frozone at the hospital before flying off to the Jungle!" << endl;
					tester = true;
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
			cout << "You throw the table, which freezes mid-air. Then you try to KICK Frozone, but";
			cout << " he blocks and unleashes deadly ICICLES! What do you do?" << endl;
			cout << "\nENTER 1 to BLOCK" << endl;
			cout << "ENTER 2 to RUN" << endl;

			cin >>input;
			cout << "\n\n";

			switch(input)
			{
				case 1:
				{
					cout << "You try to BLOCK by putting up your arms, but the ICICLES pierce your vital orgrans." << endl;
					cout << "You Die." << endl;
					cout << "GAME OVER" << endl;
					alive = false;
					break;
				}

				case 2:
				{
					cout << "You smartly run into the living room, and hide behind the door." << endl;
					cout << "When Frozone enters the room, you KARATE CHOP him from behind. He passes out." << endl;
					cout << "As you carefully check his vitals, you notice the mind-control device attached to his head." << endl;
					cout << "You remove it, and it starts to ominously BEEP..." << endl;
					cout << "What do you do?" << endl;

					cout << "\nENTER 1 to quickly SMASH the device" << endl;
					cout << "ENTER 2 to ANALYZE why it is beeping." << endl;
					cin >>input;
					cout << "\n\n";

					switch(input)
					{
						case 1:
						{
							cout << "You THROW the device against a far wall, and it EXPLODES!" << endl;
							cout << "You and Frozone DIE. :( " << endl;
							cout << "GAME OVER" << endl;
							alive = false;
							break;
						}	

						case 2:
						{
							cout << "You open the device and notice that it is broken due to the battle." << endl;
							cout << "The screen inside the device now only shows map coordinates to the Amazon Jungle." << endl;
							cout << "You record the coordinates, and drop off Frozone at the hospital before flying off to the Jungle!" << endl;
							tester = true;
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
					cout << "Invalid input, program exiting." << endl;
					alive = false;
					break;
				}
			}
			break;
		}

		case 3:
		{
			cout << "You recklessly attacked and are frozen." << endl;
			cout << "GAME OVER" << endl;
			alive = false;
			break;
		}

		default:
		{
			cout << "Invalid input, PROGRAM EXITING" << endl;
			alive = false;
			break;
		}
	}
}


/*********************************************************************
** Function: special
** Description: Displays the ASCII art of a house to represent Home.
** Parameters: None.
*********************************************************************/
void Home::special()
{
cout <<   
"\n" 
"	                                 /s/.\n"                               
"                                 :hmyddh/`\n"                                    
"                              `:hdy/-:+ddd/.\n"                                 
"                            `/hmh:-oy+hsohdds-\n"                                   
"                          `/hd+.:+hh.`.yy/-/dmh:`\n"                                
"                        `/dd/.ooos-:oho.`:shs:omh:`\n"                                
"                      ./hd+s:./s/o/:o+o/:o+./ossodh:o`\n"                                   
"                    .sdms. `+dy` `/d+  -yy/.`.so::ymN/`\n"                                   
"                  -ymy-`/yso+.:yys+.+ssy/ :yho.`:om+omdo.\n"                                 
"               `:ymsy+../++o../o/o:.-o/o/:s+-s//o+`/oyddmh-`\n"                                
"             `:hNd:`-hhd/` -ydh.``/ymo-`/hy/``sh+-``soo/sdmdo.\n"                              
"           `/dm+`:dsy. -yhys/`.yhso/`./sm: -osd`./sds``-d/./dNh/`\n"                           
"         `+mdso-+s. +osyo`/oooy+-oo:--oo-s+/+s/s/+s`:ooh//oshyomNy:`\n"                        
"       `omm/  -dso:.-+o+s/-:+y+s/.-yyd+``-yho``-yhs:.-oo+ooo+/+oysNmo-`\n"                     
"     .oNd:/shhs- `:hm:`` -+dy+``:dyy-`:osdy::oosho-/odso-./s:s. .+o:hMmo.\n"                   
"   .yNmoyhms.-osyyms:hhysso.`-ddmo``odhho-`shsyo.omds-`ohd:  +dms-:ssssNNy- `\n"               
" -sMNsydmdhNdhdNmyhmNmhydNmdmNmsymMNMhsNmdmNyyNNMhsmNmNhohNmNhoymmdoodNNMMM/\n"                
" oyoood/--....````..``..`..``...-............-......----------------yo-.--:`\n"                
"      h+///.          `  `..-s+oooso     `   `       `          ./ysd/\n"                      
"      h+///o:/           ++++++s+++`                           +o+yyd:\n"                      
"      m``+///+`          `.../o+//+/                           :/yssd:\n"                      
"      m     `                     ``  `--:-`                     ```y:\n"                      
"     `d                            -syso+++ss`       -///::::---`   s:\n"                      
"     `d                          .so-`      :s     + /////+d+++oh   +/\n"                      
"     `d   .:yyyyydyysyy/        :y-          o:    h`.....-d::::d   :s\n"                      
"     `d   //`````y.````h`      -y`           `y    y+ssssoom++++d`  .h\n"                      
"      m   /yooossdsssssdy      y.             y`   //      h    o-  `d\n"                      
"      m   /o-....s:....-y      h              o-   .y``````o-.--s-  `d\n"                      
"      m   -o     +:     h      h              +:    ossssssssooo+   `d\n"                      
"      m    h:--../+....-y      h           /h:-s                  `.-m\n"                      
"      m    -/+oooooooooo-      h           dMy h                  ///m\n"                      
"      m                        y`          :y- s.                 .--m\n"                      
"      d`  .:://::              +:              //                    m\n"                      
"      h/--o/::/:o              :+              -o                  ::m`\n"                     
"      so::o//:o``              `y              `y               .:/o:m`\n"                     
"      os///s--.                 h               h               ://s+m.\n"                     
"      oo-...      .:////        s-              h                `++/d-\n"                    
"      o/       .//o/+//+/:      :+              y`                   s:\n"                     
"      /hssssssshsssshoo++s//:--.-/``````````````o:```````````````````s:\n"                     
"       ...............--:::/++oossyyyyyyyyyyyyyyyhyyyyyyyyyyyyyyyyyyyh-\n\n"
"WELCOME MR. INCREDIBLE!!!"; 
}