# Get Next Line (GNL)  

The purpose of this project is to get you to code a function that creates a function that allows you to read a file line by line.

### Function Prototype
```c
int	get_next_line(int fd);
```
## Compilation

**GNL Mandatory Part**

The program compile with the flag -D BUFFER_SIZE=xx. which will be used as the buffer size for the read calls in your get_next_line.

 :point_right: Locate in the **Get_Next_Line** folder.

**GNL with files**
```bash
cc tests/main.c -g -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c

./a.out 
```

**GNL Bonus Part**
```bash
gcc tests/main_bonus.c -g -Wall -Wextra -Werror -D BUFFER_SIZE=1 get_next_line_bonus.c get_next_line_utils_bonus.c

./a.out
```
