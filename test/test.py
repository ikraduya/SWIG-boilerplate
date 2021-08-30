'''Test API'''

import unittest
from swigproject import fact, my_mod, get_time
from swigproject import kitty

class TestSimple(unittest.TestCase):
  '''Test Simple'''
  def test_simple_function(self):
    fact(5)
    my_mod(7, 3)
    get_time()

class TestClass(unittest.TestCase):
  '''Test Class'''
  def test_kitty_method(self):
    k = kitty()
    k.speak()
    k.speak2()

if __name__ == '__main__':
    unittest.main(verbosity=2)