#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;

int main()
{
    forward_list<int>fl;

    fl.assign({2,6,8,35,6});
    fl.assign(3,5);

    forward_list<int>::iterator l;

    for(l=fl.begin();l!=fl.end();l++)
        cout<<*l<<" ";
    cout<<endl;
    return 0;

}
