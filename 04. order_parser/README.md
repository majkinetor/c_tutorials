# Simple parser

The text file contains billing information in the CSV file [orders.csv](./order.csv) which is in the CSV format with the header.

Parse the CSV file and create array of items. Create a function which, given the array as an argument, calculates and returns the total price of the order. 

## Implementation details

Array elements are of custom type struct which represent 1 CSV row. Read row by row (file lines) using `fgets`, then parse the row into the struct by finding `,` in it using `strchr_from`. Once struct type is filled with data, add it to the `orders` array. 

At the end, iterate over array and calculate total price using `for` loop.

```c
// Integrated strchr with start index...
char *strchr_from(const char *str, int c, size_t start_index) {
    if (str == NULL) {
        return NULL;
    }
    
    // Check if start_index is within bounds
    size_t len = strlen(str);
    if (start_index >= len) {
        return NULL;
    }
    
    return strchr(str + start_index, c);
}
```

```c
typedef struct  {
    char item_name[100];
    int quantity;
    double item_price;
} Order_Item;

Order_Item orders[100];
int orders_count=1;

while ( linija = citaj_iz_fajla('order.csv'))
{
    if (linja == EOF) { break }

    //linija = "Coke Zero,3,2.5"
    idxZarez1 = strchr_from(linja, ',', 0);
    idxZarez2 = strchr_from(linja, ',', idxZarez1+1);
    
    // Copy from position start to end
    for (int i = 0; i < end - start; i++) {
        sub[i] = str[start + i];
    }
    sub[end - start] = '\0';

    // strtok varijanta
    #include <string.h>

    char line[] = "apple,banana,orange";
    char *tokens[100];
    int count = 0;

    char *token = strtok(line, ",");
    while (token != NULL) {
        tokens[count++] = token;
        token = strtok(NULL, ",");
    }
    

    i = orders[orders_count++];
    i.item_name = 'Coke Zero';
    i.quantity = 3;
    i.item_price = 2.5
}





```

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

