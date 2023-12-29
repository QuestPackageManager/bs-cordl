#pragma once
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
// Type: UnityEngine.UIElements::UxmlAttributeOverridesTraits
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7081))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7063))
// CS Name: ::UnityEngine.UIElements::UxmlAttributeOverridesTraits*
class CORDL_TYPE UxmlAttributeOverridesTraits : public ::UnityEngine::UIElements::UxmlTraits {
public:
  // Declarations
  /// @brief Field m_ElementName, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ElementName, put = __set_m_ElementName))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_ElementName;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __get_m_ElementName();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __get_m_ElementName() const;

  constexpr void __set_m_ElementName(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  static inline ::UnityEngine::UIElements::UxmlAttributeOverridesTraits* New_ctor();

  /// @brief Method .ctor addr 0x2ca8250 size 0x88 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeOverridesTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlAttributeOverridesTraits(UxmlAttributeOverridesTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeOverridesTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlAttributeOverridesTraits(UxmlAttributeOverridesTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlAttributeOverridesTraits();

public:
  /// @brief Field m_ElementName, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_ElementName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlAttributeOverridesTraits, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlAttributeOverridesTraits, ___m_ElementName) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlAttributeOverridesTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlAttributeOverridesTraits*, "UnityEngine.UIElements", "UxmlAttributeOverridesTraits");
