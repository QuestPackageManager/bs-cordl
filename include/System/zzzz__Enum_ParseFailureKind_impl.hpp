#pragma once
// IWYU pragma private; include "System/Enum_ParseFailureKind.hpp"
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Enum_ParseFailureKind::Enum_ParseFailureKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Enum_ParseFailureKind::Enum_ParseFailureKind()   {
}
constexpr ::GlobalNamespace::Enum_ParseFailureKind  GlobalNamespace::Enum_ParseFailureKind::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Enum_ParseFailureKind  GlobalNamespace::Enum_ParseFailureKind::Argument{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Enum_ParseFailureKind  GlobalNamespace::Enum_ParseFailureKind::ArgumentNull{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Enum_ParseFailureKind  GlobalNamespace::Enum_ParseFailureKind::ArgumentWithParameter{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Enum_ParseFailureKind  GlobalNamespace::Enum_ParseFailureKind::UnhandledException{static_cast<int32_t>(0x4)};
