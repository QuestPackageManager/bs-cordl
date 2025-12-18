#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteExecutionRating.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteExecutionRating_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteExecutionRating_Rating::NoteExecutionRating_Rating(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteExecutionRating_Rating::NoteExecutionRating_Rating() {}
constexpr ::GlobalNamespace::NoteExecutionRating_Rating GlobalNamespace::NoteExecutionRating_Rating::GoodCut{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NoteExecutionRating_Rating GlobalNamespace::NoteExecutionRating_Rating::Miss{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::NoteExecutionRating_Rating GlobalNamespace::NoteExecutionRating_Rating::BadCut{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::NoteExecutionRating._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteExecutionRating::*)(
    float_t, ::GlobalNamespace::NoteData_ScoringType, ::GlobalNamespace::NoteExecutionRating_Rating, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::NoteExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x364176c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteExecutionRating*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_ScoringType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteExecutionRating_Rating>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NoteExecutionRating_Rating& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_rating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rating;
}
constexpr ::GlobalNamespace::NoteExecutionRating_Rating const& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_rating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rating;
}
constexpr void GlobalNamespace::NoteExecutionRating::__cordl_internal_set_rating(::GlobalNamespace::NoteExecutionRating_Rating value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rating = value;
}
constexpr int32_t& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_cutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutScore;
}
constexpr int32_t const& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_cutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutScore;
}
constexpr void GlobalNamespace::NoteExecutionRating::__cordl_internal_set_cutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cutScore = value;
}
constexpr int32_t& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_beforeCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeCutScore;
}
constexpr int32_t const& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_beforeCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeCutScore;
}
constexpr void GlobalNamespace::NoteExecutionRating::__cordl_internal_set_beforeCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beforeCutScore = value;
}
constexpr int32_t& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_centerDistanceCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___centerDistanceCutScore;
}
constexpr int32_t const& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_centerDistanceCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___centerDistanceCutScore;
}
constexpr void GlobalNamespace::NoteExecutionRating::__cordl_internal_set_centerDistanceCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___centerDistanceCutScore = value;
}
constexpr int32_t& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_afterCutScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterCutScore;
}
constexpr int32_t const& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_afterCutScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterCutScore;
}
constexpr void GlobalNamespace::NoteExecutionRating::__cordl_internal_set_afterCutScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___afterCutScore = value;
}
constexpr ::GlobalNamespace::NoteData_ScoringType& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_scoringType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoringType;
}
constexpr ::GlobalNamespace::NoteData_ScoringType const& GlobalNamespace::NoteExecutionRating::__cordl_internal_get_scoringType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoringType;
}
constexpr void GlobalNamespace::NoteExecutionRating::__cordl_internal_set_scoringType(::GlobalNamespace::NoteData_ScoringType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scoringType = value;
}
inline void GlobalNamespace::NoteExecutionRating::_ctor(float_t time, ::GlobalNamespace::NoteData_ScoringType scoringType, ::GlobalNamespace::NoteExecutionRating_Rating rating, int32_t cutScore,
                                                        int32_t beforeCutScore, int32_t centerDistanceCutScore, int32_t afterCutScore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteExecutionRating*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData_ScoringType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteExecutionRating_Rating>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, scoringType, rating, cutScore, beforeCutScore, centerDistanceCutScore, afterCutScore);
}
inline ::GlobalNamespace::NoteExecutionRating* GlobalNamespace::NoteExecutionRating::New_ctor(float_t time, ::GlobalNamespace::NoteData_ScoringType scoringType,
                                                                                              ::GlobalNamespace::NoteExecutionRating_Rating rating, int32_t cutScore, int32_t beforeCutScore,
                                                                                              int32_t centerDistanceCutScore, int32_t afterCutScore) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteExecutionRating*>(time, scoringType, rating, cutScore, beforeCutScore, centerDistanceCutScore, afterCutScore));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteExecutionRating::NoteExecutionRating() {}
