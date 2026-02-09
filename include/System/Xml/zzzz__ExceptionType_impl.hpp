#pragma once
// IWYU pragma private; include "System/Xml/ExceptionType.hpp"
#include "System/Xml/zzzz__ExceptionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ExceptionType::ExceptionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::ExceptionType::ExceptionType()   {
}
constexpr ::System::Xml::ExceptionType  System::Xml::ExceptionType::ArgumentException{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::ExceptionType  System::Xml::ExceptionType::XmlException{static_cast<int32_t>(0x1)};
