# Reverse Linked List

## [題目連結](https://www.hackerrank.com/challenges/one-month-preparation-kit-reverse-a-linked-list/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-three)

前言
---
[鏈結串列](https://zh.wikipedia.org/zh-tw/%E9%93%BE%E8%A1%A8)，是個在面試題目中常出現，但實際上較少遇到的一種資料結構，他雖然可以充分利用記憶體，但是卻造成尋訪的複雜性。

這題就是利用此結構，將單向鏈結串列反轉。

技巧
---
不外乎就是要理解鏈結串列的結構以及如何在程式碼上實現。

題目給的：
```cpp
SinglyLinkedListNode {
  int data;
  SinglyLinkedListNode* next;
};
```
每個節點都會有該節點的數字(data)與該節點所連接的下個節點(next)

下面有幾個實際例子(llist 引用題目的)：
- llist：在此表示第一個節點，但其實他整個輸出長這樣 => 1 -> 2 -> 3 -> 4 -> 5 -> NULL
- llist -> next：在此表示第二個節點，但他輸出是長這樣 => 2 -> 3 -> 4 -> 5 -> NULL
- llist -> next = NULL：在此表示第一個節點的下一個節點被給予了空節點，也就是NULL，此時輸出則變成這樣 => 1 -> NULL

以上對於鏈結串列的基礎了解，熟悉後就可以來試著解題目了

我的解法：
1. 首先是針對單一節點的(base case)，直接回傳該節點即可。
2. 再來是當兩個以上的時候，因為節點有方向性，如果今天我直接從llist娶她第一個節點下來，llist -> next = nullptr，完了，後面是啥不知道，因為該節點被你分出來後，原本指向後面的節點消失了，被更改為空節點了，所以在這裡，我們必須多一個節點去暫時儲存這個被拉出來的節點。
3. 然後準備一個儲存答案的節點，每次分離出來的節點都要指向這個儲存答案的節點
4. 預計做法就是，Result為儲存答案，Back為儲存剩餘未存入Result的節點們，Temp為將Back的第一個節點分離出來，存入Result。
5. 中間流程的重點是，我們不能讓其中一個節點，失去了他的連結，唯一可以失去後面連結的是Temp，因為他的使命就是幫助Back分離出他的節點。
6. 結合以上的資訊，我們的目標就是守住back與他後面的節點，並分離back第一個節點存進Result裏

Temp = Back -> next; (暫存Back後面的節點)
Back -> next = Result; (將Back第一個節點存進Result)
Result = Back; (將存進去的那個節點，設置為Result的第一個節點)
Back = Temp; (將Back預存進Temp的節點還給Back，好讓後面可以重複執行)

以上只要外面加個while判斷Back是否為空節點，處理好base case就完成了

疑問
---

