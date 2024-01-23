#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreModel_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ScoreModel_def.hpp"
#include "GlobalNamespace/zzzz__ScoreMultiplierCounter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ScoreModel__NoteScoreDefinition.get_maxCutScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__ScoreModel__NoteScoreDefinition::*)()>(
    &::GlobalNamespace::__ScoreModel__NoteScoreDefinition::get_maxCutScore)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2375d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>::get(),
                                                                               "get_maxCutScore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScoreModel__NoteScoreDefinition.get_executionOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__ScoreModel__NoteScoreDefinition::*)()>(
    &::GlobalNamespace::__ScoreModel__NoteScoreDefinition::get_executionOrder)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x237618c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>::get(),
                                                                               "get_executionOrder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScoreModel__NoteScoreDefinition._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScoreModel__NoteScoreDefinition::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::GlobalNamespace::__ScoreModel__NoteScoreDefinition::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2376138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_maxCenterDistanceCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCenterDistanceCutScore;
}
constexpr int32_t const& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_maxCenterDistanceCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCenterDistanceCutScore;
}
constexpr void GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_set_maxCenterDistanceCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCenterDistanceCutScore = value;
}
constexpr int32_t& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_minBeforeCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minBeforeCutScore;
}
constexpr int32_t const& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_minBeforeCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minBeforeCutScore;
}
constexpr void GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_set_minBeforeCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minBeforeCutScore = value;
}
constexpr int32_t& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_maxBeforeCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBeforeCutScore;
}
constexpr int32_t const& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_maxBeforeCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBeforeCutScore;
}
constexpr void GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_set_maxBeforeCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxBeforeCutScore = value;
}
constexpr int32_t& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_minAfterCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minAfterCutScore;
}
constexpr int32_t const& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_minAfterCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minAfterCutScore;
}
constexpr void GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_set_minAfterCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minAfterCutScore = value;
}
constexpr int32_t& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_maxAfterCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAfterCutScore;
}
constexpr int32_t const& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_maxAfterCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAfterCutScore;
}
constexpr void GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_set_maxAfterCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAfterCutScore = value;
}
constexpr int32_t& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_fixedCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedCutScore;
}
constexpr int32_t const& GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_get_fixedCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedCutScore;
}
constexpr void GlobalNamespace::__ScoreModel__NoteScoreDefinition::__cordl_internal_set_fixedCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixedCutScore = value;
}
inline int32_t GlobalNamespace::__ScoreModel__NoteScoreDefinition::get_maxCutScore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>::get(),
                                                                             "get_maxCutScore", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__ScoreModel__NoteScoreDefinition::get_executionOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>::get(),
                                                                             "get_executionOrder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* GlobalNamespace::__ScoreModel__NoteScoreDefinition::New_ctor(int32_t maxCenterDistanceCutScore, int32_t minBeforeCutScore,
                                                                                                                          int32_t maxBeforeCutScore, int32_t minAfterCutScore, int32_t maxAfterCutScore,
                                                                                                                          int32_t fixedCutScore) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>(maxCenterDistanceCutScore, minBeforeCutScore, maxBeforeCutScore, minAfterCutScore,
                                                                                                         maxAfterCutScore, fixedCutScore));
}
inline void GlobalNamespace::__ScoreModel__NoteScoreDefinition::_ctor(int32_t maxCenterDistanceCutScore, int32_t minBeforeCutScore, int32_t maxBeforeCutScore, int32_t minAfterCutScore,
                                                                      int32_t maxAfterCutScore, int32_t fixedCutScore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxCenterDistanceCutScore, minBeforeCutScore, maxBeforeCutScore, minAfterCutScore, maxAfterCutScore, fixedCutScore);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScoreModel__NoteScoreDefinition::__ScoreModel__NoteScoreDefinition() {}
