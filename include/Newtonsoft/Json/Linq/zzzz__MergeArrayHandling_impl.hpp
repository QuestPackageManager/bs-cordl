#pragma once
#include "Newtonsoft/Json/Linq/zzzz__MergeArrayHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Linq::MergeArrayHandling::MergeArrayHandling(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::MergeArrayHandling::MergeArrayHandling() {}
constexpr ::Newtonsoft::Json::Linq::MergeArrayHandling Newtonsoft::Json::Linq::MergeArrayHandling::Concat{ static_cast<int32_t>(0x0) };
constexpr ::Newtonsoft::Json::Linq::MergeArrayHandling Newtonsoft::Json::Linq::MergeArrayHandling::Union{ static_cast<int32_t>(0x1) };
constexpr ::Newtonsoft::Json::Linq::MergeArrayHandling Newtonsoft::Json::Linq::MergeArrayHandling::Replace{ static_cast<int32_t>(0x2) };
constexpr ::Newtonsoft::Json::Linq::MergeArrayHandling Newtonsoft::Json::Linq::MergeArrayHandling::Merge{ static_cast<int32_t>(0x3) };
