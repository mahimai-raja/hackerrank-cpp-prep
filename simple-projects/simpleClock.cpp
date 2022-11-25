#include<iostream>
#include<unistd.h>
#include<string>

using namespace std;

int main()
{
    int delay = 1000;
    int h, m, s;
    cout << "Enter the current time" << endl;
    cin >> h >> m >> s;
    if (h > 12 || m > 60 || s > 60)
    {
        cout << "Invalid time format";
        exit (0);
    }
    while(true){
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 0;
        }
        string a;
        cout << "Clock :" << endl;
        std::string hour = std::to_string(h);
        std::string minute = std::to_string(m);
        std::string seconds = std::to_string(s);
        // cout << h << " : " << m << " : " << s << endl;
        string result = "figlet "+hour + " : " + minute + " : " + seconds ;
        int n = result.length();
        char char_array[n + 1];
        strcpy(char_array, result.c_str());
        system(char_array);
        usleep(delay * 1000);
        // cout << "\033[2J\033[1;1H";      // - You use this also instead of system clear
        system("clear");              
        
    }
    
    return 0;
}