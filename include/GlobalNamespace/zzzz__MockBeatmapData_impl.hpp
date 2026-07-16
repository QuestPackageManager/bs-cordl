#pragma once
// IWYU pragma private; include "GlobalNamespace/MockBeatmapData.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_impl.hpp"
#include "GlobalNamespace/zzzz__MockObstacleData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
#include "GlobalNamespace/zzzz__MockObstacleData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.get_numberOfLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MockBeatmapData::*)()>(&::GlobalNamespace::MockBeatmapData::get_numberOfLines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a80284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_numberOfLines", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.set_numberOfLines
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapData::*)(int32_t)>(&::GlobalNamespace::MockBeatmapData::set_numberOfLines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8028c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_numberOfLines", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.get_songEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MockBeatmapData::*)()>(&::GlobalNamespace::MockBeatmapData::get_songEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a80294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_songEndTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.set_songEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapData::*)(float_t)>(&::GlobalNamespace::MockBeatmapData::set_songEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8029c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_songEndTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.get_leftNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MockNoteData*> (::GlobalNamespace::MockBeatmapData::*)()>(&::GlobalNamespace::MockBeatmapData::get_leftNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a802a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_leftNotes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.set_leftNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapData::*)(::ArrayW<::GlobalNamespace::MockNoteData*>)>(&::GlobalNamespace::MockBeatmapData::set_leftNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a802ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_leftNotes", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockNoteData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.get_rightNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MockNoteData*> (::GlobalNamespace::MockBeatmapData::*)()>(&::GlobalNamespace::MockBeatmapData::get_rightNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a802b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_rightNotes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.set_rightNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapData::*)(::ArrayW<::GlobalNamespace::MockNoteData*>)>(&::GlobalNamespace::MockBeatmapData::set_rightNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a802bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_rightNotes", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockNoteData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.get_bombNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MockNoteData*> (::GlobalNamespace::MockBeatmapData::*)()>(&::GlobalNamespace::MockBeatmapData::get_bombNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a802c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_bombNotes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.set_bombNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapData::*)(::ArrayW<::GlobalNamespace::MockNoteData*>)>(&::GlobalNamespace::MockBeatmapData::set_bombNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a802cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_bombNotes", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockNoteData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.get_obstacles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MockObstacleData*> (::GlobalNamespace::MockBeatmapData::*)()>(&::GlobalNamespace::MockBeatmapData::get_obstacles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a802d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_obstacles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData.set_obstacles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapData::*)(::ArrayW<::GlobalNamespace::MockObstacleData*>)>(
    &::GlobalNamespace::MockBeatmapData::set_obstacles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a802dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_obstacles", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockObstacleData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapData::*)()>(&::GlobalNamespace::MockBeatmapData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a802e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MockBeatmapData::__cordl_internal_get__numberOfLines_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfLines_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::MockBeatmapData::__cordl_internal_get__numberOfLines_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfLines_k__BackingField;
}
constexpr void GlobalNamespace::MockBeatmapData::__cordl_internal_set__numberOfLines_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfLines_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::MockBeatmapData::__cordl_internal_get__songEndTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songEndTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MockBeatmapData::__cordl_internal_get__songEndTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songEndTime_k__BackingField;
}
constexpr void GlobalNamespace::MockBeatmapData::__cordl_internal_set__songEndTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songEndTime_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*>& GlobalNamespace::MockBeatmapData::__cordl_internal_get__leftNotes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftNotes_k__BackingField;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*> const& GlobalNamespace::MockBeatmapData::__cordl_internal_get__leftNotes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftNotes_k__BackingField;
}
constexpr void GlobalNamespace::MockBeatmapData::__cordl_internal_set__leftNotes_k__BackingField(::ArrayW<::GlobalNamespace::MockNoteData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftNotes_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*>& GlobalNamespace::MockBeatmapData::__cordl_internal_get__rightNotes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightNotes_k__BackingField;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*> const& GlobalNamespace::MockBeatmapData::__cordl_internal_get__rightNotes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightNotes_k__BackingField;
}
constexpr void GlobalNamespace::MockBeatmapData::__cordl_internal_set__rightNotes_k__BackingField(::ArrayW<::GlobalNamespace::MockNoteData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightNotes_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*>& GlobalNamespace::MockBeatmapData::__cordl_internal_get__bombNotes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotes_k__BackingField;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*> const& GlobalNamespace::MockBeatmapData::__cordl_internal_get__bombNotes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotes_k__BackingField;
}
constexpr void GlobalNamespace::MockBeatmapData::__cordl_internal_set__bombNotes_k__BackingField(::ArrayW<::GlobalNamespace::MockNoteData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombNotes_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*>& GlobalNamespace::MockBeatmapData::__cordl_internal_get__obstacles_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles_k__BackingField;
}
constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*> const& GlobalNamespace::MockBeatmapData::__cordl_internal_get__obstacles_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles_k__BackingField;
}
constexpr void GlobalNamespace::MockBeatmapData::__cordl_internal_set__obstacles_k__BackingField(::ArrayW<::GlobalNamespace::MockObstacleData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacles_k__BackingField = value;
}
inline int32_t GlobalNamespace::MockBeatmapData::get_numberOfLines() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_numberOfLines", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MockBeatmapData::set_numberOfLines(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_numberOfLines", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MockBeatmapData::get_songEndTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_songEndTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MockBeatmapData::set_songEndTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_songEndTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::MockNoteData*> GlobalNamespace::MockBeatmapData::get_leftNotes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_leftNotes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MockNoteData*>>(this, ___internal_method);
}
inline void GlobalNamespace::MockBeatmapData::set_leftNotes(::ArrayW<::GlobalNamespace::MockNoteData*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_leftNotes", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockNoteData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::MockNoteData*> GlobalNamespace::MockBeatmapData::get_rightNotes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_rightNotes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MockNoteData*>>(this, ___internal_method);
}
inline void GlobalNamespace::MockBeatmapData::set_rightNotes(::ArrayW<::GlobalNamespace::MockNoteData*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_rightNotes", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockNoteData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::MockNoteData*> GlobalNamespace::MockBeatmapData::get_bombNotes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_bombNotes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MockNoteData*>>(this, ___internal_method);
}
inline void GlobalNamespace::MockBeatmapData::set_bombNotes(::ArrayW<::GlobalNamespace::MockNoteData*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_bombNotes", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockNoteData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::MockObstacleData*> GlobalNamespace::MockBeatmapData::get_obstacles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "get_obstacles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MockObstacleData*>>(this, ___internal_method);
}
inline void GlobalNamespace::MockBeatmapData::set_obstacles(::ArrayW<::GlobalNamespace::MockObstacleData*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { "set_obstacles", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockObstacleData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockBeatmapData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockBeatmapData* GlobalNamespace::MockBeatmapData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockBeatmapData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockBeatmapData::MockBeatmapData() {}
