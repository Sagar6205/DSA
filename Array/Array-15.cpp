class Solution {
public:
    string reverseWords(string str) {
        stringstream s(str);
        string word;
        
        vector<string>temp;
        
        string ans="";

        while(s>>word){
            temp.push_back(word);
        }
       

        for(int i=temp.size()-1;i>=0;i--){
            if(i!=0)
            ans+=temp[i]+" ";
            else
                ans+=temp[i];

        }
        return ans;
    }
};
/*
This code implements a function called `reverseWords` that takes a string `str` as input and returns a new string with the words in reverse order. Let's go through the code step by step:

1. `stringstream s(str);`: This line initializes a stringstream object named `s` with the input string `str`. A stringstream is a stream class used for manipulating strings.

2. `string word;`: This declares a string variable named `word` which will be used to store individual words from the input string.

3. `vector<string>temp;`: This creates an empty vector of strings named `temp`. This vector will be used to store the individual words extracted from the input string.

4. `string ans="";`: This initializes an empty string variable named `ans` which will store the final reversed string.

5. `while(s>>word)`: This while loop iterates through the input string word by word until there are no more words left to extract. The extraction operator (`>>`) is used to extract individual words from the stringstream `s`.

6. `temp.push_back(word);`: Inside the while loop, each word extracted from the input string is added to the vector `temp` using the `push_back()` function. This effectively stores all the words in the vector `temp` in the order they appear in the input string.

7. After the while loop finishes, all the words from the input string have been extracted and stored in the vector `temp`.

8. The next step is to construct the reversed string by appending the words from the vector `temp` in reverse order. This is done using a for loop that iterates over the elements of the vector `temp` in reverse order.

9. Inside the for loop, each word from the vector `temp` is appended to the string `ans` followed by a space character to separate the words.

10. Finally, the reversed string `ans` is returned as the result of the `reverseWords` function.


*/
