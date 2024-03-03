#pragma once
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::Polyglot::LanguageDirection::LanguageDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LanguageDirection::LanguageDirection() {}
constexpr ::BGLib::Polyglot::LanguageDirection BGLib::Polyglot::LanguageDirection::LeftToRight{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::Polyglot::LanguageDirection BGLib::Polyglot::LanguageDirection::RightToLeft{ static_cast<int32_t>(0x1) };
