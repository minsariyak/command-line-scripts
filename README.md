# Command-Line Scripts
### C Programs
- **caesar.c:** a program that encrypts messages using Caesar’s cipher passing the key as a command-line argument.
- **cash.c:** a program that first asks the user how much change is owed and then prints the minimum number of coins with which that change can be made.
- **plurality.c:** a program that runs a plurality election (whichever candidate has the greatest number of votes is declared the winner of the election).
- **readability.c:** a program that computes the approximate grade level needed to comprehend some text.
- **runoff.c:** a program that runs a runoff election (a ranked-choice voting system).
-**substitution.c:** a program that implements a substitution cipher using a 26-character key. 

### Python Programs
- **dna:** a program that identifies a person based on their DNA. It takes two command-line arguments; a database (CSV file) containing peoples names and their DNA information, and a text file containing the DNA sequence to identify.
    ###### Sample Output:
    > $ python dna.py databases/large.csv sequences/5.txt\
    
    > Lavender
- **houses:** a program that imports student data from a CSV file into a SQLite database, and then queries that database to produce class rosters.
    ###### Sample Output:
    > $ python import.py characters.csv\
    > $ python roster.py Gryffindor

    > Lavender Brown, born 1979\
    > Colin Creevey, born 1981\
    > Seamus Finnigan, born 1979\
    > Hermione Jean Granger, born 1979\
    > Neville Longbottom, born 1980\
    > Parvati Patil, born 1979\
    > Harry James Potter, born 1980\
    > Dean Thomas, born 1980\
    > Romilda Vane, born 1981\
    > Ginevra Molly Weasley, born 1981\
    > Ronald Bilius Weasley, born 1980

- **cash.py:** the same cash program above but in python
- **readability.py:** the same readability program above but in python 
