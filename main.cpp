#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

static unsigned int TokenCount (string const &input_text, string const &input_token)
{
  unsigned int count = 0;

  string text = input_text;
  string token = input_token;
    
  transform(input_text.begin(), input_text.end(), text.begin(), ::tolower);
  transform(input_token.begin(), input_token.end(), token.begin(), ::tolower);

  for (int i = 0; i <= (text.length () - token.length ()); i++)
  {
      if (!strcmp (token.c_str (), text.substr (i, token.length ()).c_str ()))
	      count++;
  }
  return count;
}

int main ()
{
  cout << "Find the number of occurrences of a lexeme in a text." << endl;

  string text =
    "Enter here the text that has to be analysed for searching the characters string.";
  string token = "THE";

  cout << "Text: " << text << endl;
  cout << "Token: " << token << endl;
  cout << "Number of occurrences: " << TokenCount (text, token) << endl;

  return 0;
}
