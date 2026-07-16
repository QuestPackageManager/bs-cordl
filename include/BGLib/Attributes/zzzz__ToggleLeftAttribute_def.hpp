#pragma once
// IWYU pragma private; include "BGLib/Attributes/ToggleLeftAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(ToggleLeftAttribute)
// Forward declare root types
namespace BGLib::Attributes {
class ToggleLeftAttribute;
}
// Write type traits
MARK_REF_T(::BGLib::Attributes::ToggleLeftAttribute*);
DEFINE_IL2CPP_CLASS(::BGLib::Attributes::ToggleLeftAttribute*, "BGLib.Attributes", "ToggleLeftAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace BGLib::Attributes {
// Is value type: false
// CS Name: BGLib.Attributes.ToggleLeftAttribute
class CORDL_TYPE ToggleLeftAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::BGLib::Attributes::ToggleLeftAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3309bd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleLeftAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleLeftAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleLeftAttribute(ToggleLeftAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleLeftAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleLeftAttribute(ToggleLeftAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::Attributes::ToggleLeftAttribute) == 0x18, "Size mismatch!");

} // namespace BGLib::Attributes
