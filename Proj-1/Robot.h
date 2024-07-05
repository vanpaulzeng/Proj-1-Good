//
//  Robot.h
//  Proj-1
//
//  Created by Admin on 2024-06-25.
//

#ifndef Robot_h
#define Robot_h

class Arena;

class Robot
{
  public:
        // Constructor
    Robot(Arena* ap, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;

        // Mutators
    void move();
    bool takeDamageAndLive();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
};


#endif /* Robot_h */
