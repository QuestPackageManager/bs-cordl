#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/TweakManagerForAddon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__SubManagerForAddon_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TweakManagerForAddon)
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IMember;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakManagerForAddon;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::TweakManagerForAddon);
// Dependencies Meta.XR.ImmersiveDebugger.Manager.SubManagerForAddon
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon
class CORDL_TYPE TweakManagerForAddon : public ::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon {
public:
  // Declarations
  __declspec(property(get = get_TelemetryAnnotation)) ::StringW TelemetryAnnotation;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::TweakManagerForAddon* New_ctor();

  /// @brief Method RegisterSpecialisedWidget, addr 0x58b7aac, size 0x2c0, virtual true, abstract: false, final false
  inline bool RegisterSpecialisedWidget(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* member, ::System::Reflection::MemberInfo* memberInfo,
                                        ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle);

  /// @brief Method .ctor, addr 0x58b7db0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TelemetryAnnotation, addr 0x58b7d6c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_TelemetryAnnotation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweakManagerForAddon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweakManagerForAddon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweakManagerForAddon(TweakManagerForAddon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweakManagerForAddon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweakManagerForAddon(TweakManagerForAddon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18423 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::TweakManagerForAddon, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::TweakManagerForAddon);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::TweakManagerForAddon*, "Meta.XR.ImmersiveDebugger.Manager", "TweakManagerForAddon");
