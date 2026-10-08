<h2><a href="https://www.geeksforgeeks.org/problems/maximum-frequency/1">Maximum Frequency with K Increments</a></h2><h3>Medium</h3><hr>
<div>
<p><span style="font-size: 18px;">Given an integer array <strong>arr[]</strong>.&nbsp;</span><span style="font-size: 18px;">In one operation, you can choose an index and increment its value by 1.</span></p><p><span style="font-size: 18px;">Find the </span><span style="font-size: 18px;">maximum possible frequency</span><span style="font-size: 18px;"> of any element a</span><span style="font-size: 18px;">fter performing at most k operations.</span></p><p><span style="font-size: 18px;"><strong>Examples:</strong></span></p><pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [2, 2, 4], k = 4
<strong>Output:</strong> 3
<strong>Explanation:</strong> Apply two increment operations on index 0 and two operations on index 1 to make arr[]= [4, 4, 4]. Frequency of 4 is 3.</span>
</pre><pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [7, 7, 7, 7], k = 5
<strong>Output:</strong> 4
<strong>Explanation:</strong> </span><span style="font-size: 14pt;">The frequency of 7 is already 4, so no operations are needed.</span></pre>
</div>

<hr>

### 📊 Submission Statistics
- **Language:** `cpp`
- **Runtime:** `1113s (1113000ms)`
- **Memory:** `N/A`
- **Test Cases:** `1113 / 1113 Passed`
- **Accuracy:** `67.31%`
- **Submission Date:** Thu, 08 Oct 2026 15:14:21 GMT

---

### 💡 Approach & Complexity Analysis
#### 🧠 Intuition & Algorithmic Strategy
- **Approach:** Two-pointer convergence squeezing the search window towards the target boundaries.
- **Flow:**
  1. Initialize state variables and inspect base constraints.
  2. Iterate through input elements, maintaining current progress and boundaries.
  3. Return the calculated result satisfying problem criteria.

#### ⏱️ Complexity Analysis
- **Time Complexity:** $\mathcal{O}(N \log N)$ — *Sorting the input elements dominates the algorithmic time complexity.*
- **Space Complexity:** $\mathcal{O}(N)$ — *Auxiliary lookup table or dynamically allocated buffer storing input elements.*

#### 📈 Time Complexity Graph (Operations vs Input Size $N$)
```mermaid
xychart-beta
    title "Time Complexity: O(N log N) — Linearithmic Growth"
    x-axis "Input Size (N)" [10, 100, 300, 600, 1000]
    y-axis "Operations (Steps)" 0 --> 10000
    bar [33, 664, 2470, 5537, 9966]
    line [33, 664, 2470, 5537, 9966]
```

#### 📦 Space Complexity Graph (Memory Footprint vs Input Size $N$)
```mermaid
xychart-beta
    title "Space Complexity: O(N) — Linear Memory Allocation"
    x-axis "Input Size (N)" [10, 100, 300, 600, 1000]
    y-axis "Memory Footprint (Units)" 0 --> 1000
    bar [10, 100, 300, 600, 1000]
    line [10, 100, 300, 600, 1000]
```

---
*Auto-synced with [LeetGitSyncPro](https://synccode-pro.pages.dev)*
