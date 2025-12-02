#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ButtonForAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithLabel_def.hpp"
CORDL_MODULE_EXPORT(ButtonForAction)
namespace Meta::XR::ImmersiveDebugger::Manager {
class ActionHook;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ButtonForAction;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonForAction
class CORDL_TYPE ButtonForAction : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonWithLabel {
public:
  // Declarations
  __declspec(property(get = get_Action, put = set_Action)) ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* Action;

  /// @brief Field _hook, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__hook, put = __cordl_internal_set__hook)) ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* _hook;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction* New_ctor();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* const& __cordl_internal_get__hook() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::ActionHook*& __cordl_internal_get__hook();

  constexpr void __cordl_internal_set__hook(::Meta::XR::ImmersiveDebugger::Manager::ActionHook* value);

  /// @brief Method .ctor, addr 0x5842020, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Action, addr 0x5842018, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* get_Action();

  /// @brief Method set_Action, addr 0x583ebc0, size 0x1c, virtual false, abstract: false, final false
  inline void set_Action(::Meta::XR::ImmersiveDebugger::Manager::ActionHook* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonForAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonForAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonForAction(ButtonForAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonForAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonForAction(ButtonForAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18339 };

  /// @brief Field _hook, offset: 0xa0, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* ____hook;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction, ____hook) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction, 0xa8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ButtonForAction*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "ButtonForAction");
