#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BindingInfo)
namespace Unity::Properties {
struct PropertyPath;
}
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class Binding;
}
namespace UnityEngine::UIElements {
class DataBindingManager_BindingData;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BindingInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BindingInfo);
// Dependencies UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BindingInfo
struct CORDL_TYPE BindingInfo {
public:
  // Declarations
  __declspec(property(get = get_binding)) ::UnityEngine::UIElements::Binding* binding;

  /// @brief Method FromBindingData, addr 0x6a10634, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BindingInfo FromBindingData(::ByRef<::UnityEngine::UIElements::DataBindingManager_BindingData*> bindingData);

  /// @brief Method FromRequest, addr 0x6a10584, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BindingInfo FromRequest(::UnityEngine::UIElements::VisualElement* target, ::ByRef<::Unity::Properties::PropertyPath> targetPath,
                                                                   ::UnityEngine::UIElements::Binding* binding);

  /// @brief Method .ctor, addr 0x6a10554, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::VisualElement* targetElement, ::ByRef<::UnityEngine::UIElements::BindingId> bindingId, ::UnityEngine::UIElements::Binding* binding);

  /// @brief Method get_binding, addr 0x6a1054c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Binding* get_binding();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingInfo();

  // Ctor Parameters [CppParam { name: "_targetElement_k__BackingField", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name:
  // "_bindingId_k__BackingField", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: None }, CppParam { name: "_binding_k__BackingField", ty: "::UnityEngine::UIElements::Binding*",
  // modifiers: "", def_value: None }]
  constexpr BindingInfo(::UnityEngine::UIElements::VisualElement* _targetElement_k__BackingField, ::UnityEngine::UIElements::BindingId _bindingId_k__BackingField,
                        ::UnityEngine::UIElements::Binding* _binding_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4051 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  /// @brief Field <targetElement>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* _targetElement_k__BackingField;

  /// @brief Field <bindingId>k__BackingField, offset: 0x8, size: 0x98, def value: None
  ::UnityEngine::UIElements::BindingId _bindingId_k__BackingField;

  /// @brief Field <binding>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Binding* _binding_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindingInfo, _targetElement_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingInfo, _bindingId_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingInfo, _binding_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingInfo, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingInfo, "UnityEngine.UIElements", "BindingInfo");
