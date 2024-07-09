class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int dif=INT_MAX;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int s=i+1;
            int l=n-1;
            while(s<l){
                int sum=arr[i]+arr[s]+arr[l];
                if(sum==target){
                    return sum;
                    
                }
                else if(sum<target){
                    s++;
                    
                }
                else{
                    l--;
                }
                if(abs(sum-target)<dif){
                    dif=abs(sum-target);
                    ans=sum;
                    
                    
                }
                else if(abs(sum-target)==dif){
                    ans=max(ans,sum);
                    
                }
            }
            
        }
        return ans;
    }
};
