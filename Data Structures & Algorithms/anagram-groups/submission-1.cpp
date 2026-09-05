class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int i, n=strs.size();
;       vector<string>sorted=strs ;
        for(i=0;i<n;i++){
            sort(sorted[i].begin(),sorted[i].end());

        }
        vector<bool> visited(n,false);
        for(i=0;i<n;i++){
            visited[i]=false;
        }
        vector<vector<string>> res;
        for(i=0;i<n;i++){if(visited [i]==true){continue;}
       vector< string> current;
        current.push_back(strs[i]);
        visited [i]=true;
        for(int j=i+1;j<n;j++){
            if(visited [j]==false &&sorted[i]==sorted[j]){
                current.push_back(strs[j]);
                visited [j]=true;
            }
        }
        res.push_back(current );
        }
return res;
    }
};
