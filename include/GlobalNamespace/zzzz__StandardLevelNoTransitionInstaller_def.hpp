#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelNoTransitionInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandardLevelNoTransitionInstaller)
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelNoTransitionInstaller);
// Dependencies PlaymodeOptions, Zenject.NoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelNoTransitionInstaller
class CORDL_TYPE StandardLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  /// @brief Field _scenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scenesTransitionSetupData,
                      put = __cordl_internal_set__scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>
      _scenesTransitionSetupData;

  /// @brief Field _settingsManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _standardLevelNoTransitionInstallerData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelNoTransitionInstallerData,
                      put = __cordl_internal_set__standardLevelNoTransitionInstallerData)) ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>
      _standardLevelNoTransitionInstallerData;

  /// @brief Field playmodeOptions, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_playmodeOptions, put = __cordl_internal_set_playmodeOptions)) ::GlobalNamespace::PlaymodeOptions playmodeOptions;

  /// @brief Field recordingRelativePath, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_recordingRelativePath, put = __cordl_internal_set_recordingRelativePath)) ::StringW recordingRelativePath;

  __declspec(property(get = get_standardLevelNoTransitionInstallerData)) ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> standardLevelNoTransitionInstallerData;

  /// @brief Method InstallBindings, addr 0x577a800, size 0x328, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::StandardLevelNoTransitionInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__scenesTransitionSetupData();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> const& __cordl_internal_get__standardLevelNoTransitionInstallerData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>& __cordl_internal_get__standardLevelNoTransitionInstallerData();

  constexpr ::GlobalNamespace::PlaymodeOptions const& __cordl_internal_get_playmodeOptions() const;

  constexpr ::GlobalNamespace::PlaymodeOptions& __cordl_internal_get_playmodeOptions();

  constexpr ::StringW const& __cordl_internal_get_recordingRelativePath() const;

  constexpr ::StringW& __cordl_internal_get_recordingRelativePath();

  constexpr void __cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__standardLevelNoTransitionInstallerData(::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> value);

  constexpr void __cordl_internal_set_playmodeOptions(::GlobalNamespace::PlaymodeOptions value);

  constexpr void __cordl_internal_set_recordingRelativePath(::StringW value);

  /// @brief Method .ctor, addr 0x577b0d4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_standardLevelNoTransitionInstallerData, addr 0x577a7f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> get_standardLevelNoTransitionInstallerData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelNoTransitionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelNoTransitionInstaller(StandardLevelNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelNoTransitionInstaller(StandardLevelNoTransitionInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6804 };

  /// @brief Field _scenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____scenesTransitionSetupData;

  /// @brief Field _standardLevelNoTransitionInstallerData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> ____standardLevelNoTransitionInstallerData;

  /// @brief Field recordingRelativePath, offset: 0x30, size: 0x8, def value: None
  ::StringW ___recordingRelativePath;

  /// @brief Field playmodeOptions, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::PlaymodeOptions ___playmodeOptions;

  /// @brief Field _settingsManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstaller, ____scenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstaller, ____standardLevelNoTransitionInstallerData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstaller, ___recordingRelativePath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstaller, ___playmodeOptions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstaller, ____settingsManager) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelNoTransitionInstaller, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelNoTransitionInstaller*, "", "StandardLevelNoTransitionInstaller");
