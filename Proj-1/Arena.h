//
//  Arena.h
//  Proj-1
//
//  Created by Admin on 2024-06-25.
//

#ifndef Arena_h
#define Arena_h


#include "globals.h"
#include "Previous.h" //This must keep bcz there has Previous m_previous not Previous* m_previous (which can use a class reference)
//#include "Robot.h"
//using namespace std;  it is bad to using in .h file


///////////////////////////////////////////////////////////////////////////
// Type definitions
///////////////////////////////////////////////////////////////////////////

class Player;
class Robot;
//class Previous;

class Arena
{
public:
    // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();

    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     robotCount() const;
    int     nRobotsAt(int r, int c) const;
    void    display(std::string msg) const;

    // Mutators
    bool   addRobot(int r, int c);
    bool   addPlayer(int r, int c);
    void   damageRobotAt(int r, int c);
    bool   moveRobots();
    
    Previous& thePrevious(); //This is a Previous address reference, get thePrevious's address

  private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Robot*  m_robots[MAXROBOTS];
    //aaa
    Previous m_previous; //add this one to match thePrevious return(m_previous)
    int     m_nRobots;
};


#endif /* Arena_h */
