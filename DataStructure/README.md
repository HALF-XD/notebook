## Big O

- T(n) 时间复杂度
- S(n) 空间复杂度

Asymptotic Upper Bound
Asymptotic notation

- O(n) 最坏的状况下需要的时间/空间
- Θ(n) 一般状况下
- Ω(n) 最好的状况下需要的时间/空间

推荐《INTRODUCTION TO ALGORITHMS》，可以自虐

常见的复杂度:
`O(1)`
`O(logN)`
`O(N)`
`O(N*logN)`
`O(N*N)`
`O(N*N*N)`
`O(b**N)`
`O(N!)`

## Array

Array 的中文意思可以理解为“一串”

1. Static Array 固定长度
2. Dynamic Array
   读取 read `O(1)`
   写入 write/replace `O(1)`
   插入 insert `O(N)`
   删除中间 delete `O(N)`
   删除末尾 Delete Tail `O(1)`
   增加 append() `O(1)`
   扩容 Resize `O(n)`

## Graph 图

vertex 顶点
edge 线 边

Directive 有方向的
Undirective 无方向的
Weighted 有权重的
Acyclic 无循环的
Cyclic 循环的

## Tree 树

树满足条件：

- 无循环的 Acyclic
- 没有方向 Undirective
- 每两个点之间有且只有一条边
- n 个点，n-1 个边
- 所有的点都相连

树的术语
祖先 ancestor
后代 offspring
父 Parent
子 Child
叶 leaf
根 root

不是所有树都有根;
有根树（rooted tree）：有一个确定的根节点。
无根树（unrooted tree）：一个没有固定根结点的树称为无根树。

## Binary Tree 二叉树

基础属性:

- Node 节点
- Left 左
- Right 右

满足某些属性的时候，可以有的几种状态

1.  `Fill`: **满二叉树(Fill Binary Tree)**

    每个节点要么没有 child,要么左右都有 child。

2.  `Complete`: **完全二叉树(Complete Binary Tree)**

    (1) 除了最后一层，其它层都满。
    (2) 最后一层从左起填，中间没有空隙。

3.  `Perfect`: **完美二叉树(Perfect Binary Tree)**

    既完全又满。

4.  `Balanced`: **平衡二叉树(Balanced Binary Tree)**

    每个节点的左和右 subtree 的高度相差不超过 1。

### `BST` Binary Search Tree

又叫 二叉搜索树 、二叉排序树、 二叉查找树；

1. `BST` 是一个二叉树
2. `BST` 中任意一个节点 `N` 满足
   `L` 代表 `N` 的 左 `SubTree` 的任意节点
   `R` 代表 `N` 的 右 `SubTree` 的任意节点
   `L <= N <= R`

插入新元素 `O(logN)`
查找元素 `O(logN)`

### `DFS` Depth First Search

DFS： 深度优先搜索

应用：topology sort(mst 类问题)、找循环、range tree(排时间之类)、graph 相关(最短路径)

- In Order Traversal，中序遍历：左子树 --> 根结点 --> 右子树
- Pre Order Traversal，前序遍历：根结点 --> 左子树 --> 右子树
- Post Order Traversal，后序遍历：左子树 --> 右子树 --> 根结点

**Binary Tree Recursive DFS** 二叉树递归深度优先搜索

| 处理节点 | In Order Traversal   | Pre Order Traversal  | Post Order Traversal |
| -------- | -------------------- | -------------------- | -------------------- |
| 1        | 如果节点是 Null 返回 | 如果节点是 Null 返回 | 如果节点是 Null 返回 |
| 2        | 处理节点.Left        | 吃掉                 | 处理节点.Left        |
| 3        | 吃掉                 | 处理节点.Left        | 处理节点.Right       |
| 4        | 处理节点.Right       | 处理节点.Right       | 吃掉                 |
| 5        | 结束                 | 结束                 | 结束                 |

**Binary Tree Iterative DFS** 二叉树迭代深度优先搜索

在一个 BST 中，用 ` Stack` 做一个`In Order DFS`，也就是结果是带顺序的。

- 当 STACK 不空 或者 Node 不是 Null (while loop)
  - 当 Node 不是 Null (inner while loop)
    - 将 Node 放入 STACK
    - Node 换成 左边 子节点
  - 从 STACK 的顶上拿出个节点，称之为 TOP
  - 处理 TOP (print out)
  - Node 换成 TOP 右边 子节点

两个 variable， 一个 是 STACK ，一个 是 Node.

以上为一个二叉树左侧子树的遍历。还需要完成右边的。

### `BFS` Breadth First Search

BFS： 广度优先搜索

应用：可以用在任何的 Graph 上

例子：打印二叉树，按照每一层来打印，先打印第一层

两个 variable， 一个 是 Queue ，一个 是 Top.

- 根节点放入 Queue
  - 当 Queue 还有节点 (while loop)
    - 拿出 节点 定义为 TOP
    - 处理 TOP (print out)
    - 将 TOP 的 子节点 放入 Queue
