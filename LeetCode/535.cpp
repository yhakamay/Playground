#include <iostream>

class Solution {
public:
    unordered_map<string, string> map;
    string encode(string longUrl) {
        srand(time(NULL));
        string  s = "";
        
        for (int i = 0; i < 4; i++) {
            int     r = rand() % 26;
            char    c = 'a' + r;
            
            s += 'a';
        }
        int r = rand() % 26;
        s += to_string(r);

        map["http://tinyurl.com/" + s] = longUrl;
        return "http://tinyurl.com/" + s;
    }

    string decode(string shortUrl) {
        return map[shortUrl];
    }
};