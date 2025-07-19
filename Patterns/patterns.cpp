#include <iostream>
using namespace std;
void pattern1(int n)
{
    {
/*
pttern to print
    *
   ***
  *****
 *******
*********
first  print la print karayha by using n-i-1
next print the stars 
stars are in pattern 1 3 5 7 9 ie 2n+1
so use it
*/
for(int j=0;j<n;j++)
    {
        for(int k=0;k<n-j-1;k++)
        {
            cout<<" ";
        }
        for(int i=0;i<(2*j+1);i++)
        {
        cout<<"*";
        }
        cout<<endl;
    }
}
}
void pattern2(int n)
{
    /*
    just the opposite of the above 
    first loop start from 0 to n
    innner loop me gaps ke lye conditon lagao ki till j<i print spaces 
    next go to print start sby condition j<(2n-i-1)+1 
    */
for(int i=0;i<n;i++)
{

    for(int j=0;j<i;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<(2*(n-i-1)+1);j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
}


void pattern3 (int n)
{
    /*
    simple pattern
    1
    0 1
    0 1 0
    1 0 1 0
    simple to implement 
    for odd print 0 
    for even print 1
    */ 
    int temp=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<j%2;

        }
        cout<<endl;
        }
}

    void pattern4(int n)
    {
            /*

    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *

    first print the array from i=0 to i<=n in inner loop 
    then from i=n-1 to i>=1
    */

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
            
        }
        for(int i=n-1;i>=1;i--)
        {
            for(int j=0;j<i;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }

int main ()
{
    int n=5;
    cin>>n;
    pattern4(n);
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

// Pattern 7: Pyramid of Stars
// Logic: For each row, print (n-i) spaces and then (2*i-1) stars
void pattern7(int n) {
    for (int i = 1; i <= n; i++) {
        // print spaces
        cout << string(n - i, ' ');
        // print stars
        cout << string(2 * i - 1, '*') << "\n";
    }
}

// Pattern 8: Inverted Pyramid of Stars
// Logic: For each row, print (i-1) spaces and (2*(n-i)+1) stars
void pattern8(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(i - 1, ' ');
        cout << string(2 * (n - i) + 1, '*') << "\n";
    }
}

// Pattern 9: Diamond Pattern
// Logic: Combine pattern7 and pattern8 to form a full diamond
void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}

// Pattern 11: 0-1 Triangle
// Logic: Start each row with 1 if row is even, 0 if odd; then alternate using bit = 1 - bit
void pattern11(int n) {
    for (int i = 0; i < n; i++) {
        int bit = (i % 2 == 0) ? 1 : 0;
        for (int j = 0; j <= i; j++) {
            cout << bit << " ";
            bit = 1 - bit;  // flip between 0 and 1
        }
        cout << "\n";
    }
}

// Pattern 12: Numeric Palindrome
// Logic: Print 1 to i, then i to 1 with spaces in the middle
void pattern12(int n) {
    for (int i = 1; i <= n; i++) {
        // increasing numbers
        for (int j = 1; j <= i; j++) cout << j;
        // spaces
        cout << string(2 * (n - i), ' ');
        // decreasing numbers
        for (int j = i; j >= 1; j--) cout << j;
        cout << "\n";
    }
}

// Pattern 13: Continuous Number Triangle
// Logic: Use a counter variable and print it while increasing in every row
void pattern13(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << "\n";
    }
}

// Pattern 14: Alphabet Triangle
// Logic: Print characters from 'A' to 'A'+i-1 in each row
void pattern14(int n) {
    for (int i = 1; i <= n; i++) {
        char c = 'A';
        for (int j = 1; j <= i; j++) cout << c++;
        cout << "\n";
    }
}

// Pattern 15: Reverse Alphabet Triangle
// Logic: In each row, print characters from 'A' up to 'A' + (n-i)
void pattern15(int n) {
    for (int i = 1; i <= n; i++) {
        char c = 'A';
        for (int j = n; j >= i; j--) cout << c++;
        cout << "\n";
    }
}

// Pattern 16: Vertical Repeating Alphabet Triangle
// Logic: In each row, print character starting from 'A' and repeat i times
void pattern16(int n) {
    char c = 'A';
    for (int i = 1; i <= n; i++) {
        cout << string(i, c) << "\n";
        c++;
    }
}

// Pattern 17: Palindromic Alphabet Pyramid
// Logic: Print increasing then decreasing characters centered using spaces
void pattern17(int n) {
    for (int i = 1; i <= n; i++) {
        // spaces
        cout << string(n - i, ' ');
        // increasing characters
        char c = 'A';
        for (int j = 1; j <= i; j++) cout << c++;
        // decreasing characters
        c -= 2;
        for (int j = 1; j < i; j++) cout << c--;
        cout << "\n";
    }
}

// Pattern 20: Hourglass Star Pattern
// Logic: Upper and lower mirror halves with stars and spaces in between
void pattern20(int n) {
    // upper half
    for (int i = 1; i <= n; i++) {
        cout << string(i, '*') << string(2 * (n - i), ' ') << string(i, '*') << "\n";
    }
    // lower half
    for (int i = n - 1; i >= 1; i--) {
        cout << string(i, '*') << string(2 * (n - i), ' ') << string(i, '*') << "\n";
    }
}

// Pattern 21: Hollow Square
// Logic: First and last row full of '*', middle rows with stars at ends
void pattern21(int n) {
    cout << string(n, '*') << "\n";
    for (int i = 0; i < n - 2; i++) {
        cout << "*" << string(n - 2, ' ') << "*\n";
    }
    cout << string(n, '*') << "\n";
}

// Pattern 22: Concentric Square of Numbers
// Logic: Minimum of distances from edges = number to print
void pattern22(int n) {
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i, left = j;
            int bottom = size - 1 - i, right = size - 1 - j;
            int m = min(min(top, bottom), min(left, right));
            cout << (n - m) << " ";
        }
        cout << "\n";
    }
}

// MAIN
int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    cout << "\nPattern 7:\n"; pattern7(n);
    cout << "\nPattern 8:\n"; pattern8(n);
    cout << "\nPattern 9:\n"; pattern9(n);
    cout << "\nPattern 11:\n"; pattern11(n);
    cout << "\nPattern 12:\n"; pattern12(n);
    cout << "\nPattern 13:\n"; pattern13(n);
    cout << "\nPattern 14:\n"; pattern14(n);
    cout << "\nPattern 15:\n"; pattern15(n);
    cout << "\nPattern 16:\n"; pattern16(n);
    cout << "\nPattern 17:\n"; pattern17(n);
    cout << "\nPattern 20:\n"; pattern20(n);
    cout << "\nPattern 21:\n"; pattern21(n);
    cout << "\nPattern 22:\n"; pattern22(n);

    return 0;