<h2><a href="https://www.geeksforgeeks.org/problems/geek-hates-too-many-1s--170647/1">Maximum Without 3 Consecutive Set Bits</a></h2><h3>Medium</h3><hr>
<div>
<p><span style="font-size: 18px;">Given a non-negative integer <strong>n</strong>, you can only change a set bit (1) to an unset bit (0). </span><span style="font-size: 18px;">Find the maximum possible value of n such that its binary representation does not contain three consecutive set bits (111)</span><span style="font-size: 18px;">&nbsp;after performing zero or more allowed operations.</span></p><p><span style="font-size: 18px;"><strong>Examples:</strong></span></p><pre><span style="font-size: 18px;"><strong>Input:</strong> n = 2
<strong>Output:</strong> 2
<strong>Explanation: </strong>The binary representation of 2 is 10, which does not contain three consecutive set bits. Therefore, no change is required.</span></pre><pre><span style="font-size: 18px;"><strong>Input: </strong>n = 7
<strong>Output: </strong>6
<strong>Explanation: </strong>The binary representation of 7 is 111, which contains three consecutive set bits. Changing the rightmost set bit to 0 gives: 111 -&gt; 110. Thus, the maximum possible value is 6.</span>
</pre>
</div>

<hr>

### 📊 Submission Statistics
- **Language:** `cpp`
- **Runtime:** `1115s (1115000ms)`
- **Memory:** `N/A`
- **Test Cases:** `1115 / 1115 Passed`
- **Accuracy:** `58.04%`
- **Submission Date:** Fri, 16 Oct 2026 12:04:43 GMT

---

### 💡 Approach & Complexity Analysis
#### 🧠 Intuition & Algorithmic Strategy
- **Approach:** Linear scan and greedy state accumulation to resolve **Maximum Without 3 Consecutive Set Bits**.
- **Flow:**
  1. Initialize state variables and inspect base constraints.
  2. Iterate through input elements, maintaining current progress and boundaries.
  3. Return the calculated result satisfying problem criteria.

#### ⏱️ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N)$ — *Single linear pass over the input collection.*
- **Space Complexity:** $\mathcal{O}(1)$ — *In-place execution using only a constant number of auxiliary pointer variables.*

#### 📈 Time Complexity Graph (Operations vs Input Size $N$)
```mermaid
xychart-beta
    title "Time Complexity: O(N) — Linear Operations"
    x-axis "Input Size (N)" [10, 100, 300, 600, 1000]
    y-axis "Operations (Steps)" 0 --> 1000
    bar [10, 100, 300, 600, 1000]
    line [10, 100, 300, 600, 1000]
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
*Auto-synced with [LeetGitSyncPro](https://synccode-pro-18m.pages.dev)*
