#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureEvent);
// Type: UnityEngine.UIElements::MouseCaptureEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseCaptureEvent*
class CORDL_TYPE MouseCaptureEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::MouseCaptureEvent* New_ctor();

  /// @brief Method .ctor, addr 0x359cd90, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureEvent(MouseCaptureEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureEvent(MouseCaptureEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureEvent*, "UnityEngine.UIElements", "MouseCaptureEvent");
