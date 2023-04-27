#include<bits/stdc++.h>
using namespace std;

int main()
{
    forward_list<int>f={3,5,6,8,9,10};



    f.reverse();
    cout<<"List elements after performing reverse operation"<<endl;
    for(auto tf=f.begin();tf!=f.end();++tf)

        cout<<*tf<<" ";
        cout<<endl;
        return 0;
}

