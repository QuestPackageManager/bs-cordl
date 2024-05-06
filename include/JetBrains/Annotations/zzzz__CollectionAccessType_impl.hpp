#pragma once
// IWYU pragma private; include "JetBrains/Annotations/CollectionAccessType.hpp"
#include "JetBrains/Annotations/zzzz__CollectionAccessType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JetBrains::Annotations::CollectionAccessType::CollectionAccessType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::CollectionAccessType::CollectionAccessType() {}
constexpr ::JetBrains::Annotations::CollectionAccessType JetBrains::Annotations::CollectionAccessType::None{ static_cast<int32_t>(0x0) };
constexpr ::JetBrains::Annotations::CollectionAccessType JetBrains::Annotations::CollectionAccessType::Read{ static_cast<int32_t>(0x1) };
constexpr ::JetBrains::Annotations::CollectionAccessType JetBrains::Annotations::CollectionAccessType::ModifyExistingContent{ static_cast<int32_t>(0x2) };
constexpr ::JetBrains::Annotations::CollectionAccessType JetBrains::Annotations::CollectionAccessType::UpdatedContent{ static_cast<int32_t>(0x6) };
