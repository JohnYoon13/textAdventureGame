/************************************************************************
** Author: John Yoon
** Description: Desert [Implement] - The space where you save Jack-Jack
from Syndrome.
************************************************************************/

#include "Desert.hpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/*********************************************************************
** Function: getType
** Description: Returns the integer value unique to this space class.
** Parameters: None.
*********************************************************************/
int Desert::getType()
{
	return 4;
}

/*********************************************************************
** Function: activate
** Description: The gameplay for the Desert level.
** Parameters: None.
*********************************************************************/
void Desert::activate()
{
	int input;

	cout << "\n\nThe Desert's hot sandy wind breezes past your face, as you scan over the sand dunes, camels, and cactuses." << endl;
	cout << "SYNDROME had vanished upon entering the DESERT, and you and your family are desperately looking for him." << endl;
	cout << "Suddenly you hear a rumbling noise, and the sand beneath you begins to move." << endl;
	cout << "SYNDROME's enormous underground facility emerges, along with its numerous weapons systems." << endl;
	cout << "Then SYNDROME himself appears, holding your baby, Jack-Jack." << endl;
	cout << "All the weapons begin to turn on and lock onto you and your family." << endl;

	cout << "What do you do?" << endl;

	cout << "\nENTER 1 for you and ELASTIGIRL to COMBO" << endl;
	cout << "ENTER 2 for DASH and VIOLET to COMBO" << endl;
	

	cin >>input;
	cout << "\n\n";
	

	switch(input)
	{
		case 1: 
		{
			cout << "ELASTIGIRL stretches her arms and wraps them around you." << endl;
			cout << "Then she uses you like a YO-YO to rapidly destroy all the surrounding weapons." << endl;
			cout << "Finally she throws you like a SLING-SHOT at SYNDROME." << endl;
			cout << "SYNDROME tries to use his LASER RAY at you, but VIOLET quickly uses her FORCE FIELD." << endl;
			cout << "You MEGA PUNCH him in the face, knocking him out.\n" << endl;
			cout << "DASH immediately grabs Jack-Jack, and everyone HUGS." << endl;
			cout << "Tragically, when SYNDROME was knocked out, he fell on QUICKSAND and met an unfortunate end.\n" << endl;
			cout << "You and your family are relieved that the danger is over." << endl;
			cout << "Out of curiousity, you examine the rest of SYNDROME's underground facility." << endl;
			cout << "It looks like you need a KEY and a CARD to open it...hopefully you have them or the journey ends for you here." << endl;
			alive = false;
			break;
		}	

		case 2:
		{
			cout << "VIOLET uses her FORCE FIELD to protect DASH from the heat-seeking missiles and guns aimed at him." << endl;
			cout << "DASH runs around in a circle in several spots at once, and creates multiple SAND TORNADOS" << endl;
			cout << "that destroy the weapons, and blocks SYNDROME's visibility." << endl;
			cout << "Due to VIOLET and DASHs' efforts, you are able to sneak up behind SYNDROME" << endl;
			cout << "and MEGA PUNCH him in the face, knocking him out." << endl;
			cout << "ELASTIGIRL immediately grabs Jack-Jack, and everyone HUGS.\n" << endl;
			cout << "Tragically, when SYNDROME was knocked out, he fell on QUICKSAND and met an unfortunate end.\n" << endl;
			cout << "You and your family are relieved that the danger is over." << endl;
			cout << "Out of curiousity, you examine the rest of SYNDROME's underground facility." << endl;
			cout << "It looks like you need a KEY and a CARD to open it...hopefully you have them or the journey ends for you here." << endl;
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
** Description: Displays the ASCII art of a Camel to represent Desert.
** Parameters: None.
*********************************************************************/
void Desert::special()
{
cout <<
"\n"                                                              
"                   .y:::/++-o+soy.\n"                                                                  
"                 .:/` .so/: `+/:`\n"                                                                   
"            `:/:/-`   .hmy/  ./ \n"                                                                    
"           `o.`        ```  -`s\n"                                                                  
"           -/.-        ```-+-.y              `-:::-.    .+o::://:\n"                                   
"           +:/  ::.::.---:-` -s            -oo-```.//:/o-.      :/:\n"                                 
"           `:os/://`  .:     /o          .+-``       `.++       -/:o\n"                                
"              `..`    ::     ++         `y``:   `.  `. oo.       /+y\n"                                
"                      +-     o+         .y:+o  `oo  `o`yh++:.-+:-+://\n"                               
"                      s-     /+         /+``//:+.//:+/:.:y`.-.````  s/\n"                              
"                      s-     .y        -h`   ``   ```    h.         `s:\n"                             
"                      o/      o+      `h-                ::          .h-\n"                            
"                      /s      `+o.   `s/                              -s:/.\n"                         
"                      `h`       .///-++.                               .``//\n"                       
"                       +s          ``                                      +o\n"                       
"                        oo`                                                 s:\n"                      
"                         /s:`                           :                   .h`\n"                     
"                          ./o/-`                       `+                    ho`\n"                    
"                            `.:++/.`                   /:             `.     syo`\n"                   
"                                `o-/:-     `         `+:            `-/`     oyso\n"                   
"                                 /. `-:-.  +         s-          `-++.       y::o:\n"                  
"                                 -s    `-:.s`       `y     ``.-:+::/:        h.-o+/-\n"                
"                                  h`      -d/       .d-://++s/:.`  `y.      `h`s`  /-\n"               
"                                  +s      :hs       :y      y       +y`     -s /+  /-\n"               
"                                   y:     :od`      o+      s:     -+-y:    :+  //.o`\n"               
"                                   .h-    o+y/     .h`      -y     o. `o+   ::   /:`\n"                
"                                    -y`   y:/s     o/        o:    y.   o+  :/`\n"                     
"                                     //   y-`d    .s         .y` ` ++   :d` ``o\n"                     
"                                     -o   :s h.   o:         `ys./`+o   :d/`  s.\n"                    
"                                      s.  :o y.   o+         //.-.++`    +y.  y.\n"                    
"                                      +/  y- o-   +:         y.  oo       s/ .h\n"                     
"                                     :o .h  `y` `h          d` +s        +o o+\n"                     
"                                      -y :y   y` /o         `d` d.        /s h-\n"                     
"                                      -h -h   o: o+         /s `m         /+ d.\n\n";                                                              
}