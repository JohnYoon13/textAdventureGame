/************************************************************************
** Author: John Yoon
** Description: Gold [Interface] - The last space of the game, if you've
collected the necessary card & key items along the way.
************************************************************************/

#ifndef GOLD_HPP
#define GOLD_HPP

#include "Space.hpp"

class Gold : public Space
{
	public:
		~Gold(){};
		virtual int getType();
		virtual void special();
		virtual void activate();
};
#endif