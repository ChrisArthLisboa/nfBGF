
# Specifications

## Summary
1. Dictionary
1. Header

## Dictionary

| key | value |
| -------------- | --------------- |
| b | bit |
| B | Byte |

## Header
| all | values | little-endian |
| --------------- | --------------- | --------------- |
| +00 | 8B | Magic Number |
| +08 | 1B | Version Number |
| +0a | 4B | CRC32 |
| +0e | 4B | File Lenght |
| +12 | 2B | data offset |
| +xx | xx | data |

### Magic Number
0x666e474270466a72

```c
int magic_number[8] = {0x66, 0x6e, 0x47, 0x42, 0x70, 0x46, 0x6a, 0x72}
```

for checking if little endia or big endian, check if the Magic Number in little endian

### Version
The version is a serial number that will be incremented in sequence to signal version

### CRC32
Hash production for the file start of data

### File Lenght
Complete lenght of the file 

### offset to data
offset for all of the header to reach at data


## Data


