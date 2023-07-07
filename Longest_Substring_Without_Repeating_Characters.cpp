            //pwwkew n=6 ans=""
            //iter 1 x=p ans=p     
            // iter 2 x=w ans.size=1 j=0 w==ans[0]=p
            // iter 3 x=w ans.size=2 ans=pw
            // j=0 w==ans[0]=p
            // j=1 w==ans[1]=w
            // iter 4 x=k ans=w ans.size=1
            // j=0 k==ans[0]=w
            // iter 5 x=e ans=wk ans.size=2
            // j=0   e==ans[0]=w
            // j=1   e==ans[1]=k
            //  iter 6 x=w ans=wke ans.size=3
            //  j=0  x==ans[0]=w   ans=kew

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        string ans=""; int max=0;
        if(n==0){
            return 0;
        }
        else if (n==1){
            return 1;
        }
        else{                        
            for(int i=0;i<n;i++){           
                char x=s[i];         
                if(ans.size()==0){
                    ans+=s[i];
                    continue;
                }
                else{
                    int j=0;
                    for(j;j<ans.size();j++){   
                        if (x!=ans[j]){   
                            continue;
                        }
                        else if(x==ans[j]){
                            if(ans.size()>max){   //3>2 
                                max=ans.size(); //max=3
                            }
                            if(j==ans.size()-1){  //j=0 ans.zise()-1=3-1=2
                                ans="";
                            }
                            else{
                                string r=ans.substr(j+1); //ans=wke  j=0 j+1=1 r=ke
                                ans=r;  //ans=ke
                            }
                            break;
                        }
                    }
                    ans+=x;    //ans=pw ans.size=2 max=0   ans=wke  ans=ke+w=kew 
                    if(ans.size()>max){ //2>0 max=2 3>3
                        max=ans.size();
                    }
                }
            }
        }
        return max;        
    }
};

