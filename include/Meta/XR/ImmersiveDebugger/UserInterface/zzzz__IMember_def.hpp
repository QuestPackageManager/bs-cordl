#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/IMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMember)
namespace Meta::XR::ImmersiveDebugger::Manager {
class ActionHook;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoHook;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakEnum;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class Tweak;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class WatchTexture;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class Watch;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IMember;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::IMember);
// Dependencies
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.IMember
class CORDL_TYPE IMember {
public:
  // Declarations
  /// @brief Method GetAction, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::ActionHook* GetAction();

  /// @brief Method GetGizmo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* GetGizmo();

  /// @brief Method GetTweak, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::Tweak* GetTweak();

  /// @brief Method GetWatch, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::Watch* GetWatch();

  /// @brief Method RegisterAction, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterAction(::Meta::XR::ImmersiveDebugger::Manager::ActionHook* action);

  /// @brief Method RegisterEnum, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterEnum(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* tweak);

  /// @brief Method RegisterGizmo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterGizmo(::Meta::XR::ImmersiveDebugger::Manager::GizmoHook* gizmo);

  /// @brief Method RegisterTexture, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterTexture(::Meta::XR::ImmersiveDebugger::Manager::WatchTexture* watch);

  /// @brief Method RegisterTweak, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterTweak(::Meta::XR::ImmersiveDebugger::Manager::Tweak* tweak);

  /// @brief Method RegisterWatch, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterWatch(::Meta::XR::ImmersiveDebugger::Manager::Watch* watch);

  // Ctor Parameters [CppParam { name: "", ty: "IMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMember(IMember const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18321 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::IMember);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::IMember*, "Meta.XR.ImmersiveDebugger.UserInterface", "IMember");
