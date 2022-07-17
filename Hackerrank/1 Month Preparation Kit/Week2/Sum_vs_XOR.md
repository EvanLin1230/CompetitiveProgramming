# Sum vs XOR

## [題目連結](https://www.hackerrank.com/challenges/one-month-preparation-kit-sum-vs-xor/problem?h_l=interview&isFullScreen=true&playlist_slugs%5B%5D%5B%5D=preparation-kits&playlist_slugs%5B%5D%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D%5B%5D=one-month-week-two)

前言
---
- 題目敘述是說，當一個數與小於他而大於0的任意數相加，所得的值等於，一個數與小於他而大於0的該任意數相比(XOR)，這裡會用到[bitwise operation](https://en.wikipedia.org/wiki/Bitwise_operation#XOR_2)
- 也就是利用二位元比較，來得到答案
- XOR
<div align=center><img width="729" alt="截圖 2022-07-18 00 29 32" src="https://user-images.githubusercontent.com/90084425/179411500-a2cb19a9-02aa-4cf3-be67-73c7bb8fca48.png"></div>

技巧
---
這裡解法很多，但是別看著網路上提供的bitwise，知道a^b = ，就直接複製貼上，然後用迴圈去寫，其實背後原理很簡單。
- XOR比較：除了 0 xor 0 = 0，其他都是1，可以說是種有true就true的強比較。
- 我們可以先以4為例：
<div align=center><img width="385" alt="截圖 2022-07-18 01 03 54" src="https://user-images.githubusercontent.com/90084425/179416713-e39dd378-dc87-428a-aa58-bbda083f4123.png"></div>

- 通過觀察，我們可以發現，只要是涉及進位問題，該數字XOR就無法成功得到與其相加相同的答案，也就是說 => 當二位元的其中一個為0時，不管XOR到0或1，他的結果都將會是正確的。
- 也就是說，0+0=0、0+1=1，答案才會是正確的，而利用高中教過的機率，一個0將會與之XOR的有兩種可能，越多個0就越多種可能(0或1)，`n個0` 將會有 `2^n`種結果。

疑問
---
