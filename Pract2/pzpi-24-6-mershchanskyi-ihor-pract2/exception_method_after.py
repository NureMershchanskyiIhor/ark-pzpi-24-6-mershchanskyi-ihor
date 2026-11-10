def safe_divide(a, b):
    if (
        not isinstance(a, (int, float))
        or not isinstance(b, (int, float))
    ):
        raise TypeError("Arguments must be numbers")
    
    if b == 0:
        raise ZeroDivisionError("Division by zero")
        
    return a / b

try:
    result = safe_divide_refactored(10, 0)
    print(f"Result: {result}")
except ZeroDivisionError as e:
    print(f"Error: {e}")
except TypeError as e:
    print(f"Error: {e}")