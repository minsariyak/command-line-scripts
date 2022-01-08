# Importing necessary files
import csv
import sys
import cs50

# Ensuring right number of command-line arguements
if len(sys.argv) != 2:
    print("Error")
    sys.exit(1)

# Create database
db = cs50.SQL("sqlite:///students.db")

# Transfering data from csv file to database and parsing the name of each student
with open(sys.argv[1]) as file:
    reader = csv.DictReader(file)

    for row in reader:
        house = row['house']
        birth = row['birth']
        name = row['name']
        names = name.split(" ")
        if len(names) == 2:
            firstName = names[0]
            lastName = names[1]
            db.execute("INSERT INTO students (first, last, house, birth) VALUES (?, ?, ?, ?)", firstName, lastName, house, birth)
        else:
            firstName = names[0]
            middleName = names[1]
            lastName = names[2]
            db.execute("INSERT INTO students (first, middle, last, house, birth) VALUES (?, ?, ?, ?, ?)",
                       firstName, middleName, lastName, house, birth)

        names = []