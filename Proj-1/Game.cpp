///////////////////////////////////////////////////////////////////////////
//  Game implementations
///////////////////////////////////////////////////////////////////////////

#include "Game.h"
#include "Player.h"
#include "Previous.h"
#include "Arena.h"

using namespace std;

class Player;
class Previous;

Game::Game(int rows, int cols, int nRobots)
{
    if (nRobots > MAXROBOTS)
    {
        cout << "***** Trying to create Game with " << nRobots
             << " robots; only " << MAXROBOTS << " are allowed!" << endl;
        exit(1);
    }

        // Create arena
    m_arena = new Arena(rows, cols);
    //aaa New Arena will also initial an instance for Previous due to the initial list in Arena.cpp
    
    
        // Add player
    int rPlayer = 1 + rand() % rows;
    int cPlayer = 1 + rand() % cols;
    m_arena->addPlayer(rPlayer, cPlayer);
    
    //aaa  record initial player visit, do not needed by the spec
    
      // Populate with robots
    while (nRobots > 0)
    {
        int r = 1 + rand() % rows;
        int c = 1 + rand() % cols;
          // Don't put a robot where the player is
        if (r == rPlayer  &&  c == cPlayer)
            continue;
        m_arena->addRobot(r, c);
        nRobots--;
    }
}

Game::~Game()
{
    delete m_arena;
}

void Game::play()
{
    Player* p = m_arena->player();
    
  
    
    if (p == nullptr)
    {
        m_arena->display("");
        return;
    }
    string msg = "";
    do
    {
        m_arena->display(msg);
        msg = "";
        cout << endl;
        cout << "Move (u/d/l/r/su/sd/sl/sr/c/q/p): ";
        string action;
        getline(cin,action);
        if (action.size() == 0){
            p->stand();
            //m_arena->thePrevious().dropACrumb(p->row(), p->col());
        }
        else
        {
            switch (action[0])
            {
              default:   // if bad move, nobody moves
                cout << '\a' << endl;  // beep
                continue;
              case 'q':
                return;
              case 'c':  // computer moves player
                    // aaa Record computer move visit, since computer only move Robots not Player, so no action needed
                
               // m_arena->thePrevious().dropACrumb(p->row(), p->col());

                msg = p->takeComputerChosenTurn();
                    
    
                break;
              case 'u':
              case 'd':
              case 'l':
              case 'r':
                p->move(decodeDirection(action[0]));
                    // Record Previous visit, p point to the Player, so p->row(), col() return its current position
                    //m_arena->thePrevious().dropACrumb(p->row(), p->col());

               break;
              case 's': //start by s-shoot
                if (action.size() < 2)  // if no direction, nobody moves
                {
                    cout << '\a' << endl;  // beep
                    continue;
                }
                switch (action[1])
                {
                  default:   // if bad direction, nobody moves
                    cout << '\a' << endl;  // beep
                    continue;
                  case 'u':
                  case 'd':
                  case 'l':
                  case 'r':
                    //m_arena->thePrevious().dropACrumb(p->row(), p->col());

                    if (p->shoot(decodeDirection(action[1])))
                        msg = "Hit!";
                    else
                        msg = "Missed!";
                    break;
                }
                case 'p': //add p-Previous action
                    //m_arena->thePrevious();
                    m_arena->thePrevious().showPreviousMoves();

                    
                    cout << "Press Enter to continue \n";
                    cin.ignore();
                    
                    break;
                    
                break;
            }
        }
        m_arena->moveRobots();
    } while ( ! m_arena->player()->isDead()  &&  m_arena->robotCount() > 0);
    m_arena->display(msg);
}
