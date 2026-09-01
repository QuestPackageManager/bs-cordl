#pragma once
// IWYU pragma private; include "BeatSaber\Haptics\RumbleData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Haptics/zzzz__RumbleData_def.hpp"
//  Writing Method size for method: ::BeatSaber::Haptics::RumbleData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Haptics::RumbleData::*)()>(&::BeatSaber::Haptics::RumbleData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3298a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& BeatSaber::Haptics::RumbleData::__cordl_internal_get_active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___active;
}
constexpr bool const& BeatSaber::Haptics::RumbleData::__cordl_internal_get_active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___active;
}
constexpr void BeatSaber::Haptics::RumbleData::__cordl_internal_set_active(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___active = value;
}
constexpr bool& BeatSaber::Haptics::RumbleData::__cordl_internal_get_continuous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuous;
}
constexpr bool const& BeatSaber::Haptics::RumbleData::__cordl_internal_get_continuous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuous;
}
constexpr void BeatSaber::Haptics::RumbleData::__cordl_internal_set_continuous(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___continuous = value;
}
constexpr float_t& BeatSaber::Haptics::RumbleData::__cordl_internal_get_strength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr float_t const& BeatSaber::Haptics::RumbleData::__cordl_internal_get_strength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strength;
}
constexpr void BeatSaber::Haptics::RumbleData::__cordl_internal_set_strength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strength = value;
}
constexpr float_t& BeatSaber::Haptics::RumbleData::__cordl_internal_get_endTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endTime;
}
constexpr float_t const& BeatSaber::Haptics::RumbleData::__cordl_internal_get_endTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endTime;
}
constexpr void BeatSaber::Haptics::RumbleData::__cordl_internal_set_endTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endTime = value;
}
constexpr float_t& BeatSaber::Haptics::RumbleData::__cordl_internal_get_frequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frequency;
}
constexpr float_t const& BeatSaber::Haptics::RumbleData::__cordl_internal_get_frequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frequency;
}
constexpr void BeatSaber::Haptics::RumbleData::__cordl_internal_set_frequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frequency = value;
}
inline void BeatSaber::Haptics::RumbleData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Haptics::RumbleData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Haptics::RumbleData* BeatSaber::Haptics::RumbleData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Haptics::RumbleData*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Haptics::RumbleData::RumbleData() {}
