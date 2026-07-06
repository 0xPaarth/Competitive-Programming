<h2><a href="https://codeforces.com/contest/1661/problem/B" target="_blank" rel="noopener noreferrer">1661B — Getting Zero</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1661B](https://codeforces.com/contest/1661/problem/B) |

## Topics
`bitmasks` `brute force` `dfs and similar` `dp` `graphs` `greedy` `shortest paths`

---

## Problem Statement

<div class="header"><div class="title">B. Getting Zero</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Suppose you have an integer $$$v$$$. In one operation, you can: </p><ul> <li> either set $$$v = (v + 1) \bmod 32768$$$ </li><li> or set $$$v = (2 \cdot v) \bmod 32768$$$. </li></ul><p>You are given $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$. What is the minimum number of operations you need to make each $$$a_i$$$ equal to $$$0$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the single integer $$$n$$$ ($$$1 \le n \le 32768$$$) — the number of integers.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0 \le a_i  \lt  32768$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$n$$$ integers. The $$$i$$$-th integer should be equal to the minimum number of operations required to make $$$a_i$$$ equal to $$$0$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023250999004250672" id="id0006944408949011704" class="input-output-copier">Copy</div></div><pre id="id0023250999004250672">4
19 32764 10240 49
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005748610960569427" id="id0011540238357021304" class="input-output-copier">Copy</div></div><pre id="id005748610960569427">14 4 4 15 </pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let's consider each $$$a_i$$$: </p><ul> <li> $$$a_1 = 19$$$. You can, firstly, increase it by one to get $$$20$$$ and then multiply it by two $$$13$$$ times. You'll get $$$0$$$ in $$$1 + 13 = 14$$$ steps. </li><li> $$$a_2 = 32764$$$. You can increase it by one $$$4$$$ times: $$$32764 \rightarrow 32765 \rightarrow 32766 \rightarrow 32767 \rightarrow 0$$$. </li><li> $$$a_3 = 10240$$$. You can multiply it by two $$$4$$$ times: $$$10240 \rightarrow 20480 \rightarrow 8192 \rightarrow 16384 \rightarrow 0$$$. </li><li> $$$a_4 = 49$$$. You can multiply it by two $$$15$$$ times. </li></ul></div>