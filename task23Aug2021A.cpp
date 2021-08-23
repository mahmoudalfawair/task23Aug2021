#include <iostream>
using namespace std;
int main()
{
for(int i = 1; i <=5; i++)
{
    for(int j = 1;j <= i;j++)
    {
        if(j == 1)
    switch(i)
    {
        case 1 : cout << "    ";
        break;
        case 2 : cout << "   ";
        break;
        case 3 : cout << "  ";
        break;
        case 4 : cout << " ";
        break;
        default : break;
    
    }
    cout << j;
    }
    cout << endl;
}
 return 0;   
}