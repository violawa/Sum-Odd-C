# Sum Odd and Even Indexed Numbers in C

This is a simple C program that reads a specified number of integers from the user, stores them in an array, and then calculates the sum of numbers at odd and even positions separately.

## Features

- Prompts the user to input the number of integers.
- Reads the integers and stores them in an array.
- Calculates the sum of numbers at odd positions and even positions.
- Displays the results.

## Usage

1. **Clone the repository:**

    ```sh
    git clone https://github.com/username/repository.git
    cd repository
    ```

2. **Compile the program:**

    ```sh
    gcc -o sum_indices sum_indices.c
    ```

3. **Run the program:**

    ```sh
    ./sum_indices
    ```

4. **Input the number of integers and the integers themselves when prompted.**

## Example

```sh
Masukkan jumlah angka yang ingin diinput: 5
Masukkan angka ke-1: 1
Masukkan angka ke-2: 2
Masukkan angka ke-3: 3
Masukkan angka ke-4: 4
Masukkan angka ke-5: 5
Jumlah angka di urutan ganjil: 9
Jumlah angka di urutan genap: 6
```

### Notes

- The program assumes a 1-based index for user interaction while using 0-based indexing internally.
- Ensure that the entered number of integers is a positive integer for correct operation.
