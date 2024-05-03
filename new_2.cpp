/*input a string and divided the integer and oparend with pushback function */

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length(),cnt=0;
    string a,b,c;
    char op1,op2;
    for(int i=0; i<n; i++) // s[5]=5 cnt =2
    {
        if(s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/' && s[i]!='=')
        {
            if(cnt == 0)
                a.push_back(s[i]); //a=26
            else if (cnt ==1)
                b.push_back(s[i]); //b=4
            else
                c.push_back(s[i]); //c=5

        }
        else
        {
            if(cnt==0)
            {
                op1=s[i];
                cnt++;
            }
            else
            {
                op2=s[i];
                cnt++;
            }

        }
    }

    cout<<a<<endl<<op1<<endl<<b<<endl<<op2<<endl<<c<<endl;
    return 0;
}
