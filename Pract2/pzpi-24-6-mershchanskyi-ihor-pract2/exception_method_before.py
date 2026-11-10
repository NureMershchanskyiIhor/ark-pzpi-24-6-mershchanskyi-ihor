def safe_divide(a, b) -> (float, int):
    if (
        not isinstance(a, (int, float))
        or not isinstance(b, (int, float))
    ):
        return None, 2 # invalid data type
    
    if b == 0:
        return None, 1 # division by zero
        
    return a / b, 0 # success

result, code = safe_divide(10, 0)

if code == 0:
    print(f"Result: {result}")
else:
    print(f"Error: Code {code}")