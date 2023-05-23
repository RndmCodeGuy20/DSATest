cmake_minimum_required(VERSION 3.23)
project(DSATest)

set(CMAKE_CXX_STANDARD 14)

include_directories("Mastering DSA/Binary Tree")
include_directories("Mastering DSA/Graphs")

add_executable(DSATest
        "DSA Made Easy/Recursion and Backtracking/PrintDesc.cpp"
        "DSA Made Easy/Recursion and Backtracking/PrintFactorial.cpp"
        "DSA Made Easy/Recursion and Backtracking/PrintFib.cpp"
        Examples/CallMall.cpp
        Examples/Hello.c
        Examples/palindrome.cpp
        Examples/PointersFun.cpp
        "LeetCode Solutions/practice/addnum.cpp"
        "LeetCode Solutions/practice/commonprefix.cpp"
        "LeetCode Solutions/practice/init2dvect.cpp"
        "LeetCode Solutions/practice/runningsum.cpp"
        "LeetCode Solutions/practice/validpara.cpp"
        "LeetCode Solutions/1.two-sum.cpp"
        "LeetCode Solutions/13.roman-to-integer.cpp"
        "LeetCode Solutions/14.longest-common-prefix.cpp"
        "LeetCode Solutions/1470.shuffle-the-array.cpp"
        "LeetCode Solutions/1480.running-sum-of-1-d-array.cpp"
        "LeetCode Solutions/160.intersection-of-two-linked-lists.cpp"
        "LeetCode Solutions/1672.richest-customer-wealth.cpp"
        "LeetCode Solutions/1920.build-array-from-permutation.cpp"
        "LeetCode Solutions/1929.concatenation-of-array.cpp"
        "LeetCode Solutions/2.add-two-numbers.cpp"
        "LeetCode Solutions/20.valid-parentheses.cpp"
        "LeetCode Solutions/21.merge-two-sorted-lists.cpp"
        "LeetCode Solutions/217.contains-duplicate.cpp"
        "LeetCode Solutions/2235.add-two-integers.cpp"
        "LeetCode Solutions/26.remove-duplicates-from-sorted-array.cpp"
        "LeetCode Solutions/412.fizz-buzz.cpp"
        "LeetCode Solutions/509.fibonacci-number.c"
        "LeetCode Solutions/509.fibonacci-number.cpp"
        "LeetCode Solutions/867.transpose-matrix.cpp"
        "LeetCode Solutions/9.palindrome-number.cpp"
        "Linked Lists/LinkedListProg.cpp"
        "Master Recursion/FactorialSeq.cpp"
        "Master Recursion/HelloNumRec.cpp"
        "Master Recursion/HelloWorldFunc.cpp"
        "Master Recursion/SumOfDigits.cpp"
        "Master Recursion/SumofNum.cpp"
        "Master STL/Pairs/PairArrays.cpp"
        "Master STL/Pairs/PairEx.cpp"
        "Master STL/Vectors/ElementsVect.cpp"
        "Master STL/Vectors/Question1.cpp"
        "Master STL/Vectors/Question1STL.cpp"
        "Master STL/Vectors/SortVector.cpp"
        "Master STL/Vectors/stringEx.cpp"
        "Master STL/Vectors/VectorEx.cpp"
        "Master STL/First.cpp"
        "Mastering DSA/Arrays/ResizeArray.cpp"
        "Mastering DSA/Arrays/StaticArray.cpp"
        "Mastering DSA/Arrays/StaticArrayPtr.cpp"
        "Mastering DSA/Arrays/TwoDArray.cpp"
        "Mastering DSA/Arrays ADT/BinSearch.cpp"
        "Mastering DSA/Arrays ADT/DeleteEl.cpp"
        "Mastering DSA/Arrays ADT/DynaminArr.cpp"
        "Mastering DSA/Arrays ADT/InsertArr.cpp"
        "Mastering DSA/Arrays ADT/LinSearch.cpp"
        "Mastering DSA/Arrays ADT/RevArr.cpp"
        "Mastering DSA/Arrays ADT/SGMArr.cpp"
        "Mastering DSA/Arrays ADT/StaticArr.cpp"
        "Mastering DSA/Binary Tree/AVLTree.cpp"
        "Mastering DSA/Binary Tree/BinarySearchTree.cpp"
        "Mastering DSA/Binary Tree/BinarySearchTreeOps.cpp"
        "Mastering DSA/Binary Tree/BinaryTree.cpp"
        "Mastering DSA/Binary Tree/CreateBinaryTree.cpp"
        "Mastering DSA/Binary Tree/LevelOrderTravelBT.cpp"
        "Mastering DSA/Binary Tree/Queue.h"
        "Mastering DSA/Circular Linked Lists/CircularList.cpp"
        "Mastering DSA/Circular Linked Lists/DeleteCLL.cpp"
        "Mastering DSA/Circular Linked Lists/InsertCLL.cpp"
        "Mastering DSA/Doubly Linked Lists/CreateDLL.cpp"
        "Mastering DSA/Graphs/BFSDFSGraph.cpp"
        "Mastering DSA/Graphs/Queue.h"
        "Mastering DSA/Graphs/Queue2.h"
        "Mastering DSA/Graphs/WaterJugBFS.cpp"
        "Mastering DSA/Linked Lists/CheckLoop.cpp"
        "Mastering DSA/Linked Lists/CheckSorted.cpp"
        "Mastering DSA/Linked Lists/ConcatList.cpp"
        "Mastering DSA/Linked Lists/CPPLinkedList.cpp"
        "Mastering DSA/Linked Lists/CreateNode.cpp"
        "Mastering DSA/Linked Lists/DeleteNode.cpp"
        "Mastering DSA/Linked Lists/InsertEndList.cpp"
        "Mastering DSA/Linked Lists/InsertNode.cpp"
        "Mastering DSA/Linked Lists/InsertSorted.cpp"
        "Mastering DSA/Linked Lists/LinkedLists.cpp"
        "Mastering DSA/Linked Lists/ListtoNum.cpp"
        "Mastering DSA/Linked Lists/MaxofNodes.cpp"
        "Mastering DSA/Linked Lists/MergeList.cpp"
        "Mastering DSA/Linked Lists/NumofNodes.cpp"
        "Mastering DSA/Linked Lists/ReverseList.cpp"
        "Mastering DSA/Linked Lists/SumofNodes.cpp"
        "Mastering DSA/Stacks/CreateStack.cpp"
        "Mastering DSA/Stacks/SimpleTest.c"
        "Mastering DSA/Stacks/test.c"
        Queues/PriorityQ.cpp
        Queues/QueueProg.cpp
        Refresher/ArraysPointer.cpp
        Refresher/DynamicMemAll.cpp
        Refresher/FunctionPointer.cpp
        Refresher/PointersAreaCircum.cpp
        Refresher/PointersPractice.cpp
        Refresher/PointersSwap.cpp
        Refresher/ReverseArray.cpp
        Refresher/StarAnd.cpp
        Refresher/SumofElArray.cpp
        Refresher/UniqueEl.cpp
        Stacks/SimpleStacks.cpp
        Stacks/testfile.cpp)
