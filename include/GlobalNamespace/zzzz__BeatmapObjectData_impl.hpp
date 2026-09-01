#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapObjectData.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectData.get_beat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectData::*)()>(&::GlobalNamespace::BeatmapObjectData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325c670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(), { "get_beat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectData.get_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapObjectData::*)()>(&::GlobalNamespace::BeatmapObjectData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325c678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(), { "get_rotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectData.set_rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectData::*)(int32_t)>(&::GlobalNamespace::BeatmapObjectData::set_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325c680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(), { "set_rotation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectData::*)(float_t, float_t, int32_t, int32_t)>(&::GlobalNamespace::BeatmapObjectData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x325c688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectData.Mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectData::*)(int32_t)>(&::GlobalNamespace::BeatmapObjectData::Mirror)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(), { ::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(), 7 }));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapObjectData::__cordl_internal_get__beat_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beat_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectData::__cordl_internal_get__beat_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beat_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapObjectData::__cordl_internal_set__beat_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beat_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::BeatmapObjectData::__cordl_internal_get__rotation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::BeatmapObjectData::__cordl_internal_get__rotation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapObjectData::__cordl_internal_set__rotation_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation_k__BackingField = value;
}
inline float_t GlobalNamespace::BeatmapObjectData::get_beat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(), { "get_beat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapObjectData::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(), { "get_rotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectData::set_rotation(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(), { "set_rotation", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectData::_ctor(float_t time, float_t beat, int32_t rotation, int32_t subtypeIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, beat, rotation, subtypeIdentifier);
}
inline void GlobalNamespace::BeatmapObjectData::Mirror(int32_t lineCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatmapObjectData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineCount);
}
inline ::GlobalNamespace::BeatmapObjectData* GlobalNamespace::BeatmapObjectData::New_ctor(float_t time, float_t beat, int32_t rotation, int32_t subtypeIdentifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectData*>(time, beat, rotation, subtypeIdentifier));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectData::BeatmapObjectData() {}
