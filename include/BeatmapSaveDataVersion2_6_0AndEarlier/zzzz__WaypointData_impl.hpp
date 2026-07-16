#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/WaypointData.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__OffsetDirection_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__WaypointData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__OffsetDirection_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(),
                                                                                          { ::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData.get_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(), { "get_lineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData.get_lineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteLineLayer (::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::get_lineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(), { "get_lineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData.get_offsetDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::OffsetDirection (::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::get_offsetDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(), { "get_offsetDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::*)(
    float_t, int32_t, ::BeatmapSaveDataCommon::NoteLineLayer, ::BeatmapSaveDataCommon::OffsetDirection)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375b4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteLineLayer>(),
                                                                 ::i2c::type_of<::BeatmapSaveDataCommon::OffsetDirection>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_get__time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_get__time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_set__time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time = value;
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_get__lineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex;
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_get__lineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_set__lineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineIndex = value;
}
constexpr ::BeatmapSaveDataCommon::NoteLineLayer& BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_get__lineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineLayer;
}
constexpr ::BeatmapSaveDataCommon::NoteLineLayer const& BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_get__lineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineLayer;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_set__lineLayer(::BeatmapSaveDataCommon::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineLayer = value;
}
constexpr ::BeatmapSaveDataCommon::OffsetDirection& BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_get__offsetDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offsetDirection;
}
constexpr ::BeatmapSaveDataCommon::OffsetDirection const& BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_get__offsetDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offsetDirection;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::__cordl_internal_set__offsetDirection(::BeatmapSaveDataCommon::OffsetDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offsetDirection = value;
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::get_time() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::get_lineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(), { "get_lineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::get_lineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(), { "get_lineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteLineLayer>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::OffsetDirection BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::get_offsetDirection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(), { "get_offsetDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::OffsetDirection>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::_ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataCommon::NoteLineLayer lineLayer,
                                                                       ::BeatmapSaveDataCommon::OffsetDirection offsetDirection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteLineLayer>(),
                                                               ::i2c::type_of<::BeatmapSaveDataCommon::OffsetDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, lineIndex, lineLayer, offsetDirection);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData* BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::New_ctor(float_t time, int32_t lineIndex,
                                                                                                                            ::BeatmapSaveDataCommon::NoteLineLayer lineLayer,
                                                                                                                            ::BeatmapSaveDataCommon::OffsetDirection offsetDirection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData*>(time, lineIndex, lineLayer, offsetDirection));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::WaypointData::WaypointData() {}
