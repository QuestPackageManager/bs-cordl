#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameCoreSceneSetup)
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace GlobalNamespace {
class BloomFogSO;
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
// CS Name: ::GameCoreSceneSetup*
class CORDL_TYPE GameCoreSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _bloomFog, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog))::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _mainSettingsHandler, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Field _screenCaptureAfterDelayPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__screenCaptureAfterDelayPrefab,
                      put = __cordl_internal_set__screenCaptureAfterDelayPrefab))::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> _screenCaptureAfterDelayPrefab;

  /// @brief Method InstallBindings, addr 0x269f048, size 0x484, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::GameCoreSceneSetup* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> const& __cordl_internal_get__screenCaptureAfterDelayPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>& __cordl_internal_get__screenCaptureAfterDelayPrefab();

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  constexpr void __cordl_internal_set__screenCaptureAfterDelayPrefab(::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> value);

  /// @brief Method .ctor, addr 0x269f4cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameCoreSceneSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameCoreSceneSetup(GameCoreSceneSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameCoreSceneSetup(GameCoreSceneSetup const&) = delete;

  /// @brief Field _screenCaptureAfterDelayPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> ____screenCaptureAfterDelayPrefab;

  /// @brief Field _bloomFog, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  /// @brief Field _mainSettingsHandler, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  /// @brief Field kPauseButtonPressDurationMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kPauseButtonPressDurationMultiplier{ 0.75 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameCoreSceneSetup, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____screenCaptureAfterDelayPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____bloomFog) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____mainSettingsHandler) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameCoreSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameCoreSceneSetup*, "", "GameCoreSceneSetup");
