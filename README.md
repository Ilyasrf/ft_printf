# 📝 ft_printf – 42 Project

<div align="center">
  <img src="https://drive.google.com/uc?id=14qoePZpzJNUWPCoepJ_Mmi8vrnd1xJAE" alt="Ft_Printf Header" width="100%">
</div>

<div align="center">
  <h1>ft_printf</h1>
  <p>A Custom Printf Implementation in C</p>

  ![C](https://img.shields.io/badge/language-C-blue.svg)
  ![42 School](https://img.shields.io/badge/school-42-blue)
  [![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/ilyas-rfei/ft_printf)
  [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
</div>

---

## 📖 Overview

The `ft_printf` project is a recoded version of the C standard library function `printf()`. It is designed to deepen the understanding of:
- **Variadic functions** (`va_list`, `va_start`, `va_arg`, `va_end`)
- **Formatted output handling**
- **Efficient memory management**
- **Custom library creation (`libftprintf.a`)**

---

## ✨ Features

### Supported Conversion Specifiers
| Specifier | Description |
|-----------|-------------|
| `%c` | Single character printing |
| `%s` | String printing |
| `%p` | Pointer address in hexadecimal |
| `%d` | Decimal (base 10) number |
| `%i` | Integer printing |
| `%u` | Unsigned decimal number |
| `%x` | Lowercase hexadecimal |
| `%X` | Uppercase hexadecimal |
| `%%` | Percent sign |

### Bonus Features
- `#`: Alternate form (e.g., `0x` for hexadecimal values)
- `+`: Always show the sign for numbers
- ` ` (space): Prefix a space for positive numbers

---

## 📂 Project Structure
```
ft_printf/
│
├── Makefile
├── ft_printf.h
├── ft_printf.c
│
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_putun.c
├── ft_puthex.c
├── ft_putp.c
│
└── bonus/
    │   ├── ft_printf_bonus.c
    │   ├── ft_printf_bonus.h
    │   ├── ft_putchar_bonus.c
    │   ├── ft_putstr_bonus.c
    │   ├── ft_putnbr_bonus.c
    │   ├── ft_putun_bonus.c
    │   ├── ft_puthex_bonus.c
    │   └── ft_putp_bonus.c
```

---

## ⚙️ Installation & Compilation

### Requirements
- GCC or Clang
- GNU Make

### Build Commands
To compile the mandatory part:
```bash
make
```
To compile the bonus part:
```bash
make bonus
```
This will generate the `libftprintf.a` library.

---

## 💻 Example Usage

```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s! Your number is %d\n", "World", 42);
    ft_printf("Pointer: %p\n", &main);
    ft_printf("Hex: %#x\n", 255);
    ft_printf("Unsigned: %u\n", 12345);
    return 0;
}
```

---

## 📜 Allowed Functions
- `malloc`
- `free`
- `write`
- `va_start`
- `va_arg`
- `va_copy`
- `va_end`

---

## 📘 Understanding ft_printf Syntax

### 📌 Variadic Functions
- `va_list` – Used to hold information about variable arguments.
- `va_start` – Initializes `va_list`.
- `va_arg` – Retrieves the next argument.
- `va_end` – Cleans up `va_list`.

Example:
```c
#include <stdarg.h>
#include <stdio.h>

void print_numbers(int count, ...) {
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        printf("%d ", va_arg(args, int));
    }
    va_end(args);
    printf("\n");
}

int main() {
    print_numbers(3, 10, 20, 30);
    return 0;
}
```

### 📌 Formatting Example
- `%d`: Prints an integer.
- `%s`: Prints a string.
- `%p`: Prints a pointer address.

Example:
```c
ft_printf("Name: %s, Age: %d, Address: %p\n", "John", 25, &main);
```

---

## 🔍 Debugging Tips
- Compare outputs with `printf()`.
- Handle edge cases (`NULL` pointers, empty strings, large numbers).
- Use `write(1, &char, 1);` to debug character output.

---

## 🎓 Learning Outcomes
This project enhances knowledge in:
- Implementing variadic functions
- Handling variable argument lists
- Complex type conversion and formatting
- Creating extensible C libraries

---

## 📄 License
Released under the MIT License. See the [LICENSE](LICENSE) file for details.

---

## 🙏 Acknowledgments
- Thanks to **42 School** for the challenging curriculum.
- Special thanks to peers and mentors for their support and feedback.

---

## 📝 Author
👨‍💻 **Ilyas Rfei**  
📧 [rfei.ilyas@gmail.com](mailto:ilyasrfei@gmail.com)  
🔗 [GitHub Profile](https://github.com/ilyasrf)
