#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;

int main()
{
    int sum=0;
    forward_list<int>fl;

    fl.assign({1,2,3,4,5,6,7,8,9,10});
    while(!fl.empty())
    {
        sum=sum+fl.front();
        fl.pop_front();
    }
      cout<<"Sum of element "<<sum<<endl;
      return 0;

}

