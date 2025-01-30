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
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::*)(
    ::System::Reflection::FieldInfo*, ::Zenject::InjectableInfo*)>(&::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4b59998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FieldInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectableInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::_ctor(::System::Reflection::FieldInfo* fieldInfo, ::Zenject::InjectableInfo* injectableInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fieldInfo, injectableInfo);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::New_ctor(::System::Reflection::FieldInfo* fieldInfo,
                                                                                                                                ::Zenject::InjectableInfo* injectableInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>(fieldInfo, injectableInfo));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo::ReflectionTypeInfo_InjectFieldInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::*)(
    ::System::Reflection::ParameterInfo*, ::Zenject::InjectableInfo*)>(&::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4b599c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ParameterInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectableInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::_ctor(::System::Reflection::ParameterInfo* parameterInfo, ::Zenject::InjectableInfo* injectableInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameterInfo, injectableInfo);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::New_ctor(::System::Reflection::ParameterInfo* parameterInfo,
                                                                                                                                        ::Zenject::InjectableInfo* injectableInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>(parameterInfo, injectableInfo));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo::ReflectionTypeInfo_InjectParameterInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::*)(
    ::System::Reflection::PropertyInfo*, ::Zenject::InjectableInfo*)>(&::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4b599f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PropertyInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectableInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::_ctor(::System::Reflection::PropertyInfo* propertyInfo, ::Zenject::InjectableInfo* injectableInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, propertyInfo, injectableInfo);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::New_ctor(::System::Reflection::PropertyInfo* propertyInfo,
                                                                                                                                      ::Zenject::InjectableInfo* injectableInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>(propertyInfo, injectableInfo));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo::ReflectionTypeInfo_InjectPropertyInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::*)(
    ::System::Reflection::MethodInfo*, ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*)>(
    &::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4b59a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MethodInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::_ctor(::System::Reflection::MethodInfo* methodInfo,
                                                                          ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, methodInfo, parameters);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*
Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::New_ctor(::System::Reflection::MethodInfo* methodInfo,
                                                                 ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>(methodInfo, parameters));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo::ReflectionTypeInfo_InjectMethodInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::*)(
    ::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*)>(
    &::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4b59a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConstructorInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::_ctor(::System::Reflection::ConstructorInfo* constructorInfo,
                                                                               ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constructorInfo, parameters);
}
inline ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*
Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::New_ctor(::System::Reflection::ConstructorInfo* constructorInfo,
                                                                      ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>(constructorInfo, parameters));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo::ReflectionTypeInfo_InjectConstructorInfo() {}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo::*)(
    ::System::Type*, ::System::Type*, ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*,
    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>*,
    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>*,
    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>*)>(&::Zenject::Internal::ReflectionTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4b59944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BaseType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectFields)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectConstructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::Internal::ReflectionTypeInfo::_ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* injectConstructor,
                                                         ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* injectMethods,
                                                         ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* injectFields,
                                                         ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* injectProperties) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, baseType, injectConstructor, injectMethods, injectFields, injectProperties);
}
inline ::Zenject::Internal::ReflectionTypeInfo*
Zenject::Internal::ReflectionTypeInfo::New_ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* injectConstructor,
                                                ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* injectMethods,
                                                ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* injectFields,
                                                ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* injectProperties) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::Internal::ReflectionTypeInfo*>(type, baseType, injectConstructor, injectMethods, injectFields, injectProperties));
}
// Ctor Parameters []
constexpr ::Zenject::Internal::ReflectionTypeInfo::ReflectionTypeInfo() {}
