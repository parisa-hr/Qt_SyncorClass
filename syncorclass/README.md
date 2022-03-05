# Syncor System's Qt Creator C++ Class Wizard #
Creates a new C++ class with the provided name and allows several additional options.

1. The class can be wrapped in the namespace of your choice ('namespace' is an invalid name).  
2. Can specify to inherit from QObject or QWidget or none. 
3. When inheriting from QObject or QWidget the associated `#include` will be added to the .h file.
4. Can use `#pragma once` instead of the traditional include guards.
5. Can create copy and assignment operators that are private 
6. Can add the C++ 2011 delete keyword on those operators
7. Will show a note describing the proper .pro flag to specify for C++ 11 support.


## Usage ##
Create a new folder under your Qt Creator wizard directory. Here's an example path where I named the new folder "syncorclass".

    C:\Qt\Tools\QtCreator\share\qtcreator\templates\wizards\syncorclass

Put the three files from this repository into that folder. Specifically:

1. wizard.xml
2. syncorclass.cpp
3. syncorclass.h

Exit Qt Creator and restart. Now when you use the File->Add New... item (or any similar context menu item), the New File dialog will have a category named **Syncor's C++ Class**. It will have one wizard in the middle column named **C++ Class with options**. You can double-click that wizard (or use the choose button) and walk through the wizard to create your class.

## License ##
Distributed under the  

### **The MIT License (MIT)** ###

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

**THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.**