
---
title: 防止渲染README.md文件
tags: hexo
category: 前端
date: 2020-12-25 10:19:27
---
# hexo && github防止渲染README.md文件
## README.md
以前每次hexo写完博客
```bash
hexo d 
```
 推到github都会将README.md文件渲染成HTML文件，这样很不方便。
 于是就想着能不能修改配置文件 _config.yml 来避免将README.md文件渲染成HTML文件。
 终于在_config.yml 找到：`skip_render: `
 改为`skip_render: README.md`即可