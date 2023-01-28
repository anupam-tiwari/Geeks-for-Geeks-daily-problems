from collections import Counter

# Initialize a list of elements
elements = ['a', 'b', 'c', 'a', 'b', 'b']

# Create a Counter object
counts = Counter(elements)

# Print the counts of each element
print(counts)
# Output: Counter({'b': 3, 'a': 2, 'c': 1})
