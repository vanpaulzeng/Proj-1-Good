//
//  Player.h
//  Proj-1
//
//  Created by Admin on 2024-06-25.
//

#ifndef Player_h
#define Player_h

//#include <iostream>
//#include <string>
#include "globals.h"
//commmented by test case Arena a(10, 10)

class Arena;

//using namespace std;

//aaa add reference classes
//class Arena;
//class Previous;

class Player
{
  public:
        // Constructor
    Player(Arena *ap, int r, int c);

        // Accessors
    //This will return current Player row and col
    int  row() const;
    int  col() const;
    
    int  age() const;
    bool isDead() const;

        // Mutators
    std::string takeComputerChosenTurn();
    void   stand();
    void   move(int dir);
    bool   shoot(int dir);
    void   setDead();

  private:
    Arena* m_arena;

    
    int    m_row;
    int    m_col;
    int    m_age;
    bool   m_dead;

    int    computeDanger(int r, int c) const;
};


#endif /* Player_h */
