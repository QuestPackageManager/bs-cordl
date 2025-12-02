#pragma once
// IWYU pragma private; include "UnityEngine/DelayedAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(DelayedAttribute)
// Forward declare root types
namespace UnityEngine {
class DelayedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::DelayedAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.DelayedAttribute
class CORDL_TYPE DelayedAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::UnityEngine::DelayedAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x68a473c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelayedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelayedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelayedAttribute(DelayedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelayedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelayedAttribute(DelayedAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::DelayedAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::DelayedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::DelayedAttribute*, "UnityEngine", "DelayedAttribute");
