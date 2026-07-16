#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorBoostBeatmapEventData.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorBoostBeatmapEventData.get_previousSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorBoostBeatmapEventData* (::GlobalNamespace::ColorBoostBeatmapEventData::*)()>(
    &::GlobalNamespace::ColorBoostBeatmapEventData::get_previousSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3259858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorBoostBeatmapEventData.get_nextSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorBoostBeatmapEventData* (::GlobalNamespace::ColorBoostBeatmapEventData::*)()>(
    &::GlobalNamespace::ColorBoostBeatmapEventData::get_nextSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x32598d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorBoostBeatmapEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorBoostBeatmapEventData::*)(float_t, bool)>(&::GlobalNamespace::ColorBoostBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3259950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorBoostBeatmapEventData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::ColorBoostBeatmapEventData::*)()>(
    &::GlobalNamespace::ColorBoostBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x325997c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), { ::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorBoostBeatmapEventData.GetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::ColorBoostBeatmapEventData::*)()>(
    &::GlobalNamespace::ColorBoostBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32599f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), { ::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), 7 }));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ColorBoostBeatmapEventData::__cordl_internal_get_boostColorsAreOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boostColorsAreOn;
}
constexpr bool const& GlobalNamespace::ColorBoostBeatmapEventData::__cordl_internal_get_boostColorsAreOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boostColorsAreOn;
}
constexpr void GlobalNamespace::ColorBoostBeatmapEventData::__cordl_internal_set_boostColorsAreOn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boostColorsAreOn = value;
}
inline void GlobalNamespace::ColorBoostBeatmapEventData::setStaticF__defaultCopy(::GlobalNamespace::ColorBoostBeatmapEventData* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::ColorBoostBeatmapEventData*, "_defaultCopy", ::GlobalNamespace::ColorBoostBeatmapEventData*>(
      std::forward<::GlobalNamespace::ColorBoostBeatmapEventData*>(value));
}
inline ::GlobalNamespace::ColorBoostBeatmapEventData* GlobalNamespace::ColorBoostBeatmapEventData::getStaticF__defaultCopy() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::ColorBoostBeatmapEventData*, "_defaultCopy", ::GlobalNamespace::ColorBoostBeatmapEventData*>();
}
inline ::GlobalNamespace::ColorBoostBeatmapEventData* GlobalNamespace::ColorBoostBeatmapEventData::get_previousSameTypeEventData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorBoostBeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorBoostBeatmapEventData* GlobalNamespace::ColorBoostBeatmapEventData::get_nextSameTypeEventData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorBoostBeatmapEventData*>(this, ___internal_method);
}
inline void GlobalNamespace::ColorBoostBeatmapEventData::_ctor(float_t time, bool boostColorsAreOn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, boostColorsAreOn);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::ColorBoostBeatmapEventData::GetCopy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::ColorBoostBeatmapEventData::GetDefault() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorBoostBeatmapEventData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorBoostBeatmapEventData* GlobalNamespace::ColorBoostBeatmapEventData::New_ctor(float_t time, bool boostColorsAreOn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorBoostBeatmapEventData*>(time, boostColorsAreOn));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorBoostBeatmapEventData::ColorBoostBeatmapEventData() {}
