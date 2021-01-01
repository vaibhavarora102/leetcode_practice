class Solution {
public:
    bool isValid(string s) 
    {
        if (s.size() % 2)
        {
            return false;
        }

        if (s.empty())
        {
            return true;
        }

        stack<char> openingParenthesis;

        for (char c : s)
        {
            if (c == '{' || c == '[' || c == '(')
            {
                openingParenthesis.push(c);
            }

            if (c == '}')
            {
                if (!openingParenthesis.empty() && (openingParenthesis.top() == '{'))
                {
                    openingParenthesis.pop();
                }
                else
                {
                    return false;
                }
            }
            if (c == ']')
            {
                if (!openingParenthesis.empty() && (openingParenthesis.top() == '['))
                {
                    openingParenthesis.pop();
                }
                else
                {
                    return false;
                }
            }
            if (c == ')')
            {
                if (!openingParenthesis.empty() && (openingParenthesis.top() == '('))
                {
                    openingParenthesis.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return openingParenthesis.empty() ? true : false;
        }
};