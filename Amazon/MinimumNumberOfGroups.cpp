
/*group elements in such way that difference between
 any two element cannot exceeds k return
 minimum number of groups can be formed such that difference not
 exceeds k
 */


#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &awards, int k)
{

    sort(awards.begin(), awards.end());

    int result = 1;
    int minElement = awards[0];
    int n = awards.size();
    for (int i = 1; i < n; i++)
    {

           if(awards[i]-minElement>k){
            minElement=awards[i];
            result++;
           }
       
    }
       
    return result;
}
int main()
{

    vector<int>awards={1,5,4,6,8,9,2};
    // vector<int>awards={1,13,6,8,9,3,5};
    // vector<int> awards = {3, 1, 4, 3, 9};
    int k = 3;

    cout << solve(awards, k) << "\n";
}
