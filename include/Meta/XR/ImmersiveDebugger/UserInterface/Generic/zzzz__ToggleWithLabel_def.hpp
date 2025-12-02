#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ToggleWithLabel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithLabel_def.hpp"
CORDL_MODULE_EXPORT(ToggleWithLabel)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ToggleWithLabel;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ToggleWithLabel
class CORDL_TYPE ToggleWithLabel : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel {
public:
  // Declarations
  __declspec(property(get = get_State, put = set_State)) bool State;

  __declspec(property(get = get_StateChanged, put = set_StateChanged)) ::System::Action_1<bool>* StateChanged;

  /// @brief Field <StateChanged>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__StateChanged_k__BackingField, put = __cordl_internal_set__StateChanged_k__BackingField)) ::System::Action_1<bool>* _StateChanged_k__BackingField;

  /// @brief Field _state, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) bool _state;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel* New_ctor();

  /// @brief Method OnStateChanged, addr 0x5848c80, size 0x38, virtual false, abstract: false, final false
  inline void OnStateChanged();

  /// @brief Method UpdateBackground, addr 0x5848cc8, size 0x164, virtual true, abstract: false, final false
  inline void UpdateBackground();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get__StateChanged_k__BackingField() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get__StateChanged_k__BackingField();

  constexpr bool const& __cordl_internal_get__state() const;

  constexpr bool& __cordl_internal_get__state();

  constexpr void __cordl_internal_set__StateChanged_k__BackingField(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set__state(bool value);

  /// @brief Method .ctor, addr 0x5848e2c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_State, addr 0x5848c5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_State();

  /// @brief Method get_StateChanged, addr 0x5848cb8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<bool>* get_StateChanged();

  /// @brief Method set_State, addr 0x5848c64, size 0x1c, virtual false, abstract: false, final false
  inline void set_State(bool value);

  /// @brief Method set_StateChanged, addr 0x5848cc0, size 0x8, virtual false, abstract: false, final false
  inline void set_StateChanged(::System::Action_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleWithLabel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleWithLabel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleWithLabel(ToggleWithLabel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleWithLabel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleWithLabel(ToggleWithLabel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18361 };

  /// @brief Field _state, offset: 0xa0, size: 0x1, def value: None
  bool ____state;

  /// @brief Field <StateChanged>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<bool>* ____StateChanged_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel, ____state) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel, ____StateChanged_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel, 0xb0>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "ToggleWithLabel");
