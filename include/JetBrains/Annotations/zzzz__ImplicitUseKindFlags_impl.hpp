#pragma once
#include "JetBrains/Annotations/zzzz__ImplicitUseKindFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags::ImplicitUseKindFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags::ImplicitUseKindFlags() {}
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags JetBrains::Annotations::ImplicitUseKindFlags::Default{ static_cast<int32_t>(0x7) };
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags JetBrains::Annotations::ImplicitUseKindFlags::Access{ static_cast<int32_t>(0x1) };
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags JetBrains::Annotations::ImplicitUseKindFlags::Assign{ static_cast<int32_t>(0x2) };
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags JetBrains::Annotations::ImplicitUseKindFlags::InstantiatedWithFixedConstructorSignature{ static_cast<int32_t>(0x4) };
constexpr ::JetBrains::Annotations::ImplicitUseKindFlags JetBrains::Annotations::ImplicitUseKindFlags::InstantiatedNoFixedConstructorSignature{ static_cast<int32_t>(0x8) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
