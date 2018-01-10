/************************************************************************
** Author: John Yoon
** Description: Jungle [Implement] - The space where you save Dash from
the evil Henchman.
************************************************************************/

#include "Jungle.hpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/*********************************************************************
** Function: getType
** Description: Returns the integer value unique to this space class.
** Parameters: None.
*********************************************************************/
int Jungle::getType()
{
	return 1;
}

/*********************************************************************
** Function: activate
** Description: The gameplay for the Jungle level.
** Parameters: None.
*********************************************************************/
void Jungle::activate()
{
	int input;

	cout << "\n\nYou are flying over the Jungle, and when you arrive over the destination you jump out of the plane." << endl;
	cout << "As you fall down, your parachute opens and you land safely in a swamp." << endl;
	cout << "A frog nearby gives you a baleful gaze before hopping off into the water.\n" << endl;
	cout << "You begin to look for signs of your family, and you eventually come to a fork in the jungle." << endl;
	cout << "There are footprints that go off to the LEFT, and wheel marks that go off to the RIGHT." << endl;
	cout << "Which way do you go?" << endl;

	cout << "\nENTER 1 to go LEFT" << endl;
	cout << "ENTER 2 to go RIGHT" << endl;

	cin >>input;
	cout << "\n\n";
	

	switch(input)
	{
		case 1: 
		{
			cout << "You follow the footprints on the left side, and eventually come across your son, DASH, and a HENCHMAN." << endl;
			cout << "Fortunately, the HENCHMAN is asleep. Unfortunately, your son is gagged and tied to a tree." << endl;
			cout << "What do you do?" << endl;

			cout << "\nENTER 1 to UNTIE your son." << endl;
			cout << "ENTER 2 to ATTACK the HENCHMAN" << endl;
			cin >>input;
			cout << "\n\n";

			switch(input)
			{
				case 1:
				{
					cout << "You immediately begin untying your son, who begins to protest in an alarmed manner."<< endl;
					cout << "You feel a sudden sharp pain in your arm." << endl;
					cout << "The HENCHMAN had woken up, snuck up behind you, and injected you with poison. You die." << endl;
					cout << "GAME OVER" << endl;
					alive = false;
					break;
				}	

				case 2:
				{
					cout << "You LIFT UP the HENCHMAN and SLAM him so hard into the ground, that only his head is above the dirt." << endl;
					cout << "A card pops out of the HENCHMAN's pocket." << endl;
					cout << "You release DASH, who quickly says that he saw your daughter, VIOLET, being taken to a nearby Volcano." << endl;
					cout << "You grab the card, then hop onto DASH's back, who speedily carries you both towards the Volcano." << endl;
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
			cout << "You follow the wheel tracks on the right side, and eventually come across a giant truck." << endl;
			cout << "You can hear your son, DASH, furiously banging from the inside of the truck." << endl;
			cout << "Nearby, a HENCHMAN is speaking on the phone with a mysterious stranger." << endl;
			cout << "What do you do?" << endl;

			cout << "\nENTER 1 to SAVE your son." << endl;
			cout << "ENTER 2 to ATTACK the HENCHMAN" << endl;
			cin >>input;
			cout << "\n\n";

			switch(input)
			{
				case 1:
				{
					cout << "You run full-speed straight to the truck and RIP the top off." << endl;
					cout << "The HENCMAN quickly grabs his gun, but DASH has already escaped and knocked him out." << endl;
					cout << "A card pops out of the HENCHMAN's pocket." << endl;
					cout << "You grab the card, then hop onto DASH's back, who speedily carries you both towards the Volcano." << endl;
					tester = true;
					break;
				}

				case 2:
				{
					cout << "You sneak up behind the HECHMAN, and then CHOKEHOLD him until he passes out." << endl;
					cout << "Then you run over to the truck to release DASH." << endl;
					cout << "DASH says that he saw your daughter, VIOLET, being taken to a nearby Volcano." << endl;
					cout << "You hop onto DASH's back, who speedily carries you both towards the Volcano." << endl;
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
** Description: Displays the ASCII art of a frog to represent Home.
** Parameters: None.
*********************************************************************/
void Jungle::special()
{
cout <<   
"\n" 	
"	    ``                           `..-:::-`\n"                                               
"   `/////+//+o/:                  `/+hy/-.-so/++.\n"                                           
"  /+..:yNN/ `:s/o:               /o/o.  `oymMmo.+/\n"                                          
" /+ /d:sMMN`  `y.:+/-:://///////+--s    hm/yMMMd`+:                    `-:://///////:.\n"      
" h  mMMMMMN`   // :+-````     ``  +:   `NMMMMMMM.`y                .:///-````      ``/o.\n"    
" s- hMMMMm/    s-                 :o    /NMMMMMy :h-.          `:/+:``                `y`\n"   
"  s:.hhs/`   `+/                   +/    .odMd+`:s+s////:.  `://-`                     o:\n"   
"  `:+/:.`..:/+.                     -+/.`  `.-:+:` `o/ ``-++s-`              -/-       s.\n"   
"     s/-::-.`                         .-/////:.` `.  .     `/+.          `:/+os.      .y\n"    
"     h                                          `/d:         `+.       -+/.`+o`      `y.\n"    
"     /s-`                                  `.-://+o`                 :+:` .:+/      `s-\n"     
"     -s/y//:---...``````````````...--://////:..`/o`      /-        `o/``:/-.       `s-\n"      
"     `y o/``.-/os+:::://////:::::--...-/++/-``:+:        `:+/-`   .s. -+-         -o.\n"       
"      ++`:+:+/-`                         .:+s/.`            `-o- -s` :/`        .+/`\n"        
"       :+.`-o/:-.``            ``..---://:-.                  `y-s` //        -//.\n"          
"        `/+-``.--://////////////::---.`              `-`       +h` :/      .:+:`\n"            
"          `-//-.`                                    `+y/:     :o `s     -+:.\n"               
"             `.-o/                                     o:o-    // /:   .o:`\n"                 
"                 :+-                                   `y-+    o- s`  :o`\n"                   
"                  `:o/.                                 o-s`   h//s//oo     `-::-`\n"          
"                    oo+o+-.`                            +:-+  -d  ` `h.``..-o-..:s:\n"         
"                   `y-::/+y//:-..``                 ``.-h+.:o+/h    `:/oysoo::/+::/+:\n"       
"         `       `.o-    +:  `-:::/+o+//::::::://////::+s`---` +/     .```....`     o:\n"      
"     `-/////--:///:`     o/.:o++os+/:.  ``.--:o/`    ./+`       o:`  `::/os+///`   `s-\n"     
"     o:    `-..```       /syo::::. ``-://///+o/:-.-/+/.          os+/.`   ./+-/+////.\n"       
"     h      `-//:.       `d-     `/+:-`   .o:.``.:-`  ``          ++.:+:`   `.-/+`\n"          
"     /+..:/+/-`  `-///+`  .s`   `+/       y.       :///+:   `//:`  -o. :o-      -s\n"          
"      `h/`     .+/-`  .s.  .o+//+:        o-      ++   -o  `y. -+/` `++//s`    `/+\n"          
"      -o      -y`     `y.    `o/           /+:--/+:   `s-  :o    /o    `:ho+///+:\n"           
"      `s-`   .s-      .s      -s             `..`   `+//   /+    h`      -s  `\n"              
"        ://///`        ++.```:o`                    y.     `y.   +/     `o:\n\n";                          
}