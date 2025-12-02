#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/InteractableController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
CORDL_MODULE_EXPORT(InteractableController)
namespace GlobalNamespace {
class OVRHapticsClip;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class PointerHandler;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class InteractableController;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController
class CORDL_TYPE InteractableController : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(get = get_Hover, put = set_Hover)) bool Hover;

  /// @brief Field _handler, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler> _handler;

  /// @brief Field _hover, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__hover, put = __cordl_internal_set__hover)) bool _hover;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController* New_ctor();

  /// @brief Method OnDisable, addr 0x5847670, size 0x1c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnHoverChanged, addr 0x5843874, size 0x4, virtual true, abstract: false, final false
  inline void OnHoverChanged();

  /// @brief Method OnPointerClick, addr 0x5848ea0, size 0x4, virtual true, abstract: false, final false
  inline void OnPointerClick();

  /// @brief Method OnPointerEnter, addr 0x5848e64, size 0x20, virtual false, abstract: false, final false
  inline void OnPointerEnter();

  /// @brief Method OnPointerExit, addr 0x5848e84, size 0x1c, virtual false, abstract: false, final false
  inline void OnPointerExit();

  /// @brief Method PlayHaptics, addr 0x5843878, size 0x134, virtual false, abstract: false, final false
  inline void PlayHaptics(::GlobalNamespace::OVRHapticsClip* hapticsClip);

  /// @brief Method Setup, addr 0x5843c90, size 0x80, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler> const& __cordl_internal_get__handler() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler>& __cordl_internal_get__handler();

  constexpr bool const& __cordl_internal_get__hover() const;

  constexpr bool& __cordl_internal_get__hover();

  constexpr void __cordl_internal_set__handler(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler> value);

  constexpr void __cordl_internal_set__hover(bool value);

  /// @brief Method .ctor, addr 0x58439b8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Hover, addr 0x5848e38, size 0x8, virtual false, abstract: false, final false
  inline bool get_Hover();

  /// @brief Method set_Hover, addr 0x5848e40, size 0x24, virtual false, abstract: false, final false
  inline void set_Hover(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractableController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractableController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractableController(InteractableController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractableController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractableController(InteractableController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18362 };

  /// @brief Field _handler, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::PointerHandler> ____handler;

  /// @brief Field _hover, offset: 0x78, size: 0x1, def value: None
  bool ____hover;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController, ____handler) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController, ____hover) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController, 0x80>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "InteractableController");
