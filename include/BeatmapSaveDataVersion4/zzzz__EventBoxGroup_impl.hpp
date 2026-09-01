#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4\EventBoxGroup.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroupType_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBox_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__EventBoxGroup_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion4::EventBoxGroup.get_beat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion4::EventBoxGroup::*)()>(&::BeatmapSaveDataVersion4::EventBoxGroup::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375deb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion4::EventBoxGroup*>(), { "get_beat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion4::EventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion4::EventBoxGroup::*)()>(&::BeatmapSaveDataVersion4::EventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x375debc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion4::EventBoxGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr ::BeatmapSaveDataVersion4::EventBoxGroupType const& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___t;
}
constexpr void BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_set_t(::BeatmapSaveDataVersion4::EventBoxGroupType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___t = value;
}
constexpr int32_t& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr int32_t const& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_set_g(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr float_t& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBox>& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::ArrayW<::BeatmapSaveDataVersion4::EventBox> const& BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void BeatmapSaveDataVersion4::EventBoxGroup::__cordl_internal_set_e(::ArrayW<::BeatmapSaveDataVersion4::EventBox> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
inline float_t BeatmapSaveDataVersion4::EventBoxGroup::get_beat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion4::EventBoxGroup*>(), { "get_beat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion4::EventBoxGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion4::EventBoxGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion4::EventBoxGroup* BeatmapSaveDataVersion4::EventBoxGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion4::EventBoxGroup*>());
}
/// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
constexpr BeatmapSaveDataVersion4::EventBoxGroup::operator ::BeatmapSaveDataCommon::IBeat*() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
constexpr ::BeatmapSaveDataCommon::IBeat* BeatmapSaveDataVersion4::EventBoxGroup::i___BeatmapSaveDataCommon__IBeat() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr BeatmapSaveDataVersion4::EventBoxGroup::operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* BeatmapSaveDataVersion4::EventBoxGroup::i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::EventBoxGroup::EventBoxGroup() {}
