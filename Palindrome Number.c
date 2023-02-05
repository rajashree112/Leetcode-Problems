bool isPalindrome(int x){
    if(x<0) return false;
    unsigned long long int re = 0,temp = x,t;
    while(temp){
        t = re*10+temp%10;
        if(t/10 != re) return false;
        re = t;
        temp /= 10;
    }
    if(re == x)
        return true;
    return false;
    
}
