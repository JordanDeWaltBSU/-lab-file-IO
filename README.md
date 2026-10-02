# -lab-file-IO

# File Input/Output Lab

## Description

This program reads data from a CSV file. Each line contains two integers and a word. The program adds the two integers together and prints the word that many times.

## Algorithm / Pseudocode

1. Start the program.
2. Open the `data.csv` file for reading.
3. Create variables to store each line, temporary string data, the word, and the two integers.
4. Read the file one line at a time.
5. Create a stringstream using the current line.
6. Read the first value from the stringstream up to the comma.
7. Convert the first value from a string to an integer.
8. Read the second value from the stringstream up to the comma.
9. Convert the second value from a string to an integer.
10. Read the remaining text as the word.
11. Add the two integers together.
12. Repeat a loop for the resulting total.
13. Print the word during each repetition.
14. Move to a new line after the word has been printed the required number of times.
15. Continue until every line in the file has been processed.
16. Close the file.
17. End the program.

## Example

For this line:

`1, 2, this`

The program calculates:

`1 + 2 = 3`

and prints:

`this this this`

## Personal Style

I organized the program into clear sections for reading the file, converting the CSV data, calculating the total, and printing the results.

## Testing

The program was tested using the provided `data.csv` file and produces the expected output.
