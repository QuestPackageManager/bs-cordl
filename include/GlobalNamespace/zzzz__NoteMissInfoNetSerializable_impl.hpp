#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteMissInfoNetSerializable.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.get_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorType (::GlobalNamespace::NoteMissInfoNetSerializable::*)()>(
    &::GlobalNamespace::NoteMissInfoNetSerializable::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377afc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "get_colorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.set_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteMissInfoNetSerializable::*)(::GlobalNamespace::ColorType)>(
    &::GlobalNamespace::NoteMissInfoNetSerializable::set_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377afcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "set_colorType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.get_noteTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteMissInfoNetSerializable::*)()>(&::GlobalNamespace::NoteMissInfoNetSerializable::get_noteTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377afd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "get_noteTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.set_noteTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteMissInfoNetSerializable::*)(float_t)>(&::GlobalNamespace::NoteMissInfoNetSerializable::set_noteTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377afdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "set_noteTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.get_noteLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NoteMissInfoNetSerializable::*)()>(&::GlobalNamespace::NoteMissInfoNetSerializable::get_noteLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377afe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "get_noteLineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.set_noteLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteMissInfoNetSerializable::*)(int32_t)>(&::GlobalNamespace::NoteMissInfoNetSerializable::set_noteLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377afec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "set_noteLineIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.get_noteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::NoteMissInfoNetSerializable::*)()>(
    &::GlobalNamespace::NoteMissInfoNetSerializable::get_noteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377aff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "get_noteLineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.set_noteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteMissInfoNetSerializable::*)(::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::NoteMissInfoNetSerializable::set_noteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x377affc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "set_noteLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.Obtain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteMissInfoNetSerializable* (*)()>(&::GlobalNamespace::NoteMissInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x377b004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "Obtain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteMissInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::NoteMissInfoNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x377b070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { ::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteMissInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::NoteMissInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x377b104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { ::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteMissInfoNetSerializable::*)()>(&::GlobalNamespace::NoteMissInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x377b198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteMissInfoNetSerializable* (::GlobalNamespace::NoteMissInfoNetSerializable::*)(::GlobalNamespace::NoteData*)>(
    &::GlobalNamespace::NoteMissInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x377b1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteMissInfoNetSerializable.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteMissInfoNetSerializable* (
    ::GlobalNamespace::NoteMissInfoNetSerializable::*)(::GlobalNamespace::ColorType, ::GlobalNamespace::NoteLineLayer, int32_t, float_t)>(&::GlobalNamespace::NoteMissInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x377b218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(),
            { "Init", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_get__colorType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType_k__BackingField;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_get__colorType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType_k__BackingField;
}
constexpr void GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_set__colorType_k__BackingField(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorType_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_get__noteTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_get__noteTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTime_k__BackingField;
}
constexpr void GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_set__noteTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteTime_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_get__noteLineIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_get__noteLineIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineIndex_k__BackingField;
}
constexpr void GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_set__noteLineIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteLineIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_get__noteLineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_get__noteLineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineLayer_k__BackingField;
}
constexpr void GlobalNamespace::NoteMissInfoNetSerializable::__cordl_internal_set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteLineLayer_k__BackingField = value;
}
inline ::GlobalNamespace::ColorType GlobalNamespace::NoteMissInfoNetSerializable::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "get_colorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType>(this, ___internal_method);
}
inline void GlobalNamespace::NoteMissInfoNetSerializable::set_colorType(::GlobalNamespace::ColorType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "set_colorType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteMissInfoNetSerializable::get_noteTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "get_noteTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteMissInfoNetSerializable::set_noteTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "set_noteTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::NoteMissInfoNetSerializable::get_noteLineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "get_noteLineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteMissInfoNetSerializable::set_noteLineIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "set_noteLineIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::NoteMissInfoNetSerializable::get_noteLineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "get_noteLineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(this, ___internal_method);
}
inline void GlobalNamespace::NoteMissInfoNetSerializable::set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "set_noteLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteMissInfoNetSerializable* GlobalNamespace::NoteMissInfoNetSerializable::Obtain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "Obtain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteMissInfoNetSerializable*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::NoteMissInfoNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::NoteMissInfoNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::NoteMissInfoNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteMissInfoNetSerializable* GlobalNamespace::NoteMissInfoNetSerializable::Init(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteMissInfoNetSerializable*>(this, ___internal_method, noteData);
}
inline ::GlobalNamespace::NoteMissInfoNetSerializable* GlobalNamespace::NoteMissInfoNetSerializable::Init(::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteLineLayer lineLayer,
                                                                                                          int32_t noteLineIndex, float_t noteTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::NoteMissInfoNetSerializable*>(),
                       { "Init", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteMissInfoNetSerializable*>(this, ___internal_method, colorType, lineLayer, noteLineIndex, noteTime);
}
inline ::GlobalNamespace::NoteMissInfoNetSerializable* GlobalNamespace::NoteMissInfoNetSerializable::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoteMissInfoNetSerializable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteMissInfoNetSerializable::NoteMissInfoNetSerializable() {}
