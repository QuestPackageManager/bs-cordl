#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ParseResult.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ParseResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::ParseResult::ParseResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ParseResult::ParseResult()   {
}
constexpr ::Newtonsoft::Json::Utilities::ParseResult  Newtonsoft::Json::Utilities::ParseResult::None{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Utilities::ParseResult  Newtonsoft::Json::Utilities::ParseResult::Success{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::Utilities::ParseResult  Newtonsoft::Json::Utilities::ParseResult::Overflow{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::Utilities::ParseResult  Newtonsoft::Json::Utilities::ParseResult::Invalid{static_cast<int32_t>(0x3)};
