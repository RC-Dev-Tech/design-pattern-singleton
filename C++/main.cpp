/*
 *  Design Pattern - Singleton 單例模式
 * 
 * 在這個 C++ 的範例中，我們定義了一個 Singleton 類別，該類別只能創建一個實例並提供全局訪問點。
 * 在 GetInstance 函式中，我們檢查靜態成員變數 instance_ 是否為空，
 * 如果是，則創建一個新的 Singleton 實例；如果不是，則返回現有的實例。這樣可以確保只有一個 Singleton 實例存在。
 * 在 main 函式中，我們使用 Singleton::GetInstance() 方法來取得 Singleton 的實例，然後呼叫 DoSomething 函式來進行操作。
 */

#include <iostream>

/*
 *  Singleton - 該類別只能創建一個實例並提供全局訪問點.
 */
class Singleton {
public:
    static Singleton* GetInstance() {
        if (instance_ == nullptr) {
            instance_ = new Singleton();
        }
        return instance_;
    }

    void DoSomething() {
        std::cout << "Singleton: Doing something..." << std::endl;
    }

private:
    Singleton() {}  // 將構造函式設為私有，避免外部直接創建實例.
    static Singleton* instance_;  // 唯一實例.

};

Singleton* Singleton::instance_ = nullptr;  // 初始化靜態成員變數.

/*
 *  Client - 使用Singleton類別的客戶端.
 */
int main() {
    Singleton* singleton = Singleton::GetInstance();
    singleton->DoSomething();

    return 0;
}
