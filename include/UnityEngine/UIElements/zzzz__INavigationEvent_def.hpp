#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/INavigationEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INavigationEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class INavigationEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::INavigationEvent);
// Type: UnityEngine.UIElements::INavigationEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::INavigationEvent*
class CORDL_TYPE INavigationEvent {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "INavigationEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INavigationEvent(INavigationEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INavigationEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INavigationEvent(INavigationEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::INavigationEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::INavigationEvent*, "UnityEngine.UIElements", "INavigationEvent");
