int viralAdvertising(int n) {
    
    int day = 0, shared = 5, liked = 0, cumulative = 0;  
    while(day != n){
        liked = shared / 2;
        cumulative += liked;
        shared = liked * 3;
        day++;
    }
    return cumulative;
}
