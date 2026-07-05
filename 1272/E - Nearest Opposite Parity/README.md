<h2><a href="https://codeforces.com/contest/1272/problem/E" target="_blank" rel="noopener noreferrer">1272E — Nearest Opposite Parity</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1272E](https://codeforces.com/contest/1272/problem/E) |

## Topics
`dfs and similar` `graphs` `shortest paths`

---

## Problem Statement

<div class="header"><div class="title">E. Nearest Opposite Parity</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ integers. In one move, you can jump from the position $$$i$$$ to the position $$$i - a_i$$$ (if $$$1 \le i - a_i$$$) or to the position $$$i + a_i$$$ (if $$$i + a_i \le n$$$).</p><p>For each position $$$i$$$ from $$$1$$$ to $$$n$$$ you want to know the minimum the number of moves required to reach any position $$$j$$$ such that $$$a_j$$$ has the opposite parity from $$$a_i$$$ (i.e. if $$$a_i$$$ is odd then $$$a_j$$$ has to be even and vice versa).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of elements in $$$a$$$.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le n$$$), where $$$a_i$$$ is the $$$i$$$-th element of $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$n$$$ integers $$$d_1, d_2, \dots, d_n$$$, where $$$d_i$$$ is the minimum the number of moves required to reach any position $$$j$$$ such that $$$a_j$$$ has the opposite parity from $$$a_i$$$ (i.e. if $$$a_i$$$ is odd then $$$a_j$$$ has to be even and vice versa) or <span class="tex-font-style-tt">-1</span> if it is impossible to reach such a position.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00013705579544459168" id="id009975387424098305" class="input-output-copier">Copy</div></div><pre id="id00013705579544459168">10
4 5 7 6 7 5 4 4 6 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011864875187296586" id="id009933665847269605" class="input-output-copier">Copy</div></div><pre id="id0011864875187296586">1 1 1 2 -1 1 1 3 1 1 
</pre></div></div></div>