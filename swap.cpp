#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int>fl={3,5,6,7,8,9,10};
    forward_list<int>f2={4,1,3,5,7};

    fl.swap(f2);

    cout<<"firstList element after swap "<<endl;

    for(auto i=fl.begin();i!=fl.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    cout<<"secondList element after swap "<<endl;

    for(auto i=f2.begin();i!=f2.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    return 0;
}

