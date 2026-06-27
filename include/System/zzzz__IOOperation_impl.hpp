#pragma once
// IWYU pragma private; include "System/IOOperation.hpp"
#include "System/zzzz__IOOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IOOperation::IOOperation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IOOperation::IOOperation()   {
}
constexpr ::System::IOOperation  System::IOOperation::Read{static_cast<int32_t>(0x1)};
constexpr ::System::IOOperation  System::IOOperation::Write{static_cast<int32_t>(0x2)};
