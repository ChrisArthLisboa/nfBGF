
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

for little endian  
0x666e474270466a72

```c
int magic_number[8] = {0x66, 0x6e, 0x47, 0x42, 0x70, 0x46, 0x6a, 0x72} // little endian
```

for checking if little endian or big endian, check if the Magic Number in little endian  
0x6e6642474670726a
```c
int magic_number[8] = {0x6e, 0x66, 0x42, 0x47, 0x46, 0x70, 0x72, 0x6a} // big endian
```

### Version
The version is a serial number that will be incremented in sequence to signal version

### CRC32
Hash production for the file start of data

### File Lenght
Complete lenght of the file 

### offset to data
offset for all of the header to reach at data


## Data

### Tag structure

| all | values | little-endian |
| --------------- | --------------- | --------------- |
| +00 | 1B | Tag Amount of Objects |
| +01 | 1B | Tag Amount of Attributes |

It's recommended that the `Tag Amount of Attributes` is at least 1  
since it will be used for recognizing the tag (for css or other changing object)
but it can be 0

| all | values | little-endian |
| --------------- | --------------- | --------------- |
| +02 | 1B | Attribute Name Size (`ns`) |
| +03 | 1B | Attribute Data Size (`ds`) |
| +04 | `ds`B | Attribute Name |
| +0? | `ns`B | Attribute Data |

if `Tag Amount of Objects` is 0 then  
it means that there is no forms to draw  
and it's only a placeholder tag

| all | values | little-endian |
| --------------- | --------------- | --------------- |
| +0? | ?B | Position of Object |
| +0? | 1B | Layer |
| +0? | 4B | Color (RGBa) |
| +0? | 1B | Form |

