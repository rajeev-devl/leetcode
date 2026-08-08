class Solution {
public:
    int dayOfYear(string date) {

        stringstream ss(date);

        string yearStr, monthStr, dayStr;

        getline(ss, yearStr, '-');
        getline(ss, monthStr, '-');
        getline(ss, dayStr, '-');

        int year = stoi(yearStr);
        int month = stoi(monthStr);
        int day = stoi(dayStr);

        int monthsOfYear[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31};

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            monthsOfYear[2] = 29;
        }
        int res = 0;
        for (int i = 1; i < month; i++) {
            res += monthsOfYear[i];
        }

        return res + day;
    }
};