#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/NoteData.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__NoteType_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__NoteData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteLineLayer_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__NoteType_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), { ::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData.get_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), { "get_lineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData.get_lineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteLineLayer (::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::get_lineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), { "get_lineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType (::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), { "get_type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData.get_cutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatmapSaveDataCommon::NoteCutDirection (::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::get_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), { "get_cutDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::*)(
    float_t, int32_t, ::BeatmapSaveDataCommon::NoteLineLayer, ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType, ::BeatmapSaveDataCommon::NoteCutDirection)>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x375b4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteLineLayer>(),
                                                    ::i2c::type_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_get__time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_get__time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_set__time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time = value;
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_get__lineIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex;
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_get__lineIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_set__lineIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineIndex = value;
}
constexpr ::BeatmapSaveDataCommon::NoteLineLayer& BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_get__lineLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineLayer;
}
constexpr ::BeatmapSaveDataCommon::NoteLineLayer const& BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_get__lineLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineLayer;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_set__lineLayer(::BeatmapSaveDataCommon::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineLayer = value;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType& BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType const& BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection& BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_get__cutDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutDirection;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_get__cutDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutDirection;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::__cordl_internal_set__cutDirection(::BeatmapSaveDataCommon::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutDirection = value;
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::get_time() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::get_lineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), { "get_lineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::get_lineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), { "get_lineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteLineLayer>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::get_type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), { "get_type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::get_cutDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(), { "get_cutDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteCutDirection>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::_ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataCommon::NoteLineLayer lineLayer,
                                                                   ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType type, ::BeatmapSaveDataCommon::NoteCutDirection cutDirection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteLineLayer>(),
                                                               ::i2c::type_of<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType>(), ::i2c::type_of<::BeatmapSaveDataCommon::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, lineIndex, lineLayer, type, cutDirection);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData* BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::New_ctor(float_t time, int32_t lineIndex, ::BeatmapSaveDataCommon::NoteLineLayer lineLayer,
                                                                                                                    ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteType type,
                                                                                                                    ::BeatmapSaveDataCommon::NoteCutDirection cutDirection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData*>(time, lineIndex, lineLayer, type, cutDirection));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::NoteData::NoteData() {}
