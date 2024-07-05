//
//  Game.h
//  Proj-1
//
//  Created by Admin on 2024-06-25.
//

#ifndef Game_h
#define Game_h

#include <stdio.h>
//#include "Arena.h"  since we are define a pointer as Arena* m_arena, so we can use class Arena instead #include it


class Arena; //This is for Arena* pointer

class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nRobots);
    ~Game();

    // Mutators
    void play();

  private:
    Arena* m_arena;
    // aaa This is really import to add, bcz the Game will abot to handle the Previous instance by using the pointer, since we have object instance at Arena initialization, so this point does not need any more


};

#endif /* Game_h */
