<h2><a href="https://codeforces.com/contest/1153/problem/D" target="_blank" rel="noopener noreferrer">1153D — Serval and Rooted Tree</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1153D](https://codeforces.com/contest/1153/problem/D) |

## Topics
`binary search` `dfs and similar` `dp` `greedy` `trees`

---

## Problem Statement

<div class="header"><div class="title">D. Serval and Rooted Tree</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Now Serval is a junior high school student in Japari Middle School, and he is still thrilled on math as before. </p><p>As a talented boy in mathematics, he likes to play with numbers. This time, he wants to play with numbers on a rooted tree.</p><p>A tree is a connected graph without cycles. A rooted tree has a special vertex called the root. A parent of a node $$$v$$$ is the last different from $$$v$$$ vertex on the path from the root to the vertex $$$v$$$. Children of vertex $$$v$$$ are all nodes for which $$$v$$$ is the parent. A vertex is a leaf if it has no children.</p><p>The rooted tree Serval owns has $$$n$$$ nodes, node $$$1$$$ is the root. Serval will write some numbers into all nodes of the tree. However, there are some restrictions. Each of the nodes except leaves has an operation $$$\max$$$ or $$$\min$$$ written in it, indicating that the number in this node should be equal to the maximum or minimum of all the numbers in its sons, respectively. </p><p>Assume that there are $$$k$$$ leaves in the tree. Serval wants to put integers $$$1, 2, \ldots, k$$$ to the $$$k$$$ leaves (each number should be used exactly once). He loves large numbers, so he wants to maximize the number in the root. As his best friend, can you help him?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$n$$$ ($$$2 \leq n \leq 3\cdot 10^5$$$), the size of the tree.</p><p>The second line contains $$$n$$$ integers, the $$$i$$$-th of them represents the operation in the node $$$i$$$. $$$0$$$ represents $$$\min$$$ and $$$1$$$ represents $$$\max$$$. If the node is a leaf, there is still a number of $$$0$$$ or $$$1$$$, but you can ignore it.</p><p>The third line contains $$$n-1$$$ integers $$$f_2, f_3, \ldots, f_n$$$ ($$$1 \leq f_i \leq i-1$$$), where $$$f_i$$$ represents the parent of the node $$$i$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output one integer — the maximum possible number in the root of the tree.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001876562974566509" id="id005695683229236689" class="input-output-copier">Copy</div></div><pre id="id001876562974566509">6
1 0 1 1 0 1
1 2 2 2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007828324317871916" id="id009311931397643092" class="input-output-copier">Copy</div></div><pre id="id007828324317871916">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008697765132724398" id="id006676735545724467" class="input-output-copier">Copy</div></div><pre id="id008697765132724398">5
1 0 1 0 1
1 1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00059035391469361986" id="id006844740933253298" class="input-output-copier">Copy</div></div><pre id="id00059035391469361986">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024644465695401918" id="id006144647507752672" class="input-output-copier">Copy</div></div><pre id="id0024644465695401918">8
1 0 0 1 0 1 1 0
1 1 2 2 3 3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0035064613613428663" id="id007204902153395882" class="input-output-copier">Copy</div></div><pre id="id0035064613613428663">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0014841278982925588" id="id0017363342696086992" class="input-output-copier">Copy</div></div><pre id="id0014841278982925588">9
1 1 0 0 1 0 1 0 1
1 1 2 2 3 3 4 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005944671138606842" id="id0031339441079656305" class="input-output-copier">Copy</div></div><pre id="id005944671138606842">5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Pictures below explain the examples. The numbers written in the middle of the nodes are their indices, and the numbers written on the top are the numbers written in the nodes.</p><p>In the first example, no matter how you arrange the numbers, the answer is $$$1$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/8f202f5c9802f0e251856ab5b20cd62bbd907a1d.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the second example, no matter how you arrange the numbers, the answer is $$$4$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/4f089140ff7a0acc4686b80b6254804d8c1d1ab1.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the third example, one of the best solution to achieve $$$4$$$ is to arrange $$$4$$$ and $$$5$$$ to nodes $$$4$$$ and $$$5$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/4005a1df7a9d9f47f2380763a2c5b5f6a36e16d3.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the fourth example, the best solution is to arrange $$$5$$$ to node $$$5$$$.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/3f49bb28d2a98da0743d4040930c645b9279ec9e.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>