# Function to convert month abbreviations to the corresponding day count
def month_to_days(month):
    months = {
        'JAN': 0,
        'FEB': 31,
        'MAR': 59,
        'APR': 90,
        'MAY': 120,
        'JUN': 151,
        'JUL': 181,
        'AUG': 212,
        'SEP': 243,
        'OCT': 273,
        'NOV': 304,
        'DEC': 334
    }
    return months.get(month, 0)

# Function to process each test case
def process_test_case():
    # Input the date in DDMMM format
    date = input().strip()

    # Extract day and month from the input
    day = int(date[:2])
    month_abbrev = date[2:]

    # Calculate the day of the year
    day_of_year = day + month_to_days(month_abbrev)

    # Output the result
    print(day_of_year)

# Input the number of test cases
T = int(input())

# Process each test case
for _ in range(T):
    process_test_case()
