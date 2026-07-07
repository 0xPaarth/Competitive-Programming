<h2><a href="https://codeforces.com/contest/1325/problem/F" target="_blank" rel="noopener noreferrer">1325F — Ehab's Last Theorem</a></h2>

| | |
|---|---|
| **Difficulty** | 2500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1325F](https://codeforces.com/contest/1325/problem/F) |

## Topics
`constructive algorithms` `dfs and similar` `graphs` `greedy`

---

## Problem Statement

<div class="header"><div class="title">F. Ehab's Last Theorem</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>It's the year 5555. You have a graph, and you want to find a long cycle and a huge independent set, just because you can. But for now, let's just stick with finding either.</p><p>Given a connected graph with $$$n$$$ vertices, you can choose to either:</p><ul> <li> find an independent set that has <span class="tex-font-style-bf">exactly</span> $$$\lceil\sqrt{n}\rceil$$$ vertices.</li><li> find a <span class="tex-font-style-bf">simple</span> cycle of length <span class="tex-font-style-bf">at least</span> $$$\lceil\sqrt{n}\rceil$$$. </li></ul><p>An independent set is a set of vertices such that no two of them are connected by an edge. A simple cycle is a cycle that doesn't contain any vertex twice. I have a proof you can always solve one of these problems, but it's too long to fit this margin.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$5 \le n \le 10^5$$$, $$$n-1 \le m \le 2 \cdot 10^5$$$) — the number of vertices and edges in the graph.</p><p>Each of the next $$$m$$$ lines contains two space-separated integers $$$u$$$ and $$$v$$$ ($$$1 \le u,v \le n$$$) that mean there's an edge between vertices $$$u$$$ and $$$v$$$. It's guaranteed that the graph is connected and doesn't contain any self-loops or multiple edges.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If you choose to solve the first problem, then on the first line print "1", followed by a line containing $$$\lceil\sqrt{n}\rceil$$$ distinct integers not exceeding $$$n$$$, the vertices in the desired independent set.</p><p>If you, however, choose to solve the second problem, then on the first line print "2", followed by a line containing one integer, $$$c$$$, representing the length of the found cycle, followed by a line containing $$$c$$$ distinct integers integers not exceeding $$$n$$$, the vertices in the desired cycle, <span class="tex-font-style-bf">in the order they appear in the cycle</span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004586258816188368" id="id002786832476568054" class="input-output-copier">Copy</div></div><pre id="id004586258816188368">6 6
1 3
3 4
4 2
2 6
5 6
5 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009132889352240114" id="id0017855791820993072" class="input-output-copier">Copy</div></div><pre id="id0009132889352240114">1
1 6 4</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0035148480340660115" id="id006955017475566845" class="input-output-copier">Copy</div></div><pre id="id0035148480340660115">6 8
1 3
3 4
4 2
2 6
5 6
5 1
1 4
2 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006367217725398658" id="id006432938074119416" class="input-output-copier">Copy</div></div><pre id="id006367217725398658">2
4
1 5 2 4</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003318176508843016" id="id002702433853774854" class="input-output-copier">Copy</div></div><pre id="id003318176508843016">5 4
1 2
1 3
2 4
2 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002315370119051735" id="id009120076543804135" class="input-output-copier">Copy</div></div><pre id="id002315370119051735">1
3 4 5 </pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/64cdb4f94713ef3f85fed23b45e96ac7b168ce63.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>Notice that you can solve either problem, so printing the cycle $$$2-4-3-1-5-6$$$ is also acceptable.</p><p>In the second sample:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/198f1db2cc5176e2707516b52a98b61dcc5462cc.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>Notice that if there are multiple answers you can print any, so printing the cycle $$$2-5-6$$$, for example, is acceptable.</p><p>In the third sample:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/b58d7aaccc6d23d08528b3ce4f40f4e8bca8e13e.png" style="max-width: 100.0%;max-height: 100.0%;"></p></div>