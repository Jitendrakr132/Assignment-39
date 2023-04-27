#include<bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int>fl={10,20,30,40};
    forward_list<int>f2={4,9,11,12};

    forward_list<int>::const_iterator it=f2.begin();
    it++;

    f2.splice_after(it,fl,fl.before_begin(),fl.end());

    cout<<" element after are "<<endl;

    for(auto i=f2.begin();i!=f2.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    return 0;
}

