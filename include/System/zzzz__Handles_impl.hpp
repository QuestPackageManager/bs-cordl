#pragma once
// IWYU pragma private; include "System/Handles.hpp"
#include "System/zzzz__Handles_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Handles::Handles(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Handles::Handles()   {
}
constexpr ::System::Handles  System::Handles::STD_INPUT{static_cast<int32_t>(0xfffffff6)};
constexpr ::System::Handles  System::Handles::STD_OUTPUT{static_cast<int32_t>(0xfffffff5)};
constexpr ::System::Handles  System::Handles::STD_ERROR{static_cast<int32_t>(0xfffffff4)};
