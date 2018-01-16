#include <iostream>
#include <string>
#include <stack>

int main()
{

   std::string word;
   std::cin >> word;

   std::stack<char> st;

   for ( char c : word ) st.push( c );

   bool is_palindrome = true;

   for ( auto it = word.begin(); is_palindrome && !st.empty(); ++it )
   {
      is_palindrome = *it == st.top();
      st.pop();
   }

   std::cout << word
             << ( is_palindrome ? "" : " nu" )
             << " este palindrom"
             << std::endl;
}
