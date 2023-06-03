int hurdleRace(int k, vector<int> height) {
  int potion=0;
 int n=height.size();
 sort(height.begin(),height.end());
 reverse(height.begin(),height.end());
 if(k>height[0])
 return 0;
 else{
  potion = height[0]-k;
return potion;
  }}
