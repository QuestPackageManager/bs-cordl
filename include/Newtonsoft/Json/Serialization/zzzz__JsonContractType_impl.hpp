#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonContractType.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContractType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Serialization::JsonContractType::JsonContractType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonContractType::JsonContractType()   {
}
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  Newtonsoft::Json::Serialization::JsonContractType::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  Newtonsoft::Json::Serialization::JsonContractType::Object{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  Newtonsoft::Json::Serialization::JsonContractType::Array{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  Newtonsoft::Json::Serialization::JsonContractType::Primitive{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  Newtonsoft::Json::Serialization::JsonContractType::String{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  Newtonsoft::Json::Serialization::JsonContractType::Dictionary{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  Newtonsoft::Json::Serialization::JsonContractType::Dynamic{static_cast<int32_t>(0x6)};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  Newtonsoft::Json::Serialization::JsonContractType::Serializable{static_cast<int32_t>(0x7)};
constexpr ::Newtonsoft::Json::Serialization::JsonContractType  Newtonsoft::Json::Serialization::JsonContractType::Linq{static_cast<int32_t>(0x8)};
