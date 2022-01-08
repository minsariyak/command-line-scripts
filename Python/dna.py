# importing necessary files
from sys import argv, exit
from csv import reader

# validating command-line arguments
if len(argv) != 3:
    print("Usage: python dna.py data.csv sequence.txt")
    exit(1)

# loading files into memory
csvFile = open(argv[1])
sequencesFile = open(argv[2])

# transfering csv database to a list data structure
csvReader = reader(csvFile)
data = list(csvReader)

# making dna sequence accessible as a string
sequences = sequencesFile.read()

# initialising empty dictionary that stores maximum count of each STR
tracker = {}

# Computing highest consecutive count of each STR and storing it in the above dictionary
for i in range(len(data[0]) - 1):
    count = 0
    pattern = data[0][i + 1]
    while pattern in sequences:
        count += 1
        pattern += data[0][i + 1]
    tracker[data[0][i + 1]] = count

person = []
same = False
end = True

# comparing the value computed above to the data stored in the list to find the person associated with the given dna sequence
for i in range(len(data) - 1):
    for j in range(len(data[0]) - 1):
        if int(data[i + 1][j + 1]) != int(tracker[data[0][j + 1]]):
            person = []
            break
        else:
            person.append(data[i + 1][0])

    for x in range(len(person) - 1):
        if data[i + 1][0] == person[x]:
            same = True
        else:
            same = False

    if same:
        print(person[0])
        end = False
        break

# display result when no match found
if end:
    print("No Match")