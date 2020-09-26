# DataStructreCode
This repository for data structure (array, stacks, linked list) code in C language.

### Data Structure Operations Cheat Sheet
**Note:** For best case operations, the time complexities are O(1).
<table >
<tr>
<th>Data Structure</th>
<th colspan="8">Time Complexity</th>
<th>Space Complexity</th>
</tr>
<tr>
<td></td>
<td colspan="4"><strong>Average Case</strong></td>
<td colspan="4"><strong>Worst Case</strong></td>
<td><strong>Worst Case</strong></td>
</tr>
<tr>
<td></td>
<td>Accessing n<sup>th</sup> element</td>
<td>Search</td>
<td>Insertion</td>
<td>Deletion</td>
<td>Accessing n<sup>th</sup> element</td>
<td>Search</td>
<td>Insertion</td>
<td>Deletion</td>
<td></td>
</tr>
<tr>
<td><strong>Arrays</strong></td>
<td>O(1)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
</tr>
<tr>
<td><strong>Stacks</strong></td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(1)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(1)</td>
<td>O(n)</td>
</tr>
 <tr>
<td><strong>Queues</strong></td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(1)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(1)</td>
<td>O(1)</td>
<td>O(n)</td>
</tr>
 <tr>
<td><strong>Binary Trees</strong></td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
</tr>
  <tr>
<td><strong>Binary Search Trees</strong></td>
<td>O(logn)</td>
<td>O(logn)</td>
<td>O(logn)</td>
<td>O(logn)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
</tr>
   <tr>
<td><strong>Balanced Binary Search Trees</strong></td>
<td>O(logn)</td>
<td>O(logn)</td>
<td>O(logn)</td>
<td>O(logn)</td>
<td>O(logn)</td>
<td>O(logn)</td>
<td>O(logn)</td>
<td>O(logn)</td>
<td>O(logn)</td>
</tr>
  <tr>
<td><strong>Hash Tables</strong></td>
<td>N/A</td>
<td>O(1)</td>
<td>O(1)</td>
<td>O(1)</td>
<td>N/A</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
<td>O(n)</td>
</tr>
</table>
 
    
## Linked List
* Linked List can be defined as collection of objects called **nodes** that are randomly stored in the memory.
* A node contains two fields i.e. data stored at that particular address and the pointer which contains the address of the next node in the memory.
* The last node of the list contains pointer to the null.
### Uses of Linked List
* The list is not required to be contiguously present in the memory. The node can reside any where in the memory and linked together to make a list. This achieves optimized utilization of space.
* List size is limited to the memory size and doesn't need to be declared in advance.
* We can store values of primitive types or objects in the singly linked list.
#### 1. Singly linked list or One way chain
