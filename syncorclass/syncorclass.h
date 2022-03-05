@if "%UseOncePragma%" == "true"
#pragma once
@else
#ifndef %ClassName:u%_H
#define %ClassName:u%_H
@endif
@if "%DataType%" == "QObject"
#include <QObject>
@elseif "%DataType%"  == "QWidget"
#include <QWidget>
@endif

@if "%WrapInNamespace%" == "true"
namespace %NamespaceName%{
@endif
@if "%DataType%" != ""
class %ClassName% : public %DataType%
@else
class %ClassName%
@endif
{
@if "%DataType%" != ""
Q_OBJECT
@endif
public:
@if "%DataType%" != ""
explicit %ClassName%(%DataType% *parent=0);
@else
%ClassName%();
@endif

private:
 @if "%DelteDefaultCopyAssignment%" == "true"
   @if "%UseCpp2011%" == "true"
     explicit %ClassName%(const %ClassName%& rhs) = delete;
     %ClassName%& operator= (const %ClassName%& rhs) = delete;
   @else
     //Pre C++2011 hide by making private and don't implement
     explicit %ClassName%(const %ClassName%& rhs);
     %ClassName%& operator= (const %ClassName%& rhs);
   @endif
 @endif
};
@if "%WrapInNamespace%" == "true"
}
@endif
@if "%UseOncePragma%" != "true"
#endif // %ClassName:u%_H
@endif


