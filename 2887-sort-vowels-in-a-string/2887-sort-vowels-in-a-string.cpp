class Solution {
public:
    string sortVowels(string s) {
        vector<char> se;
        for(int i=0;i<s.size();i++){
            int g=int(s[i]);
            if(g==65 or g==69 or g==73 or g==79 or g==85 or g==97 or g==101 or g==105 or g==111 or g==117){
                se.push_back(s[i]);
            }
        } 
        sort(se.begin(),se.end());
        int h=0;
        for(int i=0;i<s.size();i++){
            int g=s[i];
            if(g==65 or g==69 or g==73 or g==79 or g==85 or g==97 or g==101 or g==105 or g==111 or g==117){
                s[i]=se[h];
                h++;
            }
        }
        return s;
    }
};