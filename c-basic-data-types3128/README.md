<h2><a href="https://www.geeksforgeeks.org/problems/c-basic-data-types3128/1">C++ Basic Data types</a></h2><h3>Easy</h3><hr>
<div>
<p><span style="font-size: 18px;">Given a String s. Find out which of the following basic C++ data types it represents and return it's size (in bytes).<br>The possible data types are:<br>1. Integer<br>2. Float<br>3. Double<br>4. Character</span></p><p><strong><span style="font-size: 18px;">Examples:</span></strong></p><pre><span style="font-size: 18px;"><strong>Input: </strong>s<strong> </strong>= a
<strong>output: </strong>1
<strong>Explanation: </strong>The string clearly represents char and thus the size of char is displayed.</span></pre><pre><span style="font-size: 18px;"><strong>Input </strong>s = 98.45685456
<strong>Output:</strong> 8
<strong>Explanation: </strong>The string represents Double.</span>
</pre>
</div>

<hr>

### 📊 Submission Statistics
- **Language:** `cpp`
- **Runtime:** `0 ms`
- **Memory:** `N/A`
- **Test Cases:** `9 /100005 Passed`
- **Accuracy:** `15.91%`
- **Submission Date:** Sat, 03 Oct 2026 18:54:24 GMT

---

### 💡 Approach & Complexity Analysis
#### 🧠 Intuition & Algorithmic Strategy
- **Approach:** Direct constant-time evaluation using bit manipulation, formulas, or branchless operations.
- **Flow:**
  1. Initialize state variables and inspect base constraints.
  2. Iterate through input elements, maintaining current progress and boundaries.
  3. Return the calculated result satisfying problem criteria.

#### ⏱️ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(1)$ — *Constant time operations with direct arithmetic or state manipulation.*
- **Space Complexity:** $\mathcal{O}(1)$ — *In-place execution using only a constant number of auxiliary pointer variables.*

#### 📈 Time Complexity Graph (Operations vs Input Size $N$)
```mermaid
xychart-beta
    title "Time Complexity: O(1) — Constant Operations"
    x-axis "Input Size (N)" [10, 100, 300, 600, 1000]
    y-axis "Operations (Steps)" 0 --> 10
    bar [1, 1, 1, 1, 1]
    line [1, 1, 1, 1, 1]
```

#### 📦 Space Complexity Graph (Memory Footprint vs Input Size $N$)
```mermaid
xychart-beta
    title "Space Complexity: O(1) — Constant Auxiliary Space"
    x-axis "Input Size (N)" [10, 100, 300, 600, 1000]
    y-axis "Memory Footprint (Units)" 0 --> 10
    bar [1, 1, 1, 1, 1]
    line [1, 1, 1, 1, 1]
```

---
*Auto-synced with [LeetGitSyncPro](https://synccode-pro.pages.dev)*
