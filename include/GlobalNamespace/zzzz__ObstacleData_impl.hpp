#pragma once
// IWYU pragma private; include "GlobalNamespace\ObstacleData.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.get_endBeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ObstacleData::*)()>(&::GlobalNamespace::ObstacleData::get_endBeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_endBeat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.set_endBeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleData::*)(float_t)>(&::GlobalNamespace::ObstacleData::set_endBeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_endBeat", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.get_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ObstacleData::*)()>(&::GlobalNamespace::ObstacleData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_lineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.set_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleData::*)(int32_t)>(&::GlobalNamespace::ObstacleData::set_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_lineIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.get_lineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::ObstacleData::*)()>(&::GlobalNamespace::ObstacleData::get_lineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_lineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.set_lineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::ObstacleData::set_lineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_lineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ObstacleData::*)()>(&::GlobalNamespace::ObstacleData::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.set_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleData::*)(float_t)>(&::GlobalNamespace::ObstacleData::set_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_duration", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.get_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ObstacleData::*)()>(&::GlobalNamespace::ObstacleData::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.set_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleData::*)(int32_t)>(&::GlobalNamespace::ObstacleData::set_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_width", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.get_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ObstacleData::*)()>(&::GlobalNamespace::ObstacleData::get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.set_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleData::*)(int32_t)>(&::GlobalNamespace::ObstacleData::set_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_height", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleData::*)(float_t, float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, float_t, int32_t,
                                                                                                 int32_t)>(&::GlobalNamespace::ObstacleData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x325d738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.UpdateDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleData::*)(float_t)>(&::GlobalNamespace::ObstacleData::UpdateDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "UpdateDuration", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::ObstacleData::*)()>(&::GlobalNamespace::ObstacleData::GetCopy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x325d798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { ::i2c::class_of<::GlobalNamespace::ObstacleData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleData.Mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleData::*)(int32_t)>(&::GlobalNamespace::ObstacleData::Mirror)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x325d844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { ::i2c::class_of<::GlobalNamespace::ObstacleData*>(), 7 }));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ObstacleData::__cordl_internal_get__endBeat_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endBeat_k__BackingField;
}
constexpr float_t const& GlobalNamespace::ObstacleData::__cordl_internal_get__endBeat_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endBeat_k__BackingField;
}
constexpr void GlobalNamespace::ObstacleData::__cordl_internal_set__endBeat_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endBeat_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ObstacleData::__cordl_internal_get__lineIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ObstacleData::__cordl_internal_get__lineIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex_k__BackingField;
}
constexpr void GlobalNamespace::ObstacleData::__cordl_internal_set__lineIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::ObstacleData::__cordl_internal_get__lineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::ObstacleData::__cordl_internal_get__lineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineLayer_k__BackingField;
}
constexpr void GlobalNamespace::ObstacleData::__cordl_internal_set__lineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineLayer_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::ObstacleData::__cordl_internal_get__duration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration_k__BackingField;
}
constexpr float_t const& GlobalNamespace::ObstacleData::__cordl_internal_get__duration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration_k__BackingField;
}
constexpr void GlobalNamespace::ObstacleData::__cordl_internal_set__duration_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ObstacleData::__cordl_internal_get__width_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____width_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ObstacleData::__cordl_internal_get__width_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____width_k__BackingField;
}
constexpr void GlobalNamespace::ObstacleData::__cordl_internal_set__width_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____width_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::ObstacleData::__cordl_internal_get__height_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____height_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::ObstacleData::__cordl_internal_get__height_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____height_k__BackingField;
}
constexpr void GlobalNamespace::ObstacleData::__cordl_internal_set__height_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____height_k__BackingField = value;
}
inline float_t GlobalNamespace::ObstacleData::get_endBeat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_endBeat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleData::set_endBeat(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_endBeat", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ObstacleData::get_lineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_lineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleData::set_lineIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_lineIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::ObstacleData::get_lineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_lineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleData::set_lineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_lineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::ObstacleData::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleData::set_duration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_duration", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ObstacleData::get_width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleData::set_width(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_width", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::ObstacleData::get_height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "get_height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleData::set_height(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "set_height", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleData::_ctor(float_t time, float_t startBeat, float_t endBeat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer, float_t duration,
                                                 int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, startBeat, endBeat, rotation, lineIndex, lineLayer, duration, width, height);
}
inline void GlobalNamespace::ObstacleData::UpdateDuration(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleData*>(), { "UpdateDuration", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::ObstacleData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ObstacleData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleData::Mirror(int32_t lineCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ObstacleData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineCount);
}
inline ::GlobalNamespace::ObstacleData* GlobalNamespace::ObstacleData::New_ctor(float_t time, float_t startBeat, float_t endBeat, int32_t rotation, int32_t lineIndex,
                                                                                ::GlobalNamespace::NoteLineLayer lineLayer, float_t duration, int32_t width, int32_t height) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObstacleData*>(time, startBeat, endBeat, rotation, lineIndex, lineLayer, duration, width, height));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleData::ObstacleData() {}
