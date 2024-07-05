//
//  global.h
//  Proj-1
//
//  Created by Admin on 2024-06-25.
//
/* Project Memo
1, dropACrown should be called in Player.cpp, thePrevious should be called in Game.cpp
2, Arena thePrevious pointer reference will aloow other cpp to access Previous instance.
3, For teacher's test code, if no complier error and runtime return is 0, that should be fine
4, if you need class cross reference, like A.h use # include "B.h", then B.h need to use "class A;" to let class B know there has A class defined, this is called circle dependency
5, before you need to use a pointer, you need to initial it somewhere, there has 2 way to initial it: Previous& thePrevious (get the contant) or Previous* thePrevious (get the address)
6, use g++ in terminal to compiler a set of code as g++ -o targetName *.cpp
7, if you are define pointers in Private, like Previous * m_previous then you can use class Prevuous, if you define as an object like Previous m_Previous
 
 


 
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


#ifndef global_h
#define global_h

///////////////////////////////////////////////////////////////////////////
// Manifest constants
///////////////////////////////////////////////////////////////////////////

const int MAXROWS = 20;             // 20 max number of rows in the arena
const int MAXCOLS = 40;             // 40 max number of columns in the arena
const int MAXROBOTS = 130;          // 130 max number of robots allowed
const int MAXSHOTLEN = 5;           // 5 max number of steps you can shoot
const int INITIAL_ROBOT_HEALTH = 2;

const int UP    = 0;
const int DOWN  = 1;
const int LEFT  = 2;
const int RIGHT = 3;

///////////////////////////////////////////////////////////////////////////
//  Auxiliary function declarations
///////////////////////////////////////////////////////////////////////////

int decodeDirection(char dir);
void clearScreen();


#endif /* global_h */
