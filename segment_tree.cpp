template <class T> struct seg_tree{
    //take care of default value, func and query initiation
    vector<T>tree;
    
    T N,L,DEFAULT_VALUE=0;
    seg_tree(int n){
        int x=1;
        while(x<n){
            x<<=1;
        }
        L=x;
        N=(x<<1);
        tree.resize(N,DEFAULT_VALUE);
    }
    void build(){
        for(int i=N-1;i>1;i--){
            tree[i>>1]=func(tree[i>>1],tree[i]);
        }
    }
    T query(int l,int r){
        T ans=DEFAULT_VALUE;
        l+=L;
        r+=L;
        while(l<r){
            if(l&1){
                ans=func(ans,tree[l]);
                l++;
                
            }
            if(!(r&1)){
                ans=func(ans,tree[r]);
                r--;
                
            }
            l>>=1;r>>=1;
        }
        if(l==r)ans=func(ans,tree[l]);
        return ans;
    }

    void update(int pos,T val){
        pos+=L;
        tree[pos]=val;
        pos>>=1;
        while(pos){
            tree[pos]=func(tree[pos<<1],tree[(pos<<1)+1]);
            pos>>=1;
        }
    }

    T func(T &x,T &y){
        return x+y;
    }
};