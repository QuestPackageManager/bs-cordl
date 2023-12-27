#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(NavigationSubmitEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationSubmitEvent);
// Type: UnityEngine.UIElements::NavigationSubmitEvent
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7248), inst: 4703 }), TypeDefinitionIndex(TypeDefinitionIndex(7248))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7254))
// CS Name: ::UnityEngine.UIElements::NavigationSubmitEvent*
class CORDL_TYPE NavigationSubmitEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationSubmitEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::NavigationSubmitEvent* New_ctor();

  /// @brief Method .ctor addr 0x2e53280 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NavigationSubmitEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationSubmitEvent(NavigationSubmitEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationSubmitEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationSubmitEvent(NavigationSubmitEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationSubmitEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationSubmitEvent, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::NavigationSubmitEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationSubmitEvent*, "UnityEngine.UIElements", "NavigationSubmitEvent");
