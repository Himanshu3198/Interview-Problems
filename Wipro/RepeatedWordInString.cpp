//  write a program to prints number of words repeating greater than equal to k in a lexicographically order

//  time complexity O(n)
// space complexity O(1)
#include<bits/stdc++.h>
using namespace std;

int main(){


    string s="cat dog cat apple dog canndy cat dog mouse mouse Bag Bag Bag APPLE APPLE APPLE";
   
    int k=3;


    stringstream str(s);


    string word;

    map<string,int>mp;

    while(str>>word){

         mp[word]++;
    }   
      
      map<string,int>::iterator itr;

       vector<string>res;
      for(itr=mp.begin();itr!=mp.end();itr++){

          
           if(itr->second>=k){
               res.push_back(itr->first);
           }

      }

     sort(res.begin(),res.end());
      for(int i=0;i<res.size();i++){
          cout<<res[i]<<" ";
      }



    cout<<"\n";


}
