# Duo Stumper: Caesar Cipher 🔐

The main examen of the first year at Epitech, intensive 4-hour coding challenge completed in pairs. The objective was to develop a command-line utility implementing the classic **Caesar Cipher** algorithm, capable of processing data from both strings and files, with specific constraints on file permissions.

---

## 🚀 Features

- **Dual Input Modes:** Accepts input directly as a string or reads from a specified file.
- **Caesar Cipher Algorithm:** Shifts characters along the alphabet based on a dynamic integer key.
- **Secure Output:** Automatically generates a secure, **read-only** output file named `crypt` containing the result.
- **Robust Error Handling:** Validates command-line arguments, checks file existence, and handles invalid key formats safely.
- **Epitech Coding Style:** Built in strict compliance with the school's programming standards.

---

## 🛠️ Tech Stack & Constraints

- **Language:** C
- **Timeframe:** 4 Hours
- **Concepts:** Stream manipulation, UNIX file permissions, ASCII operations, and defensive programming.

---

## 💻 Usage

### Compilation
```bash
make
```

### Encrypt a file
```bash
./cesar -f input.txt 3
# Processes 'input.txt' and creates the read-only file 'crypt'
```

### Encrypt a string
```bash
./cesar -s hello 3
# Processes 'hello' and creates the read-only file 'crypt'
```
