#include<bits/stdc++.h>
using namespace std; 
// TIME COMP: O(4a), where a~1; constant.

// ** This DS helps to find out eaither u&v belongs to same component or not in constant time

class DisjointSet{
    vector<int> rank, parent, size; 

    public: 
    DisjointSet(int n){
        rank.resize(n+1, 0); 
        size.resize(n+1, 1); 
        parent.resize(n+1);
        for(int i=0; i<n+1; i++){
            parent[i] = i; 
        } 
    }

    int getUParent(int n){
        if(parent[n] == n){
            return n; 
        }
        // compression
        return parent[n] = getUParent(parent[n]); 
    }

/*  void unionByRank(int u, int v){
        // find ultimate parent of both the nodes.
        int ulp_u = getUParent(u); 
        int ulp_v = getUParent(v); 

        if(ulp_u == ulp_v) return; 

        // find the rank of both the nodes. 
        int rank_u = rank[ulp_u]; 
        int rank_v = rank[ulp_v]; 

        // always merge the lower reanked component with the higher one, if the rank is same, do anything
        if(rank_u < rank_v){
            parent[ulp_u] = ulp_v; 
        }else if(rank_u > rank_v){
            parent[ulp_v] = ulp_u; 
        }else{
            parent[ulp_v] = ulp_u; 
            rank[ulp_u]++; 
        }
    }
*/
  

    void unionBySize(int u, int v){
        // find ultimate parent of both the nodes.
        int ulp_u = getUParent(u); 
        int ulp_v = getUParent(v); 

        if(ulp_u == ulp_v) return; 

        // find the size of component of both the nodes. 
        int size_u = size[ulp_u]; 
        int size_v = size[ulp_v]; 

        // always merge the lower sized component with the higher one, if the size is same, do anything
        if(size_u < size_v){
            parent[ulp_u] = ulp_v; 
            size[ulp_u]+= size_v; 

        }else{
            parent[ulp_v] = ulp_u; 
            size[ulp_v]+= size_u; 
        }
    }
}; 


int main(){
    DisjointSet ds(7); 

    ds.unionBySize(1, 2); 
    ds.unionBySize(2, 3); 
    ds.unionBySize(4, 5); 
    ds.unionBySize(6, 7); 
    ds.unionBySize(5, 6); 
    // if 3 and 7 same or not 
    if(ds.getUParent(3) == ds.getUParent(7)) {
        cout << "Same\n"; 
    }
    else cout << "Not same\n"; 

    ds.unionBySize(3, 7); 

    if(ds.getUParent(3) == ds.getUParent(7)) {
        cout << "Same\n"; 
    }
    else cout << "Not same\n"; 
	return 0;
}