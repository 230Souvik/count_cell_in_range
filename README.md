Count Number of Cells (Method-1)
In the following example, we have a few values in column A, and you need to count the cells from the range A1:B10. And for this, we will use the ROWS and COLUMNS functions.

Steps to write the formula:

First of all, in cell D1, enter “=ROWS (A1:B10)“.
Next, type the asterisk sign (*) to multiply the values.
After that, you need to enter the COLUMN function by referring to the same range (COLUMNS(A1:B10).
In the end, press enter button to the result in the cell.
rows-and-columns-function
![image](https://github.com/230Souvik/count_cell_in_range/assets/135532224/51a8dfbd-5de0-4e07-901f-9376db0c1afe)


Now as you can see, when you hit enter, it returns 20 in the result as you have a total of 20 cells in the range you have specified.

cells-count-result
![image](https://github.com/230Souvik/count_cell_in_range/assets/135532224/71e201c0-e210-4c33-9de1-ee1cb4647f9a)


Now let’s try to understand the formula that we have used here. In the first part, we have used the ROWS function which returns the number of rows that you have in a range. Here it returns 10 as you have ten rows in the range A1 to B10.

rows-formula
![image](https://github.com/230Souvik/count_cell_in_range/assets/135532224/e4cce711-b4b3-4354-b71b-1047d3b79f18)


Now when next you have the COLUMNS function that returns the number of columns you have in a range. Here it returns 2 as you have two columns in the range A1 to B10.

columns-formula
In the end, you have an asterisk sign between both the values to multiply rows and columns to get the total number of cells in the range.

Combine COUNTA – COUNTBLANK to Count Cells from a Range
The second method wants you to combine COUNTA and COUNTBLANK functions. By combining both functions you can count all the non-blank cells and all the blank cells from a range. Below we have the same example that we used in the first example.


In cell D1, you can enter the following formula:

=COUNTA(A1:B10)+COUNTBLANK(A1:B10)
counta-countblank-formula
As I said, this formula works in two parts:

COUNTA function counts the cells where you have values.
COUNTBLANK function counts the cells where you don’t have values.
In the end, you have a “+ sign” which sums both numbers and returns you the total count of cells that you have in the range that you have specified.

