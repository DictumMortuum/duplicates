# duplicates

A simple utility to report the duplicate entries that it's fed from stdin.

## Usage

```
❯ echo "1\n2\n3\n3" | ./duplicates
3
```

```
❯ ./duplicates
1
2
3
1
2
2
2
^D
1
2
```
