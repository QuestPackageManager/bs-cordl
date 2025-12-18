#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/OverlayCanvasPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Panel_def.hpp"
CORDL_MODULE_EXPORT(OverlayCanvasPanel)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class OverlayCanvas;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class OverlayCanvasPanel;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.OverlayCanvasPanel
class CORDL_TYPE OverlayCanvasPanel : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel {
public:
  // Declarations
  /// @brief Field _overlayCanvas, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__overlayCanvas, put = __cordl_internal_set__overlayCanvas)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas>
      _overlayCanvas;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel* New_ctor();

  /// @brief Method Setup, addr 0x58ad22c, size 0xa4, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas> const& __cordl_internal_get__overlayCanvas() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas>& __cordl_internal_get__overlayCanvas();

  constexpr void __cordl_internal_set__overlayCanvas(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas> value);

  /// @brief Method .ctor, addr 0x58ad42c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OverlayCanvasPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OverlayCanvasPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OverlayCanvasPanel(OverlayCanvasPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OverlayCanvasPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OverlayCanvasPanel(OverlayCanvasPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18368 };

  /// @brief Field _overlayCanvas, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvas> ____overlayCanvas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel, ____overlayCanvas) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel, 0xc8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::OverlayCanvasPanel*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "OverlayCanvasPanel");
