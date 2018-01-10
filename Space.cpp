/************************************************************************
** Author: John Yoon
** Description: Space [Implement] - The parent class that is used for 
the derived classes: Home, Jungle, Volcano, City, Desert, and Gold.
************************************************************************/

#include "Space.hpp"

#include <iostream>

using std::cout;
using std::endl;

Space::Space()
{
	tester = false;
	alive = true;
}

/*********************************************************************
** Function: setS1
** Description: Sets S1 to the assigned space pointer
** Parameters: Space pointer.
*********************************************************************/
void Space::setS1(Space *world)
{
	S1 = world;
}


/*********************************************************************
** Function: getS1
** Description: Returns S1
** Parameters: None.
*********************************************************************/
Space* Space::getS1()
{
	return S1;
}


/*********************************************************************
** Function: setS2
** Description: Sets S2 to the assigned space pointer
** Parameters: Space pointer.
*********************************************************************/
void Space::setS2(Space *world)
{
	S2 = world;
}


/*********************************************************************
** Function: getS2
** Description: Returns S2
** Parameters: None.
*********************************************************************/
Space* Space::getS2()
{
	return S2;
}


/*********************************************************************
** Function: setS3
** Description: Sets S3 to the assigned space pointer
** Parameters: Space pointer.
*********************************************************************/
void Space::setS3(Space *world)
{
	S3 = world;
}


/*********************************************************************
** Function: getS3
** Description: Returns S3
** Parameters: None.
*********************************************************************/
Space* Space::getS3()
{
	return S3;
}


/*********************************************************************
** Function: setS4
** Description: Sets S4 to the assigned space pointer
** Parameters: Space pointer.
*********************************************************************/
void Space::setS4(Space *world)
{
	S4 = world;
}


/*********************************************************************
** Function: getS4
** Description: Returns S4
** Parameters: None.
*********************************************************************/
Space* Space::getS4()
{
	return S4;
}


/*********************************************************************
** Function: getBool
** Description: Returns tester value (later used for whether item should
be added).
** Parameters: None.
*********************************************************************/
bool Space::getBool()
{
	return tester;
}

/*********************************************************************
** Function: getAlive
** Description: Returns alive value (later used to determine whether
the game should continue).
** Parameters: None.
*********************************************************************/
bool Space::getAlive()
{
	return alive;
}

