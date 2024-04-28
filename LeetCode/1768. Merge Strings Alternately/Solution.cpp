class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        const int len1 = word1.length();
        const unsigned int len2 = word2.length();
        word1.erase(std::remove_if(word1.begin(), word1.end(), [](char c) { return c == '\0'; }), word1.end());
        if(len1 > len2)
        {
            if(len2 ==1)
            {
                result+=word1[0];
                result+=word2[0];
                result.append(word1.substr(1, len1-1));
            }
            else
            {
                unsigned int i = 0;
                for(i = 0; i<(len2); i++)
                { 
                    if(word1[i] != '\0')
                    {
                        result+=word1[i];
                    }
                    if(word1[i] != '\0')
                    {
                        result+=word2[i];
                    }   
                }
                result+=word1.substr(len2, len1-len2);
            }
            
            
        }
        else if(len2 > len1)
        {
            if(len1 ==1)
            {
                result+=word1[0];
                result+=word2[0];
                result.append(word2.substr(1, len2-1));
            }
            else
            {
                unsigned int i = 0;
                for(i = 0; i<(len1) ; i++)
                {
                    result+=word1[i];
                    result+=word2[i];
                }
            result+=word2.substr(len1, len2-len1);
            }
            
        }
        else
        {
            unsigned int i = 0;
            for(i = 0; i<len2; i++)
            {
                result+=word1[i];
                result+=word2[i];
            }
        }
        
        
        return result;
        
    }
};