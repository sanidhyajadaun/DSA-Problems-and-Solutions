string reverseWord(string str){
    
  //Your code here
  string ans = "";
  int i=0;
  while(i<str.length())
  {
      ans = str[i++]+ans;
  }
  return ans;
  
}