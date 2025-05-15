#pragma once
// IWYU pragma private; include "GlobalNamespace/RunLevelMenuDestination.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RunLevelMenuDestination)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class RunLevelMenuDestination;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RunLevelMenuDestination);
// Dependencies BeatmapDifficulty, MenuDestination
namespace GlobalNamespace {
// Is value type: false
// CS Name: RunLevelMenuDestination
class CORDL_TYPE RunLevelMenuDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  /// @brief Field beatmapCharacteristic, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field beatmapLevelPack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevelPack, put = __cordl_internal_set_beatmapLevelPack)) ::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack;

  /// @brief Field environmentName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentName, put = __cordl_internal_set_environmentName)) ::StringW environmentName;

  /// @brief Field environmentType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_environmentType, put = __cordl_internal_set_environmentType)) ::StringW environmentType;

  /// @brief Field gameplayModifiers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field overrideEnvironments, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideEnvironments, put = __cordl_internal_set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Field practice, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_practice, put = __cordl_internal_set_practice)) bool practice;

  /// @brief Field quitAppAfterRun, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_quitAppAfterRun, put = __cordl_internal_set_quitAppAfterRun)) bool quitAppAfterRun;

  /// @brief Field songSpeedMultiplier, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeedMultiplier, put = __cordl_internal_set_songSpeedMultiplier)) float_t songSpeedMultiplier;

  /// @brief Field startSongTime, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_startSongTime, put = __cordl_internal_set_startSongTime)) float_t startSongTime;

  static inline ::GlobalNamespace::RunLevelMenuDestination* New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                     ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                     ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice, float_t startSongTime, float_t songSpeedMultiplier,
                                                                     bool overrideEnvironments, ::StringW environmentType, ::StringW environmentName, bool quitAppAfterRun);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_beatmapCharacteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::GlobalNamespace::BeatmapLevelPack* const& __cordl_internal_get_beatmapLevelPack() const;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get_beatmapLevelPack();

  constexpr ::StringW const& __cordl_internal_get_environmentName() const;

  constexpr ::StringW& __cordl_internal_get_environmentName();

  constexpr ::StringW const& __cordl_internal_get_environmentType() const;

  constexpr ::StringW& __cordl_internal_get_environmentType();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr bool const& __cordl_internal_get_overrideEnvironments() const;

  constexpr bool& __cordl_internal_get_overrideEnvironments();

  constexpr bool const& __cordl_internal_get_practice() const;

  constexpr bool& __cordl_internal_get_practice();

  constexpr bool const& __cordl_internal_get_quitAppAfterRun() const;

  constexpr bool& __cordl_internal_get_quitAppAfterRun();

  constexpr float_t const& __cordl_internal_get_songSpeedMultiplier() const;

  constexpr float_t& __cordl_internal_get_songSpeedMultiplier();

  constexpr float_t const& __cordl_internal_get_startSongTime() const;

  constexpr float_t& __cordl_internal_get_startSongTime();

  constexpr void __cordl_internal_set_beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr void __cordl_internal_set_environmentName(::StringW value);

  constexpr void __cordl_internal_set_environmentType(::StringW value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_overrideEnvironments(bool value);

  constexpr void __cordl_internal_set_practice(bool value);

  constexpr void __cordl_internal_set_quitAppAfterRun(bool value);

  constexpr void __cordl_internal_set_songSpeedMultiplier(float_t value);

  constexpr void __cordl_internal_set_startSongTime(float_t value);

  /// @brief Method .ctor, addr 0x26af32c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice, float_t startSongTime,
                    float_t songSpeedMultiplier, bool overrideEnvironments, ::StringW environmentType, ::StringW environmentName, bool quitAppAfterRun);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunLevelMenuDestination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunLevelMenuDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunLevelMenuDestination(RunLevelMenuDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunLevelMenuDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunLevelMenuDestination(RunLevelMenuDestination const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12824 };

  /// @brief Field beatmapLevelPack, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ___beatmapLevelPack;

  /// @brief Field beatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  /// @brief Field beatmapDifficulty, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ___beatmapCharacteristic;

  /// @brief Field gameplayModifiers, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field practice, offset: 0x38, size: 0x1, def value: None
  bool ___practice;

  /// @brief Field startSongTime, offset: 0x3c, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songSpeedMultiplier, offset: 0x40, size: 0x4, def value: None
  float_t ___songSpeedMultiplier;

  /// @brief Field overrideEnvironments, offset: 0x44, size: 0x1, def value: None
  bool ___overrideEnvironments;

  /// @brief Field environmentType, offset: 0x48, size: 0x8, def value: None
  ::StringW ___environmentType;

  /// @brief Field environmentName, offset: 0x50, size: 0x8, def value: None
  ::StringW ___environmentName;

  /// @brief Field quitAppAfterRun, offset: 0x58, size: 0x1, def value: None
  bool ___quitAppAfterRun;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___beatmapLevelPack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___beatmapLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___beatmapCharacteristic) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___gameplayModifiers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___practice) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___startSongTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___songSpeedMultiplier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___overrideEnvironments) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___environmentType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___environmentName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___quitAppAfterRun) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RunLevelMenuDestination, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RunLevelMenuDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunLevelMenuDestination*, "", "RunLevelMenuDestination");
