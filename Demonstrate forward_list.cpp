#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;

int main()
{
    forward_list<int>fl={2,4,7,9,10};

    forward_list<int>it={9,6,7,4,2};

    fl.sort();
    it.sort();
    fl.merge(it);

    cout<<"Elements after merging "<<endl;

    for(auto it=fl.begin();it!=fl.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;


}
