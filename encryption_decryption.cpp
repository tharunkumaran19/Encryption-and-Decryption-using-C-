#include <iostream>
#include <string>
using namespace std;

// Function to perform Vigenere encryption
string vigenereEncrypt(const string& plaintext, const string& key) {
    string encryptedText = "";
    int keyLen = key.length();

    for (size_t i = 0; i < plaintext.length(); ++i) {
        char currentChar = plaintext[i];
        char keyChar = key[i % keyLen];

        // Check if the character is alphabetic
        if (!isalpha(currentChar)) {
            encryptedText += currentChar; // Non-alphabetic characters are added 
        } else {
            char shift;
            // Determine the shift amount based on the type of case of the character
            if (isupper(currentChar)) {
                shift = 'A';
            } else {
                shift = 'a';
            }
            // Apply the Vigenere encryption formula to the character
            char encryptedChar = (toupper(currentChar) - shift + toupper(keyChar) - 'A') % 26 + shift;
            encryptedText += encryptedChar;
        }
    }
    //return the encrypted text
    return encryptedText;
}

// Function to perform Vigenere decryption
string vigenereDecrypt(const string& ciphertext, const string& key) {
    string decryptedText = "";
    int keyLen = key.length();

    for (size_t i = 0; i < ciphertext.length(); ++i) {
        char currentChar = ciphertext[i];
        char keyChar = key[i % keyLen];

        // Check if the character is alphabetic
        if (!isalpha(currentChar)) {
            decryptedText += currentChar; // Non-alphabetic characters are added as is
        } else {
            char shift;
            // Determine the shift amount based on the case of the character
            if (isupper(currentChar)) {
                shift = 'A';
            } else {
                shift = 'a';
            }
            // Apply the Vigenere decryption formula to the character
            char decryptedChar = (toupper(currentChar) - shift - (toupper(keyChar) - 'A') + 26) % 26 + shift;
            decryptedText += decryptedChar;
        }
    }

    return decryptedText;
}

// Function to perform Caesar encryption
string caesarEncrypt(const string& text, int shift) {
    string result = "";

    for (size_t i = 0; i < text.length(); ++i) {
        char c = text[i];

        // Check if the character is alphabetic
        if (!isalpha(c)) {
            result += c; // Non-alphabetic characters are added as is
        } else {
            char shiftAmount;
            // Determine the shift amount based on the case of the character
            if (isupper(c)) {
                shiftAmount = 'A';
            } else {
                shiftAmount = 'a';
            }
            // Apply the Caesar encryption formula to the character
            result += (c - shiftAmount + shift + 26) % 26 + shiftAmount;
        }
    }

    return result;
}

// Function to perform Caesar decryption
string caesarDecrypt(const string& text, int shift) {
    return caesarEncrypt(text, 26 - shift); // Decryption is the inverse of encryption with shift=26-shift
}

int main()
{
    char choice,stop;
    int caesarShift;
    string plaintext, key, ciphertext;
    //switch case for Vigenerecipher and caesar cipher encryption and Decryption user defined inputs
    do
    {
    cout << "Choose an option:\n";
    cout << "1. Vigenere Encrypt\n";
    cout << "2. Vigenere Decrypt\n";
    cout << "3. Caesar Encrypt\n";
    cout << "4. Caesar Decrypt\n";
    cout << "Enter your choice (1, 2, 3, or 4): ";
    cin >> choice;
        switch (choice) {
    case '1':
        cout << "Enter the Vigenere key: ";
        cin >> key;
        cout << "Enter the plaintext: ";
        cin.ignore();
        getline(cin, plaintext);
        cout << "Vigenere Encrypted text is " << vigenereEncrypt(plaintext, key) << endl;
        break;
    case '2':
        cout << "Enter the Vigenere key: ";
        cin >> key;
        cout << "Enter the ciphertext: ";
        cin.ignore();
        getline(cin, ciphertext);
        cout << "Vigenere Decrypted text is " << vigenereDecrypt(ciphertext, key) << endl;
        break;
    case '3':
        cout << "Enter the Caesar shift (1-25): ";
        cin >> caesarShift;
        cout << "Enter the plaintext: ";
        cin.ignore();
        getline(cin, plaintext);
        cout << "Caesar Encrypted is " << caesarEncrypt(plaintext, caesarShift) << endl;
        break;
    case '4':
        cout << "Enter the Caesar shift (1-25): ";
        cin >> caesarShift;
        cout << "Enter the ciphertext: ";
        cin.ignore();
        getline(cin, ciphertext);
        cout << "Caesar Decrypted text is " << caesarDecrypt(ciphertext, caesarShift) << endl;
        break;
   
    }
    cout << "Do you want to continue? (Y/N)" << endl;
    cin >> stop;
   

    } while(toupper(stop) == 'Y');
}

