<h1>libft</h1>

<p><code>libft</code> is a library of useful functions written in C, designed to provide common functionality that is not included in the standard C library. It was developed as part of the curriculum at 42 Network, providing a collection of functions that can be used across various projects.</p>

<h2>Features</h2>

<ul>
  <li>Includes essential functions for string manipulation, memory management, and input/output handling.</li>
  <li>Provides data structures such as linked lists and dynamic arrays.</li>
  <li>Implements algorithms for sorting, searching, and mathematical operations.</li>
  <li>Offers additional utility functions to simplify C programming tasks.</li>
</ul>

<h2>Usage</h2>

<ol>
  <li>Clone the repository or download the source code.</li>
  <li>Compile the library by running <code>make</code> in the project directory.</li>
  <li>Link the compiled library (<code>libft.a</code>) with your projects at compile time.</li>
  <li>Include the relevant header files (<code>libft.h</code>) in your C source code.</li>
  <li>Utilize the provided functions and data structures in your projects.</li>
</ol>

<h3>Example</h3>

<pre><code>#include "libft.h"
#include &lt;stdio.h&gt;

int main() {
    char str[] = "Hello, world!";
    int str_length = ft_strlen(str);
    printf("Length of the string: %d\n", str_length);
    return 0;
}
</code></pre>

<h2>Notes</h2>

<ul>
  <li>Make sure to compile the library with the appropriate flags and link it correctly with your projects.</li>
  <li>Refer to the detailed documentation and function comments provided in the source code for more information on each function's usage.</li>
  <li>Contributions and improvements to the library are welcome! Feel free to fork the repository and submit pull requests.</li>
</ul>

<p>Created by M3TASPLOIT</p>
