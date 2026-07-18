<h2><a href="https://codeforces.com/contest/2247/problem/E" target="_blank" rel="noopener noreferrer">2247E — Build a Tree</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2247E](https://codeforces.com/contest/2247/problem/E) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">E. Build a Tree</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>  </p><p>You are given two integers $$$n$$$ and $$$k$$$.</p><p>Construct a tree$$$^{\text{∗}}$$$ with $$$n$$$ vertices such that $$$\sum\limits_{i = 1}^{n} \operatorname{dist}(i, (i \bmod n) + 1) = k$$$$$$^{\text{†}}$$$, or determine that no such tree exists.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$A tree is a connected graph without cycles.</p><p>$$$^{\text{†}}$$$$$$\operatorname{dist}(i, j)$$$ is the number of edges on the shortest path from vertex $$$i$$$ to vertex $$$j$$$ in the tree.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The only line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$2 \le n \le 2 \cdot 10^5$$$, $$$0 \le k \le n^2$$$) — the number of vertices in the tree and the required value of $$$k$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if there is no solution, output $$$-1$$$.</p><p>Otherwise, output $$$n - 1$$$ lines. Each line should contain two integers $$$u$$$ and $$$v$$$ ($$$1 \le u, v \le n$$$), denoting an edge of the tree. The edges may be output in any order.</p><p>If there are multiple suitable trees, output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009025062873117223" id="id0031535820877853016" class="input-output-copier">Copy</div></div><pre id="id009025062873117223"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">2 2</div><div class="test-example-line test-example-line-even test-example-line-2">4 6</div><div class="test-example-line test-example-line-odd test-example-line-3">5 10</div><div class="test-example-line test-example-line-even test-example-line-4">5 14</div><div class="test-example-line test-example-line-odd test-example-line-5">100 8347</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00014190020971901363" id="id005774337197287354" class="input-output-copier">Copy</div></div><pre id="id00014190020971901363">1 2
1 4
1 3
1 2
3 2
3 4
4 1
5 3
-1
-1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the tree consists of the single edge $$$(1, 2)$$$. Therefore, $$$\operatorname{dist}(1, 2) + \operatorname{dist}(2, 1) = 1 + 1 = 2$$$.</p><p>In the second example, one possible tree is shown below.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/bf0a7c2e93e066e51c7d2415aaba0d13284de565.png" style="max-width: 100.0%;max-height: 100.0%;" width="378px"> </center><p>For this tree, $$$\operatorname{dist}(1, 2) + \operatorname{dist}(2, 3) + \operatorname{dist}(3, 4) + \operatorname{dist}(4, 1) = 1 + 2 + 2 + 1 = 6$$$.</p><p>In the fourth example, it can be shown that no suitable tree exists.</p></div>