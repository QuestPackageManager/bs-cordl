#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlRootElementTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlRootElementFactory)
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
class UxmlRootElementFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlRootElementFactory);
// Type: UnityEngine.UIElements::UxmlRootElementFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6003)), TypeDefinitionIndex(TypeDefinitionIndex(6230)), TypeDefinitionIndex(TypeDefinitionIndex(6256)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6256), inst: 5265 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(6229)) CS Name:
// ::UnityEngine.UIElements::UxmlRootElementFactory*
class CORDL_TYPE UxmlRootElementFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UxmlRootElementTraits*> {
public:
  // Declarations
  __declspec(property(get = get_uxmlName))::StringW uxmlName;

  __declspec(property(get = get_uxmlQualifiedName))::StringW uxmlQualifiedName;

  /// @brief Method get_uxmlName, addr 0x2e2b278, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_uxmlName();

  /// @brief Method get_uxmlQualifiedName, addr 0x2e2b2b8, size 0x74, virtual true, abstract: false, final false
  inline ::StringW get_uxmlQualifiedName();

  /// @brief Method Create, addr 0x2e2b32c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlRootElementFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2e2b334, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UxmlRootElementFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlRootElementFactory(UxmlRootElementFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlRootElementFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlRootElementFactory(UxmlRootElementFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlRootElementFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlRootElementFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlRootElementFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlRootElementFactory*, "UnityEngine.UIElements", "UxmlRootElementFactory");
