#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCaptureOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCaptureOutEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureOutEvent);
// Type: UnityEngine.UIElements::PointerCaptureOutEvent
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerCaptureOutEvent*
class CORDL_TYPE PointerCaptureOutEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureOutEvent*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::PointerCaptureOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x35de038, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCaptureOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCaptureOutEvent(PointerCaptureOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCaptureOutEvent(PointerCaptureOutEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureOutEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureOutEvent*, "UnityEngine.UIElements", "PointerCaptureOutEvent");
