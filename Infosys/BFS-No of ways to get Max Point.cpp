
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


