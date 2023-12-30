/*Chef has A marbles, and his friend has B.
They want to redistribute the marbles among themselves such that after redistributing:

Chef and his friend both have at least one marble each;
and
The number of marbles with Chef is divisible by the number of marbles with his friend.

What's the minimum number of marbles that need to be transferred from one person to another to achieve this?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The only line of each test case contains two space-separated integers

A and B — the number of marbles with Chef and the number of marbles with his friend, respectively.
Output Format
For each test case, output on a new line the minimum number of marbles to be transferred.*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c = 0;
        cin >> a >> b;
        int a1 = a, b1 = b;
        if (a >= b)
        {
            while (a % b != 0 && a1 % b1 != 0)
            {
                a--;
                b++;
                a1++;
                b1--;
                c++;
            }
        }
        else
        {
            while (a1 % b1 != 0)
            {
                a1++;
                b1--;
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}