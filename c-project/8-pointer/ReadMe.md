# Pointer in C

pointers are variables whose value are locations in memory of other variables.

## Pointers and Arrays

```
numbers[i] == *(numbers + i)
```

```
&numbers[i] == numbers + i
```

## const pointer

```const char * ptr ```is different from ```char * const ptr```