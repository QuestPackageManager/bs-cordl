#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
CORDL_MODULE_EXPORT(LocalLeaderboardsAsyncLoader)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
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
// Type: ::LocalLeaderboardsAsyncLoader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalLeaderboardsAsyncLoader*
class CORDL_TYPE LocalLeaderboardsAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x2500bb0, size 0x4, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x2500af8, size 0x5c, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x2500b54, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::LocalLeaderboardsAsyncLoader* New_ctor();

  /// @brief Method .ctor, addr 0x2500bb4, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsAsyncLoader, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsAsyncLoader*, "", "LocalLeaderboardsAsyncLoader");
