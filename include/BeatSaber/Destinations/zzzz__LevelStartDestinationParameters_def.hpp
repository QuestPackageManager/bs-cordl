#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\LevelStartDestinationParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Destinations/zzzz__GameMode_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LevelStartDestinationParameters)
namespace BeatSaber::Destinations {
struct GameMode;
}
namespace BeatSaber::Destinations {
class GameplayEnvironmentOverride;
}
namespace GlobalNamespace {
struct BeatmapKey;
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
MARK_REF_T(::BeatSaber::Destinations::LevelStartDestinationParameters*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::LevelStartDestinationParameters*, "BeatSaber.Destinations", "LevelStartDestinationParameters");
// Dependencies BeatSaber.Destinations.GameMode, BeatmapKey, System.Object
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.LevelStartDestinationParameters
class CORDL_TYPE LevelStartDestinationParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapKey, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field customPlayerSpecificSettings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_customPlayerSpecificSettings,
                      put = __cordl_internal_set_customPlayerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* customPlayerSpecificSettings;

  /// @brief Field environmentOverride, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentOverride, put = __cordl_internal_set_environmentOverride)) ::BeatSaber::Destinations::GameplayEnvironmentOverride* environmentOverride;

  /// @brief Field gameMode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_gameMode, put = __cordl_internal_set_gameMode)) ::BeatSaber::Destinations::GameMode gameMode;

  /// @brief Field gameplayModifiers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field practiceSettings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_practiceSettings, put = __cordl_internal_set_practiceSettings)) ::GlobalNamespace::PracticeSettings* practiceSettings;

  static inline ::BeatSaber::Destinations::LevelStartDestinationParameters* New_ctor();

  static inline ::BeatSaber::Destinations::LevelStartDestinationParameters*
  New_ctor(::BeatSaber::Destinations::GameMode gameMode, ::GlobalNamespace::BeatmapKey beatmapKey, ::BeatSaber::Destinations::GameplayEnvironmentOverride* environmentOverride,
           ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* customPlayerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings);

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get_customPlayerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get_customPlayerSpecificSettings();

  constexpr ::BeatSaber::Destinations::GameplayEnvironmentOverride* const& __cordl_internal_get_environmentOverride() const;

  constexpr ::BeatSaber::Destinations::GameplayEnvironmentOverride*& __cordl_internal_get_environmentOverride();

  constexpr ::BeatSaber::Destinations::GameMode const& __cordl_internal_get_gameMode() const;

  constexpr ::BeatSaber::Destinations::GameMode& __cordl_internal_get_gameMode();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::GlobalNamespace::PracticeSettings* const& __cordl_internal_get_practiceSettings() const;

  constexpr ::GlobalNamespace::PracticeSettings*& __cordl_internal_get_practiceSettings();

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_customPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_environmentOverride(::BeatSaber::Destinations::GameplayEnvironmentOverride* value);

  constexpr void __cordl_internal_set_gameMode(::BeatSaber::Destinations::GameMode value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_practiceSettings(::GlobalNamespace::PracticeSettings* value);

  /// @brief Method .ctor, addr 0x3281210, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x32812d0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::BeatSaber::Destinations::GameMode gameMode, ::GlobalNamespace::BeatmapKey beatmapKey, ::BeatSaber::Destinations::GameplayEnvironmentOverride* environmentOverride,
                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* customPlayerSpecificSettings,
                    ::GlobalNamespace::PracticeSettings* practiceSettings);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23064 };

  /// @brief Field gameMode, offset: 0x10, size: 0x4, def value: None
  ::BeatSaber::Destinations::GameMode ___gameMode;

  /// @brief Field beatmapKey, offset: 0x18, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field environmentOverride, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Destinations::GameplayEnvironmentOverride* ___environmentOverride;

  /// @brief Field gameplayModifiers, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field customPlayerSpecificSettings, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ___customPlayerSpecificSettings;

  /// @brief Field practiceSettings, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PracticeSettings* ___practiceSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ___gameMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ___beatmapKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ___environmentOverride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ___gameplayModifiers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ___customPlayerSpecificSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Destinations::LevelStartDestinationParameters, ___practiceSettings) == 0x40, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::LevelStartDestinationParameters) == 0x48, "Size mismatch!");

} // namespace BeatSaber::Destinations
