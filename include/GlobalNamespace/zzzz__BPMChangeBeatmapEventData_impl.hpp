#pragma once
// IWYU pragma private; include "GlobalNamespace/BPMChangeBeatmapEventData.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__BPMChangeBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BPMChangeBeatmapEventData.get_previousSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BPMChangeBeatmapEventData* (::GlobalNamespace::BPMChangeBeatmapEventData::*)()>(
    &::GlobalNamespace::BPMChangeBeatmapEventData::get_previousSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x32596b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BPMChangeBeatmapEventData.get_nextSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BPMChangeBeatmapEventData* (::GlobalNamespace::BPMChangeBeatmapEventData::*)()>(
    &::GlobalNamespace::BPMChangeBeatmapEventData::get_nextSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3259730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BPMChangeBeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BPMChangeBeatmapEventData::*)(float_t, float_t)>(&::GlobalNamespace::BPMChangeBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x32597ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BPMChangeBeatmapEventData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BPMChangeBeatmapEventData::*)()>(
    &::GlobalNamespace::BPMChangeBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32597d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), { ::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BPMChangeBeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::BPMChangeBeatmapEventData::*)()>(
    &::GlobalNamespace::BPMChangeBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3259850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), { ::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), 7 }));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BPMChangeBeatmapEventData::__cordl_internal_get_bpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpm;
}
constexpr float_t const& GlobalNamespace::BPMChangeBeatmapEventData::__cordl_internal_get_bpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpm;
}
constexpr void GlobalNamespace::BPMChangeBeatmapEventData::__cordl_internal_set_bpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bpm = value;
}
inline ::GlobalNamespace::BPMChangeBeatmapEventData* GlobalNamespace::BPMChangeBeatmapEventData::get_previousSameTypeEventData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BPMChangeBeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::BPMChangeBeatmapEventData* GlobalNamespace::BPMChangeBeatmapEventData::get_nextSameTypeEventData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BPMChangeBeatmapEventData*>(this, ___internal_method);
}
inline void GlobalNamespace::BPMChangeBeatmapEventData::_ctor(float_t time, float_t bpm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, bpm);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BPMChangeBeatmapEventData::GetCopy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::BPMChangeBeatmapEventData::GetDefault() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BPMChangeBeatmapEventData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::BPMChangeBeatmapEventData* GlobalNamespace::BPMChangeBeatmapEventData::New_ctor(float_t time, float_t bpm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BPMChangeBeatmapEventData*>(time, bpm));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BPMChangeBeatmapEventData::BPMChangeBeatmapEventData() {}
