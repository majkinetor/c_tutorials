# Simple parser

Text file contains billing information in the text file [orders.csv](./order.csv) which is in the CSV format with the header.

Parse the CSV file and create array of items. Create function tht given the array as argument, calculates and returns the total price of the order. 

## Implementation details

Array elements are of custom type struct which represents 1 CSV row. Read row by row (file lines) using `fgets`, then parse raw into the struct by finding `,` in it using `strchr`. Once struct type is filled with data, add it to the `orders` array. 

At the end, iterate over array and calculate total price using `for` loop.

## CSV format

CSV (comma separated values) represents a table using only text

Format is very simple: 

1. rows are separated by new line (`\n`)
1. columns are separated by comma (`,`)
1. may have a header with column names

Given the order table: 

| Name             | Quantity | Price |
|------------------|----------|-------|
| Coke Zero        |        3 |   2.5 |
| Hand made juice  |        2 |   5.0 |

The CSV format looks like this:

```csv
Name,Quantity,Price
Coke Zero,3,2.5
Hand make juice,2,5.0
```

## Learn

- [Struct type](../_quick%20reference/30.%20struct.md)
- [File function](../_quick%20reference/50.%20files.md)

## Notes

1. Install [CSV](https://marketplace.visualstudio.com/items?itemName=ReprEng.csv) extension for VS Code to present it as a table

