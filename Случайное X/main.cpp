#include <iostream> 
#include <cstdlib> 
using namespace std; 
int main () 
{
     int N;
     int X;
     cin >> N;
     int A[N]; 

     for (int i=0; i<N; i++)
     {
         A[i]=rand()%5;
         cout << A[i] <<" ";
     } 
 
      cout << " " <<endl; 
      cin >> X;
      int count = 0;
      for (int i = 0; i < N; ++i)
          if (A[i] == X) 
          {
               ++count; 
               cout << i << endl;
          } 
}
