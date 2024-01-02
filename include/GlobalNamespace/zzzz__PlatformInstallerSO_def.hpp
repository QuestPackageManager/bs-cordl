#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
CORDL_MODULE_EXPORT(PlatformInstallerSO)
namespace GlobalNamespace {
class SonyAchievementIdsModelSO;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformInstallerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformInstallerSO);
// Type: ::PlatformInstallerSO
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11147))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4038))
// CS Name: ::PlatformInstallerSO*
class CORDL_TYPE PlatformInstallerSO : public ::Zenject::ScriptableObjectInstaller {
public:
  // Declarations
  /// @brief Field _setupData, offset 0x20, size 0x8
  __declspec(property(get = __get__setupData, put = __set__setupData))::GlobalNamespace::AppInitSetupData* _setupData;

  /// @brief Field _ps4AchievementIdsModel, offset 0x28, size 0x8
  __declspec(property(get = __get__ps4AchievementIdsModel, put = __set__ps4AchievementIdsModel))::GlobalNamespace::SonyAchievementIdsModelSO* _ps4AchievementIdsModel;

  /// @brief Field _ps5AchievementIdsModel, offset 0x30, size 0x8
  __declspec(property(get = __get__ps5AchievementIdsModel, put = __set__ps5AchievementIdsModel))::GlobalNamespace::SonyAchievementIdsModelSO* _ps5AchievementIdsModel;

  /// @brief Field _achievementIdsModel, offset 0x38, size 0x8
  __declspec(property(get = __get__achievementIdsModel, put = __set__achievementIdsModel))::GlobalNamespace::AchievementIdsModelSO* _achievementIdsModel;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset 0x40, size 0x8
  __declspec(property(get = __get__mockPlatformAdditionalContentModelInitialData,
                      put = __set__mockPlatformAdditionalContentModelInitialData))::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* _mockPlatformAdditionalContentModelInitialData;

  constexpr ::GlobalNamespace::AppInitSetupData*& __get__setupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> const& __get__setupData() const;

  constexpr void __set__setupData(::GlobalNamespace::AppInitSetupData* value);

  constexpr ::GlobalNamespace::SonyAchievementIdsModelSO*& __get__ps4AchievementIdsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> const& __get__ps4AchievementIdsModel() const;

  constexpr void __set__ps4AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO* value);

  constexpr ::GlobalNamespace::SonyAchievementIdsModelSO*& __get__ps5AchievementIdsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> const& __get__ps5AchievementIdsModel() const;

  constexpr void __set__ps5AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO* value);

  constexpr ::GlobalNamespace::AchievementIdsModelSO*& __get__achievementIdsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementIdsModelSO*> const& __get__achievementIdsModel() const;

  constexpr void __set__achievementIdsModel(::GlobalNamespace::AchievementIdsModelSO* value);

  constexpr ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*& __get__mockPlatformAdditionalContentModelInitialData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*> const& __get__mockPlatformAdditionalContentModelInitialData() const;

  constexpr void __set__mockPlatformAdditionalContentModelInitialData(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* value);

  /// @brief Method InstallBindings, addr 0x2229a34, size 0x90, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PlatformInstallerSO* New_ctor();

  /// @brief Method .ctor, addr 0x2229ac4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstallerSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInstallerSO(PlatformInstallerSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstallerSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInstallerSO(PlatformInstallerSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInstallerSO();

public:
  /// @brief Field _setupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AppInitSetupData* ____setupData;

  /// @brief Field _ps4AchievementIdsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SonyAchievementIdsModelSO* ____ps4AchievementIdsModel;

  /// @brief Field _ps5AchievementIdsModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SonyAchievementIdsModelSO* ____ps5AchievementIdsModel;

  /// @brief Field _achievementIdsModel, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AchievementIdsModelSO* ____achievementIdsModel;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* ____mockPlatformAdditionalContentModelInitialData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformInstallerSO, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstallerSO, ____setupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstallerSO, ____ps4AchievementIdsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstallerSO, ____ps5AchievementIdsModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstallerSO, ____achievementIdsModel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstallerSO, ____mockPlatformAdditionalContentModelInitialData) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformInstallerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformInstallerSO*, "", "PlatformInstallerSO");
