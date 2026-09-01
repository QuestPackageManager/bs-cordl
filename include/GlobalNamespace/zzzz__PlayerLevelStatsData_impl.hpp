#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerLevelStatsData.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__RankModel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerLevelStatsData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.get_levelID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerLevelStatsData::*)()>(&::GlobalNamespace::PlayerLevelStatsData::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_levelID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.get_difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::PlayerLevelStatsData::*)()>(&::GlobalNamespace::PlayerLevelStatsData::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_difficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.get_beatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::PlayerLevelStatsData::*)()>(
    &::GlobalNamespace::PlayerLevelStatsData::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_beatmapCharacteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.get_highScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerLevelStatsData::*)()>(&::GlobalNamespace::PlayerLevelStatsData::get_highScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_highScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.get_maxCombo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerLevelStatsData::*)()>(&::GlobalNamespace::PlayerLevelStatsData::get_maxCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_maxCombo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.get_fullCombo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLevelStatsData::*)()>(&::GlobalNamespace::PlayerLevelStatsData::get_fullCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_fullCombo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.get_maxRank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankModel_Rank (::GlobalNamespace::PlayerLevelStatsData::*)()>(&::GlobalNamespace::PlayerLevelStatsData::get_maxRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_maxRank", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.get_validScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerLevelStatsData::*)()>(&::GlobalNamespace::PlayerLevelStatsData::get_validScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_validScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.get_playCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerLevelStatsData::*)()>(&::GlobalNamespace::PlayerLevelStatsData::get_playCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374e0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_playCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLevelStatsData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::PlayerLevelStatsData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3748220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLevelStatsData::*)(::StringW, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::PlayerLevelStatsData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x374e0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLevelStatsData::*)(::StringW, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristic,
                                                                                                         int32_t, int32_t, bool, ::GlobalNamespace::RankModel_Rank, bool, int32_t)>(
    &::GlobalNamespace::PlayerLevelStatsData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x374c1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::RankModel_Rank>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.UpdateScoreData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLevelStatsData::*)(int32_t, int32_t, bool, ::GlobalNamespace::RankModel_Rank)>(
    &::GlobalNamespace::PlayerLevelStatsData::UpdateScoreData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3747e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(),
                            { "UpdateScoreData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::RankModel_Rank>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.IncreaseNumberOfGameplays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerLevelStatsData::*)()>(&::GlobalNamespace::PlayerLevelStatsData::IncreaseNumberOfGameplays)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3748620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "IncreaseNumberOfGameplays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerLevelStatsData.GetBeatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::PlayerLevelStatsData::*)()>(&::GlobalNamespace::PlayerLevelStatsData::GetBeatmapKey)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3747e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "GetBeatmapKey", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__highScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highScore;
}
constexpr int32_t const& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__highScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highScore;
}
constexpr void GlobalNamespace::PlayerLevelStatsData::__cordl_internal_set__highScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highScore = value;
}
constexpr int32_t& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__maxCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCombo;
}
constexpr int32_t const& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__maxCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCombo;
}
constexpr void GlobalNamespace::PlayerLevelStatsData::__cordl_internal_set__maxCombo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxCombo = value;
}
constexpr bool& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo;
}
constexpr bool const& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo;
}
constexpr void GlobalNamespace::PlayerLevelStatsData::__cordl_internal_set__fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullCombo = value;
}
constexpr ::GlobalNamespace::RankModel_Rank& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__maxRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxRank;
}
constexpr ::GlobalNamespace::RankModel_Rank const& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__maxRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxRank;
}
constexpr void GlobalNamespace::PlayerLevelStatsData::__cordl_internal_set__maxRank(::GlobalNamespace::RankModel_Rank value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxRank = value;
}
constexpr bool& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__validScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validScore;
}
constexpr bool const& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__validScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validScore;
}
constexpr void GlobalNamespace::PlayerLevelStatsData::__cordl_internal_set__validScore(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validScore = value;
}
constexpr int32_t& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__playCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playCount;
}
constexpr int32_t const& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__playCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playCount;
}
constexpr void GlobalNamespace::PlayerLevelStatsData::__cordl_internal_set__playCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playCount = value;
}
constexpr ::StringW& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr ::StringW const& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr void GlobalNamespace::PlayerLevelStatsData::__cordl_internal_set__levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelID = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::PlayerLevelStatsData::__cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic const& GlobalNamespace::PlayerLevelStatsData::__cordl_internal_get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void GlobalNamespace::PlayerLevelStatsData::__cordl_internal_set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristic = value;
}
inline ::StringW GlobalNamespace::PlayerLevelStatsData::get_levelID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_levelID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::PlayerLevelStatsData::get_difficulty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_difficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::PlayerLevelStatsData::get_beatmapCharacteristic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_beatmapCharacteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PlayerLevelStatsData::get_highScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_highScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PlayerLevelStatsData::get_maxCombo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_maxCombo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLevelStatsData::get_fullCombo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_fullCombo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::RankModel_Rank GlobalNamespace::PlayerLevelStatsData::get_maxRank() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_maxRank", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankModel_Rank>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerLevelStatsData::get_validScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_validScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PlayerLevelStatsData::get_playCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "get_playCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerLevelStatsData::_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::PlayerLevelStatsData::_ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelID, difficulty, beatmapCharacteristic);
}
inline void GlobalNamespace::PlayerLevelStatsData::_ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty, ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic,
                                                         int32_t highScore, int32_t maxCombo, bool fullCombo, ::GlobalNamespace::RankModel_Rank maxRank, bool validScore, int32_t playCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::GlobalNamespace::RankModel_Rank>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelID, difficulty, beatmapCharacteristic, highScore, maxCombo, fullCombo, maxRank, validScore, playCount);
}
inline void GlobalNamespace::PlayerLevelStatsData::UpdateScoreData(int32_t score, int32_t maxCombo, bool fullCombo, ::GlobalNamespace::RankModel_Rank rank) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(),
                          { "UpdateScoreData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::RankModel_Rank>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, score, maxCombo, fullCombo, rank);
}
inline void GlobalNamespace::PlayerLevelStatsData::IncreaseNumberOfGameplays() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "IncreaseNumberOfGameplays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::PlayerLevelStatsData::GetBeatmapKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerLevelStatsData*>(), { "GetBeatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLevelStatsData* GlobalNamespace::PlayerLevelStatsData::New_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLevelStatsData*>(beatmapKey));
}
inline ::GlobalNamespace::PlayerLevelStatsData* GlobalNamespace::PlayerLevelStatsData::New_ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                                                ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerLevelStatsData*>(levelID, difficulty, beatmapCharacteristic));
}
inline ::GlobalNamespace::PlayerLevelStatsData* GlobalNamespace::PlayerLevelStatsData::New_ctor(::StringW levelID, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                                                ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic, int32_t highScore, int32_t maxCombo,
                                                                                                bool fullCombo, ::GlobalNamespace::RankModel_Rank maxRank, bool validScore, int32_t playCount) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::PlayerLevelStatsData*>(levelID, difficulty, beatmapCharacteristic, highScore, maxCombo, fullCombo, maxRank, validScore, playCount));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerLevelStatsData::PlayerLevelStatsData() {}
