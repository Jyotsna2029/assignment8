#include<iostream>
using namespace std;
void odd_num(int a, int b)
{
    for(int i = a; i<b; i++)
    {
        if(i%2 != 0)
        {
            cout<<i<<endl;
        }
    }

}
int main()
{
    odd_num(2,49);
    
}