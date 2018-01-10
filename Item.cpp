/************************************************************************
** Author: John Yoon
** Description: Item[Implement] - The class that represents the items
that Mr. Incredible can collect during his adventure.
************************************************************************/

#include "Item.hpp"
using std::cout;
using std::cin;
using std::endl;

Item::Item()
{
	item = "test";
}


Item::Item(string item1)
{
	item = item1;
}

/*********************************************************************
** Function: getItem
** Description: Prints the item.
** Parameters: None.
*********************************************************************/
void Item::getItem()
{
	cout << item << endl;
}
