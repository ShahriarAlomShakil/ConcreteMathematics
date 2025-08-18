# Concrete Mathematics - Classic Problems

**Author:** Shahriar Alom  
**Email:** shahriaralomshakil@gmail.com  
**Repository:** https://github.com/ShahriarAlomShakil/ConcreteMathematics

This repository contains C++ implementations of three classic problems from discrete mathematics and computer science. Each problem is solved using both recursive and iterative approaches.

## Problems Included

1. **Tower of Hanoi**
2. **Josephus Problem**
3. **Lines in the Plane**

---

## 1. Tower of Hanoi

### Problem Description
The Tower of Hanoi is a classic puzzle consisting of three rods and n disks of different sizes. The goal is to move all disks from the source rod to the destination rod following these rules:
- Only one disk can be moved at a time
- Only the top disk from any rod can be moved
- A larger disk cannot be placed on top of a smaller disk

### Files
- `tower_hanoi_count_recursive.cpp` - Recursive solution that only counts total moves
- `tower_hanoi_count_iterative.cpp` - Iterative solution that only counts total moves

### Algorithm Analysis

#### Recursive Approach
**Time Complexity:** O(2^n)
**Space Complexity:** O(n) - due to recursion stack

**Logic:**
1. Move n-1 disks from source to auxiliary rod
2. Move the largest disk from source to destination
3. Move n-1 disks from auxiliary to destination rod

**Recurrence Relation:** T(n) = 2T(n-1) + 1, T(1) = 1

#### Iterative Approach
**Time Complexity:** O(2^n)
**Space Complexity:** O(2^n) - explicit stack usage

**Logic:**
Uses a stack to simulate the recursive calls. Each stack element contains the move parameters and a flag indicating whether it's an actual move or needs further decomposition.

#### Count-Only Versions
**Files:** `tower_hanoi_count_recursive.cpp` and `tower_hanoi_count_iterative.cpp`

These versions calculate the total number of moves without displaying each step:
- **Recursive Count:** Uses recurrence T(n) = 2T(n-1) + 1
- **Iterative Count:** Uses loop with formula: result = result * 2 + 1
- **Efficiency:** Much faster execution for large n values
- **Output:** Only shows the final count

### Key Exam Points
- **Base Case:** When n=1, directly move the disk
- **Recursive Case:** Decompose into three steps
- **Total Moves:** 2^n - 1
- **Mathematical Formula:** T(n) = 2^n - 1
- **Optimization:** Count-only versions for efficiency

---

## 2. Josephus Problem

### Problem Description
n people stand in a circle. Starting from a designated person, every 2nd person (skipping 1 person) is eliminated until only one person remains. This is the classic Josephus problem with k=2.

### Files
- `josephus_recursive.cpp` - Recursive solution
- `josephus_iterative.cpp` - Iterative solution

### Algorithm Analysis

#### Recursive Approach
**Time Complexity:** O(n)
**Space Complexity:** O(n) - recursion stack

**Logic:**
- J(n,2) = (J(n-1,2) + 2 - 1) % n + 1
- Base case: J(1,2) = 1
- Always uses k=2 (skip 1 person, eliminate next)

**Recurrence Relation:** J(n,2) = (J(n-1,2) + 2) % n (0-indexed)

#### Iterative Approach
**Time Complexity:** O(n)
**Space Complexity:** O(1)

**Logic:**
Start with 0 position for n=1, then for each additional person, calculate the new position using the formula with k=2.

### Key Exam Points
- **Fixed k=2:** Always skip 1 person, eliminate the next
- **0-indexed vs 1-indexed:** Be careful about the indexing system
- **Modular Arithmetic:** Essential for circular arrangement
- **Base Case:** Only one person survives at position 1
- **Formula:** J(n,2) = (J(n-1,2) + 2) % n
- **Classic Problem:** This is the traditional Josephus formulation

---

## 3. Lines in the Plane

### Problem Description
Given n lines in general position (no two lines are parallel, no three lines meet at a point), find the maximum number of regions the plane can be divided into.

### Files
- `lines_plane_recursive.cpp` - Recursive solution
- `lines_plane_iterative.cpp` - Iterative solution

### Algorithm Analysis

#### Recursive Approach
**Time Complexity:** O(n)
**Space Complexity:** O(n) - recursion stack

**Logic:**
- L(n) = L(n-1) + n
- Base case: L(0) = 1, L(1) = 2

#### Iterative Approach
**Time Complexity:** O(n)
**Space Complexity:** O(1)

**Logic:**
Start with 1 region (no lines), then for each additional line, add the number of regions it can create.

### Key Exam Points
- **Mathematical Formula:** L(n) = 1 + n(n+1)/2 = (n² + n + 2)/2
- **Arithmetic Progression:** Each new line adds exactly n new regions
- **Base Cases:** L(0) = 1, L(1) = 2
- **Pattern:** 1, 2, 4, 7, 11, 16, 22, ...

---

## Compilation and Execution

### Compile individual files:
```bash
g++ -o tower_count_recursive tower_hanoi_count_recursive.cpp
g++ -o tower_count_iterative tower_hanoi_count_iterative.cpp
g++ -o josephus_recursive josephus_recursive.cpp
g++ -o josephus_iterative josephus_iterative.cpp
g++ -o lines_recursive lines_plane_recursive.cpp
g++ -o lines_iterative lines_plane_iterative.cpp
```

### Run examples:
```bash
./tower_count_recursive
./tower_count_iterative
./josephus_recursive
./josephus_iterative
./lines_recursive
./lines_iterative
```

---

## File Variants Summary

### Tower of Hanoi (2 files)
1. **`tower_hanoi_count_recursive.cpp`** - Only calculates and shows total moves
2. **`tower_hanoi_count_iterative.cpp`** - Only calculates and shows total moves

### Josephus Problem (2 files) 
1. **`josephus_recursive.cpp`** - Classic problem with k=2 (skip 1 person)
2. **`josephus_iterative.cpp`** - Classic problem with k=2 (skip 1 person)

### Lines in Plane (2 files)
1. **`lines_plane_recursive.cpp`** - Recursive calculation of maximum regions
2. **`lines_plane_iterative.cpp`** - Iterative calculation of maximum regions

---

## Exam Preparation Summary

### Common Patterns
1. **Recursive Solutions:**
   - Define base case clearly
   - Express problem in terms of smaller subproblems
   - Understand the recurrence relation

2. **Iterative Solutions:**
   - Convert recursion to iteration using loops or stacks
   - Maintain state explicitly
   - Often more space-efficient

### Key Formulas to Remember
- **Tower of Hanoi:** T(n) = 2^n - 1
- **Josephus Problem (k=2):** J(n,2) = (J(n-1,2) + 2) % n
- **Lines in Plane:** L(n) = 1 + n(n+1)/2

### Problem-Solving Tips
1. Always identify the base case first
2. Look for patterns in small examples
3. Verify your formula with known values
4. Consider both time and space complexity
5. Practice converting between recursive and iterative forms

### Common Exam Questions
1. Write the recurrence relation
2. Solve for specific values (n=3, n=4, etc.)
3. Analyze time and space complexity
4. Convert recursive to iterative or vice versa
5. Prove correctness using mathematical induction
