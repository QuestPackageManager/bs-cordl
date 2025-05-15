#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformInstallerSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(PlatformInstallerSO)
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
namespace GlobalNamespace {
class SonyAchievementIdsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformInstallerSO);
// Dependencies Zenject.ScriptableObjectInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformInstallerSO
class CORDL_TYPE PlatformInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _achievementIdsModel, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementIdsModel, put = __cordl_internal_set__achievementIdsModel)) ::UnityW<::GlobalNamespace::AchievementIdsModelSO> _achievementIdsModel;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mockPlatformAdditionalContentModelInitialData,
                      put = __cordl_internal_set__mockPlatformAdditionalContentModelInitialData)) ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>
      _mockPlatformAdditionalContentModelInitialData;

  /// @brief Field _ps4AchievementIdsModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__ps4AchievementIdsModel, put = __cordl_internal_set__ps4AchievementIdsModel)) ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>
      _ps4AchievementIdsModel;

  /// @brief Field _ps5AchievementIdsModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__ps5AchievementIdsModel, put = __cordl_internal_set__ps5AchievementIdsModel)) ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>
      _ps5AchievementIdsModel;

  /// @brief Field _setupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__setupData, put = __cordl_internal_set__setupData)) ::GlobalNamespace::AppInitSetupData* _setupData;

  /// @brief Method InstallBindings, addr 0x271bf74, size 0x90, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PlatformInstallerSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& __cordl_internal_get__achievementIdsModel() const;

  constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& __cordl_internal_get__achievementIdsModel();

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const& __cordl_internal_get__mockPlatformAdditionalContentModelInitialData() const;

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>& __cordl_internal_get__mockPlatformAdditionalContentModelInitialData();

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> const& __cordl_internal_get__ps4AchievementIdsModel() const;

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>& __cordl_internal_get__ps4AchievementIdsModel();

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> const& __cordl_internal_get__ps5AchievementIdsModel() const;

  constexpr ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO>& __cordl_internal_get__ps5AchievementIdsModel();

  constexpr ::GlobalNamespace::AppInitSetupData* const& __cordl_internal_get__setupData() const;

  constexpr ::GlobalNamespace::AppInitSetupData*& __cordl_internal_get__setupData();

  constexpr void __cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO> value);

  constexpr void __cordl_internal_set__mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> value);

  constexpr void __cordl_internal_set__ps4AchievementIdsModel(::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> value);

  constexpr void __cordl_internal_set__ps5AchievementIdsModel(::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> value);

  constexpr void __cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData* value);

  /// @brief Method .ctor, addr 0x271c004, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInstallerSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstallerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInstallerSO(PlatformInstallerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstallerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInstallerSO(PlatformInstallerSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17803 };

  /// @brief Field _setupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AppInitSetupData* ____setupData;

  /// @brief Field _ps4AchievementIdsModel, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> ____ps4AchievementIdsModel;

  /// @brief Field _ps5AchievementIdsModel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SonyAchievementIdsModelSO> ____ps5AchievementIdsModel;

  /// @brief Field _achievementIdsModel, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AchievementIdsModelSO> ____achievementIdsModel;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> ____mockPlatformAdditionalContentModelInitialData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInstallerSO, ____setupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstallerSO, ____ps4AchievementIdsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstallerSO, ____ps5AchievementIdsModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstallerSO, ____achievementIdsModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstallerSO, ____mockPlatformAdditionalContentModelInitialData) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformInstallerSO, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformInstallerSO*, "", "PlatformInstallerSO");
