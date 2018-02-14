def TokenCount(text, token):
    count = 0
    text = text.lower()
    token = token.lower()
    for i in range(len(text)-len(token)+1):
        if text[i:i+len(token)] == token:
            count = count+1
    return count
    
print("Find the number of occurrences of a lexeme in a text.")

text = "Enter here the text that has to be analysed for searching the characters string."
token = "THE"

print("Text: %s\n" % (text))
print("Token: %s\n" % (token))
print("Number of occurrences: %d" % (TokenCount(text, token)))
