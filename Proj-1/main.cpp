//
//  main.cpp
//  Proj-1
//
//  Created by Admin on 2024-06-25.
//

/*

 
 #include <iostream>
 
 #include "Game.h"
 //#include "Arena.h"
 //#include "Previous.h"
 //#include "Player.h"
 //#include "Robot.h"
 
 using namespace std;
 
 
 
 ///////////////////////////////////////////////////////////////////////////
 //  main()
 ///////////////////////////////////////////////////////////////////////////
 
 int main()
 {
 // Initialize the random number generator.  (You don't need to
 // understand how this works.)
 srand(static_cast<unsigned int>(time(0)));
 
 // Create a game
 // Use this instead to create a mini-game:   Game g(3, 3, 2);
 // Original create 15X18 and 80 Robot Game g(15, 18, 80);
 Game g(5, 5, 2);
 // Play the game
 g.play();
 
 cout << "You win ! \n";
 return 0;
 }
 
*/


/*
 // Passed, no error at build, good fit spec, return 0
#include "Game.h"
     #include "Game.h"
     #include "Arena.h"
     #include "Arena.h"
     #include "Previous.h"
     #include "Previous.h"
     #include "Player.h"
     #include "Player.h"
     #include "Robot.h"
     #include "Robot.h"
     #include "globals.h"
     #include "globals.h"
     int main()
{}
*/

/*
 // Passed, no error at build, but #include still not quite good fit spec, return 1
#include "Previous.h"
    int main()
    {
        Previous prev(2, 2);
        prev.dropACrumb(1, 1);
        prev.showPreviousMoves();
}

*/

/*
 // Passed, no error at build, but #include still not quite good fit spec, return 1
 
  #include "Robot.h"
      int main()
      {
          Robot r(0, 1, 1);
 }
 */



/*
 // Passed, no error at build, but #include still not quite good fit spec, return 1


#include "Player.h"
     int main()
     {
         Player p(0, 1, 1);
}
  
*/


/*
// Passed, no error at build, but #include still not quite good fit spec

#include "Arena.h"
   int main()
   {
       Arena a(10, 18);
       a.addPlayer(2, 2);
   }

*/
 
/*
// Passed, no error at build
#include "globals.h"
     #include "Player.h"
     #include "Arena.h"
     int main()
     {
         Arena a(10, 20);
         Player p(&a, 2, 3);
         
     }
 */

/*
// Passed, no error at build
#include "Arena.h"
  #include "Player.h"
  int main()
  {
      Arena a(10, 20);
      Player p(&a, 2, 3);
  }
*/

/*
//Passed, no error at build
#include "Player.h"
     #include "Arena.h"
     int main()
     {
         Arena a(10, 20);
         Player p(&a, 2, 3);
     }
*/


/*
// This test will force you put dropACrumb into Player, and you need to add counts even it move toward outside the arena at cornor or edges
#include "Arena.h"
      #include "Player.h"
      #include "Previous.h"
      #include "globals.h"
      int main()
      {
          Arena a(2, 2);
          a.addPlayer(1, 1);
          a.player()->move(RIGHT);
          a.player()->stand();
          a.player()->move(DOWN);
          a.thePrevious().showPreviousMoves();
}
 
*/

/*
//Passed, shoot error as "Variable has incomplete type 'Robot'"
#include "Player.h"
     #include "Arena.h"
     int main()
     {
         Arena a(10, 20);
         Player p(&a, 2, 3);
         Robot r(&a, 1, 1);
}
*/

/*
//Should build error but not
#include "globals.h"
        #include "Robot.h"
        #include "Player.h"
        int main()
        {
            
            Arena a(10, 10);
}

*/


/*
#include "Previous.h"
    int main()
    {
        Previous prev;
}
*/
