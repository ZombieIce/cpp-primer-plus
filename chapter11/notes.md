## 创建友元
- 创建友元函数的第一步是将其原型放在类声明中，并在原型声明前加上关键字 **friend**；
- 虽然 ```operator *()``` 函数是在类声明中声明的，但它不是成员函数，因此不能使用成员运算符来调用。
- 虽然 ```operator *()``` 函数不是成员函数，但它与成员函数的访问权限相同。
