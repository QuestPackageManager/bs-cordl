#pragma once
// IWYU pragma private; include "GlobalNamespace\ScoreModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapBasicData_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ScoreModel_def.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScoreModel_NoteScoreDefinition.get_maxCutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoreModel_NoteScoreDefinition::*)()>(&::GlobalNamespace::ScoreModel_NoteScoreDefinition::get_maxCutScore)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x37549d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel_NoteScoreDefinition*>(), { "get_maxCutScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreModel_NoteScoreDefinition.get_executionOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoreModel_NoteScoreDefinition::*)()>(&::GlobalNamespace::ScoreModel_NoteScoreDefinition::get_executionOrder)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3755ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel_NoteScoreDefinition*>(), { "get_executionOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreModel_NoteScoreDefinition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreModel_NoteScoreDefinition::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::GlobalNamespace::ScoreModel_NoteScoreDefinition::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3755ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::ScoreModel_NoteScoreDefinition*>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_maxCenterDistanceCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCenterDistanceCutScore;
}
constexpr int32_t const& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_maxCenterDistanceCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCenterDistanceCutScore;
}
constexpr void GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_set_maxCenterDistanceCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCenterDistanceCutScore = value;
}
constexpr int32_t& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_minBeforeCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minBeforeCutScore;
}
constexpr int32_t const& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_minBeforeCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minBeforeCutScore;
}
constexpr void GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_set_minBeforeCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minBeforeCutScore = value;
}
constexpr int32_t& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_maxBeforeCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBeforeCutScore;
}
constexpr int32_t const& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_maxBeforeCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBeforeCutScore;
}
constexpr void GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_set_maxBeforeCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxBeforeCutScore = value;
}
constexpr int32_t& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_minAfterCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minAfterCutScore;
}
constexpr int32_t const& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_minAfterCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minAfterCutScore;
}
constexpr void GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_set_minAfterCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minAfterCutScore = value;
}
constexpr int32_t& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_maxAfterCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAfterCutScore;
}
constexpr int32_t const& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_maxAfterCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAfterCutScore;
}
constexpr void GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_set_maxAfterCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAfterCutScore = value;
}
constexpr int32_t& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_fixedCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedCutScore;
}
constexpr int32_t const& GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_get_fixedCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedCutScore;
}
constexpr void GlobalNamespace::ScoreModel_NoteScoreDefinition::__cordl_internal_set_fixedCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixedCutScore = value;
}
inline int32_t GlobalNamespace::ScoreModel_NoteScoreDefinition::get_maxCutScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel_NoteScoreDefinition*>(), { "get_maxCutScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ScoreModel_NoteScoreDefinition::get_executionOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel_NoteScoreDefinition*>(), { "get_executionOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreModel_NoteScoreDefinition::_ctor(int32_t maxCenterDistanceCutScore, int32_t minBeforeCutScore, int32_t maxBeforeCutScore, int32_t minAfterCutScore,
                                                                   int32_t maxAfterCutScore, int32_t fixedCutScore) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::ScoreModel_NoteScoreDefinition*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxCenterDistanceCutScore, minBeforeCutScore, maxBeforeCutScore, minAfterCutScore, maxAfterCutScore, fixedCutScore);
}
inline ::GlobalNamespace::ScoreModel_NoteScoreDefinition* GlobalNamespace::ScoreModel_NoteScoreDefinition::New_ctor(int32_t maxCenterDistanceCutScore, int32_t minBeforeCutScore,
                                                                                                                    int32_t maxBeforeCutScore, int32_t minAfterCutScore, int32_t maxAfterCutScore,
                                                                                                                    int32_t fixedCutScore) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoreModel_NoteScoreDefinition*>(maxCenterDistanceCutScore, minBeforeCutScore, maxBeforeCutScore, minAfterCutScore,
                                                                                                              maxAfterCutScore, fixedCutScore));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreModel_NoteScoreDefinition::ScoreModel_NoteScoreDefinition() {}
