# Sherlock and Array

## [題目連結](https://www.hackerrank.com/challenges/one-month-preparation-kit-sherlock-and-array/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-two)

前言
---
找到陣列中的一個元素，他的前面加總等於後面加總(加總都不包括自己)，有找到回傳`YES`，反之回傳`NO`。

技巧
---
- 這題考得是如何去解決時間問題，當我嘗試用最直接的想法，先建立一個迴圈，利用迴圈去跑每個元素，比較該元素的前後加總，前後加總也各自用兩個迴圈去計算(在這裡分別取代號：`Before`、`After`)，結果就爆了。
- 我試著去想該怎麼用最簡單的Ｏ(N)解決，我發現元素推進一個，比較加總也只是將`Before`加上剛才元素的值、`After`減去剛才元素的下一個元素值，代表我可以把問題縮小到Ｏ(N)。
- 過程有了，接下來要想起始問題，題目有給最少一個元素，當只有一個元素時，照理說一定是`YES`(`Before`&`After`都為0)，而多於一個時，必須要去初始化`After`值為除了第一個以外的所有值。
- 在這裡我省去了數量的判斷，讓他直接在迴圈做，`After`一定會從第二個元素開始加，for(int i=1;i<arr.size();i++)，代表當arr.size()為1時，不會跑迴圈，可以美觀程式碼。
- 接著只要一直去判斷`Before`&`After`是否為相同就好了，如果不同，`Before`加上現在的元素，`After`減去現在的下一個元素。
- 示意圖
<div align=center><img width="663" alt="截圖 2022-07-18 00 04 35" src="https://user-images.githubusercontent.com/90084425/179410093-701e4b7e-47f6-43b7-97f9-8df44639afde.png"></div>

疑問
---
