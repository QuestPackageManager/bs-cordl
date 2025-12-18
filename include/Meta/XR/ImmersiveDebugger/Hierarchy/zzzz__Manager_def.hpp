#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Hierarchy/Manager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__DebugManagerAddon_1_def.hpp"
CORDL_MODULE_EXPORT(Manager)
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class Item;
}
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class SceneRegistry;
}
namespace Meta::XR::ImmersiveDebugger {
struct Telemetry_Method;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class Manager;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Hierarchy::Manager);
// Dependencies Meta.XR.ImmersiveDebugger.Manager.DebugManagerAddon`1<Type>
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Hierarchy.Manager
class CORDL_TYPE Manager : public ::Meta::XR::ImmersiveDebugger::Manager::DebugManagerAddon_1<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*> {
public:
  // Declarations
  __declspec(property(get = get_Method)) ::Meta::XR::ImmersiveDebugger::Telemetry_Method Method;

  /// @brief Field _sceneRegistry, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneRegistry, put = __cordl_internal_set__sceneRegistry)) ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry* _sceneRegistry;

  static inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Manager* New_ctor();

  /// @brief Method ProcessItem, addr 0x58ba324, size 0x3c8, virtual false, abstract: false, final false
  inline void ProcessItem(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item);

  /// @brief Method Refresh, addr 0x58bb1f4, size 0x48, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method UnprocessItem, addr 0x58ba13c, size 0x168, virtual false, abstract: false, final false
  inline void UnprocessItem(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item);

  constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry* const& __cordl_internal_get__sceneRegistry() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry*& __cordl_internal_get__sceneRegistry();

  constexpr void __cordl_internal_set__sceneRegistry(::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry* value);

  /// @brief Method .ctor, addr 0x58bb23c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Method, addr 0x58bb1ec, size 0x8, virtual true, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Telemetry_Method get_Method();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Manager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Manager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Manager(Manager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Manager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Manager(Manager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18439 };

  /// @brief Field _sceneRegistry, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneRegistry* ____sceneRegistry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Hierarchy::Manager, ____sceneRegistry) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Hierarchy::Manager, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Hierarchy
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Hierarchy::Manager);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Hierarchy::Manager*, "Meta.XR.ImmersiveDebugger.Hierarchy", "Manager");
