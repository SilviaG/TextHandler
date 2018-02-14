public class TextHandler {
    
    public static int TokenCount(String input_text, String input_token) {
        
        int count = 0;
        
        String text = input_text.toLowerCase();
        String token = input_token.toLowerCase();
    
        for (int i = 0; i <= (text.length() - token.length()); i++)
        {
            if (token.equals(text.substring(i, i+token.length())))
                 count++;
        }
      
        return count;

    }
    
    public static void main(String args[]) {
        
        System.out.println("Find the number of occurrences of a lexeme in a text.\n");

        String text = "Enter here the text that has to be analysed for searching the characters string.";
        String token = "THE";

        System.out.println("Text: " + text + "\n");
        System.out.println("Token: " + token + "\n");
        System.out.println("Number of occurrences: " + TokenCount(text, token) + "\n");
        
    }
}
