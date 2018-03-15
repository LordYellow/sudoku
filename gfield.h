#ifndef GFIELD_H
#define GFIELD_H

#include <vector>

using namespace std;

/**
  @brief generates a sudoku field

  @param numberofmissings number of fields getting ereased
  @param field the field to generate a sudoku field on

  @returns the sudoku field
*/
vector<vector<int>> generatefield(int numberofmissings, vector<vector<int>> field){
  //tbd
  //field = {{0,0,0,2,1,7,9,8,4},{9,8,1,3,4,6,7,5,2},{2,4,7,9,8,5,1,3,6},{7,1,8,5,6,9,2,4,3},{4,9,6,1,2,3,5,7,8},{3,2,5,4,7,8,6,9,1},{1,3,4,7,5,2,8,6,9},{6,7,9,8,3,1,4,2,5},{8,5,2,6,9,4,3,1,7}};
  field = {{0,0,4,9,0,6,3,0,0},{1,0,0,0,5,0,0,0,9},{0,8,0,2,0,7,0,5,0},{0,0,2,0,3,0,8,0,0},{8,3,0,0,0,0,0,6,2},{0,0,7,0,8,0,1,0,0},{0,9,0,4,0,1,0,2,0},{6,0,0,0,9,0,0,0,8},{0,0,1,8,0,3,7,0,0}};
  // temporary "solution"
  return field;
}

#endif
