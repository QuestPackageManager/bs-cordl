#pragma once
#include "Zenject/zzzz__Installer_1_impl.hpp"
#include "Zenject/zzzz__ActionInstaller_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Zenject::ActionInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ActionInstaller::*)(::System::Action_1<::Zenject::DiContainer*>*)>(
    &::Zenject::ActionInstaller::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f0bb0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ActionInstaller*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ActionInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ActionInstaller::*)()>(&::Zenject::ActionInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2f1cd14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ActionInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ActionInstaller*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ActionInstaller.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::ActionInstaller::__zenCreate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2f1cd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ActionInstaller*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ActionInstaller.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ActionInstaller::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2f1cdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ActionInstaller*>::get(), "__zenCreateInjectTypeInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::Zenject::DiContainer*>*& Zenject::ActionInstaller::__get__installMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installMethod;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& Zenject::ActionInstaller::__get__installMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installMethod;
}
constexpr void Zenject::ActionInstaller::__set__installMethod(::System::Action_1<::Zenject::DiContainer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____installMethod)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::ActionInstaller* Zenject::ActionInstaller::New_ctor(::System::Action_1<::Zenject::DiContainer*>* installMethod) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ActionInstaller*>(installMethod));
}
inline void Zenject::ActionInstaller::_ctor(::System::Action_1<::Zenject::DiContainer*>* installMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ActionInstaller*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, installMethod);
}
inline void Zenject::ActionInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ActionInstaller*>::get(), "InstallBindings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Zenject::ActionInstaller::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ActionInstaller*>::get(), "__zenCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ActionInstaller::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ActionInstaller*>::get(), "__zenCreateInjectTypeInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::ActionInstaller::ActionInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
