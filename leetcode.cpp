void solve(int ind,int target,vector<int> vec,vector<int> candidates,vector<vector<int>> ans)
    {
        if(ind==candidates.size())
        {
            if(target>0 && vec.size()>0)
            {
                vec.pop_back();
            }
            if(target==0 && vec.size()!=0)
            {
                ans.push_back(vec);           
            }
            return;
        }
        /*if(target<0)
        {
            vec.pop_back();
            return;
        }*/
        if(target==0)
        {
            if(vec.size()>0)
            {
                ans.push_back(vec);
                vec.pop_back();
            }
            return;
        }
        
        if(target>=candidates[ind])
        {
            solve(ind,target-candidates[ind],vec,candidates,ans);
        }
        solve(ind+1,target,vec,candidates,ans);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int> vec;
        vector<vector<int>> ans;
        solve(0,target,vec,candidates,ans);
        return ans;
    }