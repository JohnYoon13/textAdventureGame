/************************************************************************
** Author: John Yoon
** Description: Jungle [Interface] - The space where you save Dash from
the evil Henchman.
************************************************************************/

#ifndef JUNGLE_HPP
#define JUNGLE_HPP

#include "Space.hpp"

class Jungle: public Space
{
	public:
		~Jungle(){};
		virtual int getType();
		virtual void special();
		virtual void activate();
};
#endif