#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerMenuInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerMenuInstaller)
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerMenuInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerMenuInstaller);
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerMenuInstaller
class CORDL_TYPE MultiplayerMenuInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x3bf8dcc, size 0x8c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MultiplayerMenuInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x3bf8e58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerMenuInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerMenuInstaller(MultiplayerMenuInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMenuInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerMenuInstaller(MultiplayerMenuInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4731 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerMenuInstaller, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerMenuInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerMenuInstaller*, "", "MultiplayerMenuInstaller");
