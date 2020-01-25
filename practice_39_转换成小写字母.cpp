实现函数 ToLowerCase()，该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。

class Solution 
{
public:
    string toLowerCase(string str)
    {
        for(auto &s : str)
        {
            if(s >= 'A' && s <= 'Z')
            {
                s += 32;
            }
        }
        return str;
    }
};