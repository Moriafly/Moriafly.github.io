---
title: aplayer+meting添加播放列表
tags: 
- 随笔
- hexo
date: 2020-12-28 09:01:15
category: music
---
# aplayer+meting添加播放列表
## 看官网
[aplayer中文文档](https://github.com/MoePlayer/hexo-tag-aplayer/blob/master/docs/README-zh_cn.md#%E6%92%AD%E6%94%BE%E5%88%97%E8%A1%A8)
[MetingJS](https://github.com/metowolf/MetingJS/tree/v1.2)

### 使用 hexo-tag-aplayer 插件
在博客根目录下执行
```shell
$ npm install --save hexo-tag-aplayer
```
下载hexo-tag-aplayer插件
#### 使用：

<!--more-->

在任意一个Markdown文件里使用 形如以下代码即可使用播放音乐。
```
{% aplayer title author url lrc:xxx %}
```
#### 标签参数
- title : 曲目标题
- author: 曲目作者
- url: 音乐文件 URL 地址
- lrc:xxx: （可选）歌词文件 URL 地址
##### 歌词URL前一定要加上 `lrc:` 如：`lrc:https://api.fczbl.vip/163/?type=lrc&id=189323`
更多参数请看官网：[aplayer中文文档](https://github.com/MoePlayer/hexo-tag-aplayer/blob/master/docs/README-zh_cn.md#%E6%92%AD%E6%94%BE%E5%88%97%E8%A1%A8)
##### 实例：
```
{% aplayer 断点 张敬轩 https://music.163.com/song/media/outer/url?id=189323.mp3  https://api.fczbl.vip/163/?type=cover&id=189323 "lrc:https://api.fczbl.vip/163/?type=lrc&id=189323" %}
```
#### 各大平台音乐的歌曲、歌词、图片查找方法自己百度。
### 使用meting 
#### hexo-tag-aplayer 插件自带meting，只需要在hexo配置文件下自己加上
_（注意不是你的主题配置文件）_
>aplayer:
   meting: true
>
就行
#### 然后在任意一个Markdown文件里使用
实例：
```
{% meting "2410869513" "netease" "playlist" %}
```
即可使用meting
#### 效果如下
{% meting "2410869513" "netease" "playlist" %}
##### 更多参数请看官网：
[aplayer中文文档](https://github.com/MoePlayer/hexo-tag-aplayer/blob/master/docs/README-zh_cn.md#%E6%92%AD%E6%94%BE%E5%88%97%E8%A1%A8)
[MetingJS](https://github.com/metowolf/MetingJS/tree/v1.2)