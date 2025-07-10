#pragma once
// IWYU pragma private; include "GlobalNamespace/DeterministicHitChanceScoreCalculator.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DeterministicHitChanceScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeterministicHitChanceScoreCalculator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DeterministicHitChanceScoreCalculator::*)(float_t)>(
    &::GlobalNamespace::DeterministicHitChanceScoreCalculator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3bc68d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeterministicHitChanceScoreCalculator*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeterministicHitChanceScoreCalculator.GetScoreForNote
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::DeterministicHitChanceScoreCalculator::*)(::GlobalNamespace::MockNoteData*)>(
    &::GlobalNamespace::DeterministicHitChanceScoreCalculator::GetScoreForNote)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3bc68f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeterministicHitChanceScoreCalculator*>::get(), "GetScoreForNote", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::DeterministicHitChanceScoreCalculator::__cordl_internal_get__hitChance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitChance;
}
constexpr float_t const& GlobalNamespace::DeterministicHitChanceScoreCalculator::__cordl_internal_get__hitChance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitChance;
}
constexpr void GlobalNamespace::DeterministicHitChanceScoreCalculator::__cordl_internal_set__hitChance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hitChance = value;
}
constexpr float_t& GlobalNamespace::DeterministicHitChanceScoreCalculator::__cordl_internal_get__chanceAggregated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chanceAggregated;
}
constexpr float_t const& GlobalNamespace::DeterministicHitChanceScoreCalculator::__cordl_internal_get__chanceAggregated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____chanceAggregated;
}
constexpr void GlobalNamespace::DeterministicHitChanceScoreCalculator::__cordl_internal_set__chanceAggregated(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____chanceAggregated = value;
}
inline void GlobalNamespace::DeterministicHitChanceScoreCalculator::_ctor(float_t hitChance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeterministicHitChanceScoreCalculator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hitChance);
}
inline int32_t GlobalNamespace::DeterministicHitChanceScoreCalculator::GetScoreForNote(::GlobalNamespace::MockNoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DeterministicHitChanceScoreCalculator*>::get(), "GetScoreForNote", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, noteData);
}
inline ::GlobalNamespace::DeterministicHitChanceScoreCalculator* GlobalNamespace::DeterministicHitChanceScoreCalculator::New_ctor(float_t hitChance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DeterministicHitChanceScoreCalculator*>(hitChance));
}
/// @brief Convert operator to "::GlobalNamespace::IMockPlayerScoreCalculator"
constexpr GlobalNamespace::DeterministicHitChanceScoreCalculator::operator ::GlobalNamespace::IMockPlayerScoreCalculator*() noexcept {
  return static_cast<::GlobalNamespace::IMockPlayerScoreCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMockPlayerScoreCalculator"
constexpr ::GlobalNamespace::IMockPlayerScoreCalculator* GlobalNamespace::DeterministicHitChanceScoreCalculator::i___GlobalNamespace__IMockPlayerScoreCalculator() noexcept {
  return static_cast<::GlobalNamespace::IMockPlayerScoreCalculator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeterministicHitChanceScoreCalculator::DeterministicHitChanceScoreCalculator() {}
