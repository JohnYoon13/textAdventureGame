/************************************************************************
** Author: John Yoon
** Description: Desert [Interface] - The space where you save Jack-Jack
from Syndrome.
************************************************************************/

#ifndef DESERT_HPP
#define DESERT_HPP

#include "Space.hpp"

class Desert : public Space
{
	public:
		~Desert(){};
		virtual int getType();
		virtual void special();
		virtual void activate();
};
#endif