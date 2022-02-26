

//  Make palindrome string by swapping adjacent character if it is possible return string else return -1

//    input:    kyaak 
//    output:   kayak

#include<bits/stdc++.h>
using namespace std;


string solve(string &s){
    int n=s.size();
    int start=0;
    int end=s.size()-1;


    while(start<end){


        if(s[start]==s[end]){
            start++;
            end--;
        }else{

           swap(s[start],s[start+1]);
            if(s[start]==s[end]){
                start++;
                end--;
            }else{

                swap(s[start],s[start+1]);
                swap(s[end],s[end-1]);

                if(s[start]==s[end]){
                    start++;
                    end--;
                }else{
                    return "-1";
                }
            }
        }
    }
    return s;
}

int main(){

    string s="rcaecar";
     cout<<solve(s)<<"\n";
}
