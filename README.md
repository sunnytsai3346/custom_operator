# custom_operator
custom operator() use cases
Summary of Use Cases  
- Custom Sorting: operator() is often overloaded for custom comparators to be used in containers like std::set, std::map, or algorithms like std::sort.
- Filtering: Functors can be passed to algorithms like std::find_if, std::count_if, etc., for conditional logic.
- Stateful Function Objects: Unlike lambdas or regular functions, functors can hold state, making them more flexible in some cases.

Advantages of Functors
- Stateful: Functors can hold state, which can be useful in certain algorithms where additional data is required.
- Reusability: A functor can be defined once and reused across various algorithms without needing inline comparison logic.
- Flexibility: They can have multiple member functions or complex logic inside them, unlike simple lambda functions or function pointers.
This makes operator() a very powerful tool in C++ for customizing the behavior of function-like objects.
