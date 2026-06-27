#pragma once
// IWYU pragma private; include "System/IO/SearchTarget.hpp"
#include "System/IO/zzzz__SearchTarget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::SearchTarget::SearchTarget(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::SearchTarget::SearchTarget()   {
}
constexpr ::System::IO::SearchTarget  System::IO::SearchTarget::Files{static_cast<int32_t>(0x1)};
constexpr ::System::IO::SearchTarget  System::IO::SearchTarget::Directories{static_cast<int32_t>(0x2)};
constexpr ::System::IO::SearchTarget  System::IO::SearchTarget::Both{static_cast<int32_t>(0x3)};
