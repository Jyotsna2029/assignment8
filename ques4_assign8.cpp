#include<iostream>
using namespace std;
void count_digit(int n)
{
    int count = 0;
    while(n>0)
    {

        int last_digit = n%10;
        count += 1;
        n /= 10;
    }
    cout<<"the number of digits in a number are "<<count<<endl;

    int sq = count*count;
        cout<<"The square of "<<count<<" is "<<sq;

}
int main()
{
    count_digit(12004);
}