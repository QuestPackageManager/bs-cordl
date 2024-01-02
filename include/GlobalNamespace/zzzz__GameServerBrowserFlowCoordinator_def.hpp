#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
CORDL_MODULE_EXPORT(GameServerBrowserFlowCoordinator)
// Forward declare root types
namespace GlobalNamespace {
class GameServerBrowserFlowCoordinator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerBrowserFlowCoordinator);
// Type: ::GameServerBrowserFlowCoordinator
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5508))
// CS Name: ::GameServerBrowserFlowCoordinator*
class CORDL_TYPE GameServerBrowserFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  /// @brief Method DidActivate, addr 0x228ea24, size 0x4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::GameServerBrowserFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x228ea28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerBrowserFlowCoordinator(GameServerBrowserFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerBrowserFlowCoordinator(GameServerBrowserFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerBrowserFlowCoordinator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerBrowserFlowCoordinator, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerBrowserFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerBrowserFlowCoordinator*, "", "GameServerBrowserFlowCoordinator");
