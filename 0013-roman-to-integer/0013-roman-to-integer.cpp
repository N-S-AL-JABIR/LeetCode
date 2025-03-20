class Solution {
public:
    int romanToInt(string s) {
        int n=0, pre=0,crr=0; 
        map<char,int> roman={{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},{'C', 100}, {'D', 500}, {'M', 1000}};     
        for(int i=s.size()-1;i>=0;i--)
        {
            crr=roman[s[i]];
            if(crr<pre)
            {
                n-=crr;
            }
            else n+=crr;
            pre=crr;
        }
        return n;
    }
};