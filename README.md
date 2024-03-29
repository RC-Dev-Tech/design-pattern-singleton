# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Singleton 單例模式
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 目的
確保在系統中只有一個實例被創建，並提供一個全局訪問點來訪問該實例。

---

## 使用時機
當系統需要確保某個類別只能創建一個實例時，或當該實例需要被全局訪問時，可以使用Singleton設計模式。

- 優點 <br>
  確保系統中只有一個實例被創建，避免了因為創建過多實例導致系統資源浪費的問題。<br>
  提供一個全局訪問點，方便客戶端對該實例進行訪問和操作。<br>
- 缺點 <br>
  違反了單一職責原則，將職責過於集中在一個類別中。<br>
  可能會導致單元測試困難，因為Singleton類別無法被繼承或被替換為其他類別，需要特別處理。<br>

---

## URL結構圖
![](https://drive.google.com/uc?id=1i-hGBoy0hhmdKEG1fbRPdgPWYjGvjSya)
> 圖片來源：[Refactoring.Guru - Singleton](https://refactoring.guru/design-patterns/singleton)

---

## 實作成員
* Singleton
  * 該類別只能創建一個實例並提供全局訪問點。
* Client
  * 使用Singleton類別的客戶端。

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/design-pattern-singleton/blob/main/C%2B%2B/main.cpp) - Singleton Pattern (C++)

---

## 參考資料
* [Wiki - Singleton Pattern](https://en.wikipedia.org/wiki/Singleton_pattern) <br>
* [Refactoring.Guru - Singleton](https://refactoring.guru/design-patterns/singleton) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
