---
title: KotLin - 包的定义与导入
date: 2020-12-11 12:00:00
tags: [kotlin,andriod]
category: kotlin
---
# KotLin - 包的定义与导入
包的声明应处于源⽂件顶部：
```kotlin
package my.demo
import kotlin.text.*
// …… 
```
⽬录与包的结构⽆需匹配：源代码可以在⽂件系统的任意位置。

## 包
源⽂件通常以包声明开头：
```kotlin
package org.example
fun printMessage() { /*……*/ }
class Message { /*……*/ }
// ……
```
源⽂件所有内容（⽆论是类还是函数）都包含在声明的包内。 所以上例中 `printMessage()` 的全名是
`org.example.printMessage` ， ⽽ `Message` 的全名是 `org.example.Message` 。

[博客来自：](https://blog.csdn.net/moriafly/article/details/107279590)moriafly