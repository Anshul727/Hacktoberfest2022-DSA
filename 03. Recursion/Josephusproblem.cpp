class Solution {
public:
    int helper(int index,int k,vector<int> &arr)
    {
        if(arr.size()==1)
            return arr[0];
        
        index = (index + k-1)%arr.size();
        arr.erase(arr.begin()+index);
        return helper(index,k,arr);
    }
    int findTheWinner(int n, int k) {
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back(i+1);
        }
        return helper(0,k,arr);
    }
};
