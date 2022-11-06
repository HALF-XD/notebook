### 数组属性

#### Array.length

```js
let arr = [1,2,3]
// length
console.log(arr.length) // 3
```

### 数组方法

#### Array.map 

```js
let arr = [1,2,3]
// map: creates a new array
let arrMap = arr.map(x => x * 2)
console.log(arr) // [1, 2, 3]
console.log(arrMap)               // [2, 4, 6]
```

#### Array.reduce

```js
let arr = [1,2,3]
// reduce
let arrReduce = arr.reduce((x, y) => x * y)
console.log(arr)  // [1, 2, 3]
console.log(arrReduce)            // 6
```

#### Array.filter

```js
let arr = [1,2,3]
//filter
let arrFilter = arr.filter(x => x < 2)
console.log(arr)  // [1, 2, 3]
console.log(arrFilter)            // [1]
```

#### Array.reverse

```js
let arr = [1,2,3]
// reverse
let arrReverse = arr.reverse()
console.log(arr)  // [3,2,1]
console.log(arrReverse)           // [3,2,1]
```

#### Array.push

```js
let arr = [1,2,3]

// push, 往数组最后增加一个项目
let arrPush = arr.push(88)
console.log(arr)      // [1, 2, 3, 88]
console.log(arrPush)  // 4 【返回值为 array的长度】
```

#### Array.pop

```js
let arr = [1,2,3]
// pop, 往数组最后增加一个项目
let arrPop = arr.pop()
console.log(arr)      // [1, 2, 3]
console.log(arrPop)   // 88 【返回值为 被删除的值】
```

#### Array.unshift

```js
let arr = [1,2,3]
// unshift: adds one or more elements to the beginning of an array
let arrUnshift = arr.unshift(22,33)
console.log(arr)      // [22, 33, 1, 2, 3]
console.log(arrUnshift)   // 5 【returns the new length of the array】
```

#### Array.shift

```js
let arr = [1,2,3]
// shift 删除数组第一项
let arrShift = arr.shift()
console.log(arr)      // [1, 2, 3]
console.log(arrShift)   // 66 【返回值为 被删除的值】
```

#### Array.includes

```js
let arr = [1,2,3]
//includes
let arrIncludes = arr.includes(18)
console.log(arrIncludes)  // false
console.log(arr) // [ 1, 2, 3 ]
```

#### Array.some

```js
let arr = [1,2,3]
// some
let arrSome = arr.some(x => x < 2)
console.log(arrSome)  // true
console.log(arr) // [ 1, 2, 3 ]
```

#### Array.every

```js
let arr = [1,2,3]
// every
let arrEvery = arr.every(x => x < 2)
console.log(arrEvery)  // flase
console.log(arr) // [ 1, 2, 3 ]
```

#### Array.forEach

```js
let arr = [1,2,3]
// forEach
arr.forEach(x => console.log(x+2)) // 3,4,5
console.log(arr) // [ 1, 2, 3 ]
```

#### Array.join

```js
let arr = [1,2,3]
// join
let arrJoin = arr.join('-')
console.log(arr)    // [ 1, 2, 3 ]
console.log(arrJoin, typeof arrJoin) // '1-2-3' string
```

#### Array.concat

```js
let arr = [1,2,3]
// concat
let arrConcat = arr.concat([66,88])
console.log(arr)        // [ 1, 2, 3 ]
console.log(arrConcat)  // [ 1, 2, 3, 66, 88 ] 
```

#### Array.slice

```js
let arr = [6,8,16,18,66,88]
// slice
let arrSlice = arr.slice(1)
console.log(arr)        // [ 6, 8, 16, 18, 66, 88 ]
console.log(arrSlice)   // [ 8, 16, 18, 66, 88 ]
```

#### Array.splice

```js
let arr = [6,8,16,18,66,88]
// slice
let arrSplice = arr.splice(1,0,'3')
console.log(arr)  			// [ 6, '3', 8, 16, 18, 66, 88 ]
console.log(arrSplice) 	// []
```

### JS String methods 速查

```js
// JS String methods 速查
console.log("Hello".charAt(4))                  // 'o'
console.log("Hello".concat("+", "YOU", "!"))    // "Hello+YOU!"
console.log("Hello".startsWith("He"))   // true
console.log("Hello".endsWith("x"))      // false
console.log("Hello".includes("x"))      // false
console.log("Hello".indexOf("ll"))      // 2
console.log("Hello".lastIndexOf("l"))   // 3
console.log("Hello".match(/[A-Z]/g))    // ['H']
console.log("Hello".padStart(6, "?"))   // "?Hello"
console.log("Hello".padEnd(6, "?"))     // "Hello?"
console.log("Hello".repeat(3))          // "HelloHelloHello"
console.log("Hello".replace("e", "aa")) // "Haallo"
console.log("Hello".search("e"))        // 1
console.log("Hello".slice(1, 3))        // "el"
console.log("Hello".split(""))          // ['H', 'e', 'l', 'l', 'o']
console.log("Hello".substring(2, 4))    // "ll"
console.log("Hello".toLocaleLowerCase())    // "hello"
console.log("Hello".toLocaleUpperCase())    // "HELLO"
console.log("   Hello   ".trim())           // "Hello"
console.log("   Hello   ".trimStart())      // "Hello   "
console.log("   Hello   ".trimEnd())        // "   Hello"
```

