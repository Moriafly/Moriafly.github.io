
---
title: JavaScript-part2
tags: [前端,javascript]
date: 2020-12-24 23:00:16
category: 
  - 前端
  - 随笔
---
# JavaScript
## 文件注释和缩放
- 注释会增加JavaScript源文件的大小，但是影响较小，可以忽略不计。
- 在JavaScript正式使用版本一般会清楚文件里的注释和空白，即压缩版本，一般后缀为.min.js。
## 变量
- 变量区分大小写
- 命名规则一般是：”驼峰大小写“
## 操作符
操作符优先级与其他语言一样，如 java、PHP等。
## 基本 事件（event）
JavaScript使用事件处理器（event handler）来处理事件。
常见的有三个：
* [ ] onClick
	+ 鼠标点击效果
* [ ] onMouseOver
	+ 鼠标移入效果
* [ ] onMouseOut
	+ 鼠标移出效果

### Demo
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>图像翻滚 Demo</title>
</head>
<body>
    <div>
        <img src="favicon.png" alt="onMouseOver" onmousemove="this.src='test/timg.jpeg';" onmouseout="this.src='favicon.png';">
    </div>
</body>
</html>
```