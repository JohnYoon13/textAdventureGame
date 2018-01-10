/************************************************************************
** Author: John Yoon
** Description: Space [Interface] - The parent class that is used for 
the derived classes: Home, Jungle, Volcano, City, Desert, and Gold.
************************************************************************/

#ifndef SPACE_HPP
#define SPACE_HPP

#include "Item.hpp"
#include <unistd.h>
class Space
{
	protected:
		Space *S1;
		Space *S2;
		Space *S3;
		Space *S4;
		bool tester;
		bool alive;
		

	public:
		Space();
		void setS1(Space *world);
		Space* getS1();
		void setS2(Space *world);
		Space* getS2();
		void setS3(Space *world);
		Space* getS3();
		void setS4(Space *world);
		Space* getS4();
		bool getBool();
		bool getAlive();
		virtual ~Space(){};

		virtual int getType() = 0;
		virtual void special() = 0;
		virtual void activate() = 0;

};
#endif
