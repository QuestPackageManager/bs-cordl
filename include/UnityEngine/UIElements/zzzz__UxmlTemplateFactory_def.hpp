#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTemplateTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlTemplateFactory)
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
class UxmlTemplateFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlTemplateFactory);
// Type: UnityEngine.UIElements::UxmlTemplateFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(6744)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5287
// }), TypeDefinitionIndex(TypeDefinitionIndex(6975))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6974)) CS Name: ::UnityEngine.UIElements::UxmlTemplateFactory*
class CORDL_TYPE UxmlTemplateFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UxmlTemplateTraits*> {
public:
  // Declarations
  __declspec(property(get = get_uxmlName))::StringW uxmlName;

  __declspec(property(get = get_uxmlQualifiedName))::StringW uxmlQualifiedName;

  /// @brief Method get_uxmlName, addr 0x2e0e300, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_uxmlName();

  /// @brief Method get_uxmlQualifiedName, addr 0x2e0e340, size 0x74, virtual true, abstract: false, final false
  inline ::StringW get_uxmlQualifiedName();

  /// @brief Method Create, addr 0x2e0e3b4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlTemplateFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2e0e3bc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UxmlTemplateFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlTemplateFactory(UxmlTemplateFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlTemplateFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlTemplateFactory(UxmlTemplateFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlTemplateFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlTemplateFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlTemplateFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlTemplateFactory*, "UnityEngine.UIElements", "UxmlTemplateFactory");
