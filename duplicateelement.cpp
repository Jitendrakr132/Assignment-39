#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int>f={2,3,3,5,6,6,7,2,2,9,1,1,};

    f.unique();

    cout<<"list elements after unique operation "<<endl;
     for(auto i=f.begin();i!=f.end();i++)
        cout<<*i<<" ";
     cout<<endl;
     return 0;
}
