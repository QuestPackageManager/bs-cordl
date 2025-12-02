#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/LevelStartDestinationParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__GameMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LevelStartDestinationParameters)
namespace BeatSaber::Destinations {
struct GameMode;
}
namespace BeatSaber::Destinations {
class GameplayAdditionalInformation;
}
namespace BeatSaber::Destinations {
class GameplayEnvironmentOverride;
}
namespace BeatSaber::Destinations {
class SerializableBeatmapKey;
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
// Forward declare root types
namespace BeatSaber::Destinations {
class LevelStartDestinationParameters;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::LevelStartDestinationParameters);
// Dependencies BeatSaber.Destinations.GameMode, System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.LevelStartDestinationParameters
class CORDL_TYPE LevelStartDestinationParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field _additionalInformation, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalInformation,
                      put = __cordl_internal_set__additionalInformation)) ::BeatSaber::Destinations::GameplayAdditionalInformation* _additionalInformation;

  /// @brief Field _beatmapKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey)) ::BeatSaber::Destinations::SerializableBeatmapKey* _beatmapKey;

  /// @brief Field _customPlayerSpecificSettings, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__customPlayerSpecificSettings, put = __cordl_internal_set__customPlayerSpecificSettings)) bool _customPlayerSpecificSettings;

  /// @brief Field _environmentOverride, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentOverride, put = __cordl_internal_set__environmentOverride)) ::BeatSaber::Destinations::GameplayEnvironmentOverride* _environmentOverride;

  /// @brief Field _gameMode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__gameMode, put = __cordl_internal_set__gameMode)) ::BeatSaber::Destinations::GameMode _gameMode;

  /// @brief Field _gameplayModifiers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _isPractice, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isPractice, put = __cordl_internal_set__isPractice)) bool _isPractice;

  /// @brief Field _loadMenu, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__loadMenu, put = __cordl_internal_set__loadMenu)) bool _loadMenu;

  /// @brief Field _playerSpecificSettings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpecificSettings, put = __cordl_internal_set__playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings;

  /// @brief Field _practiceSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__practiceSettings, put = __cordl_internal_set__practiceSettings)) ::GlobalNamespace::PracticeSettings* _practiceSettings;

  __declspec(property(get = get_additionalInformation)) ::BeatSaber::Destinations::GameplayAdditionalInformation* additionalInformation;

  __declspec(property(get = get_beatmapKey)) ::BeatSaber::Destinations::SerializableBeatmapKey* beatmapKey;

  __declspec(property(get = get_customPlayerSpecificSettings)) bool customPlayerSpecificSettings;

  __declspec(property(get = get_environmentOverride)) ::BeatSaber::Destinations::GameplayEnvironmentOverride* environmentOverride;

  __declspec(property(get = get_gameMode)) ::BeatSaber::Destinations::GameMode gameMode;

  __declspec(property(get = get_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_isPractice)) bool isPractice;

  __declspec(property(get = get_loadMenu)) bool loadMenu;

  __declspec(property(get = get_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  __declspec(property(get = get_practiceSettings)) ::GlobalNamespace::PracticeSettings* practiceSettings;

  static inline ::BeatSaber::Destinations::LevelStartDestinationParameters* New_ctor();

  static inline ::BeatSaber::Destinations::LevelStartDestinationParameters*
  New_ctor(::BeatSaber::Destinations::GameMode gameMode, ::BeatSaber::Destinations::SerializableBeatmapKey* beatmapKey, ::BeatSaber::Destinations::GameplayEnvironmentOverride* environmentOverride,
           ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool customPlayerSpecificSettings, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, bool isPractice,
           ::GlobalNamespace::PracticeSettings* practiceSettings, ::BeatSaber::Destinations::GameplayAdditionalInformation* additionalInformation, bool loadMenu);

  constexpr ::BeatSaber::Destinations::GameplayAdditionalInformation* const& __cordl_internal_get__additionalInformation() const;

  constexpr ::BeatSaber::Destinations::GameplayAdditionalInformation*& __cordl_internal_get__additionalInformation();

  constexpr ::BeatSaber::Destinations::SerializableBeatmapKey* const& __cordl_internal_get__beatmapKey() const;

  constexpr ::BeatSaber::Destinations::SerializableBeatmapKey*& __cordl_internal_get__beatmapKey();

  constexpr bool const& __cordl_internal_get__customPlayerSpecificSettings() const;

  constexpr bool& __cordl_internal_get__customPlayerSpecificSettings();

  constexpr ::BeatSaber::Destinations::GameplayEnvironmentOverride* const& __cordl_internal_get__environmentOverride() const;

  constexpr ::BeatSaber::Destinations::GameplayEnvironmentOverride*& __cordl_internal_get__environmentOverride();

  constexpr ::BeatSaber::Destinations::GameMode const& __cordl_internal_get__gameMode() const;

  constexpr ::BeatSaber::Destinations::GameMode& __cordl_internal_get__gameMode();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr bool const& __cordl_internal_get__isPractice() const;

  constexpr bool& __cordl_internal_get__isPractice();

  constexpr bool const& __cordl_internal_get__loadMenu() const;

  constexpr bool& __cordl_internal_get__loadMenu();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get__playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__playerSpecificSettings();

  constexpr ::GlobalNamespace::PracticeSettings* const& __cordl_internal_get__practiceSettings() const;

  constexpr ::GlobalNamespace::PracticeSettings*& __cordl_internal_get__practiceSettings();

  constexpr void __cordl_internal_set__additionalInformation(::BeatSaber::Destinations::GameplayAdditionalInformation* value);

  constexpr void __cordl_internal_set__beatmapKey(::BeatSaber::Destinations::SerializableBeatmapKey* value);

  constexpr void __cordl_internal_set__customPlayerSpecificSettings(bool value);

  constexpr void __cordl_internal_set__environmentOverride(::BeatSaber::Destinations::GameplayEnvironmentOverride* value);

  constexpr void __cordl_internal_set__gameMode(::BeatSaber::Destinations::GameMode value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__isPractice(bool value);

  constexpr void __cordl_internal_set__loadMenu(bool value);

  constexpr void __cordl_internal_set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__practiceSettings(::GlobalNamespace::PracticeSettings* value);

  /// @brief Method .ctor, addr 0x31818ac, size 0x1c8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3181a74, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Destinations::GameMode gameMode, ::BeatSaber::Destinations::SerializableBeatmapKey* beatmapKey,
                    ::BeatSaber::Destinations::GameplayEnvironmentOverride* environmentOverride, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool customPlayerSpecificSettings,
                    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, bool isPractice, ::GlobalNamespace::PracticeSettings* practiceSettings,
                    ::BeatSaber::Destinations::GameplayAdditionalInformation* additionalInformation, bool loadMenu);

  /// @brief Method get_additionalInformation, addr 0x318189c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::GameplayAdditionalInformation* get_additionalInformation();

  /// @brief Method get_beatmapKey, addr 0x3181864, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::SerializableBeatmapKey* get_beatmapKey();

  /// @brief Method get_customPlayerSpecificSettings, addr 0x318187c, size 0x8, virtual false, abstract: false, final false
  inline bool get_customPlayerSpecificSettings();

  /// @brief Method get_environmentOverride, addr 0x318186c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::GameplayEnvironmentOverride* get_environmentOverride();

  /// @brief Method get_gameMode, addr 0x318185c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Destinations::GameMode get_gameMode();

  /// @brief Method get_gameplayModifiers, addr 0x3181874, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method get_isPractice, addr 0x318188c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPractice();

  /// @brief Method get_loadMenu, addr 0x31818a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_loadMenu();

  /// @brief Method get_playerSpecificSettings, addr 0x3181884, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();

  /// @brief Method get_practiceSettings, addr 0x3181894, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PracticeSettings* get_practiceSettings();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelStartDestinationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelStartDestinationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelStartDestinationParameters(LevelStartDestinationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelStartDestinationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelStartDestinationParameters(LevelStartDestinationParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22657 };

  /// @brief Field _gameMode, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Destinations::GameMode ____gameMode;

  /// @brief Field _beatmapKey, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Destinations::SerializableBeatmapKey* ____beatmapKey;

  /// @brief Field _environmentOverride, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Destinations::GameplayEnvironmentOverride* ____environmentOverride;

  /// @brief Field _gameplayModifiers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _customPlayerSpecificSettings, offset: 0x30, size: 0x1, def value: None
  bool ____customPlayerSpecificSettings;

  /// @brief Field _playerSpecificSettings, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings;

  /// @brief Field _isPractice, offset: 0x40, size: 0x1, def value: None
  bool ____isPractice;

  /// @brief Field _practiceSettings, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PracticeSettings* ____practiceSettings;

  /// @brief Field _additionalInformation, offset: 0x50, size: 0x8, def value: None
  ::BeatSaber::Destinations::GameplayAdditionalInformation* ____additionalInformation;

  /// @brief Field _loadMenu, offset: 0x58, size: 0x1, def value: None
  bool ____loadMenu;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ____gameMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ____beatmapKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ____environmentOverride) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ____gameplayModifiers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ____customPlayerSpecificSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ____playerSpecificSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ____isPractice) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ____practiceSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ____additionalInformation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ____loadMenu) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::LevelStartDestinationParameters, 0x60>, "Size mismatch!");

} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::LevelStartDestinationParameters);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::LevelStartDestinationParameters*, "BeatSaber.Destinations", "LevelStartDestinationParameters");
