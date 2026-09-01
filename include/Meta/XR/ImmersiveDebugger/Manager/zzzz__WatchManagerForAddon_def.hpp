#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Manager\WatchManagerForAddon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__SubManagerForAddon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WatchManagerForAddon)
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
class WatchManagerForAddon;
}
// Write type traits
MARK_REF_T(::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*);
DEFINE_IL2CPP_CLASS(::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon*, "Meta.XR.ImmersiveDebugger.Manager", "WatchManagerForAddon");
// Dependencies Meta.XR.ImmersiveDebugger.Manager.SubManagerForAddon
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.WatchManagerForAddon
class CORDL_TYPE WatchManagerForAddon : public ::Meta::XR::ImmersiveDebugger::Manager::SubManagerForAddon {
public:
  // Declarations
  __declspec(property(get = get_TelemetryAnnotation)) ::StringW TelemetryAnnotation;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon* New_ctor();

  /// @brief Method RegisterSpecialisedWidget, addr 0x5a678b0, size 0x2c8, virtual true, abstract: false, final false
  inline bool RegisterSpecialisedWidget(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* member, ::System::Reflection::MemberInfo* memberInfo,
                                        ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle);

  /// @brief Method .ctor, addr 0x5a67d00, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TelemetryAnnotation, addr 0x5a67cbc, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_TelemetryAnnotation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WatchManagerForAddon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WatchManagerForAddon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WatchManagerForAddon(WatchManagerForAddon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WatchManagerForAddon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WatchManagerForAddon(WatchManagerForAddon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::ImmersiveDebugger::Manager::WatchManagerForAddon) == 0x28, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
