<h2><a href="https://leetcode.com/problems/132-pattern">456. 132 Pattern</a></h2><h3>Medium</h3><hr><p>Given an array of <code>n</code> integers <code>nums</code>, a <strong>132 pattern</strong> is a subsequence of three integers <code>nums[i]</code>, <code>nums[j]</code> and <code>nums[k]</code> such that <code>i &lt; j &lt; k</code> and <code>nums[i] &lt; nums[k] &lt; nums[j]</code>.</p>

<p>Return <code>true</code><em> if there is a <strong>132 pattern</strong> in </em><code>nums</code><em>, otherwise, return </em><code>false</code><em>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> false
<strong>Explanation:</strong> There is no 132 pattern in the sequence.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [3,1,4,2]
<strong>Output:</strong> true
<strong>Explanation:</strong> There is a 132 pattern in the sequence: [1, 4, 2].
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [-1,3,2,0]
<strong>Output:</strong> true
<strong>Explanation:</strong> There are three 132 patterns in the sequence: [-1, 3, 2], [-1, 3, 0] and [-1, 2, 0].
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == nums.length</code></li>
	<li><code>1 &lt;= n &lt;= 2 * 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
<h2>
	My Approach

</h2>
<p>
	My initial approach was to use three loops and then find which gives the time complexity of O(N^3).
</p>
<p>
	So here when we will go from left to right we dont know the future elements . But when we will traverse from right to left we will know that elements .So firstly we will try to find the (3,2 ) pair , so to store the(3) one we have used stack here , as we can see from the code ,when nums[i]<second																																	
<p>

<p>  it will return true meaning it has found the 132 pair , but if not it will push the element into stack (this is the future element we were talking) .Now , if the stack is not empty and the current iteration value is greater that the top element of the stack then the top element will become the second (variable name) and we will pop it.Meaning it contains the largest element for now .Now the second will be stored as it is , and then after further iteration if we will get that there is a number lesser than second , if we get that is the state we have found 132 pattern , So we will return true ;</p>
