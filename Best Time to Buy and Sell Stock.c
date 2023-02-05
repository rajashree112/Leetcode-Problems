int maxProfit(int* prices, int pricesSize){
    int mp=0;
    int mm=prices[0];
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<mm){
            mm=prices[i];
        }if(prices[i]-mm>mp){
            mp=prices[i]-mm;
        }
    }
    return mp;
}
