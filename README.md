# Encryption-and-Decryption-using-CPP
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

# Formula for Encryption and Decryption of Vigenere Cipher and Caesar Cipher  

# Encryption
The plaintext(P) and key(K) are added modulo 26.
# Ei = (Pi + Ki) mod 26

# Decryption
# Di = (Ei - Ki) mod 26

Note: Di denotes the offset of the i-th character of the plaintext. Like offset of A is 0 and of B is 1 and so on.
