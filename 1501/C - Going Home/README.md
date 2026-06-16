<h2><a href="https://codeforces.com/contest/1501/problem/C" target="_blank" rel="noopener noreferrer">1501C — Going Home</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1501C](https://codeforces.com/contest/1501/problem/C) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">C. Going Home</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>It was the third month of remote learning, Nastya got sick of staying at dormitory, so she decided to return to her hometown. In order to make her trip more entertaining, one of Nastya's friend presented her an integer array $$$a$$$. </p><p>Several hours after starting her journey home Nastya remembered about the present. To entertain herself she decided to check, are there four <span class="tex-font-style-bf">different</span> indices $$$x, y, z, w$$$ such that $$$a_x + a_y = a_z + a_w$$$.</p><p>Her train has already arrived the destination, but she still hasn't found the answer. Can you help her unravel the mystery?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the single integer $$$n$$$ ($$$4 \leq n \leq 200\,000$$$) — the size of the array.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 2.5 \cdot 10^6$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print "<span class="tex-font-style-tt">YES</span>" if there are such four indices, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>If such indices exist, print these indices $$$x$$$, $$$y$$$, $$$z$$$ and $$$w$$$ ($$$1 \le x, y, z, w \le n$$$).</p><p>If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005455470165043861" id="id0002120956076716396" class="input-output-copier">Copy</div></div><pre id="id005455470165043861">6
2 1 5 2 7 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00637880419128387" id="id0026987005463180125" class="input-output-copier">Copy</div></div><pre id="id00637880419128387">YES
2 3 1 6 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024353687538965574" id="id006140994260734252" class="input-output-copier">Copy</div></div><pre id="id0024353687538965574">5
1 3 1 9 20
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005761587075651579" id="id0004919492160401473" class="input-output-copier">Copy</div></div><pre id="id005761587075651579">NO</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example $$$a_2 + a_3 = 1 + 5 = 2 + 4 = a_1 + a_6$$$. Note that there are other answer, for example, <span class="tex-font-style-tt">2 3 4 6</span>.</p><p>In the second example, we can't choose four indices. The answer <span class="tex-font-style-tt">1 2 2 3</span> is wrong, because indices should be different, despite that $$$a_1 + a_2 = 1 + 3 = 3 + 1 = a_2 + a_3$$$</p></div>