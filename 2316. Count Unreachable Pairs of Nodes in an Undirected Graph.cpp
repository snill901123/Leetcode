class Union{
private:
    vector<int>parent;
public:
    Union(int n){
        parent.resize(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int find(int x){
        if(parent[x]!=x){
            parent[x]=find(parent[x]);
        }
        return parent[x];
    }
    void union_set(int x,int y){
        int xp=find(x);
        int yp=find(y);
        if(xp<yp){
            parent[yp]=xp;
        }else{
            parent[xp]=yp;
        }
    }
};
class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        long long ans=0;
        Union dsu(n);
        for(auto &edge:edges){
            dsu.union_set(edge[0],edge[1]);
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[dsu.find(i)]++;
        }
        for(auto& it:mp){
            int cnt=it.second;
            ans += 1LL * cnt * (n-cnt);
            n -= cnt;
        }
        return ans;
    }
};
