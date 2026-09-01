#pragma once
// IWYU pragma private; include "Zenject\Internal\ReflectionTypeInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::*)(::System::Reflection::FieldInfo*, ::Zenject::InjectableInfo*)>(
    &::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ea1a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::Zenject::InjectableInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::__cordl_internal_get_FieldInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FieldInfo;
}
constexpr ::System::Reflection::FieldInfo* const& Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::__cordl_internal_get_FieldInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FieldInfo;
}
constexpr void Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::__cordl_internal_set_FieldInfo(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FieldInfo = value;
}
constexpr ::Zenject::InjectableInfo*& Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::__cordl_internal_get_InjectableInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr ::Zenject::InjectableInfo* const& Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::__cordl_internal_get_InjectableInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr void Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::__cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InjectableInfo = value;
}
inline void Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::_ctor(::System::Reflection::FieldInfo* fieldInfo, ::Zenject::InjectableInfo* injectableInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::Zenject::InjectableInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldInfo, injectableInfo);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::New_ctor(::System::Reflection::FieldInfo* fieldInfo,
                                                                                                                                ::Zenject::InjectableInfo* injectableInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>(fieldInfo, injectableInfo));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::ReflectionTypeInfo_InjectFieldInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::*)(::System::Reflection::ParameterInfo*, ::Zenject::InjectableInfo*)>(
    &::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ea1aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::Zenject::InjectableInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ParameterInfo*& Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::__cordl_internal_get_ParameterInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParameterInfo;
}
constexpr ::System::Reflection::ParameterInfo* const& Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::__cordl_internal_get_ParameterInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParameterInfo;
}
constexpr void Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::__cordl_internal_set_ParameterInfo(::System::Reflection::ParameterInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ParameterInfo = value;
}
constexpr ::Zenject::InjectableInfo*& Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::__cordl_internal_get_InjectableInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr ::Zenject::InjectableInfo* const& Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::__cordl_internal_get_InjectableInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr void Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::__cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InjectableInfo = value;
}
inline void Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::_ctor(::System::Reflection::ParameterInfo* parameterInfo, ::Zenject::InjectableInfo* injectableInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::ParameterInfo*>(), ::i2c::type_of<::Zenject::InjectableInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameterInfo, injectableInfo);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::New_ctor(::System::Reflection::ParameterInfo* parameterInfo,
                                                                                                                                        ::Zenject::InjectableInfo* injectableInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>(parameterInfo, injectableInfo));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::ReflectionTypeInfo_InjectParameterInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::*)(::System::Reflection::PropertyInfo*, ::Zenject::InjectableInfo*)>(
    &::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ea1aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::Zenject::InjectableInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::PropertyInfo*& Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::__cordl_internal_get_PropertyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyInfo;
}
constexpr ::System::Reflection::PropertyInfo* const& Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::__cordl_internal_get_PropertyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyInfo;
}
constexpr void Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::__cordl_internal_set_PropertyInfo(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PropertyInfo = value;
}
constexpr ::Zenject::InjectableInfo*& Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::__cordl_internal_get_InjectableInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr ::Zenject::InjectableInfo* const& Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::__cordl_internal_get_InjectableInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr void Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::__cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InjectableInfo = value;
}
inline void Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::_ctor(::System::Reflection::PropertyInfo* propertyInfo, ::Zenject::InjectableInfo* injectableInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::Zenject::InjectableInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyInfo, injectableInfo);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::New_ctor(::System::Reflection::PropertyInfo* propertyInfo,
                                                                                                                                      ::Zenject::InjectableInfo* injectableInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>(propertyInfo, injectableInfo));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::ReflectionTypeInfo_InjectPropertyInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::*)(
    ::System::Reflection::MethodInfo*, ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*)>(
    &::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ea1ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::MethodInfo*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::__cordl_internal_get_MethodInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MethodInfo;
}
constexpr ::System::Reflection::MethodInfo* const& Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::__cordl_internal_get_MethodInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MethodInfo;
}
constexpr void Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::__cordl_internal_set_MethodInfo(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MethodInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*&
Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* const&
Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr void
Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::__cordl_internal_set_Parameters(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Parameters = value;
}
inline void Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::_ctor(::System::Reflection::MethodInfo* methodInfo,
                                                                          ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::MethodInfo*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodInfo, parameters);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*
Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::New_ctor(::System::Reflection::MethodInfo* methodInfo,
                                                                 ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>(methodInfo, parameters));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::ReflectionTypeInfo_InjectMethodInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::*)(
    ::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*)>(
    &::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ea1ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ConstructorInfo*& Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::__cordl_internal_get_ConstructorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstructorInfo;
}
constexpr ::System::Reflection::ConstructorInfo* const& Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::__cordl_internal_get_ConstructorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstructorInfo;
}
constexpr void Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::__cordl_internal_set_ConstructorInfo(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ConstructorInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*&
Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* const&
Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr void Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::__cordl_internal_set_Parameters(
    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Parameters = value;
}
inline void Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::_ctor(::System::Reflection::ConstructorInfo* constructorInfo,
                                                                               ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constructorInfo, parameters);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*
Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::New_ctor(::System::Reflection::ConstructorInfo* constructorInfo,
                                                                      ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>(constructorInfo, parameters));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::ReflectionTypeInfo_InjectConstructorInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo::*)(
    ::System::Type*, ::System::Type*, ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*,
    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>*,
    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>*,
    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>*)>(&::Zenject::Internal::ReflectionTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ea1a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>*>(),
                                             ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Type = value;
}
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_BaseType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BaseType;
}
constexpr ::System::Type* const& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_BaseType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BaseType;
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_BaseType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BaseType = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectProperties;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* const&
Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectProperties;
}
constexpr void
Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_InjectProperties(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InjectProperties = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectFields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectFields;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* const& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectFields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectFields;
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_InjectFields(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InjectFields = value;
}
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectConstructor;
}
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* const& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectConstructor;
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_InjectConstructor(::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InjectConstructor = value;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMethods;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* const& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMethods;
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_InjectMethods(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InjectMethods = value;
}
inline void Zenject::Internal::ReflectionTypeInfo::_ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* injectConstructor,
                                                         ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* injectMethods,
                                                         ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* injectFields,
                                                         ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* injectProperties) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::Internal::ReflectionTypeInfo*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>*>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>*>(),
                                           ::i2c::type_of<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, baseType, injectConstructor, injectMethods, injectFields, injectProperties);
}
inline ::Zenject::Internal::ReflectionTypeInfo*
Zenject::Internal::ReflectionTypeInfo::New_ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* injectConstructor,
                                                ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* injectMethods,
                                                ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* injectFields,
                                                ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* injectProperties) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::ReflectionTypeInfo*>(type, baseType, injectConstructor, injectMethods, injectFields, injectProperties));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo::ReflectionTypeInfo() {}
