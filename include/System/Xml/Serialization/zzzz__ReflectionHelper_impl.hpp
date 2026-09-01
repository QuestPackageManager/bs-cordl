#pragma once
// IWYU pragma private; include "System\Xml\Serialization\ReflectionHelper.hpp"
#include "System/Reflection/zzzz__ParameterModifier_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__ReflectionHelper_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapping_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::ReflectionHelper.RegisterSchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::ReflectionHelper::*)(::System::Xml::Serialization::XmlTypeMapping*, ::StringW, ::StringW)>(
    &::System::Xml::Serialization::ReflectionHelper::RegisterSchemaType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x62ebdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(),
                                         { "RegisterSchemaType", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ReflectionHelper.GetRegisteredSchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (::System::Xml::Serialization::ReflectionHelper::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::ReflectionHelper::GetRegisteredSchemaType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x62ebe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(),
                                                                                           { "GetRegisteredSchemaType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ReflectionHelper.RegisterClrType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::ReflectionHelper::*)(::System::Xml::Serialization::XmlTypeMapping*, ::System::Type*, ::StringW)>(
    &::System::Xml::Serialization::ReflectionHelper::RegisterClrType)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x62ebf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(),
                            { "RegisterClrType", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ReflectionHelper.GetRegisteredClrType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (::System::Xml::Serialization::ReflectionHelper::*)(::System::Type*, ::StringW)>(
    &::System::Xml::Serialization::ReflectionHelper::GetRegisteredClrType)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x62ec094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(),
                                                                                           { "GetRegisteredClrType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ReflectionHelper.CheckSerializableType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, bool)>(&::System::Xml::Serialization::ReflectionHelper::CheckSerializableType)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x62ec1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(),
                                                                                           { "CheckSerializableType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::ReflectionHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::ReflectionHelper::*)()>(&::System::Xml::Serialization::ReflectionHelper::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62ec510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::ReflectionHelper::__cordl_internal_get__clrTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clrTypes;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::ReflectionHelper::__cordl_internal_get__clrTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clrTypes;
}
constexpr void System::Xml::Serialization::ReflectionHelper::__cordl_internal_set__clrTypes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clrTypes = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::ReflectionHelper::__cordl_internal_get__schemaTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaTypes;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::ReflectionHelper::__cordl_internal_get__schemaTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____schemaTypes;
}
constexpr void System::Xml::Serialization::ReflectionHelper::__cordl_internal_set__schemaTypes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____schemaTypes = value;
}
inline void System::Xml::Serialization::ReflectionHelper::setStaticF_empty_modifiers(::ArrayW<::System::Reflection::ParameterModifier> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Reflection::ParameterModifier>, "empty_modifiers", ::System::Xml::Serialization::ReflectionHelper*>(
      std::forward<::ArrayW<::System::Reflection::ParameterModifier>>(value));
}
inline ::ArrayW<::System::Reflection::ParameterModifier> System::Xml::Serialization::ReflectionHelper::getStaticF_empty_modifiers() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Reflection::ParameterModifier>, "empty_modifiers", ::System::Xml::Serialization::ReflectionHelper*>();
}
inline void System::Xml::Serialization::ReflectionHelper::RegisterSchemaType(::System::Xml::Serialization::XmlTypeMapping* map, ::StringW xmlType, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(),
                                       { "RegisterSchemaType", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, xmlType, ns);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::ReflectionHelper::GetRegisteredSchemaType(::StringW xmlType, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(),
                                                                                         { "GetRegisteredSchemaType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, xmlType, ns);
}
inline void System::Xml::Serialization::ReflectionHelper::RegisterClrType(::System::Xml::Serialization::XmlTypeMapping* map, ::System::Type* type, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(),
                          { "RegisterClrType", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, type, ns);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::ReflectionHelper::GetRegisteredClrType(::System::Type* type, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(),
                                                                                         { "GetRegisteredClrType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, type, ns);
}
inline void System::Xml::Serialization::ReflectionHelper::CheckSerializableType(::System::Type* type, bool allowPrivateConstructors) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(),
                                                                                         { "CheckSerializableType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, allowPrivateConstructors);
}
inline void System::Xml::Serialization::ReflectionHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::ReflectionHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::ReflectionHelper* System::Xml::Serialization::ReflectionHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::ReflectionHelper*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::ReflectionHelper::ReflectionHelper() {}
