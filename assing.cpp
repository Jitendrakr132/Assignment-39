#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int>fl;
    forward_list<int>f2;

    fl.assign(5,3);
    f2.assign(fl.begin(),fl.end());


    cout<<"List  1"<<endl;

    for(auto i=fl.begin();i!=fl.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    cout<<"List  2"<<endl;

    for(auto i=fl.begin();i!=fl.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    return 0;
}


