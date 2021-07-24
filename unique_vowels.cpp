#include <bits/stdc++.h>
using namespace std;

int countVowels(string str){
        
       //Your code here
       int count[30]={0},ans=0;
        for(int i=0;i<str.size();i++)
        {
            int num = str[i]-'0'-48;
            if(num==1 || num==5 || num==9 || num==15 || num==21)
            {
                count[num]++;
            }
            //cout<<num<<" ";
                 
        }
        for(int i=0;i<27;i++)
        {
            
            if(count[i]>0)
            {
                ans++;
            }
        }
        return ans;
    }
int main() {
	// your code goes here
	string str;
	getline(cin,str);
	

	cout<<countVowels(str)<<endl;
	return 0;
}
