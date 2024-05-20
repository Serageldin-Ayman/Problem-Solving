class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.empty())
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
           for(char j : reversedstr)
            {
                s = reversedstr;
            }
        }
    }
};