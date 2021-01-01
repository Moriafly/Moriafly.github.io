 # TypeScript-part01
 ## TypeScript介绍
 ### 写在前面
 *程序运行的一般步骤：*
1. 解析程序：程序解析为AST（抽象句树法-abstract syntax tree）；
2. 编译：将AWT编译成为字节码；
3. 运行：计算字节码。
 ### 但是对于TS而言：
 要先用编译器编译为JavaScript，然后执行以上步骤！
 ### TS与JS区别
 >JavaScript是动态绑定类型；
 >TypeScript是静态绑定类型。

 >JavaScript是弱类型语言；
 >TypeScript是渐进式类型语言。

 >JavaScript会自动转换类型；
 >TypeScript会检查类型，并报错。
 ## TypeScript配置
 * 新建一个文件夹
 * 初始化npm：
 ```shell
 npm init
 ```
 * 安装TSC、TSLint、NodeJS的类型声明
 ```shell
 npm install --save-dev typescript tslint @types/node
 ```
 ### 最好安装一下全局*
#### Locally in your project.
```shell
npm install -D typescript
npm install -D ts-node
```
#### Or globally with TypeScript.
```shell
npm install -g typescript
npm install -g ts-node
```
 ## TypeScript创建一个简单的程序
 1. 在根目录下新建tsconfig.json 文件，写入：

```json
{
	"compilerOptions": {
		"lib": ["es6"],
		"module": "commonjs",
		"outDir": "dist",
		"sourceMap": true,
		"strict": true,
		"target": "es6"
	},
	"include": [
	"src"
	]
}
```
具体配置请看[官方文档](https://www.typescriptlang.org/docs/handbook)

2. 新建tslint.json文件，写入：
```json
{
    "defaultSeverity": "error",
    "extends": [
        "tslint:recommended"
    ],
    "rules": {
        "semicolon": false,
        "trailing-comma": false
    }
}
```
或者使用命令行：
```shell
tslint --init
```

3. 最后新建src文件夹及其之下的index.ts
试着写入代码：
```typescript
console.log('Hello TypeScript!')
```
4. 编译： tsc ./src/index.ts
之后文件夹src下会出现编译好的js文件。
5. 运行（node）：node ./src/index.js

成功运行第一个TypeScript项目！
## 开发工具
- [ts-node](https://www.npmjs.com/package/ts-node)
更快编译、运行
- typescript-node-starter（github上面搜）
脚手架工具