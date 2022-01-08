# importing needed files
from cs50 import get_float

# declaring the needed variable
coinCount = 0

# getting user input
while True:
    change = get_float("Enter change amount: ")
    if change > 0:
        break

# converting to cents and rounding to nearest cent
change = round(change * 100)

# determining minimum number of coins needed for change
while change >= 25:
    change -= 25
    coinCount += 1

while change >= 10:
    change -= 10
    coinCount += 1

while change >= 5:
    change -= 5
    coinCount += 1

while change >= 1:
    change -= 1
    coinCount += 1

# displaying number of coins needed
print(f"{coinCount}")