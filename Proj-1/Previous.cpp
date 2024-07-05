//
//  Previous.cpp
//  Proj-1
//
//  Created by Admin on 2024-06-30.
//

#include <stdio.h>
#include "Previous.h"
#include "Arena.h"
#include "Player.h"
//#include "Game.h"

using namespace std;

Previous::Previous(int nRows, int nCols){
    m_rows = nRows;
    m_cols = nCols;
    
    
    int r, c;

        // Initial the grid
    for (r = 0; r < m_rows; r++)
    {
        for (c = 0; c < m_cols; c++){
            p_Grid[r][c] = '0';
        }
    }

}

/*
//int Previous::rows() const
//{
//    return m_rows;
//}

//int Previous::cols() const
//{
//    return m_cols;
//}
*/
 
bool Previous::dropACrumb(int r, int c){
    // r>=1 means row 0 not need to add again, r<p_Rows means r=p_Rows also not needed, the 4 cornors only need to be add once
    
    if ((r >= 1 )  &&  (c >= 1 ))
    //if ((r >= 1 && r < 5 )  &&  (c >= 1 && c < 5))

    {
            char& HisGrid = p_Grid[r-1][c-1];
            switch (HisGrid)
            //switch (p_Grid[r-1][c-1])
            {
                    
                case '0':
                    HisGrid = 'A';
                    //cout << "A position is assigned to A!"<<endl;
                    //cout << "The corresponding position now is " << p_Grid[r-1][c-1] << endl;
                    break;
                case 'Z':
                    cout << "The position is already Z!"<<endl;
                    cout << "The corresponding position now is " << p_Grid[r-1][c-1] << endl;
                    break;
                default:
                    cout << "This position has been stepped once more" << endl;
                    HisGrid++;
                    cout << "The corresponding position now is " << p_Grid[r-1][c-1] << endl;
            }
            return true;
    }
    else
        return false;
};

void Previous::showPreviousMoves() const{
    char displayHistory[MAXROWS][MAXCOLS];
    int r, c;
    
    // Fill displayGrid with dots (empty) and letters (times of record)
    for (r = 1; r <= m_rows; r++)

        for (c = 1; c <= m_cols; c++)
        {
            if (p_Grid[r-1][c-1] == '0')
            {
                displayHistory[r-1][c-1] = '.';
            }
            else
            {
                displayHistory[r-1][c-1] = p_Grid[r-1][c-1];
            }
        }

    clearScreen();
    for (r = 1; r <= m_rows; r++)
    {
        for (c = 1; c <= m_cols; c++)
            cout << displayHistory[r-1][c-1];
        cout << endl;
    }
    cout << endl;


};


