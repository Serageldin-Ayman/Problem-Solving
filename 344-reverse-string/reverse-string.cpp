class Solution {
public:
    void reverseString(vector<char>& s) {
        //more concise 
        std::reverse(s.begin(), s.end());
        
        //this works too
        /*if(s.empty())
            return;
        else
        {
            std::stack<char>mystack;
            std::vector<char> reversedstr;

            for(char i : s)
                mystack.push(i);

            while(!mystack.empty())
            {
                reversedstr.push_back(mystack.top());
                mystack.pop();
            }
            s.clear();
            s = reversedstr;
        }*/
    }
};
