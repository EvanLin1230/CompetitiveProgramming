# Longest Substring Without Repeating Characters

## [題目連結](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

前言
---
找出這個字串中的一串字母不重複且長度最長的子字串，並回傳該子字串長度。

技巧
---
條件：0 <= s.length <= 5 * 10^4

- 首先我們必須處理簡單的例子，s.length = 0 & s.length = 1，一個應該輸出0，一個應該輸出1。
- 接著當兩個以上時，我們可以開始寫我們的迴圈，以下是我的方法。
- 示意圖
<div align=center>
  <img width="677" alt="截圖 2022-07-22 13 50 38" src="https://user-images.githubusercontent.com/90084425/180372203-3a7c4599-8249-4386-b5c7-48e805197023.png">
  <img width="677" alt="截圖 2022-07-22 13 55 49" src="https://user-images.githubusercontent.com/90084425/180372847-6fdeb6ce-d054-47d9-a5cd-1509108beacb.png">
<img width="677" alt="截圖 2022-07-22 13 56 01" src="https://user-images.githubusercontent.com/90084425/180372857-f84232fa-e28c-4558-bfbb-6caf2fa018c9.png">

<div>

疑問
---
