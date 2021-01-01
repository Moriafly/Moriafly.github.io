
---
title: kotlin-String
date: 2020-12-11 22:41:05
tags: [kotlin,andriod,first]
category: kotlin
---

# Kotlin - 字符串

字符串只是一个字符串序列，包含在双引号中。在 Kotlin 中，字符串由类型 `String` 表示。它是实践中使用最广泛的数据类型之一。
#### 1. 声明

声明字符串变量：
```kotlin
val str: String = "Hello Kotlin"
```
当然，因为 Kotlin 出色的类型推断，您常常无需表明类型：
```kotlin
val str = "Hello Kotlin"
```
#### 2. 字符串的长度
您可以获取访问属性的字符串中的字符数。此属性具有类型的值。`length` `Int`
```kotlin
val language = "Kotlin"
println(language.length) // 6

val empty = ""
println(empty.length) // 0

// 关于汉字的长度
val str = "你好"
println(str.length) // 2
```
#### 3. 访问字符
字符串的元素是单个字符，可以通过其索引访问。字符串的第一个元素具有索引 0 。
```kotlin
val greeting = "Hello"
 
val first = greeting[0]  // 'H'
val second = greeting[1] // 'e'
val five = greeting[4]   // 'o'
```
最后一个元素的索引等于字符串的长度减去 1 。对于字符串，最后一个元素为 。其索引为 4 ，因为字符串的长度为  5 。
```kotlin
val last = greeting[greeting.length - 1] // 'o'
val prelast = greeting[greeting.length - 2] // 'l'
```
Kotlin 提供了几种访问字符串的第一个字符和最后一个字符的便捷方法：
```kotlin
println(greeting.first())   // 'H'
println(greeting.last())    // 'o'
println(greeting.lastIndex) // 4
```
您可以使用此功能编写更具可读性的代码。
还可以用 for 循环迭代字符串:
```kotlin
for (c in str) {
    println(c)
}
```
#### 4. 不变性
字符串是不可变的，意思是，一旦创建字符串总是相同的。不能修改字符串的元素。因此，下面的示例不起作用：
```kotlin
val str = "string"
str[3] = 'o' // an error here!
```
但这个工作：
```kotlin
var str = "string"
str = "strong"
```
实际上，我们不会修改变量中的存储值。相反，我们为它分配一个新值。因此，这是绝对合法的。这是使用字符串的方法之一。如果需要修改字符串，只需创建一个新字符串。

#### 5. 连接字符串
可以使用运算符连接两个字符串：
```kotlin
val str1 = "ab"
val str2 = "cde"
val result = str1 + str2 // "abcde"
```
当我们连接两个字符串时，将创建一个新字符串（因为字符串是不可变的）。

可以在同一表达式中串联多个字符串：
```kotlin
val firstName = "John"
val lastName = "Smith"
val fullName = firstName + " " + lastName
```
注意，不一样，因为串联不是换向操作（不像添加）。
将值追加到字符串
该运算符还适用于将不同类型的值附加到字符串。该值将自动转换为字符串，然后串联到目标字符串。
```kotlin
val str = "abc" + 10 + true
println(str) // abc10true

val code = "123" + 456 + "789"
println(code) // 123456789
```
表达式必须始终以字符串为起点，请看下面的示例。它不工作，因为第一个操作数是一个数字：
```kotlin
val str = 10 + "abc" // an error here!
```
下一个可能会令您大吃一惊：
```kotlin
val str = "abc" + 11 + 22
println(str) // abc1122
```
为什么会这样？因为首先它追加到字符串，然后追加到字符串。

#### 6. 比较字符串
要比较两个字符串，请使用（相等）和（不等于）运算符。两个运算符都使用两个字符串作为操作数，并返回类型 （或 ） 的值。
```kotlin
val first = "first"
val second = "second"
var str = "first"
 
println(first == str)  // true
println(first == second) // false
println(first != second) // true
```
#### 7. 字符串模板
字符串字面值可以包含模板表达式 ，即一些小段代码，会求值并把结果合并到字符串中。 模板表达式以美元符（$）开头，由一个简单的名字构成:
```kotlin
val i = 10
println("i = $i") // 输出“i = 10”
```
或者用花括号括起来的任意表达式:
```kotlin
val s = "abc"
println("$s.length is ${s.length}") // 输出“abc.length is 3”
```
原始字符串与转义字符串内部都支持模板。 如果你需要在原始字符串中表示字面值 $ 字符（它不支持反斜杠转义），你可以用下列语法：
```kotlin
val price = """
${'$'}9.99
"""
```
#### 8. 其他
原始字符串 使用三个引号（"""）分界符括起来，内部没有转义并且可以包含换行以及任何其他字符:
```kotlin
val text = """
    for (c in "foo")
        print(c)
"""
```

你可以通过 `trimMargin()` 函数去除前导空格：
```kotlin
val text = """
    |Tell me and I forget.
    |Teach me and I remember.
    |Involve me and I learn.
    |(Benjamin Franklin)
    """.trimMargin()
```
默认 `|` 用作边界前缀，但你可以选择其他字符并作为参数传入，比如 `trimMargin(">")` 。
[文章出处](https://blog.csdn.net/moriafly/article/details/107165523)

*[文章出处]:moriafly