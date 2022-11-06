// A parameter is a named variable passed into a function.

/*
1.形式参数和实际参数
2.变量作为函数参数 是值传递，单向传递，并不会改变a，b的值
3.数组作为函数参数
3.1数组元素（下标变量）作为函数参数:  同样是值传递并不会改变a[0]的值。
3.2一维数组名作为函数参数
    函数调用时，把数组名即数组的首地址作为实参传递给形参
3.3数组指针，即数组元素的地址作为函数参数


重点：
    数组元素（下标变量）作为函数的参数进行的数据传递是值传递方式，数组名（数组首地址）、数组元素的地址（&arr[0]）作为函数参数进行的数据传递是地址传递方式。
    实参为数组名是，形参接收时可以有三种形式：带下标的数组名(arr[0])。不带下标的数组名（arr）、可接收地址值的指针变量名（*a）。由于是参数组和形参数组都指向同一段内存单元，故它们操作的是同一批数据，所以形参的改变就是改变了实参中的数据。
*/ 