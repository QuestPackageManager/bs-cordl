#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCaptureHelper.hpp"
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
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerCaptureHelper
class CORDL_TYPE PointerCaptureHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ActivateCompatibilityMouseEvents, addr 0x4a46be0, size 0xc4, virtual false, abstract: false, final false
  static inline void ActivateCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId);

  /// @brief Method CapturePointer, addr 0x4a420b0, size 0x38, virtual false, abstract: false, final false
  static inline void CapturePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method GetCapturingElement, addr 0x4a46a24, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IEventHandler* GetCapturingElement(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId);

  /// @brief Method GetStateFor, addr 0x4a4676c, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::PointerDispatchState* GetStateFor(::UnityEngine::UIElements::IEventHandler* handler);

  /// @brief Method HasPointerCapture, addr 0x4a41fa0, size 0x38, virtual false, abstract: false, final false
  static inline bool HasPointerCapture(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method PreventCompatibilityMouseEvents, addr 0x4a46cd8, size 0xc4, virtual false, abstract: false, final false
  static inline void PreventCompatibilityMouseEvents(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId);

  /// @brief Method ProcessPointerCapture, addr 0x4a420e8, size 0xc4, virtual false, abstract: false, final false
  static inline void ProcessPointerCapture(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId);

  /// @brief Method ReleasePointer, addr 0x4a42284, size 0x38, virtual false, abstract: false, final false
  static inline void ReleasePointer(::UnityEngine::UIElements::IEventHandler* handler, int32_t pointerId);

  /// @brief Method ReleasePointer, addr 0x4a46aec, size 0xc4, virtual false, abstract: false, final false
  static inline void ReleasePointer(::UnityEngine::UIElements::IPanel* panel, int32_t pointerId);

  /// @brief Method ShouldSendCompatibilityMouseEvents, addr 0x4a46dcc, size 0x124, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureHelper*, "UnityEngine.UIElements", "PointerCaptureHelper");
