#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Button.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__InteractableController_def.hpp"
CORDL_MODULE_EXPORT(Button)
namespace GlobalNamespace {
class OVRHapticsClip;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Button;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Button
class CORDL_TYPE Button : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController {
public:
  // Declarations
  __declspec(property(get = get_Callback, put = set_Callback)) ::System::Action* Callback;

  /// @brief Field <Callback>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__Callback_k__BackingField, put = __cordl_internal_set__Callback_k__BackingField)) ::System::Action* _Callback_k__BackingField;

  /// @brief Field _hapticsClip, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__hapticsClip, put = setStaticF__hapticsClip)) ::GlobalNamespace::OVRHapticsClip* _hapticsClip;

  /// @brief Method Init, addr 0x58a9d90, size 0x4c, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button* New_ctor();

  /// @brief Method OnHoverChanged, addr 0x58a9fb8, size 0x20, virtual true, abstract: false, final false
  inline void OnHoverChanged();

  /// @brief Method OnPointerClick, addr 0x58a9f44, size 0x74, virtual true, abstract: false, final false
  inline void OnPointerClick();

  constexpr ::System::Action* const& __cordl_internal_get__Callback_k__BackingField() const;

  constexpr ::System::Action*& __cordl_internal_get__Callback_k__BackingField();

  constexpr void __cordl_internal_set__Callback_k__BackingField(::System::Action* value);

  /// @brief Method .ctor, addr 0x58aa110, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::OVRHapticsClip* getStaticF__hapticsClip();

  /// @brief Method get_Callback, addr 0x58a9f34, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action* get_Callback();

  /// @brief Method get_HapticsClip, addr 0x58a9ddc, size 0x158, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRHapticsClip* get_HapticsClip();

  static inline void setStaticF__hapticsClip(::GlobalNamespace::OVRHapticsClip* value);

  /// @brief Method set_Callback, addr 0x58a9f3c, size 0x8, virtual false, abstract: false, final false
  inline void set_Callback(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Button();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Button(Button&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Button", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Button(Button const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18358 };

  /// @brief Field <Callback>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ____Callback_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button, ____Callback_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button, 0x88>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Button*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Button");
