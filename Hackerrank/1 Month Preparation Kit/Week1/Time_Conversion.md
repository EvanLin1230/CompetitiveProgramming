# Time Conversion

## [題目連結](https://www.hackerrank.com/challenges/one-month-preparation-kit-time-conversion/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one)

前言
---
主要是把12小時制改成24小時制，聽起來好像很簡單，但是因為這東西在很多地方都可以實作，所以放上來。

技巧
---
題目給的：
  |12小時制|24小時制|
  |---|---|
  |12:00:00AM|00:00:00|
  |12:00:00PM|12:00:00|
  
自己要推的：
  |12小時制|24小時制|
  |---|---|
  |06:00:00AM|06:00:00|
  |06:00:00PM|18:00:00|
  |12:59:59PM|00:59:59|

疑問
---
>**問：為什麼不推00:00:00AM/PM？**
>>答：我也想知道，他的測試不會包括這個，於是我並沒有處理`00 AM`與`OO PM`的情況；在這裡，我選擇讓他維持原本的數字，因為了解12小時制的都知道，一到11:59無論上午下午一律都會變回00
