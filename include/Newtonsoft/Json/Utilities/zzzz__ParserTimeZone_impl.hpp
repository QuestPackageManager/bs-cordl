#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ParserTimeZone.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ParserTimeZone_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone::ParserTimeZone(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone::ParserTimeZone()   {
}
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone  Newtonsoft::Json::Utilities::ParserTimeZone::Unspecified{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone  Newtonsoft::Json::Utilities::ParserTimeZone::Utc{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone  Newtonsoft::Json::Utilities::ParserTimeZone::LocalWestOfUtc{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::Utilities::ParserTimeZone  Newtonsoft::Json::Utilities::ParserTimeZone::LocalEastOfUtc{static_cast<int32_t>(0x3)};
