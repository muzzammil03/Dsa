// 9.FInd the factorial of large number (gfg)
class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int>ans;
        ans.push_back(1);
        int array=0;
        for(int i=2;i<=N;i++){
            for(int j=0;j<ans.size();j++){
                int x=ans[j]*i+array;
                ans[j]=x%10;
                array=x/10;
            }
            while(array){
                ans.push_back(array%10);
                array/=10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};