#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier\BeatmapSaveDataItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__IBeat_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem.get_beat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::get_beat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x375fd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>(), { "get_beat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::get_time)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>(),
                                                                                          { ::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x375fc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::get_beat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>(), { "get_beat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::get_time() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>());
}
/// @brief Convert operator to "::BeatmapSaveDataCommon::IBeat"
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::operator ::BeatmapSaveDataCommon::IBeat*() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatmapSaveDataCommon::IBeat"
constexpr ::BeatmapSaveDataCommon::IBeat* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::i___BeatmapSaveDataCommon__IBeat() noexcept {
  return static_cast<::BeatmapSaveDataCommon::IBeat*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::operator ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>"
constexpr ::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::i___System__IComparable_1___BeatmapSaveDataCommon__IBeat__() noexcept {
  return static_cast<::System::IComparable_1<::BeatmapSaveDataCommon::IBeat*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem::BeatmapSaveDataItem() {}
