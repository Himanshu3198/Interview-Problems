//  time complexity O(nlong+n)
 
class Solution {
public:
    
      static bool cmp(const vector<int>&v1,const vector<int>&v2){
          
             return v1[1]>v2[1];
      }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
     
           int n=boxTypes.size();
        
            
             int ans=0;
        
          sort(boxTypes.begin(),boxTypes.end(),cmp);
        
        
        for(auto &it:boxTypes){
            
            if(truckSize>=it[0]){
                
                ans+=(it[0]*it[1]);
                truckSize-=it[0];
                
            }else if(truckSize>0 and truckSize<it[0]){
                
                
                ans+=((truckSize)*it[1]);
                truckSize=0;
            }
        }
        
        return ans;
        
        
        
    }
};
