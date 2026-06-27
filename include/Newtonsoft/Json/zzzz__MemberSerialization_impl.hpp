#pragma once
// IWYU pragma private; include "Newtonsoft/Json/MemberSerialization.hpp"
#include "Newtonsoft/Json/zzzz__MemberSerialization_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::MemberSerialization::MemberSerialization(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::MemberSerialization::MemberSerialization()   {
}
constexpr ::Newtonsoft::Json::MemberSerialization  Newtonsoft::Json::MemberSerialization::OptOut{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::MemberSerialization  Newtonsoft::Json::MemberSerialization::OptIn{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::MemberSerialization  Newtonsoft::Json::MemberSerialization::Fields{static_cast<int32_t>(0x2)};
