/*Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

Input
The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

Output
If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).*/
/*
1::->input:
wjmzbmr
output:
CHAT WITH HER!

2::->input:
xiaodao
output:
IGNORE HIM!

3::->input:
sevenkplus
output:
CHAT WITH HER!*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    const int CHAR_COUNT = 26;
    int charFrequency[CHAR_COUNT] = {0};

    // in the loop below we are counting no of duplicate elements
    // Count the frequency of each character
    for (char ch : s)
    {
        charFrequency[ch - 'a']++; // Certainly, let me explain that line for you.In C++, characters are represented using ASCII values. The ASCII value of the lowercase letter 'a' is 97. In the line `charFrequency[ch - 'a']++;`, it subtracts the ASCII value of 'a' from the ASCII value of the character `ch`. This operation essentially converts the character to a zero-based index, which is helpful when working with arrays.For example, let's say `ch` is 'c'. The ASCII value of 'c' is 99. So, `ch - 'a'` would be `99 - 97`, which is 2. This means that the frequency of the character 'c' is updated in the `charFrequency` array at index 2.In summary, this line is a way to convert characters to an index suitable for array indexing, where 'a' corresponds to index 0, 'b' corresponds to index 1, and so on. This is a common technique when dealing with character frequencies or counting occurrences of characters in a string using an array.
    }

    int count_dup = 0;

    // Count the number of characters with frequency greater than 1
    for (int i = 0; i < CHAR_COUNT; i++)
    {
        if (charFrequency[i] > 1)
        {
            count_dup = count_dup + charFrequency[i] - 1;
        }
    }
    int no_of_digit = s.length();
    if ((no_of_digit - count_dup) % 2 == 0) // here we are eleminating the duplicate elements to find the no of distinct elements
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
} // what is wrong with this code?? why it is not working?? please help me to find out the error in this code and also tell me the correct code for this problem if possible please

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count = 0;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    (count % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
}*/