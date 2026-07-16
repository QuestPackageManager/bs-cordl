#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/Vector3Converter.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BGLib/JsonExtension/zzzz__Vector3Converter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BGLib::JsonExtension::Vector3Converter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::JsonExtension::Vector3Converter::*)(
    ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::UnityEngine::Vector3, bool, ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::Vector3Converter::ReadJson)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x33146c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector3Converter*>(), { ::i2c::class_of<::BGLib::JsonExtension::Vector3Converter*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::Vector3Converter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::JsonExtension::Vector3Converter::*)(::Newtonsoft::Json::JsonWriter*, ::UnityEngine::Vector3,
                                                                                                          ::Newtonsoft::Json::JsonSerializer*)>(&::BGLib::JsonExtension::Vector3Converter::WriteJson)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3314784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector3Converter*>(), { ::i2c::class_of<::BGLib::JsonExtension::Vector3Converter*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::JsonExtension::Vector3Converter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::JsonExtension::Vector3Converter::*)()>(&::BGLib::JsonExtension::Vector3Converter::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x33148d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector3Converter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 BGLib::JsonExtension::Vector3Converter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::UnityEngine::Vector3 existingValue,
                                                                               bool hasExistingValue, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::JsonExtension::Vector3Converter*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, reader, objectType, existingValue, hasExistingValue, serializer);
}
inline void BGLib::JsonExtension::Vector3Converter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::UnityEngine::Vector3 value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::JsonExtension::Vector3Converter*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline void BGLib::JsonExtension::Vector3Converter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::Vector3Converter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::JsonExtension::Vector3Converter* BGLib::JsonExtension::Vector3Converter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::JsonExtension::Vector3Converter*>());
}
// Ctor Parameters []
constexpr ::BGLib::JsonExtension::Vector3Converter::Vector3Converter() {}
