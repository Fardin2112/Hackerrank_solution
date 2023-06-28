int pageCount(int n, int p) {
    int count1 = 0;
    for(int i = 0; i <= n; i += 2){
        if( i == p || i + 1 == p){
            break;
        }
        count1++;
    }
    int a =1;
    int count2=0;
    for(int j = n; j>= 0;){
        if( n%2 == 0 && j ==n){
            if(j-1 == p){
             count2 = 1;
             break;
            }
            else {
                if(j == p){
                    return 0;
                }
            }
        }else {
            if(j==p || j-1 == p){
            break;
            }
        }
        count2++;
        j-= 2;
    }
    cout<<count1 <<" "<<count2;
 return min(count1,count2) ;
}
