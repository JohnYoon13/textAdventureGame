/************************************************************************
** Author: John Yoon
** Description: Item [Interface] - The class that represents the items
that Mr. Incredible can collect during his adventure.
************************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include <iostream>
using std::string;

class Item
{
	protected:
		string item;

	public:
		Item();
		Item(string item1);
		void getItem();
};
#endif