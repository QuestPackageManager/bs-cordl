#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/LineInfoHandling.hpp"
#include "Newtonsoft/Json/Linq/zzzz__LineInfoHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::LineInfoHandling::LineInfoHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::LineInfoHandling::LineInfoHandling()   {
}
constexpr ::Newtonsoft::Json::Linq::LineInfoHandling  Newtonsoft::Json::Linq::LineInfoHandling::Ignore{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Linq::LineInfoHandling  Newtonsoft::Json::Linq::LineInfoHandling::Load{static_cast<int32_t>(0x1)};
