#include <iostream>
#include <string>
#include <map>
using namespace std;

// A function that returns the number of days in a month
int days_in_month(int month) {
  switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      return 31;
    case 4: case 6: case 9: case 11:
      return 30;
    case 2:
      return 28; // Assuming it is not a leap year
    default:
      return 0; // Invalid month
  }
}
int count_days(string date) {
  map<string, int> months = {{"JAN", 1}, {"FEB", 2}, {"MAR", 3}, {"APR", 4}, {"MAY", 5}, {"JUN", 6}, {"JUL", 7}, {"AUG", 8}, {"SEP", 9}, {"OCT", 10}, {"NOV", 11}, {"DEC", 12}};
  int day = stoi(date.substr(0, 2));
  string month = date.substr(2, 3);

  // Check if the month is valid
  if (months.count(month) == 0) {
    return -1; // Invalid month
  }

  // Initialize the number of days to the day of the month
  int days = day;

  // Add the number of days in each previous month
  for (int i = 1; i < months[month]; i++) {
    days += days_in_month(i);
  }

  // Return the number of days
  return days;
}

int main() {
  // A sample input
    int t;
    cin>>t;
    while(t--){
        string date;
        cin>>date;
        cout<<count_days(date)<<endl;
    }
  return 0;
}
