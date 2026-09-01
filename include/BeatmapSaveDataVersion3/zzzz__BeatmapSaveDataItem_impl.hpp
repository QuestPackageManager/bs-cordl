#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3\BeatmapSaveDataItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveDataItem_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveDataItem.get_beat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion3::BeatmapSaveDataItem::*)()>(&::BeatmapSaveDataVersion3::BeatmapSaveDataItem::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375e8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BeatmapSaveDataItem*>(), { "get_beat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveDataItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion3::BeatmapSaveDataItem::*)(float_t)>(&::BeatmapSaveDataVersion3::BeatmapSaveDataItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375e8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BeatmapSaveDataItem*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::BeatmapSaveDataItem::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& BeatmapSaveDataVersion3::BeatmapSaveDataItem::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveDataItem::__cordl_internal_set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
inline float_t BeatmapSaveDataVersion3::BeatmapSaveDataItem::get_beat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BeatmapSaveDataItem*>(), { "get_beat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion3::BeatmapSaveDataItem::_ctor(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion3::BeatmapSaveDataItem*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beat);
}
inline ::BeatmapSaveDataVersion3::BeatmapSaveDataItem* BeatmapSaveDataVersion3::BeatmapSaveDataItem::New_ctor(float_t beat) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion3::BeatmapSaveDataItem*>(beat));
}
/// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
constexpr BeatmapSaveDataVersion3::BeatmapSaveDataItem::operator ::BeatmapSaveDataCommon::IBeat*() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
constexpr ::BeatmapSaveDataCommon::IBeat* BeatmapSaveDataVersion3::BeatmapSaveDataItem::i___BeatmapSaveDataCommon__IBeat() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr BeatmapSaveDataVersion3::BeatmapSaveDataItem::operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* BeatmapSaveDataVersion3::BeatmapSaveDataItem::i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::BeatmapSaveDataItem::BeatmapSaveDataItem() {}
