#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(UxmlObjectAttribute)
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlObjectAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlObjectAttribute);
// Dependencies System.Attribute
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlObjectAttribute
class CORDL_TYPE UxmlObjectAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::UxmlObjectAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6af44b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlObjectAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlObjectAttribute(UxmlObjectAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlObjectAttribute(UxmlObjectAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5175 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlObjectAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlObjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlObjectAttribute*, "UnityEngine.UIElements", "UxmlObjectAttribute");
