#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/Installers/MetaRemoteAssetsInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(MetaRemoteAssetsInstaller)
namespace GlobalNamespace {
class AppInitSetupData;
}
// Forward declare root types
namespace BGLib::MetaRemoteAssets::Installers {
class MetaRemoteAssetsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller);
// Dependencies Zenject.ScriptableObjectInstaller
namespace BGLib::MetaRemoteAssets::Installers {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.Installers.MetaRemoteAssetsInstaller
class CORDL_TYPE MetaRemoteAssetsInstaller : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _appInitSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__appInitSetupData, put = __cordl_internal_set__appInitSetupData)) ::GlobalNamespace::AppInitSetupData* _appInitSetupData;

  /// @brief Method InstallBindings, addr 0x22ab634, size 0x168, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method InstallRemoteCatalogLoader, addr 0x22ab79c, size 0x88, virtual false, abstract: false, final false
  inline void InstallRemoteCatalogLoader();

  static inline ::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller* New_ctor();

  constexpr ::GlobalNamespace::AppInitSetupData* const& __cordl_internal_get__appInitSetupData() const;

  constexpr ::GlobalNamespace::AppInitSetupData*& __cordl_internal_get__appInitSetupData();

  constexpr void __cordl_internal_set__appInitSetupData(::GlobalNamespace::AppInitSetupData* value);

  /// @brief Method .ctor, addr 0x22ab824, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsInstaller(MetaRemoteAssetsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsInstaller(MetaRemoteAssetsInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18373 };

  /// @brief Field _appInitSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AppInitSetupData* ____appInitSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller, ____appInitSetupData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller, 0x28>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets::Installers
NEED_NO_BOX(::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::Installers::MetaRemoteAssetsInstaller*, "BGLib.MetaRemoteAssets.Installers", "MetaRemoteAssetsInstaller");
