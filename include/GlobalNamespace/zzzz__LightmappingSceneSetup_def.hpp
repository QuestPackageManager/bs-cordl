#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmappingSceneSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(LightmappingSceneSetup)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmappingSceneSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmappingSceneSetup);
// Dependencies BeatmapDifficulty, Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightmappingSceneSetup
class CORDL_TYPE LightmappingSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristic, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic, put = __cordl_internal_set__beatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
      _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapDifficulty, put = __cordl_internal_set__beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty;

  /// @brief Field _beatmapLevelSo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelSo, put = __cordl_internal_set__beatmapLevelSo)) ::UnityW<::GlobalNamespace::BeatmapLevelSO> _beatmapLevelSo;

  /// @brief Field _colorScheme, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme)) ::UnityW<::GlobalNamespace::ColorSchemeSO> _colorScheme;

  /// @brief Field _standardLevelNoTransitionInstallerData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelNoTransitionInstallerData,
                      put = __cordl_internal_set__standardLevelNoTransitionInstallerData)) ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>
      _standardLevelNoTransitionInstallerData;

  __declspec(property(get = get_colorScheme, put = set_colorScheme)) ::UnityW<::GlobalNamespace::ColorSchemeSO> colorScheme;

  /// @brief Method InstallBindings, addr 0x3b37908, size 0xec8, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::LightmappingSceneSetup* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__beatmapCharacteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__beatmapDifficulty();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__beatmapLevelSo() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__beatmapLevelSo();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& __cordl_internal_get__colorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& __cordl_internal_get__colorScheme();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> const& __cordl_internal_get__standardLevelNoTransitionInstallerData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData>& __cordl_internal_get__standardLevelNoTransitionInstallerData();

  constexpr void __cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__beatmapLevelSo(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  constexpr void __cordl_internal_set__colorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value);

  constexpr void __cordl_internal_set__standardLevelNoTransitionInstallerData(::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> value);

  /// @brief Method .ctor, addr 0x3b3889c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorScheme, addr 0x3b378f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ColorSchemeSO> get_colorScheme();

  /// @brief Method set_colorScheme, addr 0x3b37900, size 0x8, virtual false, abstract: false, final false
  inline void set_colorScheme(::GlobalNamespace::ColorSchemeSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmappingSceneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmappingSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmappingSceneSetup(LightmappingSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmappingSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmappingSceneSetup(LightmappingSceneSetup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5224 };

  /// @brief Field _beatmapLevelSo, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____beatmapLevelSo;

  /// @brief Field _beatmapCharacteristic, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty;

  /// @brief Field _colorScheme, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeSO> ____colorScheme;

  /// @brief Field _standardLevelNoTransitionInstallerData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelNoTransitionInstallerData> ____standardLevelNoTransitionInstallerData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightmappingSceneSetup, ____beatmapLevelSo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmappingSceneSetup, ____beatmapCharacteristic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmappingSceneSetup, ____beatmapDifficulty) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmappingSceneSetup, ____colorScheme) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmappingSceneSetup, ____standardLevelNoTransitionInstallerData) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmappingSceneSetup, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmappingSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmappingSceneSetup*, "", "LightmappingSceneSetup");
