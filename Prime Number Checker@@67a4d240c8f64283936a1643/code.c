int isPrime(int a){
    int ans;
    if (a==2) return 1;
    else if (a==1) return 0;
    else {
        for(int i=2;i<a;i++){
            if (a%i==0){
                ans=0;
                break;
            }
            else ans=1;
        }
        if (ans==1) return 1;
        else return 0;
    }
}