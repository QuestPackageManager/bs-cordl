#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/CommentHandling.hpp"
#include "Newtonsoft/Json/Linq/zzzz__CommentHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::CommentHandling::CommentHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::CommentHandling::CommentHandling()   {
}
constexpr ::Newtonsoft::Json::Linq::CommentHandling  Newtonsoft::Json::Linq::CommentHandling::Ignore{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Linq::CommentHandling  Newtonsoft::Json::Linq::CommentHandling::Load{static_cast<int32_t>(0x1)};
