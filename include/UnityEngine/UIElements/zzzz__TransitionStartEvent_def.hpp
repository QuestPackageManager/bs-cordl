#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransitionStartEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionStartEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionStartEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionStartEvent);
// Type: UnityEngine.UIElements::TransitionStartEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TransitionStartEvent*
class CORDL_TYPE TransitionStartEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionStartEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::TransitionStartEvent* New_ctor();

  /// @brief Method .ctor, addr 0x35a37ec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionStartEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionStartEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionStartEvent(TransitionStartEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionStartEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionStartEvent(TransitionStartEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionStartEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionStartEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionStartEvent*, "UnityEngine.UIElements", "TransitionStartEvent");