//  Writing Method size for method: ::GlobalNamespace::ScoreModel_MaxScoreCounterElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreModel_MaxScoreCounterElement::*)(::GlobalNamespace::NoteData_ScoringType, float_t)>(
    &::GlobalNamespace::ScoreModel_MaxScoreCounterElement::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x37553f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::NoteData_ScoringType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreModel_MaxScoreCounterElement.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ScoreModel_MaxScoreCounterElement::*)(::GlobalNamespace::ScoreModel_MaxScoreCounterElement*)>(
    &::GlobalNamespace::ScoreModel_MaxScoreCounterElement::CompareTo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3755b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ScoreModel_NoteScoreDefinition*& GlobalNamespace::ScoreModel_MaxScoreCounterElement::__cordl_internal_get_noteScoreDefinition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteScoreDefinition;
}
constexpr ::GlobalNamespace::ScoreModel_NoteScoreDefinition* const& GlobalNamespace::ScoreModel_MaxScoreCounterElement::__cordl_internal_get_noteScoreDefinition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteScoreDefinition;
}
constexpr void GlobalNamespace::ScoreModel_MaxScoreCounterElement::__cordl_internal_set_noteScoreDefinition(::GlobalNamespace::ScoreModel_NoteScoreDefinition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteScoreDefinition = value;
}
constexpr float_t& GlobalNamespace::ScoreModel_MaxScoreCounterElement::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::ScoreModel_MaxScoreCounterElement::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::ScoreModel_MaxScoreCounterElement::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
inline void GlobalNamespace::ScoreModel_MaxScoreCounterElement::_ctor(::GlobalNamespace::NoteData_ScoringType scoringType, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::NoteData_ScoringType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scoringType, time);
}
inline int32_t GlobalNamespace::ScoreModel_MaxScoreCounterElement::CompareTo(::GlobalNamespace::ScoreModel_MaxScoreCounterElement* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline ::GlobalNamespace::ScoreModel_MaxScoreCounterElement* GlobalNamespace::ScoreModel_MaxScoreCounterElement::New_ctor(::GlobalNamespace::NoteData_ScoringType scoringType, float_t time) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>(scoringType, time));
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>"
constexpr GlobalNamespace::ScoreModel_MaxScoreCounterElement::operator ::System::IComparable_1<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>"
constexpr ::System::IComparable_1<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>*
GlobalNamespace::ScoreModel_MaxScoreCounterElement::i___System__IComparable_1___GlobalNamespace__ScoreModel_MaxScoreCounterElement__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::ScoreModel_MaxScoreCounterElement*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreModel_MaxScoreCounterElement::ScoreModel_MaxScoreCounterElement() {}
//  Writing Method size for method: ::GlobalNamespace::ScoreModel.GetNoteScoreDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ScoreModel_NoteScoreDefinition* (*)(::GlobalNamespace::NoteData_ScoringType)>(
    &::GlobalNamespace::ScoreModel::GetNoteScoreDefinition)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3754898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel*>(), { "GetNoteScoreDefinition", {}, { ::i2c::type_of<::GlobalNamespace::NoteData_ScoringType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreModel.ComputeQuickInaccurateMaxMultipliedScoreForBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::BeatmapBasicData*)>(&::GlobalNamespace::ScoreModel::ComputeQuickInaccurateMaxMultipliedScoreForBeatmap)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3754920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel*>(),
                                                             { "ComputeQuickInaccurateMaxMultipliedScoreForBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapBasicData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreModel.ComputeMaxMultipliedScoreForBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(&::GlobalNamespace::ScoreModel::ComputeMaxMultipliedScoreForBeatmap)> {
  constexpr static std::size_t size = 0x9fc;
  constexpr static std::size_t addrs = 0x37549f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel*>(), { "ComputeMaxMultipliedScoreForBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreModel.GetModifiedScoreForGameplayModifiersScoreMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, float_t)>(&::GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3755514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel*>(),
                                                             { "GetModifiedScoreForGameplayModifiersScoreMultiplier", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreModel::*)()>(&::GlobalNamespace::ScoreModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3755598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ScoreModel::setStaticF_fullScoreScoringTypes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::NoteData_ScoringType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::NoteData_ScoringType>*, "fullScoreScoringTypes", ::GlobalNamespace::ScoreModel*>(
      std::forward<::System::Collections::Generic::HashSet_1<::GlobalNamespace::NoteData_ScoringType>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::NoteData_ScoringType>* GlobalNamespace::ScoreModel::getStaticF_fullScoreScoringTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::NoteData_ScoringType>*, "fullScoreScoringTypes", ::GlobalNamespace::ScoreModel*>();
}
inline void GlobalNamespace::ScoreModel::setStaticF__scoreDefinitions(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData_ScoringType, ::GlobalNamespace::ScoreModel_NoteScoreDefinition*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData_ScoringType, ::GlobalNamespace::ScoreModel_NoteScoreDefinition*>*, "_scoreDefinitions",
                                    ::GlobalNamespace::ScoreModel*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData_ScoringType, ::GlobalNamespace::ScoreModel_NoteScoreDefinition*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData_ScoringType, ::GlobalNamespace::ScoreModel_NoteScoreDefinition*>*
GlobalNamespace::ScoreModel::getStaticF__scoreDefinitions() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NoteData_ScoringType, ::GlobalNamespace::ScoreModel_NoteScoreDefinition*>*,
                                           "_scoreDefinitions", ::GlobalNamespace::ScoreModel*>();
}
inline void GlobalNamespace::ScoreModel::setStaticF__scoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::ScoreMultiplierCounter*, "_scoreMultiplierCounter", ::GlobalNamespace::ScoreModel*>(
      std::forward<::GlobalNamespace::ScoreMultiplierCounter*>(value));
}
inline ::GlobalNamespace::ScoreMultiplierCounter* GlobalNamespace::ScoreModel::getStaticF__scoreMultiplierCounter() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::ScoreMultiplierCounter*, "_scoreMultiplierCounter", ::GlobalNamespace::ScoreModel*>();
}
inline ::GlobalNamespace::ScoreModel_NoteScoreDefinition* GlobalNamespace::ScoreModel::GetNoteScoreDefinition(::GlobalNamespace::NoteData_ScoringType scoringType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel*>(), { "GetNoteScoreDefinition", {}, { ::i2c::type_of<::GlobalNamespace::NoteData_ScoringType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScoreModel_NoteScoreDefinition*>(nullptr, ___internal_method, scoringType);
}
inline int32_t GlobalNamespace::ScoreModel::ComputeQuickInaccurateMaxMultipliedScoreForBeatmap(::GlobalNamespace::BeatmapBasicData* beatmapBasicData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel*>(),
                                                           { "ComputeQuickInaccurateMaxMultipliedScoreForBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapBasicData*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, beatmapBasicData);
}
inline int32_t GlobalNamespace::ScoreModel::ComputeMaxMultipliedScoreForBeatmap(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel*>(), { "ComputeMaxMultipliedScoreForBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::IReadonlyBeatmapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, beatmapData);
}
inline int32_t GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier(int32_t multipliedScore, float_t gameplayModifiersScoreMultiplier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel*>(), { "GetModifiedScoreForGameplayModifiersScoreMultiplier", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, multipliedScore, gameplayModifiersScoreMultiplier);
}
inline void GlobalNamespace::ScoreModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreModel* GlobalNamespace::ScoreModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoreModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreModel::ScoreModel() {}
