#pragma once
#include "JetBrains/Annotations/zzzz__AssertionConditionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JetBrains::Annotations::AssertionConditionType::AssertionConditionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AssertionConditionType::AssertionConditionType() {}
constexpr ::JetBrains::Annotations::AssertionConditionType JetBrains::Annotations::AssertionConditionType::IS_TRUE{ static_cast<int32_t>(0x0) };
constexpr ::JetBrains::Annotations::AssertionConditionType JetBrains::Annotations::AssertionConditionType::IS_FALSE{ static_cast<int32_t>(0x1) };
constexpr ::JetBrains::Annotations::AssertionConditionType JetBrains::Annotations::AssertionConditionType::IS_NULL{ static_cast<int32_t>(0x2) };
constexpr ::JetBrains::Annotations::AssertionConditionType JetBrains::Annotations::AssertionConditionType::IS_NOT_NULL{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
