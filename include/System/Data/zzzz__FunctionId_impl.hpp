#pragma once
// IWYU pragma private; include "System/Data/FunctionId.hpp"
#include "System/Data/zzzz__FunctionId_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::FunctionId::FunctionId(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::FunctionId::FunctionId()   {
}
constexpr ::System::Data::FunctionId  System::Data::FunctionId::none{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Ascii{static_cast<int32_t>(0x0)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Char{static_cast<int32_t>(0x1)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Charindex{static_cast<int32_t>(0x2)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Difference{static_cast<int32_t>(0x3)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Len{static_cast<int32_t>(0x4)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Lower{static_cast<int32_t>(0x5)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::LTrim{static_cast<int32_t>(0x6)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Patindex{static_cast<int32_t>(0x7)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Replicate{static_cast<int32_t>(0x8)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Reverse{static_cast<int32_t>(0x9)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Right{static_cast<int32_t>(0xa)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::RTrim{static_cast<int32_t>(0xb)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Soundex{static_cast<int32_t>(0xc)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Space{static_cast<int32_t>(0xd)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Str{static_cast<int32_t>(0xe)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Stuff{static_cast<int32_t>(0xf)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Substring{static_cast<int32_t>(0x10)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Upper{static_cast<int32_t>(0x11)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::IsNull{static_cast<int32_t>(0x12)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Iif{static_cast<int32_t>(0x13)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Convert{static_cast<int32_t>(0x14)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::cInt{static_cast<int32_t>(0x15)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::cBool{static_cast<int32_t>(0x16)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::cDate{static_cast<int32_t>(0x17)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::cDbl{static_cast<int32_t>(0x18)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::cStr{static_cast<int32_t>(0x19)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Abs{static_cast<int32_t>(0x1a)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Acos{static_cast<int32_t>(0x1b)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::In{static_cast<int32_t>(0x1c)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Trim{static_cast<int32_t>(0x1d)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Sum{static_cast<int32_t>(0x1e)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Avg{static_cast<int32_t>(0x1f)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Min{static_cast<int32_t>(0x20)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Max{static_cast<int32_t>(0x21)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Count{static_cast<int32_t>(0x22)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::StDev{static_cast<int32_t>(0x23)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::Var{static_cast<int32_t>(0x25)};
constexpr ::System::Data::FunctionId  System::Data::FunctionId::DateTimeOffset{static_cast<int32_t>(0x26)};
