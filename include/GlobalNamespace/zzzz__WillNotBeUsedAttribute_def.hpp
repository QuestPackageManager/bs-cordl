#pragma once
// IWYU pragma private; include "GlobalNamespace\WillNotBeUsedAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(WillNotBeUsedAttribute)
// Forward declare root types
namespace GlobalNamespace {
class WillNotBeUsedAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WillNotBeUsedAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WillNotBeUsedAttribute*, "", "WillNotBeUsedAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: WillNotBeUsedAttribute
class CORDL_TYPE WillNotBeUsedAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::WillNotBeUsedAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x330b418, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WillNotBeUsedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WillNotBeUsedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WillNotBeUsedAttribute(WillNotBeUsedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WillNotBeUsedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WillNotBeUsedAttribute(WillNotBeUsedAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23503 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::WillNotBeUsedAttribute) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
