#pragma once
// IWYU pragma private; include "GlobalNamespace\WaypointData.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_impl.hpp"
#include "GlobalNamespace/zzzz__WaypointData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WaypointData.get_offsetDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OffsetDirection (::GlobalNamespace::WaypointData::*)()>(&::GlobalNamespace::WaypointData::get_offsetDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "get_offsetDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaypointData.set_offsetDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaypointData::*)(::GlobalNamespace::OffsetDirection)>(&::GlobalNamespace::WaypointData::set_offsetDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "set_offsetDirection", {}, { ::i2c::type_of<::GlobalNamespace::OffsetDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaypointData.get_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::WaypointData::*)()>(&::GlobalNamespace::WaypointData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "get_lineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaypointData.set_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaypointData::*)(int32_t)>(&::GlobalNamespace::WaypointData::set_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dfec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "set_lineIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaypointData.get_lineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::WaypointData::*)()>(&::GlobalNamespace::WaypointData::get_lineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "get_lineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaypointData.set_lineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaypointData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::WaypointData::set_lineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325dffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "set_lineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaypointData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::WaypointData::*)()>(&::GlobalNamespace::WaypointData::GetCopy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x325e004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { ::i2c::class_of<::GlobalNamespace::WaypointData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaypointData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaypointData::*)(float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer,
                                                                                                 ::GlobalNamespace::OffsetDirection)>(&::GlobalNamespace::WaypointData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x325e098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { ".ctor",
                                                                                   {},
                                                                                   { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                     ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::OffsetDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaypointData.Mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaypointData::*)(int32_t)>(&::GlobalNamespace::WaypointData::Mirror)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x325e0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { ::i2c::class_of<::GlobalNamespace::WaypointData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaypointData.MirrorTransformOffsetDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaypointData::*)()>(&::GlobalNamespace::WaypointData::MirrorTransformOffsetDirection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x325e0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "MirrorTransformOffsetDirection", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OffsetDirection& GlobalNamespace::WaypointData::__cordl_internal_get__offsetDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offsetDirection_k__BackingField;
}
constexpr ::GlobalNamespace::OffsetDirection const& GlobalNamespace::WaypointData::__cordl_internal_get__offsetDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offsetDirection_k__BackingField;
}
constexpr void GlobalNamespace::WaypointData::__cordl_internal_set__offsetDirection_k__BackingField(::GlobalNamespace::OffsetDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offsetDirection_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::WaypointData::__cordl_internal_get__lineIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::WaypointData::__cordl_internal_get__lineIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex_k__BackingField;
}
constexpr void GlobalNamespace::WaypointData::__cordl_internal_set__lineIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::WaypointData::__cordl_internal_get__lineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::WaypointData::__cordl_internal_get__lineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineLayer_k__BackingField;
}
constexpr void GlobalNamespace::WaypointData::__cordl_internal_set__lineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineLayer_k__BackingField = value;
}
inline ::GlobalNamespace::OffsetDirection GlobalNamespace::WaypointData::get_offsetDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "get_offsetDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OffsetDirection>(this, ___internal_method);
}
inline void GlobalNamespace::WaypointData::set_offsetDirection(::GlobalNamespace::OffsetDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "set_offsetDirection", {}, { ::i2c::type_of<::GlobalNamespace::OffsetDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::WaypointData::get_lineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "get_lineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::WaypointData::set_lineIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "set_lineIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::WaypointData::get_lineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "get_lineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(this, ___internal_method);
}
inline void GlobalNamespace::WaypointData::set_lineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "set_lineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::WaypointData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::WaypointData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline void GlobalNamespace::WaypointData::_ctor(float_t time, float_t beat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer,
                                                 ::GlobalNamespace::OffsetDirection offsetDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { ".ctor",
                                                                                 {},
                                                                                 { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::OffsetDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, beat, rotation, lineIndex, lineLayer, offsetDirection);
}
inline void GlobalNamespace::WaypointData::Mirror(int32_t lineCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::WaypointData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineCount);
}
inline void GlobalNamespace::WaypointData::MirrorTransformOffsetDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WaypointData*>(), { "MirrorTransformOffsetDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WaypointData* GlobalNamespace::WaypointData::New_ctor(float_t time, float_t beat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer lineLayer,
                                                                                ::GlobalNamespace::OffsetDirection offsetDirection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WaypointData*>(time, beat, rotation, lineIndex, lineLayer, offsetDirection));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaypointData::WaypointData() {}
