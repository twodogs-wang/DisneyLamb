# python装饰器：

装饰器本身是一个python的函数，目的是在不改动原始代码的前提下扩展额外功能，其返回值也是一个函数对象。

## 例子：

```python
def base_dunc():
    print("this is a demo")
```

假设我们要对这个函数增加一个日志功能：

```python
def base_func():
	print("this is a demo")
	logging.info("demo")
```

But，如果后面又其他函数都需要增加日志功能呢？这样就会产生很多重复代码，holy shit！用装饰器就可以解决这个问题：

```python
def use_logging(func): #装饰器
    def wrapper(*args, **kwargs):
        logging.warn("xxxxx")
        return func(*args,**kwargs)
return wrapper

def bar():
    print("I am bar")
bar = use_logging(bar)
bar()

#也可以这样：
@use_logging
def bar():
    print("I am bar")
```

其余还有带参数的装饰器，可以根据参数来增加不同的功能，还有装饰器类等等