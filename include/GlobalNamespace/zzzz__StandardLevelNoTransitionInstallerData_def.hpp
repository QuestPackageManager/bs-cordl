#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelNoTransitionInstallerData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandardLevelNoTransitionInstallerData)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class AssetReferenceT_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelNoTransitionInstallerData);
// Dependencies BeatmapDifficulty, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelNoTransitionInstallerData
class CORDL_TYPE StandardLevelNoTransitionInstallerData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _backButtonText, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__backButtonText, put = __cordl_internal_set__backButtonText)) ::StringW _backButtonText;

  /// @brief Field _beatmapCharacteristic, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic, put = __cordl_internal_set__beatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
      _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapDifficulty, put = __cordl_internal_set__beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty;

  /// @brief Field _beatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel,
                      put = __cordl_internal_set__beatmapLevel)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* _beatmapLevel;

  /// @brief Field _colorScheme, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme,
                      put = __cordl_internal_set__colorScheme)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* _colorScheme;

  /// @brief Field _environmentInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentInfo,
                      put = __cordl_internal_set__environmentInfo)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _environmentInfo;

  /// @brief Field _gameplayModifiers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _playerSpecificSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpecificSettings, put = __cordl_internal_set__playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings;

  /// @brief Field _practiceSettings, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__practiceSettings, put = __cordl_internal_set__practiceSettings)) ::GlobalNamespace::PracticeSettings* _practiceSettings;

  /// @brief Field _selectedBeatmapLevel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedBeatmapLevel, put = __cordl_internal_set__selectedBeatmapLevel)) ::UnityW<::GlobalNamespace::BeatmapLevelSO> _selectedBeatmapLevel;

  /// @brief Field _selectedColorScheme, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedColorScheme, put = __cordl_internal_set__selectedColorScheme)) ::UnityW<::GlobalNamespace::ColorSchemeSO> _selectedColorScheme;

  /// @brief Field _selectedEnvironmentInfo, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedEnvironmentInfo, put = __cordl_internal_set__selectedEnvironmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO>
      _selectedEnvironmentInfo;

  /// @brief Field _useTestNoteCutSoundEffects, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__useTestNoteCutSoundEffects, put = __cordl_internal_set__useTestNoteCutSoundEffects)) bool _useTestNoteCutSoundEffects;

  __declspec(property(get = get_backButtonText, put = set_backButtonText)) ::StringW backButtonText;

  __declspec(property(get = get_beatmapCharacteristic, put = set_beatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  __declspec(property(get = get_beatmapDifficulty, put = set_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  __declspec(property(get = get_beatmapLevel)) ::UnityW<::GlobalNamespace::BeatmapLevelSO> beatmapLevel;

  __declspec(property(get = get_colorScheme)) ::UnityW<::GlobalNamespace::ColorSchemeSO> colorScheme;

  __declspec(property(get = get_environmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> environmentInfo;

  __declspec(property(get = get_gameplayModifiers, put = set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_playerSpecificSettings, put = set_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  __declspec(property(get = get_practiceSettings, put = set_practiceSettings)) ::GlobalNamespace::PracticeSettings* practiceSettings;

  __declspec(property(get = get_useTestNoteCutSoundEffects, put = set_useTestNoteCutSoundEffects)) bool useTestNoteCutSoundEffects;

  static inline ::GlobalNamespace::StandardLevelNoTransitionInstallerData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__backButtonText() const;

  constexpr ::StringW& __cordl_internal_get__backButtonText();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__beatmapCharacteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__beatmapDifficulty();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* const& __cordl_internal_get__beatmapLevel() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*& __cordl_internal_get__beatmapLevel();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* const& __cordl_internal_get__colorScheme() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*& __cordl_internal_get__colorScheme();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const& __cordl_internal_get__environmentInfo() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__environmentInfo();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get__playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__playerSpecificSettings();

  constexpr ::GlobalNamespace::PracticeSettings* const& __cordl_internal_get__practiceSettings() const;

  constexpr ::GlobalNamespace::PracticeSettings*& __cordl_internal_get__practiceSettings();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__selectedBeatmapLevel() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__selectedBeatmapLevel();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& __cordl_internal_get__selectedColorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& __cordl_internal_get__selectedColorScheme();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get__selectedEnvironmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get__selectedEnvironmentInfo();

  constexpr bool const& __cordl_internal_get__useTestNoteCutSoundEffects() const;

  constexpr bool& __cordl_internal_get__useTestNoteCutSoundEffects();

  constexpr void __cordl_internal_set__backButtonText(::StringW value);

  constexpr void __cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__beatmapLevel(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* value);

  constexpr void __cordl_internal_set__colorScheme(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* value);

  constexpr void __cordl_internal_set__environmentInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__practiceSettings(::GlobalNamespace::PracticeSettings* value);

  constexpr void __cordl_internal_set__selectedBeatmapLevel(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  constexpr void __cordl_internal_set__selectedColorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value);

  constexpr void __cordl_internal_set__selectedEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set__useTestNoteCutSoundEffects(bool value);

  /// @brief Method .ctor, addr 0x577b164, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_backButtonText, addr 0x577b144, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_backButtonText();

  /// @brief Method get_beatmapCharacteristic, addr 0x577b0f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_beatmapCharacteristic();

  /// @brief Method get_beatmapDifficulty, addr 0x577b104, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();

  /// @brief Method get_beatmapLevel, addr 0x577ab28, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelSO> get_beatmapLevel();

  /// @brief Method get_colorScheme, addr 0x577abf8, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ColorSchemeSO> get_colorScheme();

  /// @brief Method get_environmentInfo, addr 0x5779a68, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> get_environmentInfo();

  /// @brief Method get_gameplayModifiers, addr 0x577b114, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method get_playerSpecificSettings, addr 0x577b124, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();

  /// @brief Method get_practiceSettings, addr 0x577b134, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PracticeSettings* get_practiceSettings();

  /// @brief Method get_useTestNoteCutSoundEffects, addr 0x577b154, size 0x8, virtual false, abstract: false, final false
  inline bool get_useTestNoteCutSoundEffects();

  /// @brief Method set_backButtonText, addr 0x577b14c, size 0x8, virtual false, abstract: false, final false
  inline void set_backButtonText(::StringW value);

  /// @brief Method set_beatmapCharacteristic, addr 0x577b0fc, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  /// @brief Method set_beatmapDifficulty, addr 0x577b10c, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method set_gameplayModifiers, addr 0x577b11c, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method set_playerSpecificSettings, addr 0x577b12c, size 0x8, virtual false, abstract: false, final false
  inline void set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  /// @brief Method set_practiceSettings, addr 0x577b13c, size 0x8, virtual false, abstract: false, final false
  inline void set_practiceSettings(::GlobalNamespace::PracticeSettings* value);

  /// @brief Method set_useTestNoteCutSoundEffects, addr 0x577b15c, size 0x8, virtual false, abstract: false, final false
  inline void set_useTestNoteCutSoundEffects(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelNoTransitionInstallerData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstallerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelNoTransitionInstallerData(StandardLevelNoTransitionInstallerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstallerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelNoTransitionInstallerData(StandardLevelNoTransitionInstallerData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6805 };

  /// @brief Field _beatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* ____beatmapLevel;

  /// @brief Field _beatmapCharacteristic, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty;

  /// @brief Field _colorScheme, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* ____colorScheme;

  /// @brief Field _environmentInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____environmentInfo;

  /// @brief Field _gameplayModifiers, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _playerSpecificSettings, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings;

  /// @brief Field _practiceSettings, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::PracticeSettings* ____practiceSettings;

  /// @brief Field _backButtonText, offset: 0x58, size: 0x8, def value: None
  ::StringW ____backButtonText;

  /// @brief Field _useTestNoteCutSoundEffects, offset: 0x60, size: 0x1, def value: None
  bool ____useTestNoteCutSoundEffects;

  /// @brief Field _selectedBeatmapLevel, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____selectedBeatmapLevel;

  /// @brief Field _selectedColorScheme, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeSO> ____selectedColorScheme;

  /// @brief Field _selectedEnvironmentInfo, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ____selectedEnvironmentInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____beatmapLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____beatmapCharacteristic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____beatmapDifficulty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____colorScheme) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____environmentInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____gameplayModifiers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____playerSpecificSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____practiceSettings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____backButtonText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____useTestNoteCutSoundEffects) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____selectedBeatmapLevel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____selectedColorScheme) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelNoTransitionInstallerData, ____selectedEnvironmentInfo) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelNoTransitionInstallerData, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelNoTransitionInstallerData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelNoTransitionInstallerData*, "", "StandardLevelNoTransitionInstallerData");
