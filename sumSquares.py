N = input()

# Get the input
numArray = map(int, input().split())

sum_integer = 0
# Write the logic to add these numbers here

for i in numArray:
    sum_integer += i**2


# Print the sum
print(sum_integer)
