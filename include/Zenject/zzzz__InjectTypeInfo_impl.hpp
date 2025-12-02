#pragma once
// IWYU pragma private; include "Zenject/InjectTypeInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "Zenject/zzzz__ZenFactoryMethod_def.hpp"
#include "Zenject/zzzz__ZenInjectMethod_def.hpp"
#include "Zenject/zzzz__ZenMemberSetterMethod_def.hpp"
//  Writing Method size for method: ::Zenject::InjectTypeInfo_InjectMemberInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectTypeInfo_InjectMemberInfo::*)(::Zenject::ZenMemberSetterMethod*, ::Zenject::InjectableInfo*)>(
    &::Zenject::InjectTypeInfo_InjectMemberInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c092b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo_InjectMemberInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenMemberSetterMethod*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ZenMemberSetterMethod*& Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_get_Setter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Setter;
}
constexpr ::Zenject::ZenMemberSetterMethod* const& Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_get_Setter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Setter;
}
constexpr void Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_set_Setter(::Zenject::ZenMemberSetterMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Setter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::InjectableInfo*& Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_get_Info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Info;
}
constexpr ::Zenject::InjectableInfo* const& Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_get_Info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Info;
}
constexpr void Zenject::InjectTypeInfo_InjectMemberInfo::__cordl_internal_set_Info(::Zenject::InjectableInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::InjectTypeInfo_InjectMemberInfo::_ctor(::Zenject::ZenMemberSetterMethod* setter, ::Zenject::InjectableInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo_InjectMemberInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenMemberSetterMethod*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, setter, info);
}
inline ::Zenject::InjectTypeInfo_InjectMemberInfo* Zenject::InjectTypeInfo_InjectMemberInfo::New_ctor(::Zenject::ZenMemberSetterMethod* setter, ::Zenject::InjectableInfo* info) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::InjectTypeInfo_InjectMemberInfo*>(setter, info));
}
// Ctor Parameters []
constexpr ::Zenject::InjectTypeInfo_InjectMemberInfo::InjectTypeInfo_InjectMemberInfo() {}
//  Writing Method size for method: ::Zenject::InjectTypeInfo_InjectConstructorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectTypeInfo_InjectConstructorInfo::*)(
    ::Zenject::ZenFactoryMethod*, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>)>(&::Zenject::InjectTypeInfo_InjectConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c092b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo_InjectConstructorInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenFactoryMethod*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Zenject::ZenFactoryMethod*& Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_get_Factory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Factory;
}
constexpr ::Zenject::ZenFactoryMethod* const& Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_get_Factory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Factory;
}
constexpr void Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_set_Factory(::Zenject::ZenFactoryMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Factory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>& Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> const& Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr void Zenject::InjectTypeInfo_InjectConstructorInfo::__cordl_internal_set_Parameters(::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::InjectTypeInfo_InjectConstructorInfo::_ctor(::Zenject::ZenFactoryMethod* factory, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo_InjectConstructorInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenFactoryMethod*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, factory, parameters);
}
inline ::Zenject::InjectTypeInfo_InjectConstructorInfo* Zenject::InjectTypeInfo_InjectConstructorInfo::New_ctor(::Zenject::ZenFactoryMethod* factory,
                                                                                                                ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::InjectTypeInfo_InjectConstructorInfo*>(factory, parameters));
}
// Ctor Parameters []
constexpr ::Zenject::InjectTypeInfo_InjectConstructorInfo::InjectTypeInfo_InjectConstructorInfo() {}
//  Writing Method size for method: ::Zenject::InjectTypeInfo_InjectMethodInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectTypeInfo_InjectMethodInfo::*)(
    ::Zenject::ZenInjectMethod*, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>, ::StringW)>(&::Zenject::InjectTypeInfo_InjectMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c092c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo_InjectMethodInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenInjectMethod*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::ZenInjectMethod*& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Action;
}
constexpr ::Zenject::ZenInjectMethod* const& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Action;
}
constexpr void Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_set_Action(::Zenject::ZenInjectMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> const& Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_get_Parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parameters;
}
constexpr void Zenject::InjectTypeInfo_InjectMethodInfo::__cordl_internal_set_Parameters(::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::InjectTypeInfo_InjectMethodInfo::_ctor(::Zenject::ZenInjectMethod* action, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo_InjectMethodInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ZenInjectMethod*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action, parameters, name);
}
inline ::Zenject::InjectTypeInfo_InjectMethodInfo*
Zenject::InjectTypeInfo_InjectMethodInfo::New_ctor(::Zenject::ZenInjectMethod* action, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters, ::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::InjectTypeInfo_InjectMethodInfo*>(action, parameters, name));
}
// Ctor Parameters []
constexpr ::Zenject::InjectTypeInfo_InjectMethodInfo::InjectTypeInfo_InjectMethodInfo() {}
//  Writing Method size for method: ::Zenject::InjectTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectTypeInfo::*)(
    ::System::Type*, ::Zenject::InjectTypeInfo_InjectConstructorInfo*, ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*>,
    ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*>)>(&::Zenject::InjectTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c090a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo_InjectConstructorInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectTypeInfo.get_BaseTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (::Zenject::InjectTypeInfo::*)()>(&::Zenject::InjectTypeInfo::get_BaseTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c090b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), "get_BaseTypeInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectTypeInfo.set_BaseTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectTypeInfo::*)(::Zenject::InjectTypeInfo*)>(&::Zenject::InjectTypeInfo::set_BaseTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c090bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), "set_BaseTypeInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectTypeInfo.get_AllInjectables
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* (::Zenject::InjectTypeInfo::*)()>(
    &::Zenject::InjectTypeInfo::get_AllInjectables)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6c090c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), "get_AllInjectables",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectTypeInfo._get_AllInjectables_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectableInfo* (*)(::Zenject::InjectTypeInfo_InjectMemberInfo*)>(
    &::Zenject::InjectTypeInfo::_get_AllInjectables_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c09288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), "<get_AllInjectables>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo_InjectMemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::InjectTypeInfo._get_AllInjectables_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* (*)(::Zenject::InjectTypeInfo_InjectMethodInfo*)>(&::Zenject::InjectTypeInfo::_get_AllInjectables_b__1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c0929c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), "<get_AllInjectables>b__1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo_InjectMethodInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Zenject::InjectTypeInfo::__cordl_internal_get_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr ::System::Type* const& Zenject::InjectTypeInfo::__cordl_internal_get_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Type;
}
constexpr void Zenject::InjectTypeInfo::__cordl_internal_set_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*>& Zenject::InjectTypeInfo::__cordl_internal_get_InjectMethods() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMethods;
}
constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*> const& Zenject::InjectTypeInfo::__cordl_internal_get_InjectMethods() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMethods;
}
constexpr void Zenject::InjectTypeInfo::__cordl_internal_set_InjectMethods(::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectMethods)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*>& Zenject::InjectTypeInfo::__cordl_internal_get_InjectMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMembers;
}
constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*> const& Zenject::InjectTypeInfo::__cordl_internal_get_InjectMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectMembers;
}
constexpr void Zenject::InjectTypeInfo::__cordl_internal_set_InjectMembers(::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::InjectTypeInfo_InjectConstructorInfo*& Zenject::InjectTypeInfo::__cordl_internal_get_InjectConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectConstructor;
}
constexpr ::Zenject::InjectTypeInfo_InjectConstructorInfo* const& Zenject::InjectTypeInfo::__cordl_internal_get_InjectConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InjectConstructor;
}
constexpr void Zenject::InjectTypeInfo::__cordl_internal_set_InjectConstructor(::Zenject::InjectTypeInfo_InjectConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InjectConstructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::InjectTypeInfo*& Zenject::InjectTypeInfo::__cordl_internal_get__BaseTypeInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseTypeInfo_k__BackingField;
}
constexpr ::Zenject::InjectTypeInfo* const& Zenject::InjectTypeInfo::__cordl_internal_get__BaseTypeInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseTypeInfo_k__BackingField;
}
constexpr void Zenject::InjectTypeInfo::__cordl_internal_set__BaseTypeInfo_k__BackingField(::Zenject::InjectTypeInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BaseTypeInfo_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Zenject::InjectTypeInfo::setStaticF_CS$__9__CachedAnonymousMethodDelegate2(::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>*, "CS$<>9__CachedAnonymousMethodDelegate2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get>(
      std::forward<::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>*>(value));
}
inline ::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>* Zenject::InjectTypeInfo::getStaticF_CS$__9__CachedAnonymousMethodDelegate2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>*, "CS$<>9__CachedAnonymousMethodDelegate2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get>();
}
inline void Zenject::InjectTypeInfo::setStaticF_CS$__9__CachedAnonymousMethodDelegate3(
    ::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*,
                                    "CS$<>9__CachedAnonymousMethodDelegate3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get>(
      std::forward<::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*>(value));
}
inline ::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*
Zenject::InjectTypeInfo::getStaticF_CS$__9__CachedAnonymousMethodDelegate3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*,
                                           "CS$<>9__CachedAnonymousMethodDelegate3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get>();
}
inline void Zenject::InjectTypeInfo::_ctor(::System::Type* type, ::Zenject::InjectTypeInfo_InjectConstructorInfo* injectConstructor,
                                           ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*> injectMethods,
                                           ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*> injectMembers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo_InjectConstructorInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, injectConstructor, injectMethods, injectMembers);
}
inline ::Zenject::InjectTypeInfo* Zenject::InjectTypeInfo::get_BaseTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), "get_BaseTypeInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(this, ___internal_method);
}
inline void Zenject::InjectTypeInfo::set_BaseTypeInfo(::Zenject::InjectTypeInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), "set_BaseTypeInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* Zenject::InjectTypeInfo::get_AllInjectables() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), "get_AllInjectables",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*, false>(this, ___internal_method);
}
inline ::Zenject::InjectableInfo* Zenject::InjectTypeInfo::_get_AllInjectables_b__0(::Zenject::InjectTypeInfo_InjectMemberInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), "<get_AllInjectables>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo_InjectMemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectableInfo*, false>(nullptr, ___internal_method, x);
}
inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* Zenject::InjectTypeInfo::_get_AllInjectables_b__1(::Zenject::InjectTypeInfo_InjectMethodInfo* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectTypeInfo*>::get(), "<get_AllInjectables>b__1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectTypeInfo_InjectMethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*, false>(nullptr, ___internal_method, x);
}
inline ::Zenject::InjectTypeInfo* Zenject::InjectTypeInfo::New_ctor(::System::Type* type, ::Zenject::InjectTypeInfo_InjectConstructorInfo* injectConstructor,
                                                                    ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*> injectMethods,
                                                                    ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*> injectMembers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::InjectTypeInfo*>(type, injectConstructor, injectMethods, injectMembers));
}
// Ctor Parameters []
constexpr ::Zenject::InjectTypeInfo::InjectTypeInfo() {}
