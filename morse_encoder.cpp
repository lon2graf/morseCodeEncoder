#include <string>
#include <iostream>

std::string getSymb(std::string morseLet){

        if (morseLet ==  ".-"){
            return "A";
        }

        else if (morseLet == "-..."){
            return "B";
        }

        else if (morseLet == "-.-."){
            return "C";
        }

        else if (morseLet ==  "-.."){
            return "D";
        }

        else if (morseLet == "."){
            return "E";
        }

        else if (morseLet == "..-."){
            return "F";
        }

        else if (morseLet == "--."){
            return "G";
        }

        else if (morseLet == "...."){
            return "H";
        }

        else if (morseLet == ".."){
            return "I";
        }

        else if (morseLet ==  ".---"){
            return "J";
        }

        else if (morseLet == "-.-"){
            return "K";
        }

        else if (morseLet == ".-.."){
            return "L";
        }

        else if (morseLet == "--"){
            return "M";
        }

        else if (morseLet == "-."){
            return "N";
        }

        else if (morseLet == "---"){
            return "O";
        }

        else if (morseLet == ".--."){
            return "P";
        }

        else if (morseLet == "--.-"){
            return "Q";
        }

        else if (morseLet == ".-."){
            return "R";
        }

        else if (morseLet == "..."){
            return "S";
        }

        else if (morseLet == "-"){
            return "T";
        }

        else if (morseLet == "..-"){
            return "U";
        }

        else if (morseLet == "...-"){
            return "V";
        }

        else if (morseLet == ".--"){
            return "W";
        }

        else if (morseLet == "-..-"){
            return "X";
        }

        else if (morseLet == "-.--"){
            return "Y";
        }

        else if (morseLet == "--.."){
            return "Z";
        }

        else if (morseLet == ".-.-.-"){
            return ".";
        }
        else if (morseLet == ".-.-.-"){
            return ",";
        }
        else if (morseLet == "-.-.--"){
            return "!";
        }
        else if (morseLet == "...---..."){
            return "SOS";
        }

    return "";
}


std::string decodeMorse(std::string morseCode) {

    // удаляем ненужные пробелы code - входная строка только без пробелов в начале  в конце
    unsigned long i = 0;
    std::string code_nospace;
    while (morseCode[i] == ' '){
        i += 1;
    }
    while (i < morseCode.size()){
        code_nospace += morseCode[i];
        i += 1;
    }
    i = code_nospace.size();
    while (code_nospace[i-1] == ' '){
        i = i - 1;
    }
    unsigned long j = 0;
    std::string code;
    while (j < i){
        code += code_nospace[j];
        j += 1;
    }
    i = 0;
    std::string morse_let;
    std::string decoded;

    while (i < code.size()){
        if (code[i] != ' '){
            morse_let += code[i];
        }

        if ((code[i] == ' ') ||(i == code.size() - 1)){
            if ((code[i + 1] == ' ') && (code[i + 2] == ' ')){
                decoded += getSymb(morse_let);
                morse_let = "";
                decoded += " ";
                i += 3;
                continue;
            }
            decoded += getSymb(morse_let);
            morse_let = "";
        }
        i += 1;

    }
    return decoded;
    }



int main(){
    std::cout << decodeMorse("...---...");
}

