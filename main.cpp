#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void countcell(string s){
string w="";
string p1,p2;
for(auto x:s){
    if(x== ':'){
        cout<<w<<endl;
      p1=w;
        w="";
    }
    else
        w=w+x;
}
  p2=w;
cout<<w<<endl;


char a[p1.length()+1] ;
strcpy(a,p1.c_str());
char b[p2.length()+1] ;
strcpy(b,p2.c_str());
if((a[0] ==b[0])&& (a[1]== b[1])){
    cout<<"invalid";
}
else{
   int m=abs(int(b[1])-int(a[1]) )+1;
   int n=abs(int(b[0])-int(a[0]))+1;
    int t=m*n;
    cout<<"result   "<<t;
}
}

int main()
{
    cout << "Hello world!" << endl;
    string s;
    cout<<"enter a string   ";
    cin>>s;
 countcell(s);
    return 0;
}
