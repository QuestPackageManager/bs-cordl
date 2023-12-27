#pragma once
#include "Newtonsoft/Json/Linq/zzzz__MergeNullValueHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::MergeNullValueHandling::MergeNullValueHandling(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::MergeNullValueHandling::MergeNullValueHandling() {}
constexpr ::Newtonsoft::Json::Linq::MergeNullValueHandling Newtonsoft::Json::Linq::MergeNullValueHandling::Ignore{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::Linq::MergeNullValueHandling Newtonsoft::Json::Linq::MergeNullValueHandling::Merge{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
