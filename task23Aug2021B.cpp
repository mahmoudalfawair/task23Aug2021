#include <iostream>
using namespace std;
int main()
{
/*
   0
  000
 00000
0000000
*/
for(int i = 5; i >= 1; i--)
{ 
    for(int j = 0;j <i; j++)
   {
      cout << " ";
   }
   for(int m = 1; m<=5; m++)
   {
 int num =5;
 if(num + m >=5)
 cout << m;
 num--;
   }
    cout << endl;
}

return 0;
}