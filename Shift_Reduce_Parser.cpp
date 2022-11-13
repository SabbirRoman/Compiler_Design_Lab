    /**
     *    author:  Roman_Emper0r
     *    created: 07.11.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long




    void solve(){
         
      
    /* Taking a map to store producction rules, 
    where right_hand_side is  key 
    and left_hand_side is value*/

     map<string, string> map1;

      int pro_rule;

      cin>>pro_rule; //How many production rules

      for(int i=0; i<pro_rule; i++)
      {
        // Enter the production rules 
        string s,s1;
        cin>>s;
        char ch1=s[0];
        for(int j=2; j<s.size(); j++)s1+=s[j];

        map1[s1]=ch1;
      }

      //print the production rules
      //for(auto x: map1)cout<<x.second<<" = "<<x.first<<endl;
     
      

      //Enter a input string
      string input,stack;
      cin>>input;

      cout<<"Stack    Input        Action\n\n\n";

      cout<<"         "<<input;

    while(input.size())
      {  
        cout<<"        Shift\n";

        
        stack+=input[0];
        input.erase(0,1);

        

        cout<<stack<<"       "<<input;
        int sz=stack.size();

        for(int i=sz-1; i>=0; i--)
        {
            string temp;
            for(int j=i; j<sz; j++)
            {
                temp+=stack[j];
            }

            map<string, string>::iterator it;

             it= map1.find(temp);//key mathcing

             if(it!=map1.end())
             {
                stack.erase(i,sz-i);
                cout<<"         Reduce to "<<map1[temp]<<" = "<<temp<<endl;
                stack+=map1[temp];
                cout<<stack<<"       "<<input;
             }


        }

     
      }

      cout<<endl;

      if(stack.size()==1 && stack[0]=='E')cout<<"\nACCEPTED"<<endl;
      else cout<<"REJECTED\n";

    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
           //cin >> t ;
           while(t--){
               solve() ;
           }
           return 0 ;

    }


