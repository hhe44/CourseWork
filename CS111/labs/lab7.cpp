for (int r=1; r<=h; r+=1){
  int sum = 0;
  for (int c=1; c<=r; c++){
    cout<<c;
    if (c<=1) cout<<"=";
    else cout<<"+";
    sum+=c;
  }
  cout<<sum<<endl;
}
