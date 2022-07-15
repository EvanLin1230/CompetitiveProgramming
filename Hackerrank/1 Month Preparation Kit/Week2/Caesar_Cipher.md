# Caesar Cipher

## [題目連結](https://www.hackerrank.com/challenges/one-month-preparation-kit-caesar-cipher-1/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-two)

前言
---
這題是將字母往後推k個，變成新的加密字串，有分大小寫。

技巧
---
  這裡只要注意，當某些字加密超過太多直接輸出會變成奇怪的符號，所以要試著把它寫成循環，一超過Z或z就從A或a開始從頭算。
題目給的：
  1. `0 <= k <= 100`，所以為了加快，我們可以先將`k％26`，畢竟英文字母不分大小總共有26個。
  2. 這種題目第一步可以先處理基本問題，`k＝0`，再處理字母超過的問題。
  3. ASCII Code，大寫英文的範圍是：`65～90`，小寫英文的範圍是：`97～122`
  4. 假設 k＝3，s[i]＝'Z' (90)，往後推3個的答案是'C'(67)，我想到最簡單的方法就是，減'Z'加'A'，就可以形成循環了，93-90+65=68，但68並不是我們想要的答案，原因是'Z'到'A'應該要算一次，但這裡忽略掉了，變成從'A'往後推3個，這裡要把多推的一次減掉，`s[i]-'Z'+'A'-1`，就是我們要的答案。
 
疑問
---
