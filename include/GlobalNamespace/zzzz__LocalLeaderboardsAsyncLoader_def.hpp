#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsAsyncLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
CORDL_MODULE_EXPORT(LocalLeaderboardsAsyncLoader)
namespace BGLib::AppFlow::Initialization {
class IInstallerRegistry;
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
MARK_REF_T(::GlobalNamespace::LocalLeaderboardsAsyncLoader*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalLeaderboardsAsyncLoader*, "", "LocalLeaderboardsAsyncLoader");
// Dependencies BGLib.AppFlow.Initialization.AsyncInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalLeaderboardsAsyncLoader
class CORDL_TYPE LocalLeaderboardsAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  /// @brief Method InstallBindings, addr 0x3771784, size 0x4, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x3771724, size 0x60, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::LocalLeaderboardsAsyncLoader* New_ctor();

  /// @brief Method .ctor, addr 0x3771788, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20974 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LocalLeaderboardsAsyncLoader) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
