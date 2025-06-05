#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAttributeOverridesTraits.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlTraits_def.hpp"
CORDL_MODULE_EXPORT(UxmlAttributeOverridesTraits)
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlAttributeOverridesTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlAttributeOverridesTraits);
// Dependencies UnityEngine.UIElements.UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlAttributeOverridesTraits
class CORDL_TYPE UxmlAttributeOverridesTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
  // Declarations
  /// @brief Field m_ElementName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ElementName, put = __cordl_internal_set_m_ElementName)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_ElementName;

  static inline ::UnityEngine::UIElements::UxmlAttributeOverridesTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_ElementName() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_ElementName();

  constexpr void __cordl_internal_set_m_ElementName(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4aa21a4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlAttributeOverridesTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeOverridesTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlAttributeOverridesTraits(UxmlAttributeOverridesTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeOverridesTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlAttributeOverridesTraits(UxmlAttributeOverridesTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6241 };

  /// @brief Field m_ElementName, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_ElementName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeOverridesTraits, ___m_ElementName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlAttributeOverridesTraits, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlAttributeOverridesTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlAttributeOverridesTraits*, "UnityEngine.UIElements", "UxmlAttributeOverridesTraits");
