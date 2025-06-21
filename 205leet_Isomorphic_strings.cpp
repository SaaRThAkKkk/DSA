class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> v(150,1000);
        for(int i=0;i<s.size();i++){
            int index=(int)s[i];
            // isse s ke phle character ka ascii value mil gya us address p ab s k i aur t k i ka diffrene dal denge
            if(v[index]==1000) v[index]=s[i]-t[i];
            //agr 1000 h mtlb wha khuch ni dla h vo value dalo
            //c++ automatic inko type cast kr lega
            else if(v[index]!= s[i]-t[i]) return false;
            //agr wha khuch phle e dala hua h tu mtlb uska pair kisi aur k sath h to seedhe false return krdo
        }
        //ye phle ke respect se dusre ko check kiye but second k respect se ni dekhe to ek baar aur bs s aur t ko swap krna h...


        //Again making all values of vector 1000
        for(int i=0;i<150;i++){
            v[i]=1000;
        }
        //just swap s ant t for checking wrt t
        for(int i=0;i<s.size();i++){
            int index=(int)t[i];
            if(v[index]==1000) v[index]=t[i]-s[i];
            else if(v[index]!= t[i]-s[i]) return false;
        }
        return true;



    }
};