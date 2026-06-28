<h2><a href="https://codeforces.com/contest/1421/problem/A" target="_blank" rel="noopener noreferrer">1421A — XORwice</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1421A](https://codeforces.com/contest/1421/problem/A) |

## Topics
`bitmasks` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. XORwice</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">In order to celebrate Twice's 5th anniversary, Tzuyu and Sana decided to play a game.</span></p><p>Tzuyu gave Sana two integers $$$a$$$ and $$$b$$$ and a really important quest.</p><p>In order to complete the quest, Sana has to output the smallest possible value of ($$$a \oplus x$$$) + ($$$b \oplus x$$$) for any given $$$x$$$, where $$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>. </p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^{4}$$$). Description of the test cases follows.</p><p>The only line of each test case contains two integers $$$a$$$ and $$$b$$$ ($$$1 \le a, b \le 10^{9}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, output the smallest possible value of the given expression.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id000239473713174706" id="id0018501695872862334" class="input-output-copier">Copy</div></div><pre id="id000239473713174706">6
6 12
4 9
59 832
28 14
4925 2912
1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009832492835228019" id="id008615600982261478" class="input-output-copier">Copy</div></div><pre id="id009832492835228019">10
13
891
18
6237
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case Sana can choose $$$x=4$$$ and the value will be ($$$6 \oplus 4$$$) + ($$$12 \oplus 4$$$) = $$$2 + 8$$$ = $$$10$$$. It can be shown that this is the smallest possible value.</p></div>