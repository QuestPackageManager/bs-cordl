#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameCoreSceneSetup)
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class ScreenCaptureAfterDelay;
}
// Forward declare root types
namespace GlobalNamespace {
class GameCoreSceneSetup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameCoreSceneSetup);
// Type: ::GameCoreSceneSetup
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11138))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6031))
// CS Name: ::GameCoreSceneSetup*
class CORDL_TYPE GameCoreSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _screenCaptureAfterDelayPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__screenCaptureAfterDelayPrefab,
                      put = __cordl_internal_set__screenCaptureAfterDelayPrefab))::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> _screenCaptureAfterDelayPrefab;

  /// @brief Field _mainSettingsModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field _bloomFog, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog))::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>& __cordl_internal_get__screenCaptureAfterDelayPrefab();

  constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> const& __cordl_internal_get__screenCaptureAfterDelayPrefab() const;

  constexpr void __cordl_internal_set__screenCaptureAfterDelayPrefab(::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> value);

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  /// @brief Method InstallBindings, addr 0x2319894, size 0x46c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::GameCoreSceneSetup* New_ctor();

  /// @brief Method .ctor, addr 0x2319d00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameCoreSceneSetup(GameCoreSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameCoreSceneSetup(GameCoreSceneSetup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameCoreSceneSetup();

public:
  /// @brief Field _screenCaptureAfterDelayPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> ____screenCaptureAfterDelayPrefab;

  /// @brief Field _mainSettingsModel, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  /// @brief Field _bloomFog, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  /// @brief Field kPauseButtonPressDurationMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kPauseButtonPressDurationMultiplier{ 0.75 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameCoreSceneSetup, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____screenCaptureAfterDelayPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____mainSettingsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____bloomFog) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameCoreSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameCoreSceneSetup*, "", "GameCoreSceneSetup");
