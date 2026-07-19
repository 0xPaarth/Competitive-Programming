<h2><a href="https://codeforces.com/contest/1325/problem/C" target="_blank" rel="noopener noreferrer">1325C — Ehab and Path-etic MEXs</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1325C](https://codeforces.com/contest/1325/problem/C) |

## Topics
`constructive algorithms` `dfs and similar` `greedy` `trees`

---

## Problem Statement

<div class="header"><div class="title">C. Ehab and Path-etic MEXs</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a tree consisting of $$$n$$$ nodes. You want to write some labels on the tree's edges such that the following conditions hold:</p><ul> <li> Every label is an integer between $$$0$$$ and $$$n-2$$$ inclusive. </li><li> All the written labels are distinct. </li><li> The largest value among $$$MEX(u,v)$$$ over all pairs of nodes $$$(u,v)$$$ is as small as possible. </li></ul><p>Here, $$$MEX(u,v)$$$ denotes the smallest non-negative integer that isn't written on any edge on the unique simple path from node $$$u$$$ to node $$$v$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the integer $$$n$$$ ($$$2 \le n \le 10^5$$$) — the number of nodes in the tree.</p><p>Each of the next $$$n-1$$$ lines contains two space-separated integers $$$u$$$ and $$$v$$$ ($$$1 \le u,v \le n$$$) that mean there's an edge between nodes $$$u$$$ and $$$v$$$. It's guaranteed that the given graph is a tree.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$n-1$$$ integers. The $$$i^{th}$$$ of them will be the number written on the $$$i^{th}$$$ edge (in the input order).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007484985480737374" id="id0008949794687387491" class="input-output-copier">Copy</div></div><pre id="id007484985480737374">3
1 2
1 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007693311775457568" id="id0010786975888060424" class="input-output-copier">Copy</div></div><pre id="id0007693311775457568">0
1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0025497702211341955" id="id008302676466493345" class="input-output-copier">Copy</div></div><pre id="id0025497702211341955">6
1 2
1 3
2 4
2 5
5 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009825005050536108" id="id005227104254561727" class="input-output-copier">Copy</div></div><pre id="id009825005050536108">0
3
2
4
1</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The tree from the second sample:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/f6df68c6c5c1b08e10c2945c8cd69295d2273c9d.png" style="max-width: 100.0%;max-height: 100.0%;"></p></div>