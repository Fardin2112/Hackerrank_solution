void bonAppetit(vector<int> bill, int k, int b) {
    int sum=0,annasum,sum1;
    for (int i=0;i<bill.size();i++){
        sum+=bill[i];
    }
    for(int i=0;i<bill.size();i++){
        if(bill[i]==bill[k]){
            annasum=sum-bill[k];
            sum1=sum-bill[k];
        }
    }
      sum1=sum1/2;
      sum=sum/2;
      annasum=annasum/2;
      if(b==annasum){
          cout<<"Bon Appetit"<<endl;
      }else {
      cout<<sum-annasum<<endl;
      }
      
}
