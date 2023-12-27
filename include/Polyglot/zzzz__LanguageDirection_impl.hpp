#pragma once
#include "Polyglot/zzzz__LanguageDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Polyglot::LanguageDirection::LanguageDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Polyglot::LanguageDirection::LanguageDirection() {}
constexpr ::Polyglot::LanguageDirection Polyglot::LanguageDirection::LeftToRight{ static_cast<int32_t>(0x0) };
constexpr ::Polyglot::LanguageDirection Polyglot::LanguageDirection::RightToLeft{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
