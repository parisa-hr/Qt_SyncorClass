#include "%ClassName:l%.%CppHeaderSuffix%"

@if "%WrapInNamespace%" == "true"
namespace %NamespaceName%
{
@endif
@if "%DataType%" != ""
%ClassName%::%ClassName%(%DataType% *parent) :
	%DataType%(parent)
@else
%ClassName%::%ClassName%() :
@endif
{
}
@if "%WrapInNamespace%" == "true"
}
@endif