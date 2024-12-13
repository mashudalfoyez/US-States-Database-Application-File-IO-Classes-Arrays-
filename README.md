# US States Database Application

A C++ application that reads and processes information about U.S. states from a file and allows users to search for state details.  
This project showcases object-oriented programming, file I/O handling, and data structure usage in C++.

## Features

- **Efficient Search Options**  
  - Search by **State Abbreviation** (e.g., MI).  
  - Search by **Year of Statehood** (e.g., 1837).

- **Data Display in Tabulated Format**  
  - Outputs search results clearly in a table with:  
    ```plaintext
    State Name | Capital | Population | Year | #Congress
    MI          | Lansing   | 9,923,000   | 1837   | 14
    ```

- **Robust File Handling**  
  Reads data from `usstates.txt` and stores it in a class-based structure.

- **User Input Validation**  
  Ensures valid interactions and meaningful search results.

---

## Technologies Used

- **Programming Language:** C++
- **Libraries/Features:**  
  - **Standard Template Library (STL)**  
  - **File I/O (ifstream, ofstream)**  

---

## Setup Instructions

1. **Clone the Repository**  
   Open your terminal and run:  
   ```bash
   git clone https://github.com/rsportye/us-states.git
