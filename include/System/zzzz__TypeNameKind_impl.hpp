#pragma once
// IWYU pragma private; include "System/TypeNameKind.hpp"
#include "System/zzzz__TypeNameKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TypeNameKind::TypeNameKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::TypeNameKind::TypeNameKind()   {
}
constexpr ::System::TypeNameKind  System::TypeNameKind::Name{static_cast<int32_t>(0x0)};
constexpr ::System::TypeNameKind  System::TypeNameKind::ToString{static_cast<int32_t>(0x1)};
constexpr ::System::TypeNameKind  System::TypeNameKind::SerializationName{static_cast<int32_t>(0x2)};
constexpr ::System::TypeNameKind  System::TypeNameKind::FullName{static_cast<int32_t>(0x3)};
