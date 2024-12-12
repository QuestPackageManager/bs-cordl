#pragma once
// IWYU pragma private; include "GlobalNamespace/TagPropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(TagPropertyAttribute)
// Forward declare root types
namespace GlobalNamespace {
class TagPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TagPropertyAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: TagPropertyAttribute
class CORDL_TYPE TagPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::TagPropertyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x229c320, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TagPropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TagPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TagPropertyAttribute(TagPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TagPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TagPropertyAttribute(TagPropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19153 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TagPropertyAttribute, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TagPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TagPropertyAttribute*, "", "TagPropertyAttribute");
