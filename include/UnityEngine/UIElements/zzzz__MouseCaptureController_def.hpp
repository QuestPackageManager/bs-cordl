#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureController)
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureController);
// Type: UnityEngine.UIElements::MouseCaptureController
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::MouseCaptureController*
class CORDL_TYPE MouseCaptureController : public ::System::Object {
public:
  // Declarations
  /// @brief Method CaptureMouse, addr 0x2f65544, size 0xe0, virtual false, abstract: false, final false
  static inline void CaptureMouse(::UnityEngine::UIElements::IEventHandler* handler);

  /// @brief Method HasMouseCapture, addr 0x2f69e2c, size 0xb0, virtual false, abstract: false, final false
  static inline bool HasMouseCapture(::UnityEngine::UIElements::IEventHandler* handler);

  /// @brief Method ReleaseMouse, addr 0x2f6a7b4, size 0xe0, virtual false, abstract: false, final false
  static inline void ReleaseMouse(::UnityEngine::UIElements::IEventHandler* handler);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureController(MouseCaptureController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureController(MouseCaptureController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureController, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureController*, "UnityEngine.UIElements", "MouseCaptureController");
