#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string converted = s;
    string temp = converted.substr(0,2);
    string temp2 = converted.substr(2,6);
    converted.pop_back();
    converted.pop_back();
    if(s[8] == 'A'){
        if(temp == "12"){
            converted[0] = '0';
            converted[1] = '0';
        }
        else {
            return converted;
        }
    }else {
        if(temp == "01"){
            return "13" + temp2;
        } else if (temp == "02") {
            return "14" + temp2;
        } else if (temp == "03") {
            return "15" + temp2;
        } else if (temp == "04") {
            return "16" + temp2;
        } else if (temp == "05") {
            return "17" + temp2;
        } else if (temp == "06") {
            return "18" + temp2;
        } else if (temp == "07") {
            return "19" + temp2;
        } else if (temp == "08") {
            return "20" + temp2;
        } else if (temp == "09") {
            return "21" + temp2;
        } else if (temp == "10") {
            return "22" + temp2;
        } else if (temp == "11") {
            return "23" + temp2;
        }
    }
    return converted;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
