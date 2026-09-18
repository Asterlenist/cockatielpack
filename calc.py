# 1. Получаем числа и операцию
a = float(input("Enter a first number: "))   # Сохраняем число
op = input("Choose (+, -, *, /): ")          # Сохраняем операцию
b = float(input("Enter a second number: "))  # Сохраняем число

# 2. Выполняем вычисления
if op == "+":
    result = a + b
elif op == "-":
    result = a - b
elif op == "*":
    result = a * b
elif op == "/":
    if b != 0:
        result = a / b
    else:
        result = "Error: 1"
else:
    result = "Error: 404"

# 3. Выводим результат
print("Result:", result)
