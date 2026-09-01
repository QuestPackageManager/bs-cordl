#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteJumpSpeedEventData.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteJumpSpeedEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteJumpSpeedEventData.get_previousSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteJumpSpeedEventData* (::GlobalNamespace::NoteJumpSpeedEventData::*)()>(
    &::GlobalNamespace::NoteJumpSpeedEventData::get_previousSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x325b514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteJumpSpeedEventData.get_nextSameTypeEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteJumpSpeedEventData* (::GlobalNamespace::NoteJumpSpeedEventData::*)()>(
    &::GlobalNamespace::NoteJumpSpeedEventData::get_nextSameTypeEventData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x325b590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteJumpSpeedEventData.get_relativeNoteJumpSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteJumpSpeedEventData::*)()>(&::GlobalNamespace::NoteJumpSpeedEventData::get_relativeNoteJumpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325b60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { "get_relativeNoteJumpSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteJumpSpeedEventData.set_relativeNoteJumpSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteJumpSpeedEventData::*)(float_t)>(&::GlobalNamespace::NoteJumpSpeedEventData::set_relativeNoteJumpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325b614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { "set_relativeNoteJumpSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteJumpSpeedEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteJumpSpeedEventData::*)(float_t, float_t, ::GlobalNamespace::EaseType, bool)>(
    &::GlobalNamespace::NoteJumpSpeedEventData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x325b61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteJumpSpeedEventData.ChangeRelativeNoteJumpSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteJumpSpeedEventData::*)(float_t)>(&::GlobalNamespace::NoteJumpSpeedEventData::ChangeRelativeNoteJumpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325b660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { "ChangeRelativeNoteJumpSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteJumpSpeedEventData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::NoteJumpSpeedEventData::*)()>(&::GlobalNamespace::NoteJumpSpeedEventData::GetCopy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x325b668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { ::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteJumpSpeedEventData.GetDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapEventData* (::GlobalNamespace::NoteJumpSpeedEventData::*)()>(&::GlobalNamespace::NoteJumpSpeedEventData::GetDefault)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x325b6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { ::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), 7 }));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::NoteJumpSpeedEventData::__cordl_internal_get__relativeNoteJumpSpeed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeNoteJumpSpeed_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteJumpSpeedEventData::__cordl_internal_get__relativeNoteJumpSpeed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeNoteJumpSpeed_k__BackingField;
}
constexpr void GlobalNamespace::NoteJumpSpeedEventData::__cordl_internal_set__relativeNoteJumpSpeed_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relativeNoteJumpSpeed_k__BackingField = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::NoteJumpSpeedEventData::__cordl_internal_get_easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::NoteJumpSpeedEventData::__cordl_internal_get_easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easeType;
}
constexpr void GlobalNamespace::NoteJumpSpeedEventData::__cordl_internal_set_easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easeType = value;
}
constexpr bool& GlobalNamespace::NoteJumpSpeedEventData::__cordl_internal_get_usePreviousValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousValue;
}
constexpr bool const& GlobalNamespace::NoteJumpSpeedEventData::__cordl_internal_get_usePreviousValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePreviousValue;
}
constexpr void GlobalNamespace::NoteJumpSpeedEventData::__cordl_internal_set_usePreviousValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePreviousValue = value;
}
inline void GlobalNamespace::NoteJumpSpeedEventData::setStaticF__default(::GlobalNamespace::NoteJumpSpeedEventData* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::NoteJumpSpeedEventData*, "_default", ::GlobalNamespace::NoteJumpSpeedEventData*>(
      std::forward<::GlobalNamespace::NoteJumpSpeedEventData*>(value));
}
inline ::GlobalNamespace::NoteJumpSpeedEventData* GlobalNamespace::NoteJumpSpeedEventData::getStaticF__default() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::NoteJumpSpeedEventData*, "_default", ::GlobalNamespace::NoteJumpSpeedEventData*>();
}
inline ::GlobalNamespace::NoteJumpSpeedEventData* GlobalNamespace::NoteJumpSpeedEventData::get_previousSameTypeEventData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { "get_previousSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteJumpSpeedEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteJumpSpeedEventData* GlobalNamespace::NoteJumpSpeedEventData::get_nextSameTypeEventData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { "get_nextSameTypeEventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteJumpSpeedEventData*>(this, ___internal_method);
}
inline float_t GlobalNamespace::NoteJumpSpeedEventData::get_relativeNoteJumpSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { "get_relativeNoteJumpSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteJumpSpeedEventData::set_relativeNoteJumpSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { "set_relativeNoteJumpSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoteJumpSpeedEventData::_ctor(float_t time, float_t relativeNoteJumpSpeed, ::GlobalNamespace::EaseType easeType, bool usePreviousValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, relativeNoteJumpSpeed, easeType, usePreviousValue);
}
inline void GlobalNamespace::NoteJumpSpeedEventData::ChangeRelativeNoteJumpSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), { "ChangeRelativeNoteJumpSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::NoteJumpSpeedEventData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventData* GlobalNamespace::NoteJumpSpeedEventData::GetDefault() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteJumpSpeedEventData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapEventData*>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteJumpSpeedEventData* GlobalNamespace::NoteJumpSpeedEventData::New_ctor(float_t time, float_t relativeNoteJumpSpeed, ::GlobalNamespace::EaseType easeType,
                                                                                                    bool usePreviousValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteJumpSpeedEventData*>(time, relativeNoteJumpSpeed, easeType, usePreviousValue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteJumpSpeedEventData::NoteJumpSpeedEventData() {}
