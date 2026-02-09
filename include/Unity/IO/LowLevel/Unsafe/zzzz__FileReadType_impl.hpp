#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/FileReadType.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileReadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType::FileReadType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType::FileReadType()   {
}
constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType  Unity::IO::LowLevel::Unsafe::FileReadType::Sync{static_cast<int32_t>(0x0)};
constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType  Unity::IO::LowLevel::Unsafe::FileReadType::Async{static_cast<int32_t>(0x1)};
