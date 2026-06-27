#pragma once
// IWYU pragma private; include "Newtonsoft/Json/ReadType.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::ReadType::ReadType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::ReadType::ReadType()   {
}
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::Read{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsInt32{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsInt64{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsBytes{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsString{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDecimal{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDateTime{static_cast<int32_t>(0x6)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDateTimeOffset{static_cast<int32_t>(0x7)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsDouble{static_cast<int32_t>(0x8)};
constexpr ::Newtonsoft::Json::ReadType  Newtonsoft::Json::ReadType::ReadAsBoolean{static_cast<int32_t>(0x9)};
