#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerCaptureHelper)
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class PointerDispatchState;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureHelper);
// Type: UnityEngine.UIElements::PointerCaptureHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerCaptureHelper*
class CORDL_TYPE PointerCaptureHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ActivateCompatibilityMouseEvents, addr 0x350cee8, size 0xc4, virtual false, abstract: false, final false
  static inline void ActivateCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId);

  /// @brief Method CapturePointer, addr 0x350cb14, size 0x38, virtual false, abstract: false, final false
  static inline void CapturePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method GetCapturingElement, addr 0x350ccfc, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IEventHandler* GetCapturingElement(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId);

  /// @brief Method GetStateFor, addr 0x350c98c, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::PointerDispatchState* GetStateFor(::UnityEngine::UIElements::IEventHandler* handler);

  /// @brief Method HasPointerCapture, addr 0x350caa4, size 0x38, virtual false, abstract: false, final false
  static inline bool HasPointerCapture(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method PreventCompatibilityMouseEvents, addr 0x350cfe0, size 0xc4, virtual false, abstract: false, final false
  static inline void PreventCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId);

  /// @brief Method ProcessPointerCapture, addr 0x350d32c, size 0xc4, virtual false, abstract: false, final false
  static inline void ProcessPointerCapture(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId);

  /// @brief Method ReleasePointer, addr 0x350cc88, size 0x38, virtual false, abstract: false, final false
  static inline void ReleasePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method ReleasePointer, addr 0x350cdf4, size 0xc4, virtual false, abstract: false, final false
  static inline void ReleasePointer(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId);

  /// @brief Method ShouldSendCompatibilityMouseEvents, addr 0x350d0d4, size 0x124, virtual false, abstract: false, final false
  static inline bool ShouldSendCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::IPointerEvent* evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCaptureHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCaptureHelper(PointerCaptureHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCaptureHelper(PointerCaptureHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureHelper*, "UnityEngine.UIElements", "PointerCaptureHelper");
