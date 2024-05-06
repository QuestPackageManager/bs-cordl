#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JsonPath/QueryOperator.hpp"
#include "Newtonsoft/Json/Linq/JsonPath/zzzz__QueryOperator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator::QueryOperator(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator::QueryOperator() {}
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::None{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::Equals{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::NotEquals{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::Exists{ static_cast<int32_t>(0x3) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::LessThan{ static_cast<int32_t>(0x4) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::LessThanOrEquals{ static_cast<int32_t>(0x5) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::GreaterThan{ static_cast<int32_t>(0x6) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::GreaterThanOrEquals{ static_cast<int32_t>(0x7) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::And{ static_cast<int32_t>(0x8) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::Or{ static_cast<int32_t>(0x9) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::RegexEquals{ static_cast<int32_t>(0xa) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::StrictEquals{ static_cast<int32_t>(0xb) };
constexpr ::Newtonsoft::Json::Linq::JsonPath::QueryOperator Newtonsoft::Json::Linq::JsonPath::QueryOperator::StrictNotEquals{ static_cast<int32_t>(0xc) };
