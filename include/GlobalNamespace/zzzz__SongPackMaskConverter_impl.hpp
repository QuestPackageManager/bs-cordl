#pragma once
// IWYU pragma private; include "GlobalNamespace\SongPackMaskConverter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMaskConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskConverter.CanConvert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SongPackMaskConverter::*)(::System::Type*)>(&::GlobalNamespace::SongPackMaskConverter::CanConvert)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x378526c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), { ::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskConverter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::GlobalNamespace::SongPackMaskConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::GlobalNamespace::SongPackMaskConverter::ReadJson)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x37852dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), { ::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPackMaskConverter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
    &::GlobalNamespace::SongPackMaskConverter::WriteJson)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3785378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), { ::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPackMaskConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPackMaskConverter::*)()>(&::GlobalNamespace::SongPackMaskConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x378542c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SongPackMaskConverter::CanConvert(::System::Type* objectType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType);
}
inline ::System::Object* GlobalNamespace::SongPackMaskConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                          ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline void GlobalNamespace::SongPackMaskConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline void GlobalNamespace::SongPackMaskConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPackMaskConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPackMaskConverter* GlobalNamespace::SongPackMaskConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongPackMaskConverter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPackMaskConverter::SongPackMaskConverter() {}
