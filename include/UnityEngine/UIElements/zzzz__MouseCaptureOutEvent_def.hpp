#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseCaptureOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureOutEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureOutEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureOutEvent);
// Type: UnityEngine.UIElements::MouseCaptureOutEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseCaptureOutEvent*
class CORDL_TYPE MouseCaptureOutEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureOutEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::MouseCaptureOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x35c8244, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureOutEvent(MouseCaptureOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureOutEvent(MouseCaptureOutEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureOutEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureOutEvent*, "UnityEngine.UIElements", "MouseCaptureOutEvent");
