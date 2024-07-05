//
//  Previous.h
//  Proj-1
//
//  Created by Admin on 2024-06-29.
//

#ifndef Previous_h
#define Previous_h

#include "globals.h"

class Player;
class Arena;

class Previous
     { public:
         // Constructor/destructor
         Previous(int nRows, int nCols);
         //~Previous();

         // Accessors
         //int     rows() const;
         //int     cols() const;
         bool dropACrumb(int r, int c);
         void showPreviousMoves() const;




     private:
         char p_Grid[MAXROWS][MAXCOLS];
         int m_rows;
         int m_cols;
         //add cross reference point in private define for each other
         //Player* p_Player;
         //Arena* p_Arena;
         //after up define, we can start to refer Player's values
};


#endif /* Previous_h */
