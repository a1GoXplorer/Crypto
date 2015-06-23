// Set 1 : Challenge 1
// Convert hex to base64

#include <iostream>
#include <string>
using namespace std;

int main () {

int BitSequence::from_hex_to_decimal(char hex) {
      
      if ('0' <= hex && hex <= '9') {
        return hex - '0';
      }

      if (hex >= 'A' && hex <= 'Z') {
        return hex - 'a' + 10;
      }
  }

  return 0;
};

  // 49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d
  //should produce...
  // SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t