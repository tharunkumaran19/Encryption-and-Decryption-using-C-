# Encryption-and-Decryption-using-CPP

# VIGENERE CIPHER
Vigenere Cipher is a method of encrypting alphabetic text. It uses a simple form of polyalphabetic substitution. A polyalphabetic cipher is any cipher based on substitution, using multiple substitution alphabets. The encryption of the original text is done using the Vigenère square or Vigenère table.

The table consists of the alphabets written out 26 times in different rows, each alphabet shifted cyclically to the left compared to the previous alphabet, corresponding to the 26 possible Caesar Ciphers.
At different points in the encryption process, the cipher uses a different alphabet from one of the rows.
The alphabet used at each point depends on a repeating keyword.


# Example: 
Input :
Plaintext : ENCRYPTION
Keyword : BEST

Output : 
Ciphertext : FRUKZTLBPR

For generating key, the given keyword is repeated in a circular manner until it matches the length of the plain text.
The keyword "BEST" generates the key "BESTBESTBE"
The plain text is then encrypted using the process explained below.

# Encryption:
The first letter of the plaintext, E is paired with B, the first letter of the key. So use row E and column B of the Vigenère square, namely F. Similarly, for the second letter of the plaintext, the second letter of the key is used, the letter at row N, and column E is R. The rest of the plaintext is enciphered in a similar fashion. 

# Decryption:
Decryption is performed by going to the row in the table corresponding to the key, finding the position of the ciphertext letter in this row, and then using the column’s label as the plaintext. For example, in row A (from AYUSH), the ciphertext G appears in column G, which is the first plaintext letter. Next, we go to row Y (from AYUSH), locate the ciphertext C which is found in column E, thus E is the second plaintext letter. 

# Formula for Encryption and Decryption of Vigenere Cipher  

# Encryption
The plaintext(P) and key(K) are added modulo 26.
# Ei = (Pi + Ki) mod 26

# Decryption
# Di = (Ei - Ki) mod 26

Note: Di denotes the offset of the i-th character of the plaintext. Like offset of A is 0 and of B is 1 and so on.




# CAESAR CIPHER

# Features of caesar cipher:

Substitution cipher: The Caesar cipher is a type of substitution cipher, where each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet.
Fixed key: The Caesar cipher uses a fixed key, which is the number of positions by which the letters are shifted. This key is known to both the sender and the receiver.
Symmetric encryption: The Caesar cipher is a symmetric encryption technique, meaning that the same key is used for both encryption and decryption.
Limited keyspace: The Caesar cipher has a very limited keyspace of only 26 possible keys, as there are only 26 letters in the English alphabet.
Vulnerable to brute force attacks: The Caesar cipher is vulnerable to brute force attacks, as there are only 26 possible keys to try.
Easy to implement: The Caesar cipher is very easy to implement and requires only simple arithmetic operations, making it a popular choice for simple encryption tasks.


# Algorithm for Caesar Cipher: 

1. Choose a shift value between 1 and 25.
2. Write down the alphabet in order from A to Z.
3. Create a new alphabet by shifting each letter of the original alphabet by the shift value. For example, if the shift value is 3, the new alphabet would be:
  A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
  D E F G H I J K L M N O P Q R S T U V W X Y Z A B C
4. Replace each letter of the message with the corresponding letter from the new alphabet. For example, if the shift value is 3, the word “hello” would become “khoor”.
5. To decrypt the message, shift each letter back by the same amount. For example, if the shift value is 3, the encrypted message “khoor” would become “hello”.

# Procedure: 

1. Traverse the given text one character at a time .
2. For each character, transform the given character as per the rule, depending on whether we’re encrypting or decrypting the text.
3. Return the new string generated.

# Decryption:
We can either write another function decrypt similar to encrypt, that’ll apply the given shift in the opposite direction to decrypt the original text. However we can use the cyclic property of the cipher under modulo, hence we can simply observe 

The formula of encryption and decryption of Caesar Cipher is:
# Encryption
# En (x) = (x + n) mod 26

# Decryption 
# Dn (x) = (xi - n) mod 26

If any case (Dn) value becomes negative (-ve), in this case, we will add 26 in the negative value.
Where,
E denotes the encryption
D denotes the decryption
x denotes the letters value
n denotes the key value (shift value)

# Output
Text : ATTACKATONCE
Shift: 4
Cipher: EXXEGOEXSRGI


