#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(NavigationCancelEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationCancelEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationCancelEvent);
// Type: UnityEngine.UIElements::NavigationCancelEvent
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 124, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::NavigationCancelEvent*
class CORDL_TYPE NavigationCancelEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationCancelEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::NavigationCancelEvent* New_ctor();

  /// @brief Method .ctor, addr 0x339f39c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationCancelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationCancelEvent(NavigationCancelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationCancelEvent(NavigationCancelEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationCancelEvent, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::NavigationCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationCancelEvent*, "UnityEngine.UIElements", "NavigationCancelEvent");
