<h2><a href="https://codeforces.com/contest/1805/problem/D" target="_blank" rel="noopener noreferrer">1805D — A Wide, Wide Graph</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1805D](https://codeforces.com/contest/1805/problem/D) |

## Topics
`dfs and similar` `dp` `graphs` `greedy` `trees`

---

## Problem Statement

<div class="header"><div class="title">D. A Wide, Wide Graph</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a tree (a connected graph without cycles) with $$$n$$$ vertices. </p><p>Consider a fixed integer $$$k$$$. Then, the graph $$$G_k$$$ is an undirected graph with $$$n$$$ vertices, where an edge between vertices $$$u$$$ and $$$v$$$ exists if and only if the distance between vertices $$$u$$$ and $$$v$$$ in the given tree is <span class="tex-font-style-bf">at least</span> $$$k$$$.</p><p>For each $$$k$$$ from $$$1$$$ to $$$n$$$, print the number of connected components in the graph $$$G_k$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the integer $$$n$$$ ($$$2 \le n \le 10^5$$$) — the number of vertices in the graph.</p><p>Each of the next $$$n-1$$$ lines contains two integers $$$u$$$ and $$$v$$$ ($$$1 \le u, v \le n$$$), denoting an edge between vertices $$$u$$$ and $$$v$$$ in the tree. It is guaranteed that these edges form a valid tree.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$n$$$ integers: the number of connected components in the graph $$$G_k$$$ for each $$$k$$$ from $$$1$$$ to $$$n$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006157798218329087" id="id0021907941508974393" class="input-output-copier">Copy</div></div><pre id="id006157798218329087">6
1 2
1 3
2 4
2 5
3 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006071439977025405" id="id008777588002171008" class="input-output-copier">Copy</div></div><pre id="id006071439977025405">1 1 2 4 6 6 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007174549763516365" id="id000863552471364516" class="input-output-copier">Copy</div></div><pre id="id007174549763516365">5
1 2
2 3
3 4
3 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005757136062917645" id="id00022153448492640893" class="input-output-copier">Copy</div></div><pre id="id005757136062917645">1 1 3 5 5 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example: If $$$k=1$$$, the graph has an edge between each pair of vertices, so it has one component. If $$$k=4$$$, the graph has only edges $$$4 \leftrightarrow 6$$$ and $$$5 \leftrightarrow 6$$$, so the graph has $$$4$$$ components.</p><p>In the second example: when $$$k=1$$$ or $$$k=2$$$ the graph has one component. When $$$k=3$$$ the graph $$$G_k$$$ splits into $$$3$$$ components: one component has vertices $$$1$$$, $$$4$$$ and $$$5$$$, and two more components contain one vertex each. When $$$k=4$$$ or $$$k=5$$$ each vertex is a separate component.</p></div>