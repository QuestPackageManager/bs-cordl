#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResults.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResultsBase_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResultsBase_def.hpp"
#include "GlobalNamespace/zzzz__LevelScore_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.get_cumulativeScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LevelCompletionResults::*)()>(&::GlobalNamespace::LevelCompletionResults::get_cumulativeScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a31bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { "get_cumulativeScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)()>(&::GlobalNamespace::LevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3a31bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)(
    ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::LevelScore, ::GlobalNamespace::RankModel_Rank, bool, float_t, float_t, float_t, float_t,
    ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType, ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction, float_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t,
    int32_t, int32_t, float_t, float_t, int32_t, float_t, bool, float_t)>(&::GlobalNamespace::LevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3a31be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { ".ctor",
                                                                                                                 {},
                                                                                                                 { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                                                                                   ::i2c::type_of<::GlobalNamespace::LevelScore>(),
                                                                                                                   ::i2c::type_of<::GlobalNamespace::RankModel_Rank>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType>(),
                                                                                                                   ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<int32_t>(),
                                                                                                                   ::i2c::type_of<float_t>(),
                                                                                                                   ::i2c::type_of<bool>(),
                                                                                                                   ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LevelCompletionResults::*)(::System::Object*)>(&::GlobalNamespace::LevelCompletionResults::CompareTo)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3a31d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::LevelCompletionResults::Serialize)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x3a31e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelCompletionResults* (::GlobalNamespace::LevelCompletionResults::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a322d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(),
                            { "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelCompletionResults* (*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::LevelCompletionResults::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x3a322d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(),
                                                                                           { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifiers = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_leftSaberMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftSaberMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_leftSaberMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftSaberMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_leftSaberMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftSaberMovementDistance = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_rightSaberMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightSaberMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_rightSaberMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightSaberMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_rightSaberMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightSaberMovementDistance = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_leftHandMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_leftHandMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHandMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_leftHandMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHandMovementDistance = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_rightHandMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandMovementDistance;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_rightHandMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightHandMovementDistance;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_rightHandMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightHandMovementDistance = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_notGoodCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notGoodCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_notGoodCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notGoodCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_notGoodCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notGoodCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_okCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okCount;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_okCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okCount;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_okCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___okCount = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_maxCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCutScore;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_maxCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCutScore;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_maxCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCutScore = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_totalCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalCutScore;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_totalCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalCutScore;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_totalCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalCutScore = value;
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_goodCutsCountForNotesWithFullScoreScoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCountForNotesWithFullScoreScoringType;
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_goodCutsCountForNotesWithFullScoreScoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCountForNotesWithFullScoreScoringType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_goodCutsCountForNotesWithFullScoreScoringType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCutsCountForNotesWithFullScoreScoringType = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType = value;
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_averageCutScoreForNotesWithFullScoreScoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCutScoreForNotesWithFullScoreScoringType;
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_averageCutScoreForNotesWithFullScoreScoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___averageCutScoreForNotesWithFullScoreScoringType;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_averageCutScoreForNotesWithFullScoreScoringType(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___averageCutScoreForNotesWithFullScoreScoringType = value;
}
constexpr bool& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_invalidated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalidated;
}
constexpr bool const& GlobalNamespace::LevelCompletionResults::__cordl_internal_get_invalidated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalidated;
}
constexpr void GlobalNamespace::LevelCompletionResults::__cordl_internal_set_invalidated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invalidated = value;
}
inline int32_t GlobalNamespace::LevelCompletionResults::get_cumulativeScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { "get_cumulativeScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCompletionResults::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelCompletionResults::_ctor(::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::LevelScore score, ::GlobalNamespace::RankModel_Rank rank,
                                                           bool fullCombo, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, float_t leftHandMovementDistance,
                                                           float_t rightHandMovementDistance, ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType levelEndStateType,
                                                           ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount, int32_t badCutsCount,
                                                           int32_t missedCutsCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore,
                                                           int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                                                           float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime, bool invalidated, float_t startSongTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { ".ctor",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                                                                                 ::i2c::type_of<::GlobalNamespace::LevelScore>(),
                                                                                                                 ::i2c::type_of<::GlobalNamespace::RankModel_Rank>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType>(),
                                                                                                                 ::i2c::type_of<::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<int32_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayModifiers, score, rank, fullCombo, leftSaberMovementDistance, rightSaberMovementDistance, leftHandMovementDistance,
                                                   rightHandMovementDistance, levelEndStateType, levelEndAction, energy, goodCutsCount, badCutsCount, missedCutsCount, notGoodCount, okCount,
                                                   maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType, averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                                                   averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime, invalidated, startSongTime);
}
inline int32_t GlobalNamespace::LevelCompletionResults::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void GlobalNamespace::LevelCompletionResults::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::LevelCompletionResults*
GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(),
                          { "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelCompletionResults*>(), { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*>(nullptr, ___internal_method, reader);
}
/// @brief [Preserve]
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelCompletionResults*>());
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::New_ctor(
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::LevelScore score, ::GlobalNamespace::RankModel_Rank rank, bool fullCombo, float_t leftSaberMovementDistance,
    float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance, ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType levelEndStateType,
    ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int32_t notGoodCount,
    int32_t okCount, int32_t maxCutScore, int32_t totalCutScore, int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
    float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime, bool invalidated, float_t startSongTime) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::LevelCompletionResults*>(
                          gameplayModifiers, score, rank, fullCombo, leftSaberMovementDistance, rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType,
                          levelEndAction, energy, goodCutsCount, badCutsCount, missedCutsCount, notGoodCount, okCount, maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType,
                          averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime, invalidated, startSongTime));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
constexpr GlobalNamespace::LevelCompletionResults::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*
GlobalNamespace::LevelCompletionResults::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__LevelCompletionResults__() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr GlobalNamespace::LevelCompletionResults::operator ::LiteNetLib::Utils::INetImmutableSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable* GlobalNamespace::LevelCompletionResults::i___LiteNetLib__Utils__INetImmutableSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
constexpr GlobalNamespace::LevelCompletionResults::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* GlobalNamespace::LevelCompletionResults::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelCompletionResults::LevelCompletionResults() {}
