# importing necessary files
from cs50 import get_string

# declaring necessary variables
letters = 0
words = 0
sentences = 0

# getting user input
text = get_string("Enter text: ")

# looping through each character to find words, letters and sentences
for i in range(len(text)):
    if text[i] >= 'a' and text[i] <= 'z' or text[i] >= 'A' and text[i] <= 'Z':
        letters += 1

    if text[i] == " ":
        words += 1

    if text[i] == "." or text[i] == "?" or text[i] == "!":
        sentences += 1
# Average letters/100 words
L = (letters * 100) / (words + 1)

# Average sentences/100 words
S = (sentences * 100) / (words + 1)

# formula for calculating the index
index = float((0.0588 * L) - (0.296 * S) - 15.8)

# rounding the index to get the grade
grade = round(index)

# display results
if grade < 1:
    print("Before Grade 1")

elif grade >= 16:
    print("Grade 16+")

else:
    print(f"Grade {grade}")
