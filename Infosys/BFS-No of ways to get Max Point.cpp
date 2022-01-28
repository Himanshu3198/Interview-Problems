
/* 

Rahal the magician was making a new magical armor . She went to the Twilight city to get some magical points for her armor
Twlight city has N+1 magical houses indexded from 1 to N+1 . At each house from 1 to N theres a fairy that will give
Rahan A[i] (1<=i<=N) magical points.

it is given that A[i] might be negative  which means that the fairy took some magical points from Rahaf . Additonally at each house
from 1 to N there's a teleporter with power p[i] that Rahaf can use to go from house index i to any house with an index from
i+1 to i+p[i]  at the first Rahaf is in the first house and she wants to go the (N+1)th house with maximum number of magical points .

Your task is to find the total number of ways to go from first house to the (N+1)th house with maximum number of points . 
since answer might be very large  you need to return it modulo 10^9+7 .
    
    constraints
    1<=N<=10^5
    -10^9<=A[i]<=10^9
    1<=p[i]<=N
    
    test cases:
   input:
     2
    3 
    0 0 0
    3 1 1
    4
    3 1 -1 4 
    4 1 2  1
         
   ouput:
         3
         2
            
             
*/     

// himanshu3198
#include<bits/stdc++.h>
#define ll long long int 
#define E endl

using namespace std;

const int mod=1e9+7;
void solve(){


    ll n;
    cin>>n;
  
    vector<ll>a(n),p(n);


    for(ll i=0;i<n;i++){

        cin>>p[i];
    }

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    unordered_map<ll,ll>res;

      queue<pair<ll,ll>>q;


      q.push({0,0});

     
      while(!q.empty()){

          int size=q.size();

          while(size--){

                 auto ans=q.front().first;
                 auto idx=q.front().second;
              q.pop();

  
            if(idx==(n)){
              res[ans]++;
              break;
            }

             
             ans= (ans+p[idx])%mod;
             


             for(int i=idx+1;i<=idx+a[idx];i++){

                 q.push({ans,i});
             }
          }
      }



       ll ans=INT_MIN;
       ll count=0;

       for(auto it:res){


           if(it.first>ans){

               ans=it.first;
               count=it.second;
           }
       }


       cout<<count<<E;
}

int main(){


  
  ll t=1;
  cin>>t;
  
   while (t--)
   {
       solve();
   }
   
    
   
}


