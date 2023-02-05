int trap(int* h, int hs){
    int l,r,lm,rm,res;
    l=0;
    r=hs-1;
    lm=0;
    rm=0;
    res=0;
    while(l<=r){
        if(h[l]<=h[r]){
            if(h[l]>lm){
                lm=h[l];
            }else{
                res+=lm-h[l];
            }
            l++;
        }else{
            if(h[r]>rm){
                rm=h[r];
            }else{
                res+=rm-h[r];
            }
            r--;
        }
    }
    return res;
}
