class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
       // sort(num1.begin(),num1.end(),greater<int>());
      //  sort(num2.begin(),num2.end(),greater<int>());
        int j=0;
        for(int i=m;i<num1.size();i++)
        {
            if(j<n){
            num1[i]=num2[j];
            j++;}
            else break;
        }
        sort(num1.begin(),num1.end());
    }
};