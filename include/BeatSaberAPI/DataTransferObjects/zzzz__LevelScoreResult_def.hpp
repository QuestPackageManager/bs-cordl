#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelScoreResult)
namespace BeatSaberAPI::DataTransferObjects {
struct __LevelScoreResult__GameplayModifiers;
}
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
struct __LevelScoreResult__GameplayModifiers;
}
namespace BeatSaberAPI::DataTransferObjects {
class LevelScoreResult;
}
// Write type traits
MARK_VAL_T(::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers);
MARK_REF_PTR_T(::BeatSaberAPI::DataTransferObjects::LevelScoreResult);
// Type: ::GameplayModifiers
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6182))
// CS Name: ::LevelScoreResult::GameplayModifiers
struct CORDL_TYPE __LevelScoreResult__GameplayModifiers {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct ____LevelScoreResult__GameplayModifiers_Unwrapped
  enum struct ____LevelScoreResult__GameplayModifiers_Unwrapped : uint32_t {
    __E_None = static_cast<uint32_t>(0x8040200u),
    __E_InstaFail = static_cast<uint32_t>(0x10080402u),
    __E_FailOnSaberClash = static_cast<uint32_t>(0x20100804u),
    __E_FastNotes = static_cast<uint32_t>(0x40201008u),
    __E_DisappearingArrows = static_cast<uint32_t>(0x80402010u),
    __E_NoBombs = static_cast<uint32_t>(0x80804020u),
    __E_SongSpeedFaster = static_cast<uint32_t>(0x81808040u),
    __E_SongSpeedSlower = static_cast<uint32_t>(0x818080u),
    __E_EnabledObstacleTypeFullHeightOnly = static_cast<uint32_t>(0x820081u),
    __E_EnabledObstacleTypeNoObstacles = static_cast<uint32_t>(0x840082u),
    __E_EnergyTypeBattery = static_cast<uint32_t>(0x880084u),
    __E_StrictAngles = static_cast<uint32_t>(0x900088u),
    __E_NoArrows = static_cast<uint32_t>(0xa00090u),
    __E_GhostNotes = static_cast<uint32_t>(0xc000a0u),
    __E_NoFailOn0Energy = static_cast<uint32_t>(0x4000c0u),
    __E_SongSpeedSuperFast = static_cast<uint32_t>(0x8000c0u),
    __E_ProMode = static_cast<uint32_t>(0x1c0u),
    __E_ZenMode = static_cast<uint32_t>(0x2c0u),
    __E_SmallCubes = static_cast<uint32_t>(0x4c0u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LevelScoreResult__GameplayModifiers_Unwrapped() const noexcept {
    return static_cast<____LevelScoreResult__GameplayModifiers_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __LevelScoreResult__GameplayModifiers(uint32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelScoreResult__GameplayModifiers();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<uint32_t>(0x8040200u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const None;

  /// @brief Field InstaFail value: static_cast<uint32_t>(0x10080402u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const InstaFail;

  /// @brief Field FailOnSaberClash value: static_cast<uint32_t>(0x20100804u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const FailOnSaberClash;

  /// @brief Field FastNotes value: static_cast<uint32_t>(0x40201008u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const FastNotes;

  /// @brief Field DisappearingArrows value: static_cast<uint32_t>(0x80402010u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const DisappearingArrows;

  /// @brief Field NoBombs value: static_cast<uint32_t>(0x80804020u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const NoBombs;

  /// @brief Field SongSpeedFaster value: static_cast<uint32_t>(0x81808040u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const SongSpeedFaster;

  /// @brief Field SongSpeedSlower value: static_cast<uint32_t>(0x818080u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const SongSpeedSlower;

  /// @brief Field EnabledObstacleTypeFullHeightOnly value: static_cast<uint32_t>(0x820081u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const EnabledObstacleTypeFullHeightOnly;

  /// @brief Field EnabledObstacleTypeNoObstacles value: static_cast<uint32_t>(0x840082u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const EnabledObstacleTypeNoObstacles;

  /// @brief Field EnergyTypeBattery value: static_cast<uint32_t>(0x880084u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const EnergyTypeBattery;

  /// @brief Field StrictAngles value: static_cast<uint32_t>(0x900088u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const StrictAngles;

  /// @brief Field NoArrows value: static_cast<uint32_t>(0xa00090u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const NoArrows;

  /// @brief Field GhostNotes value: static_cast<uint32_t>(0xc000a0u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const GhostNotes;

  /// @brief Field NoFailOn0Energy value: static_cast<uint32_t>(0x4000c0u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const NoFailOn0Energy;

  /// @brief Field SongSpeedSuperFast value: static_cast<uint32_t>(0x8000c0u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const SongSpeedSuperFast;

  /// @brief Field ProMode value: static_cast<uint32_t>(0x1c0u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const ProMode;

  /// @brief Field ZenMode value: static_cast<uint32_t>(0x2c0u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const ZenMode;

  /// @brief Field SmallCubes value: static_cast<uint32_t>(0x4c0u)
  static ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers const SmallCubes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, value__) == 0x0, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
// Type: BeatSaberAPI.DataTransferObjects::LevelScoreResult
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6183))
// CS Name: ::BeatSaberAPI.DataTransferObjects::LevelScoreResult*
class CORDL_TYPE LevelScoreResult : public ::System::Object {
public:
  // Declarations
  using GameplayModifiers = ::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers;

  /// @brief Field leaderboardId, offset 0x10, size 0x8
  __declspec(property(get = __get_leaderboardId, put = __set_leaderboardId))::StringW leaderboardId;

  /// @brief Field multipliedScore, offset 0x18, size 0x4
  __declspec(property(get = __get_multipliedScore, put = __set_multipliedScore)) int32_t multipliedScore;

  /// @brief Field modifiedScore, offset 0x1c, size 0x4
  __declspec(property(get = __get_modifiedScore, put = __set_modifiedScore)) int32_t modifiedScore;

  /// @brief Field fullCombo, offset 0x20, size 0x1
  __declspec(property(get = __get_fullCombo, put = __set_fullCombo)) bool fullCombo;

  /// @brief Field goodCutsCount, offset 0x24, size 0x4
  __declspec(property(get = __get_goodCutsCount, put = __set_goodCutsCount)) int32_t goodCutsCount;

  /// @brief Field badCutsCount, offset 0x28, size 0x4
  __declspec(property(get = __get_badCutsCount, put = __set_badCutsCount)) int32_t badCutsCount;

  /// @brief Field missedCount, offset 0x2c, size 0x4
  __declspec(property(get = __get_missedCount, put = __set_missedCount)) int32_t missedCount;

  /// @brief Field maxCombo, offset 0x30, size 0x4
  __declspec(property(get = __get_maxCombo, put = __set_maxCombo)) int32_t maxCombo;

  /// @brief Field gameplayModifiers, offset 0x38, size 0x8
  __declspec(property(get = __get_gameplayModifiers, put = __set_gameplayModifiers))::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers,
                                                                                             ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> gameplayModifiers;

  /// @brief Field deviceModel, offset 0x40, size 0x8
  __declspec(property(get = __get_deviceModel, put = __set_deviceModel))::StringW deviceModel;

  /// @brief Field extraDataBase64, offset 0x48, size 0x8
  __declspec(property(get = __get_extraDataBase64, put = __set_extraDataBase64))::StringW extraDataBase64;

  constexpr ::StringW& __get_leaderboardId();

  constexpr ::StringW const& __get_leaderboardId() const;

  constexpr void __set_leaderboardId(::StringW value);

  constexpr int32_t& __get_multipliedScore();

  constexpr int32_t const& __get_multipliedScore() const;

  constexpr void __set_multipliedScore(int32_t value);

  constexpr int32_t& __get_modifiedScore();

  constexpr int32_t const& __get_modifiedScore() const;

  constexpr void __set_modifiedScore(int32_t value);

  constexpr bool& __get_fullCombo();

  constexpr bool const& __get_fullCombo() const;

  constexpr void __set_fullCombo(bool value);

  constexpr int32_t& __get_goodCutsCount();

  constexpr int32_t const& __get_goodCutsCount() const;

  constexpr void __set_goodCutsCount(int32_t value);

  constexpr int32_t& __get_badCutsCount();

  constexpr int32_t const& __get_badCutsCount() const;

  constexpr void __set_badCutsCount(int32_t value);

  constexpr int32_t& __get_missedCount();

  constexpr int32_t const& __get_missedCount() const;

  constexpr void __set_missedCount(int32_t value);

  constexpr int32_t& __get_maxCombo();

  constexpr int32_t const& __get_maxCombo() const;

  constexpr void __set_maxCombo(int32_t value);

  constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*>&
  __get_gameplayModifiers();

  constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> const&
  __get_gameplayModifiers() const;

  constexpr void __set_gameplayModifiers(
      ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> value);

  constexpr ::StringW& __get_deviceModel();

  constexpr ::StringW const& __get_deviceModel() const;

  constexpr void __set_deviceModel(::StringW value);

  constexpr ::StringW& __get_extraDataBase64();

  constexpr ::StringW const& __get_extraDataBase64() const;

  constexpr void __set_extraDataBase64(::StringW value);

  static inline ::BeatSaberAPI::DataTransferObjects::LevelScoreResult* New_ctor();

  /// @brief Method .ctor addr 0x21e8ae4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelScoreResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelScoreResult(LevelScoreResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelScoreResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelScoreResult(LevelScoreResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelScoreResult();

public:
  /// @brief Field leaderboardId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___leaderboardId;

  /// @brief Field multipliedScore, offset: 0x18, size: 0x4, def value: None
  int32_t ___multipliedScore;

  /// @brief Field modifiedScore, offset: 0x1c, size: 0x4, def value: None
  int32_t ___modifiedScore;

  /// @brief Field fullCombo, offset: 0x20, size: 0x1, def value: None
  bool ___fullCombo;

  /// @brief Field goodCutsCount, offset: 0x24, size: 0x4, def value: None
  int32_t ___goodCutsCount;

  /// @brief Field badCutsCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___badCutsCount;

  /// @brief Field missedCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___missedCount;

  /// @brief Field maxCombo, offset: 0x30, size: 0x4, def value: None
  int32_t ___maxCombo;

  /// @brief Field gameplayModifiers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, ::Array<::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers>*> ___gameplayModifiers;

  /// @brief Field deviceModel, offset: 0x40, size: 0x8, def value: None
  ::StringW ___deviceModel;

  /// @brief Field extraDataBase64, offset: 0x48, size: 0x8, def value: None
  ::StringW ___extraDataBase64;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::LevelScoreResult, 0x50>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___leaderboardId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___multipliedScore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___modifiedScore) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___fullCombo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___goodCutsCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___badCutsCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___missedCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___maxCombo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___gameplayModifiers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___deviceModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, ___extraDataBase64) == 0x48, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::__LevelScoreResult__GameplayModifiers, "BeatSaberAPI.DataTransferObjects", "LevelScoreResult/GameplayModifiers");
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::LevelScoreResult);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::LevelScoreResult*, "BeatSaberAPI.DataTransferObjects", "LevelScoreResult");
