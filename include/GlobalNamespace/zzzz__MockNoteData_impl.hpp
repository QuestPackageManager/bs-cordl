#pragma once
// IWYU pragma private; include "GlobalNamespace\MockNoteData.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MockNoteData::*)()>(&::GlobalNamespace::MockNoteData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNoteData::*)(float_t)>(&::GlobalNamespace::MockNoteData::set_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.get_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MockNoteData::*)()>(&::GlobalNamespace::MockNoteData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_lineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.set_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNoteData::*)(int32_t)>(&::GlobalNamespace::MockNoteData::set_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_lineIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.get_gameplayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData_GameplayType (::GlobalNamespace::MockNoteData::*)()>(&::GlobalNamespace::MockNoteData::get_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_gameplayType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.set_gameplayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNoteData::*)(::GlobalNamespace::NoteData_GameplayType)>(&::GlobalNamespace::MockNoteData::set_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_gameplayType", {}, { ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.get_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorType (::GlobalNamespace::MockNoteData::*)()>(&::GlobalNamespace::MockNoteData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_colorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.set_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNoteData::*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::MockNoteData::set_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_colorType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.get_cutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteCutDirection (::GlobalNamespace::MockNoteData::*)()>(&::GlobalNamespace::MockNoteData::get_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_cutDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.set_cutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNoteData::*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::MockNoteData::set_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_cutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.get_noteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::MockNoteData::*)()>(&::GlobalNamespace::MockNoteData::get_noteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_noteLineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.set_noteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNoteData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::MockNoteData::set_noteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_noteLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MockNoteData::*)()>(&::GlobalNamespace::MockNoteData::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.set_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNoteData::*)(float_t)>(&::GlobalNamespace::MockNoteData::set_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_duration", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData.Mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNoteData::*)(int32_t)>(&::GlobalNamespace::MockNoteData::Mirror)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a82a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { ::i2c::class_of<::GlobalNamespace::MockNoteData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockNoteData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockNoteData::*)()>(&::GlobalNamespace::MockNoteData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MockNoteData::__cordl_internal_get__time_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MockNoteData::__cordl_internal_get__time_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____time_k__BackingField;
}
constexpr void GlobalNamespace::MockNoteData::__cordl_internal_set__time_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____time_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::MockNoteData::__cordl_internal_get__lineIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::MockNoteData::__cordl_internal_get__lineIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex_k__BackingField;
}
constexpr void GlobalNamespace::MockNoteData::__cordl_internal_set__lineIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteData_GameplayType& GlobalNamespace::MockNoteData::__cordl_internal_get__gameplayType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayType_k__BackingField;
}
constexpr ::GlobalNamespace::NoteData_GameplayType const& GlobalNamespace::MockNoteData::__cordl_internal_get__gameplayType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayType_k__BackingField;
}
constexpr void GlobalNamespace::MockNoteData::__cordl_internal_set__gameplayType_k__BackingField(::GlobalNamespace::NoteData_GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayType_k__BackingField = value;
}
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::MockNoteData::__cordl_internal_get__colorType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType_k__BackingField;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::MockNoteData::__cordl_internal_get__colorType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType_k__BackingField;
}
constexpr void GlobalNamespace::MockNoteData::__cordl_internal_set__colorType_k__BackingField(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorType_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::MockNoteData::__cordl_internal_get__cutDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutDirection_k__BackingField;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::MockNoteData::__cordl_internal_get__cutDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutDirection_k__BackingField;
}
constexpr void GlobalNamespace::MockNoteData::__cordl_internal_set__cutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutDirection_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::MockNoteData::__cordl_internal_get__noteLineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::MockNoteData::__cordl_internal_get__noteLineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineLayer_k__BackingField;
}
constexpr void GlobalNamespace::MockNoteData::__cordl_internal_set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteLineLayer_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::MockNoteData::__cordl_internal_get__duration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MockNoteData::__cordl_internal_get__duration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration_k__BackingField;
}
constexpr void GlobalNamespace::MockNoteData::__cordl_internal_set__duration_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration_k__BackingField = value;
}
inline float_t GlobalNamespace::MockNoteData::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MockNoteData::set_time(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_time", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::MockNoteData::get_lineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_lineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::MockNoteData::set_lineIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_lineIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::MockNoteData::get_gameplayType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_gameplayType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData_GameplayType>(this, ___internal_method);
}
inline void GlobalNamespace::MockNoteData::set_gameplayType(::GlobalNamespace::NoteData_GameplayType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_gameplayType", {}, { ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColorType GlobalNamespace::MockNoteData::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_colorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType>(this, ___internal_method);
}
inline void GlobalNamespace::MockNoteData::set_colorType(::GlobalNamespace::ColorType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_colorType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::MockNoteData::get_cutDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_cutDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection>(this, ___internal_method);
}
inline void GlobalNamespace::MockNoteData::set_cutDirection(::GlobalNamespace::NoteCutDirection value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_cutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::MockNoteData::get_noteLineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_noteLineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(this, ___internal_method);
}
inline void GlobalNamespace::MockNoteData::set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_noteLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::MockNoteData::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MockNoteData::set_duration(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { "set_duration", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockNoteData::Mirror(int32_t lineCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockNoteData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineCount);
}
inline void GlobalNamespace::MockNoteData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockNoteData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockNoteData* GlobalNamespace::MockNoteData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockNoteData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockNoteData::MockNoteData() {}
