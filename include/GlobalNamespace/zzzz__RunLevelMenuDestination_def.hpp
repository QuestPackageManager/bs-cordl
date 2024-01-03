#pragma once
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
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class RunLevelMenuDestination;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RunLevelMenuDestination);
// Type: ::RunLevelMenuDestination
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4152)), TypeDefinitionIndex(TypeDefinitionIndex(14717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4158))
// CS Name: ::RunLevelMenuDestination*
class CORDL_TYPE RunLevelMenuDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  /// @brief Field beatmapLevelPack, offset 0x10, size 0x8
  __declspec(property(get = __get_beatmapLevelPack, put = __set_beatmapLevelPack))::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack;

  /// @brief Field previewBeatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __get_previewBeatmapLevel, put = __set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __get_beatmapDifficulty, put = __set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset 0x28, size 0x8
  __declspec(property(get = __get_beatmapCharacteristic, put = __set_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  /// @brief Field gameplayModifiers, offset 0x30, size 0x8
  __declspec(property(get = __get_gameplayModifiers, put = __set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field practice, offset 0x38, size 0x1
  __declspec(property(get = __get_practice, put = __set_practice)) bool practice;

  /// @brief Field startSongTime, offset 0x3c, size 0x4
  __declspec(property(get = __get_startSongTime, put = __set_startSongTime)) float_t startSongTime;

  /// @brief Field songSpeedMultiplier, offset 0x40, size 0x4
  __declspec(property(get = __get_songSpeedMultiplier, put = __set_songSpeedMultiplier)) float_t songSpeedMultiplier;

  /// @brief Field overrideEnvironments, offset 0x44, size 0x1
  __declspec(property(get = __get_overrideEnvironments, put = __set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Field environmentType, offset 0x48, size 0x8
  __declspec(property(get = __get_environmentType, put = __set_environmentType))::StringW environmentType;

  /// @brief Field environmentName, offset 0x50, size 0x8
  __declspec(property(get = __get_environmentName, put = __set_environmentName))::StringW environmentName;

  /// @brief Field quitAppAfterRun, offset 0x58, size 0x1
  __declspec(property(get = __get_quitAppAfterRun, put = __set_quitAppAfterRun)) bool quitAppAfterRun;

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __get_beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __get_beatmapLevelPack() const;

  constexpr void __set_beatmapLevelPack(::GlobalNamespace::IBeatmapLevelPack* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get_previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get_previewBeatmapLevel() const;

  constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_beatmapDifficulty() const;

  constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get_beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get_beatmapCharacteristic() const;

  constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get_gameplayModifiers() const;

  constexpr void __set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr bool& __get_practice();

  constexpr bool const& __get_practice() const;

  constexpr void __set_practice(bool value);

  constexpr float_t& __get_startSongTime();

  constexpr float_t const& __get_startSongTime() const;

  constexpr void __set_startSongTime(float_t value);

  constexpr float_t& __get_songSpeedMultiplier();

  constexpr float_t const& __get_songSpeedMultiplier() const;

  constexpr void __set_songSpeedMultiplier(float_t value);

  constexpr bool& __get_overrideEnvironments();

  constexpr bool const& __get_overrideEnvironments() const;

  constexpr void __set_overrideEnvironments(bool value);

  constexpr ::StringW& __get_environmentType();

  constexpr ::StringW const& __get_environmentType() const;

  constexpr void __set_environmentType(::StringW value);

  constexpr ::StringW& __get_environmentName();

  constexpr ::StringW const& __get_environmentName() const;

  constexpr void __set_environmentName(::StringW value);

  constexpr bool& __get_quitAppAfterRun();

  constexpr bool const& __get_quitAppAfterRun() const;

  constexpr void __set_quitAppAfterRun(bool value);

  static inline ::GlobalNamespace::RunLevelMenuDestination* New_ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                     ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                     ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice, float_t startSongTime, float_t songSpeedMultiplier,
                                                                     bool overrideEnvironments, ::StringW environmentType, ::StringW environmentName, bool quitAppAfterRun);

  /// @brief Method .ctor, addr 0x223dd50, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice, float_t startSongTime,
                    float_t songSpeedMultiplier, bool overrideEnvironments, ::StringW environmentType, ::StringW environmentName, bool quitAppAfterRun);

  // Ctor Parameters [CppParam { name: "", ty: "RunLevelMenuDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunLevelMenuDestination(RunLevelMenuDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunLevelMenuDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunLevelMenuDestination(RunLevelMenuDestination const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunLevelMenuDestination();

public:
  /// @brief Field beatmapLevelPack, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPack* ___beatmapLevelPack;

  /// @brief Field previewBeatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ___beatmapCharacteristic;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RunLevelMenuDestination, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___beatmapLevelPack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RunLevelMenuDestination, ___previewBeatmapLevel) == 0x18, "Offset mismatch!");

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RunLevelMenuDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RunLevelMenuDestination*, "", "RunLevelMenuDestination");
