class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <string> vs;
        vector <string> vt;
        int ns=s.size(); bool flag=false;
        int nt=t.size();
        if (ns==nt){
            int n=ns;
            for(int i=0;i<n;i++){
                vs.push_back(to_string(s[i]));
                vt.push_back(to_string(t[i]));
            }
            sort(vs.begin(),vs.end());
            sort(vt.begin(),vt.end());
            if(vs==vt){
                flag=true;
            }
        }
        else{
            flag=false;
        }
        return flag;
    }
};
