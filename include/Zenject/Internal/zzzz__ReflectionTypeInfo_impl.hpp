#pragma once
// IWYU pragma private; include "Zenject/Internal/ReflectionTypeInfo.hpp"
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
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::*)(
    ::System::Reflection::FieldInfo*, ::Zenject::InjectableInfo*)>(&::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a37a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__cordl_internal_get_FieldInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FieldInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> const& Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__cordl_internal_get_FieldInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FieldInfo;
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__cordl_internal_set_FieldInfo(::System::Reflection::FieldInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FieldInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::InjectableInfo*& Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__cordl_internal_get_InjectableInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> const& Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__cordl_internal_get_InjectableInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectableInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo* Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::New_ctor(::System::Reflection::FieldInfo* fieldInfo,
                                                                                                                                      ::Zenject::InjectableInfo* injectableInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>(fieldInfo, injectableInfo));
}
inline void Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::_ctor(::System::Reflection::FieldInfo* fieldInfo, ::Zenject::InjectableInfo* injectableInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fieldInfo, injectableInfo);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__ReflectionTypeInfo__InjectFieldInfo() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::*)(
    ::System::Reflection::ParameterInfo*, ::Zenject::InjectableInfo*)>(&::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a37d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ParameterInfo*& Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__cordl_internal_get_ParameterInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParameterInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ParameterInfo*> const& Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__cordl_internal_get_ParameterInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ParameterInfo;
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__cordl_internal_set_ParameterInfo(::System::Reflection::ParameterInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ParameterInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::InjectableInfo*& Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__cordl_internal_get_InjectableInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> const& Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__cordl_internal_get_InjectableInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectableInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::New_ctor(::System::Reflection::ParameterInfo* parameterInfo,
                                                                                                                                              ::Zenject::InjectableInfo* injectableInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>(parameterInfo, injectableInfo));
}
inline void Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::_ctor(::System::Reflection::ParameterInfo* parameterInfo, ::Zenject::InjectableInfo* injectableInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameterInfo, injectableInfo);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__ReflectionTypeInfo__InjectParameterInfo() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::*)(
    ::System::Reflection::PropertyInfo*, ::Zenject::InjectableInfo*)>(&::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a37fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::PropertyInfo*& Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__cordl_internal_get_PropertyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> const& Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__cordl_internal_get_PropertyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PropertyInfo;
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__cordl_internal_set_PropertyInfo(::System::Reflection::PropertyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PropertyInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::InjectableInfo*& Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__cordl_internal_get_InjectableInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> const& Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__cordl_internal_get_InjectableInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectableInfo;
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectableInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo* Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::New_ctor(::System::Reflection::PropertyInfo* propertyInfo,
                                                                                                                                            ::Zenject::InjectableInfo* injectableInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>(propertyInfo, injectableInfo));
}
inline void Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::_ctor(::System::Reflection::PropertyInfo* propertyInfo, ::Zenject::InjectableInfo* injectableInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyInfo, injectableInfo);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__ReflectionTypeInfo__InjectPropertyInfo() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::*)(
    ::System::Reflection::MethodInfo*, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*)>(
    &::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a3828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__cordl_internal_get_MethodInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MethodInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__cordl_internal_get_MethodInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MethodInfo;
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__cordl_internal_set_MethodInfo(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MethodInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*&
Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*> const&
Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__cordl_internal_set_Parameters(
    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*
Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::New_ctor(::System::Reflection::MethodInfo* methodInfo,
                                                                    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* parameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>(methodInfo, parameters));
}
inline void Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::_ctor(::System::Reflection::MethodInfo* methodInfo,
                                                                             ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, methodInfo, parameters);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__ReflectionTypeInfo__InjectMethodInfo() {}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::*)(
    ::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*)>(
    &::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a3854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ConstructorInfo*& Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__cordl_internal_get_ConstructorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstructorInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const&
Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__cordl_internal_get_ConstructorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConstructorInfo;
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__cordl_internal_set_ConstructorInfo(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConstructorInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*&
Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*> const&
Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__cordl_internal_set_Parameters(
    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*
Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::New_ctor(::System::Reflection::ConstructorInfo* constructorInfo,
                                                                         ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* parameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>(constructorInfo, parameters));
}
inline void Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::_ctor(::System::Reflection::ConstructorInfo* constructorInfo,
                                                                                  ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructorInfo, parameters);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__ReflectionTypeInfo__InjectConstructorInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo::*)(
    ::System::Type*, ::System::Type*, ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*,
    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*,
    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*,
    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*)>(&::Zenject::Internal::ReflectionTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x36a3750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_BaseType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BaseType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_BaseType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BaseType;
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_BaseType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BaseType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectProperties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*> const&
Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectProperties;
}
constexpr void
Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_InjectProperties(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectFields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectFields;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*> const&
Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectFields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectFields;
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_InjectFields(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectFields)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectConstructor;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*> const&
Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectConstructor;
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_InjectConstructor(::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectConstructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*& Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMethods;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*> const&
Zenject::Internal::ReflectionTypeInfo::__cordl_internal_get_InjectMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMethods;
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__cordl_internal_set_InjectMethods(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::Internal::ReflectionTypeInfo*
Zenject::Internal::ReflectionTypeInfo::New_ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* injectConstructor,
                                                ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* injectMethods,
                                                ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* injectFields,
                                                ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* injectProperties) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeInfo*>(type, baseType, injectConstructor, injectMethods, injectFields, injectProperties));
}
inline void Zenject::Internal::ReflectionTypeInfo::_ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* injectConstructor,
                                                         ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* injectMethods,
                                                         ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* injectFields,
                                                         ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* injectProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, baseType, injectConstructor, injectMethods, injectFields, injectProperties);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo::ReflectionTypeInfo() {}
