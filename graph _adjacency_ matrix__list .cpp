#include <bits/stdc++.h>
 using namespace std;
 int main (){
  int vertex ,edge;
  cin>>vertex>>edge;
  int graph [100][100]={0};
  for (int i=0;i<edge;i++)
  {
      int source,destination;
      cin>>source>>destination;
      graph [source][destination]=1;
      graph [destination][source]=1;

  }
  cout << "Adjacency Matrix:" <<endl;
  for (int i=0;i<vertex;i++)
  {
      for (int j=0;j<vertex;j++)
    {

      cout << graph [i][j] <<"  ";
  }
  cout<< endl;
 }
  cout<< "Adjacency list :" <<endl;
  for (int i=0;i<vertex;i++)
  {

      cout<<i<<"->";
     for (int j=0;j<vertex;j++)
{
    if (graph[i][j] == 1)
    {
        cout << j << " ";
    }
}
cout << endl;
  }

 return 0;
 }
 }
