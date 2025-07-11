#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsAsyncLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
CORDL_MODULE_EXPORT(LocalLeaderboardsAsyncLoader)
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardsAsyncLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsAsyncLoader);
// Dependencies BGLib.AppFlow.Initialization.AsyncInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalLeaderboardsAsyncLoader
class CORDL_TYPE LocalLeaderboardsAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x2718b5c, size 0x4, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x2718aa4, size 0x5c, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x2718b00, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::LocalLeaderboardsAsyncLoader* New_ctor();

  /// @brief Method .ctor, addr 0x2718b60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsAsyncLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsAsyncLoader(LocalLeaderboardsAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsAsyncLoader(LocalLeaderboardsAsyncLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17796 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsAsyncLoader, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsAsyncLoader*, "", "LocalLeaderboardsAsyncLoader");
