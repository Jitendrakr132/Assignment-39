#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int>fl={3,5,6,7,8,9,10};
    forward_list<int>f2={4,1,3,5,7};

    fl.merge(f2);

    cout<<"List element after merge "<<endl;

    for(auto i=fl.begin();i!=fl.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    return 0;
}
