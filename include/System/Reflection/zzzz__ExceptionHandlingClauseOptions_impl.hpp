#pragma once
// IWYU pragma private; include "System/Reflection/ExceptionHandlingClauseOptions.hpp"
#include "System/Reflection/zzzz__ExceptionHandlingClauseOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::ExceptionHandlingClauseOptions::ExceptionHandlingClauseOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::ExceptionHandlingClauseOptions::ExceptionHandlingClauseOptions()   {
}
constexpr ::System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Clause{static_cast<int32_t>(0x0)};
constexpr ::System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Filter{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Finally{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::ExceptionHandlingClauseOptions  System::Reflection::ExceptionHandlingClauseOptions::Fault{static_cast<int32_t>(0x4)};
