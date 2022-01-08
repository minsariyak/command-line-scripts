# Importing necessary files
import sys
import cs50

# Checking command-line arguements
if len(sys.argv) != 2:
    print("Error")
    sys.exit(1)

# Making database accessible
db = cs50.SQL("sqlite:///students.db")

# Running SELECT query to get appropriate data and storing it in a dictionary
students = db.execute("SELECT first, middle, last, birth FROM students WHERE house = ? ORDER BY last, first;", sys.argv[1])

# Looping through dictionary and displaying appropriate output
for row in students:
    first = row['first']
    middle = row['middle']
    last = row['last']
    birth = row['birth']

    if str(middle) == 'None':
        print(first, last, birth)
    else:
        print(first, middle, last, birth)