# 🎮 Tic Tac Toe Game – C++ Console Project

## 📌 Project Overview

This is a simple **console-based Tic Tac Toe game** implemented in **C++**. It allows two players to play alternately on a 3x3 grid. The project showcases fundamental programming skills, including:

- 2D array manipulation
- User input handling
- Game logic
- Input validation
- Console UI design

---

## 🧩 Key Components

### 🔲 1. Game Board

- Represented using a 3x3 character array: `char board[3][3]`
- Initially filled with numbers 1–9 for position reference
- Displays formatted grid using ASCII characters

### ⚙️ 2. Core Functions

#### `displayBoard()`

- Displays the current state of the grid with `X` and `O` positions
- Keeps the layout user-friendly and readable

#### `checkWin()`

- Evaluates if a player has won the game
- Checks:
  - All rows
  - All columns
  - Two diagonals

#### `isBoardFull()`

- Determines whether the game ends in a draw
- Returns true if there are no available moves left

---

## 🔁 Main Game Loop

- Alternates turns between Player 1 (`X`) and Player 2 (`O`)
- Accepts and validates player input
- Updates the board accordingly
- Checks for win or draw conditions after each move

---

## ✅ Input Validation

- Accepts only values between 1 and 9
- Rejects already occupied positions
- Provides relevant error messages for invalid input

---

## 🔄 Game Flow

1. The empty board (numbered 1–9) is displayed
2. Players take turns entering their moves
3. Board updates after every valid move
4. After each move:
   - Check for win
   - Check for draw
5. Game ends with either:
   - A win
   - A draw

---

## 👨‍💻 Technical Implementation

- Language: **C++**
- Tools: Any C++ compiler (e.g., `g++`)
- No third-party libraries used
- Fully modular with clearly separated functions

---

## 🖥️ User Interface

- Console-based interface
- Clean grid display with separators
- Prompts for player turns and errors
- Announces the winner or draw clearly at game end

---

## 🕹️ Game Rules

1. Player 1 is `X`, Player 2 is `O`
2. Players alternate turns
3. The first player to align three symbols (horizontal/vertical/diagonal) wins
4. The game ends in a draw if all spaces are filled
5. Invalid moves are not accepted

---

## 🚀 How to Play

1. Compile the C++ source code using `g++`:
   ```bash
   g++ -o tictactoe tictactoe.cpp
   ./tictactoe
   ```
