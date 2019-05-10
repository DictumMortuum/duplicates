# duplicates

A simple utility to report the duplicate entries that it's fed from stdin.

## Usage

```
❯ echo "1\n2\n3\n3" | duplicates
3
```

```
~/temp.2019-05-10T22:05:32.rVal8uPoq
❯ seq 0 20 > temp

~/temp.2019-05-10T22:05:32.rVal8uPoq
❯ seq 10 30 >> temp

~/temp.2019-05-10T22:05:32.rVal8uPoq
❯ cat temp | duplicates
10
11
12
13
14
15
16
17
18
19
20
```
