
# Why this project

As stated this project initiates at [nfApplicationGraphics](https://github.com/ChrisArthLisboa/nfAppGraphics), as the idea to be a performatic graphics lib with multiplatform support and use html/css or any other markup language to create UI. simplifing the process of creating software without losing performance.  

The idea here is to create a markup language representation that can be compiled in AOT style for maximum performance interacting directly with code without losing time with parsing, linking, or creating the so called [DOM tree](https://developer.mozilla.org/en-US/docs/Learn_web_development/Getting_started/Web_standards/How_browsers_load_websites).  

The name BGF is just a play with the binary graphical format, as it's at it's core a graphical representation in binary.

For why specific technical choices:
- C was chosen for both compilers as it still is a half decade old language with good support at even microwaves or smart frigdes. Not that other languages aren't but C still is the safest bet.  
- This code is meant to be replicable for any other markup language, not only html/css but markdown, xml, LaTex or any other
- It's meant to be the most performant possible keeping multiplatform in mind.
- And even though is not the main focus, keep it accessible for screen readers and jumping using the keyboard.
