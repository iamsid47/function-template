# Function Template in CPP

In C++, a function template is a way to write a single function that can work with multiple data types. The template keyword is used to indicate that a function is a template, and the type parameter is specified within angle brackets (<>). For example:

```
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}
```

This function template takes two arguments of the same data type and returns the larger of the two. The type parameter T can be replaced with any valid data type, such as int, float, or string. The function can be called with different types of arguments, like:

```
int x = max(3, 4);
float y = max(3.14, 2.71);

```
Additionally, you can also create a class template in C++ which allows for creating a generic class with a parameterized types.