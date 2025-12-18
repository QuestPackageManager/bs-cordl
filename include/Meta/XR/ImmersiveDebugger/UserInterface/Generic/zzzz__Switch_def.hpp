#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Switch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithIcon_def.hpp"
CORDL_MODULE_EXPORT(Switch)
namespace Meta::XR::ImmersiveDebugger::Manager {
class Tweak;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Switch;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Switch
class CORDL_TYPE Switch : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithIcon {
public:
  // Declarations
  __declspec(property(get = get_State, put = set_State)) bool State;

  __declspec(property(get = get_StateChanged, put = set_StateChanged)) ::System::Action_1<bool>* StateChanged;

  __declspec(property(get = get_Tweak, put = set_Tweak)) ::Meta::XR::ImmersiveDebugger::Manager::Tweak* Tweak;

  /// @brief Field <StateChanged>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__StateChanged_k__BackingField, put = __cordl_internal_set__StateChanged_k__BackingField)) ::System::Action_1<bool>* _StateChanged_k__BackingField;

  /// @brief Field <Tweak>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__Tweak_k__BackingField, put = __cordl_internal_set__Tweak_k__BackingField)) ::Meta::XR::ImmersiveDebugger::Manager::Tweak* _Tweak_k__BackingField;

  /// @brief Field _toggleIconOff, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleIconOff, put = __cordl_internal_set__toggleIconOff)) ::UnityW<::UnityEngine::Texture2D> _toggleIconOff;

  /// @brief Field _toggleIconOn, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleIconOn, put = __cordl_internal_set__toggleIconOn)) ::UnityW<::UnityEngine::Texture2D> _toggleIconOn;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch* New_ctor();

  /// @brief Method OnStateChanged, addr 0x58ae940, size 0x5c, virtual false, abstract: false, final false
  inline void OnStateChanged();

  /// @brief Method SetToggleIcons, addr 0x58ae9f0, size 0x8, virtual false, abstract: false, final false
  inline void SetToggleIcons(::UnityEngine::Texture2D* onState, ::UnityEngine::Texture2D* offState);

  /// @brief Method Start, addr 0x58ae9ac, size 0x44, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateIcon, addr 0x58ae9f8, size 0x16c, virtual true, abstract: false, final false
  inline void UpdateIcon();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get__StateChanged_k__BackingField() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get__StateChanged_k__BackingField();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Tweak* const& __cordl_internal_get__Tweak_k__BackingField() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Tweak*& __cordl_internal_get__Tweak_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__toggleIconOff() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__toggleIconOff();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__toggleIconOn() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__toggleIconOn();

  constexpr void __cordl_internal_set__StateChanged_k__BackingField(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set__Tweak_k__BackingField(::Meta::XR::ImmersiveDebugger::Manager::Tweak* value);

  constexpr void __cordl_internal_set__toggleIconOff(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__toggleIconOn(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x58aeb64, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_State, addr 0x58ae858, size 0xac, virtual false, abstract: false, final false
  inline bool get_State();

  /// @brief Method get_StateChanged, addr 0x58ae99c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<bool>* get_StateChanged();

  /// @brief Method get_Tweak, addr 0x58ae848, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::Tweak* get_Tweak();

  /// @brief Method set_State, addr 0x58ae904, size 0x3c, virtual false, abstract: false, final false
  inline void set_State(bool value);

  /// @brief Method set_StateChanged, addr 0x58ae9a4, size 0x8, virtual false, abstract: false, final false
  inline void set_StateChanged(::System::Action_1<bool>* value);

  /// @brief Method set_Tweak, addr 0x58ae850, size 0x8, virtual false, abstract: false, final false
  inline void set_Tweak(::Meta::XR::ImmersiveDebugger::Manager::Tweak* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Switch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Switch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Switch(Switch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Switch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Switch(Switch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18373 };

  /// @brief Field _toggleIconOn, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____toggleIconOn;

  /// @brief Field _toggleIconOff, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____toggleIconOff;

  /// @brief Field <Tweak>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::Tweak* ____Tweak_k__BackingField;

  /// @brief Field <StateChanged>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<bool>* ____StateChanged_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch, ____toggleIconOn) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch, ____toggleIconOff) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch, ____Tweak_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch, ____StateChanged_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch, 0xc8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Switch*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Switch");
