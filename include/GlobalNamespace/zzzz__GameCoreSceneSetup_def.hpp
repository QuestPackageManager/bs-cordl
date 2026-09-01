#pragma once
// IWYU pragma private; include "GlobalNamespace\GameCoreSceneSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(GameCoreSceneSetup)
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class ScreenCaptureAfterDelay;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GameCoreSceneSetup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameCoreSceneSetup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameCoreSceneSetup*, "", "GameCoreSceneSetup");
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameCoreSceneSetup
class CORDL_TYPE GameCoreSceneSetup : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _bloomFog, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _screenCaptureAfterDelayPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__screenCaptureAfterDelayPrefab, put = __cordl_internal_set__screenCaptureAfterDelayPrefab)) ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>
      _screenCaptureAfterDelayPrefab;

  /// @brief Field _settingsManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Method InstallBindings, addr 0x590b940, size 0x4a0, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::GameCoreSceneSetup* New_ctor();

  /// @brief Method OnDestroy, addr 0x590bde0, size 0x4c, virtual true, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> const& __cordl_internal_get__screenCaptureAfterDelayPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay>& __cordl_internal_get__screenCaptureAfterDelayPrefab();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__screenCaptureAfterDelayPrefab(::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x590be2c, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6716 };

  /// @brief Field _screenCaptureAfterDelayPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScreenCaptureAfterDelay> ____screenCaptureAfterDelayPrefab;

  /// @brief Field _bloomFog, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  /// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____screenCaptureAfterDelayPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____bloomFog) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameCoreSceneSetup, ____settingsManager) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameCoreSceneSetup) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
