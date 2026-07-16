#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/UnixDateTimeConverter.hpp"
#include "Newtonsoft/Json/Converters/zzzz__DateTimeConverterBase_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__UnixDateTimeConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::UnixDateTimeConverter.get_AllowPreEpoch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Converters::UnixDateTimeConverter::*)()>(&::Newtonsoft::Json::Converters::UnixDateTimeConverter::get_AllowPreEpoch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9bfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), { "get_AllowPreEpoch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::UnixDateTimeConverter.set_AllowPreEpoch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::UnixDateTimeConverter::*)(bool)>(
    &::Newtonsoft::Json::Converters::UnixDateTimeConverter::set_AllowPreEpoch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9bfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), { "set_AllowPreEpoch", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::UnixDateTimeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::UnixDateTimeConverter::*)()>(&::Newtonsoft::Json::Converters::UnixDateTimeConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9bfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::UnixDateTimeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::UnixDateTimeConverter::*)(bool)>(&::Newtonsoft::Json::Converters::UnixDateTimeConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9bfe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::UnixDateTimeConverter.WriteJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::UnixDateTimeConverter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(&::Newtonsoft::Json::Converters::UnixDateTimeConverter::WriteJson)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5d9bfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::UnixDateTimeConverter.ReadJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::Newtonsoft::Json::Converters::UnixDateTimeConverter::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*)>(
        &::Newtonsoft::Json::Converters::UnixDateTimeConverter::ReadJson)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5d9c238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), 5 }));
    return ___internal_method;
  }
};
constexpr bool& Newtonsoft::Json::Converters::UnixDateTimeConverter::__cordl_internal_get__AllowPreEpoch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowPreEpoch_k__BackingField;
}
constexpr bool const& Newtonsoft::Json::Converters::UnixDateTimeConverter::__cordl_internal_get__AllowPreEpoch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowPreEpoch_k__BackingField;
}
constexpr void Newtonsoft::Json::Converters::UnixDateTimeConverter::__cordl_internal_set__AllowPreEpoch_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AllowPreEpoch_k__BackingField = value;
}
inline void Newtonsoft::Json::Converters::UnixDateTimeConverter::setStaticF_UnixEpoch(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "UnixEpoch", ::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime Newtonsoft::Json::Converters::UnixDateTimeConverter::getStaticF_UnixEpoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "UnixEpoch", ::Newtonsoft::Json::Converters::UnixDateTimeConverter*>();
}
inline bool Newtonsoft::Json::Converters::UnixDateTimeConverter::get_AllowPreEpoch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), { "get_AllowPreEpoch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::UnixDateTimeConverter::set_AllowPreEpoch(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), { "set_AllowPreEpoch", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Converters::UnixDateTimeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::UnixDateTimeConverter::_ctor(bool allowPreEpoch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowPreEpoch);
}
inline void Newtonsoft::Json::Converters::UnixDateTimeConverter::WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, serializer);
}
inline ::System::Object* Newtonsoft::Json::Converters::UnixDateTimeConverter::ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue,
                                                                                       ::Newtonsoft::Json::JsonSerializer* serializer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType, existingValue, serializer);
}
inline ::Newtonsoft::Json::Converters::UnixDateTimeConverter* Newtonsoft::Json::Converters::UnixDateTimeConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>());
}
inline ::Newtonsoft::Json::Converters::UnixDateTimeConverter* Newtonsoft::Json::Converters::UnixDateTimeConverter::New_ctor(bool allowPreEpoch) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::UnixDateTimeConverter*>(allowPreEpoch));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::UnixDateTimeConverter::UnixDateTimeConverter() {}
