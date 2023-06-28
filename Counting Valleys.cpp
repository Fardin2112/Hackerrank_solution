int countingValleys(int steps, string path) {
      int sealvl = 0;
      int cnt=0;
      for(int i=0 ;i<path.size(); i++){
          if(path[i] == 'D'){
              sealvl -= 1; 
          }else {
              sealvl += 1;
              if(sealvl == 0){
                  cnt ++;
              }
          }
      }
      return cnt;
}
