/************************************************************************
** Author: John Yoon
** Description: Gold [Implement] - The last space of the game, if you've
collected the necessary card & key items along the way.
************************************************************************/

#include "Gold.hpp"

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/*********************************************************************
** Function: getType
** Description: Returns the integer value unique to this space class.
** Parameters: None.
*********************************************************************/
int Gold::getType()
{
	return 5;
}

/*********************************************************************
** Function: activate
** Description: The gameplay for the Desert level.
** Parameters: None.
*********************************************************************/
void Gold::activate()
{
	cout << "\nYou take two pieces of gold; just enough to cover the damages" << endl;
	cout << "that SYNDROME caused upon your house, and you give the rest to" << endl;
	cout << "charity. Because you're a superhero after all." << endl;

	cout << "\nTHE END. YOU WIN!!!\n\n" << endl;
	alive = false;
}


/*********************************************************************
** Function: special
** Description: Displays the ASCII art of a Camel to represent Desert.
** Parameters: None.
*********************************************************************/
void Gold::special()
{
	cout << "\nLuckily you collected the necessary items during your adventure!" << endl;
	cout << "Using the CARD from the HENCHMAN, and the KEY from BOMB VOYAGE, you are able to explore" << endl;
	cout << "deep inside the facilities. You find vaults full of gold, jewels, high tech gadgets, and more!" << endl;                                                         
}