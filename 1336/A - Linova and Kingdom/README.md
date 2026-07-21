<h2><a href="https://codeforces.com/contest/1336/problem/A" target="_blank" rel="noopener noreferrer">1336A — Linova and Kingdom</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1336A](https://codeforces.com/contest/1336/problem/A) |

## Topics
`dfs and similar` `dp` `greedy` `sortings` `trees`

---

## Problem Statement

<div class="header"><div class="title">A. Linova and Kingdom</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Writing light novels is the most important thing in Linova's life. Last night, Linova dreamed about a fantastic kingdom. She began to write a light novel for the kingdom as soon as she woke up, and of course, she is the queen of it.</p><center><img class="tex-graphics" src="https://espresso.codeforces.com/3c9feee64419eafec6d59e848358a3d2728c4ad0.png" style="max-width: 100.0%;max-height: 100.0%;"></center> <p>There are $$$n$$$ cities and $$$n-1$$$ two-way roads connecting pairs of cities in the kingdom. From any city, you can reach any other city by walking through some roads. The cities are numbered from $$$1$$$ to $$$n$$$, and the city $$$1$$$ is the capital of the kingdom. So, the kingdom has a tree structure.</p><p>As the queen, Linova plans to choose <span class="tex-font-style-bf">exactly</span> $$$k$$$ cities developing industry, while the other cities will develop tourism. The capital also can be either industrial or tourism city.</p><p>A meeting is held in the capital once a year. To attend the meeting, each <span class="tex-font-style-bf">industry city</span> sends an envoy. All envoys will follow the shortest path from the departure city to the capital (which is unique).</p><p>Traveling in tourism cities is pleasant. For each envoy, his <span class="tex-font-style-it">happiness</span> is equal to the number of <span class="tex-font-style-bf">tourism cities</span> on his path.</p><p>In order to be a queen loved by people, Linova wants to choose $$$k$$$ cities which can maximize the sum of <span class="tex-font-style-it">happinesses</span> of all envoys. Can you calculate the maximum sum for her?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ ($$$2\le n\le 2 \cdot 10^5$$$, $$$1\le k \lt  n$$$)  — the number of cities and industry cities respectively.</p><p>Each of the next $$$n-1$$$ lines contains two integers $$$u$$$ and $$$v$$$ ($$$1\le u,v\le n$$$), denoting there is a road connecting city $$$u$$$ and city $$$v$$$.</p><p>It is guaranteed that from any city, you can reach any other city by the roads.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the only line containing a single integer  — the maximum possible sum of <span class="tex-font-style-it">happinesses</span> of all envoys.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002537821456233107" id="id0027714883517785904" class="input-output-copier">Copy</div></div><pre id="id002537821456233107">7 4
1 2
1 3
1 4
3 5
3 6
4 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008963813932970289" id="id0049237064901895367" class="input-output-copier">Copy</div></div><pre id="id008963813932970289">7</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00532706625926681" id="id007599596042594636" class="input-output-copier">Copy</div></div><pre id="id00532706625926681">4 1
1 2
1 3
2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007786653548981401" id="id00044724229943598814" class="input-output-copier">Copy</div></div><pre id="id007786653548981401">2</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005048424904842552" id="id002788107625419679" class="input-output-copier">Copy</div></div><pre id="id005048424904842552">8 5
7 5
1 7
6 1
3 7
8 3
2 1
4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0039331547936689837" id="id009479172999900348" class="input-output-copier">Copy</div></div><pre id="id0039331547936689837">9</pre></div></div></div><div class="note"><div class="section-title">Note</div><p><img class="tex-graphics" src="https://espresso.codeforces.com/7a08924d2561b29fde378ce67d0f080fb15b1427.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>In the first example, Linova can choose cities $$$2$$$, $$$5$$$, $$$6$$$, $$$7$$$ to develop industry, then the <span class="tex-font-style-it">happiness</span> of the envoy from city $$$2$$$ is $$$1$$$, the <span class="tex-font-style-it">happiness</span> of envoys from cities $$$5$$$, $$$6$$$, $$$7$$$ is $$$2$$$. The sum of <span class="tex-font-style-it">happinesses</span> is $$$7$$$, and it can be proved to be the maximum one.</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/3ee4308d6548160ed97deb712bdca868e244d1ae.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>In the second example, choosing cities $$$3$$$, $$$4$$$ developing industry can reach a sum of $$$3$$$, but remember that Linova plans to choose <span class="tex-font-style-bf">exactly</span> $$$k$$$ cities developing industry, then the maximum sum is $$$2$$$.</p></div>