#pragma once
// IWYU pragma private; include "Newtonsoft\Json\JsonConverterAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverterAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute.get_ConverterType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::JsonConverterAttribute::*)()>(&::Newtonsoft::Json::JsonConverterAttribute::get_ConverterType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd6df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverterAttribute*>(), { "get_ConverterType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute.get_ConverterParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::Newtonsoft::Json::JsonConverterAttribute::*)()>(
    &::Newtonsoft::Json::JsonConverterAttribute::get_ConverterParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd6e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverterAttribute*>(), { "get_ConverterParameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonConverterAttribute::*)(::System::Type*)>(&::Newtonsoft::Json::JsonConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cd6e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverterAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonConverterAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonConverterAttribute::*)(::System::Type*, ::ArrayW<::System::Object*>)>(
    &::Newtonsoft::Json::JsonConverterAttribute::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cd6e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverterAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_get__converterType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converterType;
}
constexpr ::System::Type* const& Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_get__converterType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converterType;
}
constexpr void Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_set__converterType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____converterType = value;
}
constexpr ::ArrayW<::System::Object*>& Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_get__ConverterParameters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConverterParameters_k__BackingField;
}
constexpr ::ArrayW<::System::Object*> const& Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_get__ConverterParameters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConverterParameters_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonConverterAttribute::__cordl_internal_set__ConverterParameters_k__BackingField(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConverterParameters_k__BackingField = value;
}
inline ::System::Type* Newtonsoft::Json::JsonConverterAttribute::get_ConverterType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverterAttribute*>(), { "get_ConverterType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> Newtonsoft::Json::JsonConverterAttribute::get_ConverterParameters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverterAttribute*>(), { "get_ConverterParameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonConverterAttribute::_ctor(::System::Type* converterType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverterAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, converterType);
}
inline void Newtonsoft::Json::JsonConverterAttribute::_ctor(::System::Type* converterType, ::ArrayW<::System::Object*> converterParameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonConverterAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, converterType, converterParameters);
}
inline ::Newtonsoft::Json::JsonConverterAttribute* Newtonsoft::Json::JsonConverterAttribute::New_ctor(::System::Type* converterType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonConverterAttribute*>(converterType));
}
inline ::Newtonsoft::Json::JsonConverterAttribute* Newtonsoft::Json::JsonConverterAttribute::New_ctor(::System::Type* converterType, ::ArrayW<::System::Object*> converterParameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonConverterAttribute*>(converterType, converterParameters));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonConverterAttribute::JsonConverterAttribute() {}
