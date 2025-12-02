#pragma once
// IWYU pragma private; include "GlobalNamespace/InternalPlatformInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_3_def.hpp"
CORDL_MODULE_EXPORT(InternalPlatformInstaller)
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class InternalPlatformInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InternalPlatformInstaller);
// Dependencies Zenject.Installer`3<TParam1, TParam2, TDerived>
namespace GlobalNamespace {
// Is value type: false
// CS Name: InternalPlatformInstaller
class CORDL_TYPE InternalPlatformInstaller
    : public ::Zenject::Installer_3<::GlobalNamespace::AppInitSetupData*, ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>, ::GlobalNamespace::InternalPlatformInstaller*> {
public:
  // Declarations
  /// @brief Field _isTest, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isTest, put = __cordl_internal_set__isTest)) bool _isTest;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mockPlatformAdditionalContentModelInitialData,
                      put = __cordl_internal_set__mockPlatformAdditionalContentModelInitialData)) ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>
      _mockPlatformAdditionalContentModelInitialData;

  /// @brief Method BindAdditionalContentModel, addr 0x364b988, size 0x8c, virtual false, abstract: false, final false
  inline void BindAdditionalContentModel();

  /// @brief Method BindAnalyticsModel, addr 0x364b8b4, size 0xd4, virtual false, abstract: false, final false
  inline void BindAnalyticsModel();

  /// @brief Method BindBeatmapDataAssetFileModel, addr 0x364ba14, size 0xa0, virtual false, abstract: false, final false
  inline void BindBeatmapDataAssetFileModel();

  /// @brief Method BindMockPlatformAdditionalContentModel, addr 0x364bab4, size 0xc8, virtual false, abstract: false, final false
  inline void BindMockPlatformAdditionalContentModel();

  /// @brief Method InstallBindings, addr 0x364b894, size 0x20, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::InternalPlatformInstaller* New_ctor(::GlobalNamespace::AppInitSetupData* appInitSetupData,
                                                                       ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData);

  constexpr bool const& __cordl_internal_get__isTest() const;

  constexpr bool& __cordl_internal_get__isTest();

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const& __cordl_internal_get__mockPlatformAdditionalContentModelInitialData() const;

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>& __cordl_internal_get__mockPlatformAdditionalContentModelInitialData();

  constexpr void __cordl_internal_set__isTest(bool value);

  constexpr void __cordl_internal_set__mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> value);

  /// @brief Method .ctor, addr 0x364b828, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::AppInitSetupData* appInitSetupData, ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalPlatformInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalPlatformInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalPlatformInstaller(InternalPlatformInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalPlatformInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalPlatformInstaller(InternalPlatformInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21060 };

  /// @brief Field _isTest, offset: 0x18, size: 0x1, def value: None
  bool ____isTest;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> ____mockPlatformAdditionalContentModelInitialData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InternalPlatformInstaller, ____isTest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InternalPlatformInstaller, ____mockPlatformAdditionalContentModelInitialData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InternalPlatformInstaller, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InternalPlatformInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InternalPlatformInstaller*, "", "InternalPlatformInstaller");
