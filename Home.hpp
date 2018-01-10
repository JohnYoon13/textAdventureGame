/************************************************************************
** Author: John Yoon
** Description: Home [Interface] - The space where you find out your family
is in danger, and where you battle Frozone.
************************************************************************/

#ifndef HOME_HPP
#define HOME_HPP

#include "Space.hpp"

class Home: public Space
{
	public:
		~Home(){};
		virtual int getType();
		virtual void special();
		virtual void activate();
};
#endif