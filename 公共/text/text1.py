class Dog:
    def __init__(self, name, price, age):  # 构造函数
        self.name = name
        self.age = age
        self.price = price

    def shuchu(self):  # 自定义函数
        print(self.age)

    def set_name(self, name):  # name为传入的参数，也就是新的属性值
        self.name = name

class Little_Dog(Dog):
    def __init__(self,name,price,age,size):
        super().__init__(name,price,age)
        self.size=size
    def dog_size(self):
        print(self.size)
    def shuchu(self):
        print(self.price)


class Animal():
    def __init__(self, atype, name, price, age):
        self.atype = atype  # Animal类特有的属性
        self.dog = Dog(name, price, age)  # 通过Dog类创建对象dog,作为Animal这个类的属性
    def get_atype(self):  # Animal类特有的方法
        print(self.atype)

    def shuchu(self):
        self.dog.shuchu()  # 直接调用对象dog中的函数
