int fib(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    int ekchota = fib(n-1);
    int dochota = fib(n-2);   
    int fibb = ekchota + dochota;
    return fibb;
}
int main(){
    int n;
    cin >> n;          
    int ans = fib(n);
    cout << ans;       
}