#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ToggleForGizmo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Toggle_def.hpp"
CORDL_MODULE_EXPORT(ToggleForGizmo)
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoHook;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ToggleForGizmo;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Toggle
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ToggleForGizmo
class CORDL_TYPE ToggleForGizmo : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle {
public:
  // Declarations
  __declspec(property(get = get_Hook, put = set_Hook)) ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* Hook;

  /// @brief Field _hook, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__hook, put = __cordl_internal_set__hook)) ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* _hook;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo* New_ctor();

  /// @brief Method Setup, addr 0x58b171c, size 0x94, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method <Setup>b__4_0, addr 0x58b17bc, size 0x10, virtual false, abstract: false, final false
  inline void _Setup_b__4_0();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* const& __cordl_internal_get__hook() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook*& __cordl_internal_get__hook();

  constexpr void __cordl_internal_set__hook(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* value);

  /// @brief Method .ctor, addr 0x58b17b0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Hook, addr 0x58b169c, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* get_Hook();

  /// @brief Method set_Hook, addr 0x58b16a4, size 0x78, virtual false, abstract: false, final false
  inline void set_Hook(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToggleForGizmo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToggleForGizmo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToggleForGizmo(ToggleForGizmo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToggleForGizmo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToggleForGizmo(ToggleForGizmo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18390 };

  /// @brief Field _hook, offset: 0xb8, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* ____hook;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo, ____hook) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo, 0xc0>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleForGizmo*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "ToggleForGizmo");
