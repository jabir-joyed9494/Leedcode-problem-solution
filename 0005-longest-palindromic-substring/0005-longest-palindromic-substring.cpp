class Solution {
public:
string func(string s,int left,int right)
{
    while(left>=0 && right<s.size() && s[left]==s[right])
    {
        left--;
        right++;
    }
  //  cout<<left+1<<" "<<right-left+1<<endl;
    string ss="";
    ss+=(s.substr(left+1,right-left-1));
    return ss;

}
    string longestPalindrome(string s) {
        int n = s.size();
        if(n==1) return s;
        string ans="",ss="";
       for(int i=1;i<n;i++)
       {
           string s1=func(s,i,i);
           string s2=func(s,i-1,i);
          // cout<<"i=="<<i<<" "<<s1<<" "<<s2<<endl;
           if(s1.size()>ans.size())
           {
            ans=s1;
           }
           if(s2.size()>ans.size())
           {
            ans=s2;
           }
       }
       return ans;
    }
};