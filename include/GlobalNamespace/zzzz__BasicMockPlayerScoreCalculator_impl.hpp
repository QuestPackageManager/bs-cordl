#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicMockPlayerScoreCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BasicMockPlayerScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicMockPlayerScoreCalculator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BasicMockPlayerScoreCalculator::*)(float_t, int32_t, int32_t)>(
    &::GlobalNamespace::BasicMockPlayerScoreCalculator::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x586d1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicMockPlayerScoreCalculator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicMockPlayerScoreCalculator.GetScoreForNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BasicMockPlayerScoreCalculator::*)(::GlobalNamespace::MockNoteData*)>(
    &::GlobalNamespace::BasicMockPlayerScoreCalculator::GetScoreForNote)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x586d244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicMockPlayerScoreCalculator*>::get(), "GetScoreForNote", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_get__hitFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitFrequency;
}
constexpr float_t const& GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_get__hitFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitFrequency;
}
constexpr void GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_set__hitFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hitFrequency = value;
}
constexpr int32_t& GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_get__minScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minScore;
}
constexpr int32_t const& GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_get__minScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minScore;
}
constexpr void GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_set__minScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minScore = value;
}
constexpr int32_t& GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_get__maxScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxScore;
}
constexpr int32_t const& GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_get__maxScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxScore;
}
constexpr void GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_set__maxScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxScore = value;
}
constexpr ::System::Random*& GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::System::Random* const& GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::BasicMockPlayerScoreCalculator::__cordl_internal_set__random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BasicMockPlayerScoreCalculator::_ctor(float_t hitFrequency, int32_t minScore, int32_t maxScore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicMockPlayerScoreCalculator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hitFrequency, minScore, maxScore);
}
inline int32_t GlobalNamespace::BasicMockPlayerScoreCalculator::GetScoreForNote(::GlobalNamespace::MockNoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BasicMockPlayerScoreCalculator*>::get(), "GetScoreForNote", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, noteData);
}
inline ::GlobalNamespace::BasicMockPlayerScoreCalculator* GlobalNamespace::BasicMockPlayerScoreCalculator::New_ctor(float_t hitFrequency, int32_t minScore, int32_t maxScore) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BasicMockPlayerScoreCalculator*>(hitFrequency, minScore, maxScore));
}
/// @brief Convert operator to "::GlobalNamespace::IMockPlayerScoreCalculator"
constexpr GlobalNamespace::BasicMockPlayerScoreCalculator::operator ::GlobalNamespace::IMockPlayerScoreCalculator*() noexcept {
  return static_cast<::GlobalNamespace::IMockPlayerScoreCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMockPlayerScoreCalculator"
constexpr ::GlobalNamespace::IMockPlayerScoreCalculator* GlobalNamespace::BasicMockPlayerScoreCalculator::i___GlobalNamespace__IMockPlayerScoreCalculator() noexcept {
  return static_cast<::GlobalNamespace::IMockPlayerScoreCalculator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicMockPlayerScoreCalculator::BasicMockPlayerScoreCalculator() {}