//  Writing Method size for method: ::GlobalNamespace::__ScoreModel__MaxScoreCounterElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScoreModel__MaxScoreCounterElement::*)(
    ::GlobalNamespace::__NoteData__ScoringType, float_t)>(&::GlobalNamespace::__ScoreModel__MaxScoreCounterElement::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2375d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScoreModel__MaxScoreCounterElement.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__ScoreModel__MaxScoreCounterElement::*)(
    ::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*)>(&::GlobalNamespace::__ScoreModel__MaxScoreCounterElement::CompareTo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23761a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>"
constexpr GlobalNamespace::__ScoreModel__MaxScoreCounterElement::operator ::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>"
constexpr ::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>*
GlobalNamespace::__ScoreModel__MaxScoreCounterElement::i___System__IComparable_1___GlobalNamespace____ScoreModel__MaxScoreCounterElement__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*& GlobalNamespace::__ScoreModel__MaxScoreCounterElement::__cordl_internal_get_noteScoreDefinition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteScoreDefinition;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*> const&
GlobalNamespace::__ScoreModel__MaxScoreCounterElement::__cordl_internal_get_noteScoreDefinition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteScoreDefinition;
}
constexpr void GlobalNamespace::__ScoreModel__MaxScoreCounterElement::__cordl_internal_set_noteScoreDefinition(::GlobalNamespace::__ScoreModel__NoteScoreDefinition* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___noteScoreDefinition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__ScoreModel__MaxScoreCounterElement::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::__ScoreModel__MaxScoreCounterElement::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::__ScoreModel__MaxScoreCounterElement::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
inline ::GlobalNamespace::__ScoreModel__MaxScoreCounterElement* GlobalNamespace::__ScoreModel__MaxScoreCounterElement::New_ctor(::GlobalNamespace::__NoteData__ScoringType scoringType, float_t time) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>(scoringType, time));
}
inline void GlobalNamespace::__ScoreModel__MaxScoreCounterElement::_ctor(::GlobalNamespace::__NoteData__ScoringType scoringType, float_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scoringType, time);
}
inline int32_t GlobalNamespace::__ScoreModel__MaxScoreCounterElement::CompareTo(::GlobalNamespace::__ScoreModel__MaxScoreCounterElement* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScoreModel__MaxScoreCounterElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ScoreModel__MaxScoreCounterElement::__ScoreModel__MaxScoreCounterElement() {}
//  Writing Method size for method: ::GlobalNamespace::ScoreModel.GetNoteScoreDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ScoreModel__NoteScoreDefinition* (*)(::GlobalNamespace::__NoteData__ScoringType)>(
    &::GlobalNamespace::ScoreModel::GetNoteScoreDefinition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x237522c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get(), "GetNoteScoreDefinition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreModel.ComputeMaxMultipliedScoreForBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::ScoreModel::ComputeMaxMultipliedScoreForBeatmap)> {
  constexpr static std::size_t size = 0xa68;
  constexpr static std::size_t addrs = 0x23752ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get(), "ComputeMaxMultipliedScoreForBeatmap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreModel.GetModifiedScoreForGameplayModifiersScoreMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, float_t)>(&::GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2375db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get(), "GetModifiedScoreForGameplayModifiersScoreMultiplier", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScoreModel::*)()>(&::GlobalNamespace::ScoreModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2375e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ScoreModel::setStaticF_fullScoreScoringTypes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::__NoteData__ScoringType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::__NoteData__ScoringType>*, "fullScoreScoringTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::GlobalNamespace::__NoteData__ScoringType>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::__NoteData__ScoringType>* GlobalNamespace::ScoreModel::getStaticF_fullScoreScoringTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::GlobalNamespace::__NoteData__ScoringType>*, "fullScoreScoringTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get>();
}
inline void GlobalNamespace::ScoreModel::setStaticF__scoreDefinitions(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__ScoringType, ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__ScoringType, ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>*,
                                    "_scoreDefinitions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__ScoringType, ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__ScoringType, ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>*
GlobalNamespace::ScoreModel::getStaticF__scoreDefinitions() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__ScoringType, ::GlobalNamespace::__ScoreModel__NoteScoreDefinition*>*,
                                           "_scoreDefinitions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get>();
}
inline void GlobalNamespace::ScoreModel::setStaticF__scoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::ScoreMultiplierCounter*, "_scoreMultiplierCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get>(
      std::forward<::GlobalNamespace::ScoreMultiplierCounter*>(value));
}
inline ::GlobalNamespace::ScoreMultiplierCounter* GlobalNamespace::ScoreModel::getStaticF__scoreMultiplierCounter() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::ScoreMultiplierCounter*, "_scoreMultiplierCounter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get>();
}
inline ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* GlobalNamespace::ScoreModel::GetNoteScoreDefinition(::GlobalNamespace::__NoteData__ScoringType scoringType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get(), "GetNoteScoreDefinition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ScoreModel__NoteScoreDefinition*, false>(nullptr, ___internal_method, scoringType);
}
inline int32_t GlobalNamespace::ScoreModel::ComputeMaxMultipliedScoreForBeatmap(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get(), "ComputeMaxMultipliedScoreForBeatmap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, beatmapData);
}
inline int32_t GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier(int32_t multipliedScore, float_t gameplayModifiersScoreMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get(), "GetModifiedScoreForGameplayModifiersScoreMultiplier", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, multipliedScore, gameplayModifiersScoreMultiplier);
}
inline ::GlobalNamespace::ScoreModel* GlobalNamespace::ScoreModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ScoreModel*>());
}
inline void GlobalNamespace::ScoreModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScoreModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreModel::ScoreModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
