/* Infix To Postfix */

    /**
     *    author:  Roman_Emper0r
     *    created: 12.11.2022
    **/
    #include<bits/stdc++.h>

    using namespace std;
    #define ll long long

    int prec(char ch)
    {
    	if(ch=='^') return 3;
    	else if(ch=='*' || ch=='/') return 2;
    	else if(ch=='+' || ch=='-') return 1;
    	else return -1;

    }

    void solve(){
         string s,ans;
         cin>>s;

         stack<char> stack1;

        for(int i=0; i<s.size(); i++)
        {
        	
        	if(s[i]=='(') stack1.push(s[i]);
        	else if(s[i]==')')
        	{
        		while(stack1.size())
        		{
        			char ch= stack1.top();
        			stack1.pop();
        			if(ch=='(') break;
        			else ans+=ch;
        		}
        	}
        	else if(prec(s[i])==-1) ans+=s[i];
        	else
        	{
        		if(stack1.size()==0) stack1.push(s[i]);
        		else
        		{
        			while(stack1.size())
        			{
        				char ch=stack1.top();
        				stack1.pop();
        				if(prec(s[i])==prec(ch) && ch=='^')
        				{
        					stack1.push(ch);
        					break;
        				}
        				else if(prec(s[i])>prec(ch))
        				{
        					stack1.push(ch);
        					break;
        				}
        				else
        				{
        					ans+=ch;
        					
        				}
        			}
        			stack1.push(s[i]);
        		}
        	}

        	if(i+1== s.size())
        	{
        		while(stack1.size())
        		{
        			char ch=stack1.top();
        			stack1.pop();
        			ans+=ch;
        		}
        	}
        }
        cout<<stack1.size()<<endl;
        cout<<ans<<endl;
     

    }
    int main() {
         #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w",stdout);
     #endif
           int  t=1;
          // cin >> t ;
           while(t--){
               solve() ;
           }
           return 0 ;

    }


