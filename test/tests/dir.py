import sys


__package__ = "Test"
__builtins__ = None
__doc__ = None


def fake():
    # manually sorted: ['all', 'these', 'attributes', 'do', 'not', 'exist']
    return ['all', 'attributes', 'do', 'exist', 'not', 'these']


class TestClass(object):
    def __init__(self):
        for n in fake():
            setattr(self, n, n)

    def __dir__(self):
        return fake()


class TestClass2(object):
    def __init__(self):
        self.dictAttr = False
        self.attribute1 = None
        self.other_attribute = False

    def method1(self):
        pass

# All attributes are different between CPython 2.7.5 and pyston
# CPython has more
dir(sys.modules[__name__])
dir(TestClass())
dir(TestClass2())
dir(str())
dir(list())
dir({})
dir(int())
# dir(long())
dir(dir)
dir(fake)
dir(None)
dir()

dir(TestClass)
dir(TestClass2)
dir(sys)
dir(dict)
dir(int)
dir(str)
dir(set)


def test_in_dir(names, obj):
    r = dir(obj)
    print [n in r for n in names]

test_in_dir(fake(), TestClass())
test_in_dir(['attribute1', 'method1'], TestClass2)
test_in_dir(['attribute1', 'method1', 'dictAttr'], TestClass2())
test_in_dir(['__str__', '__new__', '__repr__', '__dir__', '__init__',
             '__module__'] + fake(), TestClass)
test_in_dir(['__str__', '__new__', '__repr__', '__dir__', '__init__',
             '__module__', 'method1', 'dictAttr', 'attribute1'], TestClass2)
test_in_dir(['attribute1', 'dictAttr', '__init__', '__module__', 'method1',
             'other_attribute'], TestClass2())
test_in_dir(fake(), TestClass())
print len(fake()) == len(dir(TestClass()))

for t in [str, int, list, set, dict]:
    test_in_dir(['__str__', '__new__', '__repr__', '__dir__', '__module__'], t)

class C1(object):
    a = 1
    b = 2
class C2(C1):
    b = 3
    c = 4
print sorted([s for s in dir(C2) if s[0] != '_'])

c = C1()
c.d = 2
d1 = c.__dict__
d2 = d1.copy()
c.e = 3
print sorted(d1.items())
print sorted(d2.items())

l = []
for x in d1:
    l.append(x)
l.sort()
print l

c = C1()
c.__dict__.update(dict(a=1, b=5))
print sorted(c.__dict__.items())
