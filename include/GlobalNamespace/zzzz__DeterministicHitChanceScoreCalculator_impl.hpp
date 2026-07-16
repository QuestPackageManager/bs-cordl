#pragma once
// IWYU pragma private; include "GlobalNamespace/DeterministicHitChanceScoreCalculator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DeterministicHitChanceScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeterministicHitChanceScoreCalculator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeterministicHitChanceScoreCalculator::*)(float_t)>(&::GlobalNamespace::DeterministicHitChanceScoreCalculator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c3368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterministicHitChanceScoreCalculator*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeterministicHitChanceScoreCalculator.GetScoreForNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DeterministicHitChanceScoreCalculator::*)(::GlobalNamespace::MockNoteData*)>(
    &::GlobalNamespace::DeterministicHitChanceScoreCalculator::GetScoreForNote)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59c3370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterministicHitChanceScoreCalculator*>(),
                                                                                           { "GetScoreForNote", {}, { ::i2c::type_of<::GlobalNamespace::MockNoteData*>() } })));
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterministicHitChanceScoreCalculator*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitChance);
}
inline int32_t GlobalNamespace::DeterministicHitChanceScoreCalculator::GetScoreForNote(::GlobalNamespace::MockNoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeterministicHitChanceScoreCalculator*>(),
                                                                                         { "GetScoreForNote", {}, { ::i2c::type_of<::GlobalNamespace::MockNoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, noteData);
}
inline ::GlobalNamespace::DeterministicHitChanceScoreCalculator* GlobalNamespace::DeterministicHitChanceScoreCalculator::New_ctor(float_t hitChance) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeterministicHitChanceScoreCalculator*>(hitChance));
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
