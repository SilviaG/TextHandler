#include <iostream>
#include <string.h>

using namespace std;

static unsigned int TokenCount (std::string const &text, std::string const &token)
{
  unsigned int count = 0;

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

  std::string text =
    "Enter here the text that has to be analysed for searching the characters string.";
  std::string token = "the";

  cout << "Text: " << text << endl;
  cout << "Token: " << token << endl;
  cout << "Number of occurrences: " << TokenCount (text, token) << endl;

  return 0;
}
