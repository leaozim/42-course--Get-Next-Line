# Get Next Line (GNL)  

The purpose of this project is to get you creates a function that allows you to read a file line by line.

## Function Prototype
```c
int	get_next_line(int fd);
```
## Compilation and run

### GNL Mandatory Part

The program compile with the flag -D BUFFER_SIZE=xx. which will be used as the buffer size for the read calls in your get_next_line.

 :point_right: Locate in the **Get_Next_Line** folder.

**Mandatory:**
```bash
cc simple_tests/main.c -g -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c && ./a.out
```

### GNL Bonus Part

In the Bonus part, get_next_line() manages multiple file descriptors at the same time. In it you will be able to read a different fd per function call without losing the thread reading each file descriptor or returning a line from another fd.
Example: you will read from fd 1, then fd 2, then 1, then again fd2... without losing any information until you reach the end of the files.

 :point_right: Locate in the **Get_Next_Line** folder.
 
**Bonus:**
```bash
 cc simple_tests/main_bonus.c -g -Wall -Wextra -Werror -D BUFFER_SIZE=1 get_next_line_bonus.c get_next_line_utils_bonus.c && ./a.out
```

## Functions Used

**External Functions**

 | Function | Description         |
 |-----------|----------------------|
 |  read() | A line has been read |
 |  malloc() | EOF has been reached |
 |  free() | An error happened |

**Utility Functions**

 | Function | Description         |
 |-----------|----------------------|
 |  ft_strchr() | Finds the first occurrence of C (converted to a char) in the string pointed to by str. |
 |  ft_strjoin() | Allocates with malloc and returns a new string, which is the result of the concatenation of 's1' and 's2'. |
 |  ft_strdup() | Returns a pointer to a  new  string  which  is  a duplicate  of the string s. |
 |  ft_substr() | Returns a substring of the string 's'. The substring starts at index 'start' and is of maximum length 'len'. |
 |  ft_strlen() |  Calculates the length of the string s, excluding the terminating null byte ('\0') |