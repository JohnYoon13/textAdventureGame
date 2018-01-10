/************************************************************************
** Author: John Yoon
** Description: City [Interface] - The space where you save Elastagirl
from Omnidroid.
************************************************************************/

#ifndef CITY_HPP
#define CITY_HPP

#include "Space.hpp"

class City : public Space
{
	public:
		~City (){};
		virtual int getType();
		virtual void special();
		virtual void activate();
};
#endif