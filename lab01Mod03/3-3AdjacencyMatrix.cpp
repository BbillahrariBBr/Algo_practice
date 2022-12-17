/*
Graph Representation
********************
Topic: Adjacency Matrix -2D array

0----1
    /  \
    2---3

# total nodes = 4
# total edges = 4

# undirected + unwrighted
matrix ->  #of nodes x #of nodes
    ->4x4
matrix[i][j] = 1
    if and only if (i-> j)

 0 -> 1
 1 -> 0
 1 -> 2
 1 -> 3
 2 -> 1
 2 -> 3
 3 -> 1
 3 -> 2



*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
int nodes = 4; //O(1)
int matrix[nodes][nodes]; //O(n^2)
  //assign 0 O(n^2)
  for(int i = 0; i<nodes; i++)
  {
      for(int j = 0; j<nodes; j++)
      {
          matrix[i][j] = 0;
      }
  }

    matrix[0][1]=1; //O(1)

    matrix[1][0]=1;
    matrix[1][2]=1;
    matrix[1][3]=1;

    matrix[2][1]=1;
    matrix[2][3]=1;

    matrix[3][1]=1;
    matrix[3][2]=1;
  // matrix print O(n^2)
  for(int i = 0; i<nodes; i++)
  {
      for(int j = 0; j<nodes; j++)
      {
          cout << matrix[i][j]<< " " ;
      }
      cout<<endl;
  }


  return 0;
}

