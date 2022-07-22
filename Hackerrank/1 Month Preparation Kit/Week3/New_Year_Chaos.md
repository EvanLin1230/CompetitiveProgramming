# New Year Chaos

## [題目連結](https://www.hackerrank.com/challenges/one-month-preparation-kit-new-year-chaos/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-three)

前言
---
這題當初寫起來真的很有挑戰性，如果在意答案對與否可以不用看這篇，因為他邏輯很簡單，但是要在他限定的時間做完很困難，當數目變大，時間就會變得異常的久，為了縮短時間，我一直在尋找好的演算法。

技巧
---
輸入：q (```vector<int>```)
- 每個數字都要回到他應有的位置，並只能跟前面的人做交換，(前)1-n(後)，但這裡可以反過來說，跟後面的人交換，並計算這個人交換的次數(後面會解釋)，當交換超過3人時，回傳too chaotic
- 條件一，既然只能跟前面的交換，就代表每個人身上其實會有個計數器，當那個人被交換的時候，他的計數器會加一，當然如果我們沒聚焦在那個人身上，沒用記憶體記住他交換過的次數，到下個迴圈就會完全忘記，於是反過來想，我們可以去計算這個人至少要跟後面多少人進行交換，這樣就不用寫個儲存空間去存哪些人交換了幾次
- 假設一數列為 4123 示意圖：
<div align="center"><img width="555" alt="截圖 2022-07-23 01 05 31" src="https://user-images.githubusercontent.com/90084425/180489329-c80705e6-0a2e-4739-bcb4-0701a7f1f94d.png">
<div>
- 所以反過來說，我只要從第一個開始，去計算它需要被交換多少次，來看是否要回傳 Too Chaotic 或 計算bribe數量並加總起來。
- 這現象只有出現在當此時迴圈到的數，需要往前去交換的時候，才需要去計算bribe，就像是1243，我迴圈到3，發現他不應該在這，於是他開始計算從他開始算起，前面兩個有誰比他大，比他大的就代表需要與他交換。


疑問
---
