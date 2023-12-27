#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandardLevelNoTransitionInstallerData)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelNoTransitionInstallerData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelNoTransitionInstallerData);
// Type: ::StandardLevelNoTransitionInstallerData
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14717)), TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6043))
// CS Name: ::StandardLevelNoTransitionInstallerData*
class CORDL_TYPE StandardLevelNoTransitionInstallerData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _beatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevel, put = __set__beatmapLevel))::GlobalNamespace::BeatmapLevelSO* _beatmapLevel;

  /// @brief Field _beatmapCharacteristic, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapCharacteristic, put = __set__beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset 0x28, size 0x4
  __declspec(property(get = __get__beatmapDifficulty, put = __set__beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty;

  /// @brief Field _colorScheme, offset 0x30, size 0x8
  __declspec(property(get = __get__colorScheme, put = __set__colorScheme))::GlobalNamespace::ColorSchemeSO* _colorScheme;

  /// @brief Field _environmentInfo, offset 0x38, size 0x8
  __declspec(property(get = __get__environmentInfo, put = __set__environmentInfo))::GlobalNamespace::EnvironmentInfoSO* _environmentInfo;

  /// @brief Field _gameplayModifiers, offset 0x40, size 0x8
  __declspec(property(get = __get__gameplayModifiers, put = __set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _playerSpecificSettings, offset 0x48, size 0x8
  __declspec(property(get = __get__playerSpecificSettings, put = __set__playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings;

  /// @brief Field _practiceSettings, offset 0x50, size 0x8
  __declspec(property(get = __get__practiceSettings, put = __set__practiceSettings))::GlobalNamespace::PracticeSettings* _practiceSettings;

  /// @brief Field _backButtonText, offset 0x58, size 0x8
  __declspec(property(get = __get__backButtonText, put = __set__backButtonText))::StringW _backButtonText;

  /// @brief Field _useTestNoteCutSoundEffects, offset 0x60, size 0x1
  __declspec(property(get = __get__useTestNoteCutSoundEffects, put = __set__useTestNoteCutSoundEffects)) bool _useTestNoteCutSoundEffects;

  __declspec(property(get = get_beatmapLevel, put = set_beatmapLevel))::GlobalNamespace::BeatmapLevelSO* beatmapLevel;

  __declspec(property(get = get_beatmapCharacteristic, put = set_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  __declspec(property(get = get_beatmapDifficulty, put = set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  __declspec(property(get = get_colorScheme, put = set_colorScheme))::GlobalNamespace::ColorSchemeSO* colorScheme;

  __declspec(property(get = get_environmentInfo, put = set_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  __declspec(property(get = get_gameplayModifiers, put = set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_playerSpecificSettings, put = set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  __declspec(property(get = get_practiceSettings, put = set_practiceSettings))::GlobalNamespace::PracticeSettings* practiceSettings;

  __declspec(property(get = get_backButtonText, put = set_backButtonText))::StringW backButtonText;

  __declspec(property(get = get_useTestNoteCutSoundEffects, put = set_useTestNoteCutSoundEffects)) bool useTestNoteCutSoundEffects;

  constexpr ::GlobalNamespace::BeatmapLevelSO*& __get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> const& __get__beatmapLevel() const;

  constexpr void __set__beatmapLevel(::GlobalNamespace::BeatmapLevelSO* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__beatmapCharacteristic() const;

  constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get__beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__beatmapDifficulty() const;

  constexpr void __set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::ColorSchemeSO*& __get__colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> const& __get__colorScheme() const;

  constexpr void __set__colorScheme(::GlobalNamespace::ColorSchemeSO* value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__environmentInfo() const;

  constexpr void __set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers() const;

  constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __get__playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __get__playerSpecificSettings() const;

  constexpr void __set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr ::GlobalNamespace::PracticeSettings*& __get__practiceSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PracticeSettings*> const& __get__practiceSettings() const;

  constexpr void __set__practiceSettings(::GlobalNamespace::PracticeSettings* value);

  constexpr ::StringW& __get__backButtonText();

  constexpr ::StringW const& __get__backButtonText() const;

  constexpr void __set__backButtonText(::StringW value);

  constexpr bool& __get__useTestNoteCutSoundEffects();

  constexpr bool const& __get__useTestNoteCutSoundEffects() const;

  constexpr void __set__useTestNoteCutSoundEffects(bool value);

  /// @brief Method get_beatmapLevel addr 0x231bf18 size 0x8 virtual false final false
  inline ::GlobalNamespace::BeatmapLevelSO* get_beatmapLevel();

  /// @brief Method set_beatmapLevel addr 0x231bf20 size 0x8 virtual false final false
  inline void set_beatmapLevel(::GlobalNamespace::BeatmapLevelSO* value);

  /// @brief Method get_beatmapCharacteristic addr 0x231bf28 size 0x8 virtual false final false
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();

  /// @brief Method set_beatmapCharacteristic addr 0x231bf30 size 0x8 virtual false final false
  inline void set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  /// @brief Method get_beatmapDifficulty addr 0x231bf38 size 0x8 virtual false final false
  inline ::GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();

  /// @brief Method set_beatmapDifficulty addr 0x231bf40 size 0x8 virtual false final false
  inline void set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method get_colorScheme addr 0x231bf48 size 0x8 virtual false final false
  inline ::GlobalNamespace::ColorSchemeSO* get_colorScheme();

  /// @brief Method set_colorScheme addr 0x231bf50 size 0x8 virtual false final false
  inline void set_colorScheme(::GlobalNamespace::ColorSchemeSO* value);

  /// @brief Method get_environmentInfo addr 0x231bf58 size 0x8 virtual false final false
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method set_environmentInfo addr 0x231bf60 size 0x8 virtual false final false
  inline void set_environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  /// @brief Method get_gameplayModifiers addr 0x231bf68 size 0x8 virtual false final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method set_gameplayModifiers addr 0x231bf70 size 0x8 virtual false final false
  inline void set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method get_playerSpecificSettings addr 0x231bf78 size 0x8 virtual false final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();

  /// @brief Method set_playerSpecificSettings addr 0x231bf80 size 0x8 virtual false final false
  inline void set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  /// @brief Method get_practiceSettings addr 0x231bf88 size 0x8 virtual false final false
  inline ::GlobalNamespace::PracticeSettings* get_practiceSettings();

  /// @brief Method set_practiceSettings addr 0x231bf90 size 0x8 virtual false final false
  inline void set_practiceSettings(::GlobalNamespace::PracticeSettings* value);

  /// @brief Method get_backButtonText addr 0x231bf98 size 0x8 virtual false final false
  inline ::StringW get_backButtonText();

  /// @brief Method set_backButtonText addr 0x231bfa0 size 0x8 virtual false final false
  inline void set_backButtonText(::StringW value);

  /// @brief Method get_useTestNoteCutSoundEffects addr 0x231bfa8 size 0x8 virtual false final false
  inline bool get_useTestNoteCutSoundEffects();

  /// @brief Method set_useTestNoteCutSoundEffects addr 0x231bfb0 size 0xc virtual false final false
  inline void set_useTestNoteCutSoundEffects(bool value);

  static inline ::GlobalNamespace::StandardLevelNoTransitionInstallerData* New_ctor();

  /// @brief Method .ctor addr 0x231bfbc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstallerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelNoTransitionInstallerData(StandardLevelNoTransitionInstallerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelNoTransitionInstallerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelNoTransitionInstallerData(StandardLevelNoTransitionInstallerData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelNoTransitionInstallerData();

public:
  /// @brief Field _beatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelSO* ____beatmapLevel;

  /// @brief Field _beatmapCharacteristic, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty;

  /// @brief Field _colorScheme, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeSO* ____colorScheme;

  /// @brief Field _environmentInfo, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____environmentInfo;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelNoTransitionInstallerData, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelNoTransitionInstallerData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelNoTransitionInstallerData*, "", "StandardLevelNoTransitionInstallerData");
