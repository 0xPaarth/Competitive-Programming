<h2><a href="https://codeforces.com/contest/1325/problem/D" target="_blank" rel="noopener noreferrer">1325D — Ehab the Xorcist</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1325D](https://codeforces.com/contest/1325/problem/D) |

## Topics
`bitmasks` `constructive algorithms` `greedy` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Ehab the Xorcist</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given 2 integers $$$u$$$ and $$$v$$$, find the shortest array such that <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise-xor</a> of its elements is $$$u$$$, and the sum of its elements is $$$v$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains 2 integers $$$u$$$ and $$$v$$$ $$$(0 \le u,v \le 10^{18})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If there's no array that satisfies the condition, print "-1". Otherwise:</p><p>The first line should contain one integer, $$$n$$$, representing the length of the desired array. The next line should contain $$$n$$$ <span class="tex-font-style-bf">positive</span> integers, the array itself. If there are multiple possible answers, print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008678793048460978" id="id009829314452715954" class="input-output-copier">Copy</div></div><pre id="id008678793048460978">2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008550877842590201" id="id0020681277945551724" class="input-output-copier">Copy</div></div><pre id="id008550877842590201">2
3 1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0021858875169897085" id="id005293416434418646" class="input-output-copier">Copy</div></div><pre id="id0021858875169897085">1 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00752074665857897" id="id002531799037324808" class="input-output-copier">Copy</div></div><pre id="id00752074665857897">3
1 1 1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003867118501391529" id="id0023229659746096343" class="input-output-copier">Copy</div></div><pre id="id003867118501391529">8 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0045700250404133047" id="id0041375551355790985" class="input-output-copier">Copy</div></div><pre id="id0045700250404133047">-1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009048910892215645" id="id005763618700697071" class="input-output-copier">Copy</div></div><pre id="id0009048910892215645">0 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002919448216507209" id="id006787422855635667" class="input-output-copier">Copy</div></div><pre id="id002919448216507209">0</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, $$$3\oplus 1 = 2$$$ and $$$3 + 1 = 4$$$. There is no valid array of smaller length.</p><p>Notice that in the fourth sample the array is empty.</p></div>