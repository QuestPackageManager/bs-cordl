#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__VisibleToOtherModulesAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::VisibleToOtherModulesAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::VisibleToOtherModulesAttribute::*)()>(
    &::UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1821c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::VisibleToOtherModulesAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::VisibleToOtherModulesAttribute::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d18224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Bindings::VisibleToOtherModulesAttribute* UnityEngine::Bindings::VisibleToOtherModulesAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>());
}
inline void UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::VisibleToOtherModulesAttribute* UnityEngine::Bindings::VisibleToOtherModulesAttribute::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> modules) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>(modules));
}
inline void UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> modules) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::VisibleToOtherModulesAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, modules);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::VisibleToOtherModulesAttribute::VisibleToOtherModulesAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
