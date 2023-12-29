#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStyleTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlStyleFactory)
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlStyleFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlStyleFactory);
// Type: UnityEngine.UIElements::UxmlStyleFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7083)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7083), inst: 5170 }),
// TypeDefinitionIndex(TypeDefinitionIndex(6830)), TypeDefinitionIndex(TypeDefinitionIndex(7059))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7058)) CS Name:
// ::UnityEngine.UIElements::UxmlStyleFactory*
class CORDL_TYPE UxmlStyleFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::UxmlStyleTraits*> {
public:
  // Declarations
  __declspec(property(get = get_uxmlName))::StringW uxmlName;

  __declspec(property(get = get_uxmlQualifiedName))::StringW uxmlQualifiedName;

  /// @brief Method get_uxmlName addr 0x2ca7d5c size 0x40 virtual true final false
  inline ::StringW get_uxmlName();

  /// @brief Method get_uxmlQualifiedName addr 0x2ca7d9c size 0x74 virtual true final false
  inline ::StringW get_uxmlQualifiedName();

  /// @brief Method Create addr 0x2ca7e10 size 0x8 virtual true final false
  inline ::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlStyleFactory* New_ctor();

  /// @brief Method .ctor addr 0x2ca7e18 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UxmlStyleFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlStyleFactory(UxmlStyleFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlStyleFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlStyleFactory(UxmlStyleFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlStyleFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlStyleFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlStyleFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlStyleFactory*, "UnityEngine.UIElements", "UxmlStyleFactory");
