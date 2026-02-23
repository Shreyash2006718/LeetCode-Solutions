<h2><a href="https://leetcode.com/problems/binary-search">792. Binary Search</a></h2><h3>Easy</h3><hr><p>Given an array of integers <code>nums</code> which is sorted in ascending order, and an integer <code>target</code>, write a function to search <code>target</code> in <code>nums</code>. If <code>target</code> exists, then return its index. Otherwise, return <code>-1</code>.</p>

<p>You must write an algorithm with <code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [-1,0,3,5,9,12], target = 9
<strong>Output:</strong> 4
<strong>Explanation:</strong> 9 exists in nums and its index is 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [-1,0,3,5,9,12], target = 2
<strong>Output:</strong> -1
<strong>Explanation:</strong> 2 does not exist in nums so return -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt; nums[i], target &lt; 10<sup>4</sup></code></li>
	<li>All the integers in <code>nums</code> are <strong>unique</strong>.</li>
	<li><code>nums</code> is sorted in ascending order.</li>
</ul>

<h3> My Approach </h3>

<h4> Linear Search </h4>
<br/>
<p> In this , we simply need to run a loop till the last index and keep on searching from first index till last , if found that is the target , if not found return -1 .</p>
<hr/>

<h4>Binary Search</h4>
<p>
	Here ,we have taken two variables low and high , low has been initialized with 0 index and high has been initialized with last index(n-1), so everything between low and high is the search space , we are running a loop till high>=low , mid is average of both variables , (this is done to trim the search space) ,if mid is the target then the answer is obtained , but if mid index value is greater than target, then we need to trim the search space by completely ignoring the right of high.On the other side if the target is greater than mid index value , then ignore left side of mid .
</p>
