#pragma once
// IWYU pragma private; include "System/TypeNameFormatFlags.hpp"
#include "System/zzzz__TypeNameFormatFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TypeNameFormatFlags::TypeNameFormatFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::TypeNameFormatFlags::TypeNameFormatFlags()   {
}
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatBasic{static_cast<int32_t>(0x0)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatNamespace{static_cast<int32_t>(0x1)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatFullInst{static_cast<int32_t>(0x2)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatAssembly{static_cast<int32_t>(0x4)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatSignature{static_cast<int32_t>(0x8)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatNoVersion{static_cast<int32_t>(0x10)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatAngleBrackets{static_cast<int32_t>(0x40)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatStubInfo{static_cast<int32_t>(0x80)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatGenericParam{static_cast<int32_t>(0x100)};
constexpr ::System::TypeNameFormatFlags  System::TypeNameFormatFlags::FormatSerialization{static_cast<int32_t>(0x103)};
