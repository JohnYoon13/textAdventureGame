/************************************************************************
** Author: John Yoon
** Description: Volcano [Interface] - The space where you save Violet
from Bomb Voyage.
************************************************************************/

#ifndef VOLCANO_HPP
#define Volcano_HPP

#include "Space.hpp"

class Volcano: public Space
{
	public:
		~Volcano(){};
		virtual int getType();
		virtual void special();
		virtual void activate();
};
#endif