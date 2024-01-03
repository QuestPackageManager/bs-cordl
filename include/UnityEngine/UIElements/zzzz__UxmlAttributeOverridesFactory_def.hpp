#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlAttributeOverridesTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlAttributeOverridesFactory)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlAttributeOverridesFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlAttributeOverridesFactory);
// Type: UnityEngine.UIElements::UxmlAttributeOverridesFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6744)), TypeDefinitionIndex(TypeDefinitionIndex(6977)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5284
// }), TypeDefinitionIndex(TypeDefinitionIndex(6997))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6976)) CS Name: ::UnityEngine.UIElements::UxmlAttributeOverridesFactory*
class CORDL_TYPE UxmlAttributeOverridesFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UxmlAttributeOverridesTraits*> {
public:
  // Declarations
  __declspec(property(get = get_uxmlName))::StringW uxmlName;

  __declspec(property(get = get_uxmlQualifiedName))::StringW uxmlQualifiedName;

  /// @brief Method get_uxmlName, addr 0x2e0e4fc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_uxmlName();

  /// @brief Method get_uxmlQualifiedName, addr 0x2e0e53c, size 0x74, virtual true, abstract: false, final false
  inline ::StringW get_uxmlQualifiedName();

  /// @brief Method Create, addr 0x2e0e5b0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlAttributeOverridesFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2e0e5b8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeOverridesFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlAttributeOverridesFactory(UxmlAttributeOverridesFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlAttributeOverridesFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlAttributeOverridesFactory(UxmlAttributeOverridesFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlAttributeOverridesFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlAttributeOverridesFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlAttributeOverridesFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlAttributeOverridesFactory*, "UnityEngine.UIElements", "UxmlAttributeOverridesFactory");
