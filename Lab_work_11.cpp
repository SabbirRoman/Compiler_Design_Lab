/**
 *    author:  Roman_Emper0r
 *    created: 19.09.2022
**/
#include<bits/stdc++.h>

using namespace std;
#define ll long long



int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);
 #endif


   int t;
   cin>>t;
   int test=t;
   while(t--) 
   {
    
   map<string,string>production_rules;
   int number_of_pr;
   cin>>number_of_pr;

   for(int i=0; i<n; i++)
   {
    string s;
    cin>>s;
    string s1,s2;
    s2=s[0];
    for(int j=3; j<s.size(); j++)
        s1+=s[j];

    production_rules[s1]=s2;

   }
   strig input;
   cin>>input;

   

   }
   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

   
    

}


