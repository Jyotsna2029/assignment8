#include<iostream>
using namespace std;
float area(int r)
{
    float pi = 3.1415;
    float area_of_circle= pi*r*r;
    return area_of_circle;
}

int main()
{
   float Area= area(7);
   cout<<Area<<endl;
}