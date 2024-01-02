#pragma once
#include "UnityEngine/zzzz__AndroidJavaObject_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaClass_def.hpp"
//  Writing Method size for method: ::UnityEngine::AndroidJavaClass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaClass::*)(::StringW)>(&::UnityEngine::AndroidJavaClass::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c841d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaClass*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaClass._AndroidJavaClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaClass::*)(::StringW)>(&::UnityEngine::AndroidJavaClass::_AndroidJavaClass)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2c87824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaClass*>::get(), "_AndroidJavaClass", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AndroidJavaClass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AndroidJavaClass::*)(void*)>(&::UnityEngine::AndroidJavaClass::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c87038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaClass*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::AndroidJavaClass* UnityEngine::AndroidJavaClass::New_ctor(::StringW className) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AndroidJavaClass*>(className));
}
inline void UnityEngine::AndroidJavaClass::_ctor(::StringW className) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaClass*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, className);
}
inline void UnityEngine::AndroidJavaClass::_AndroidJavaClass(::StringW className) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaClass*>::get(), "_AndroidJavaClass", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, className);
}
inline ::UnityEngine::AndroidJavaClass* UnityEngine::AndroidJavaClass::New_ctor(void* jclass) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AndroidJavaClass*>(jclass));
}
inline void UnityEngine::AndroidJavaClass::_ctor(void* jclass) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AndroidJavaClass*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jclass);
}
// Ctor Parameters []
constexpr ::UnityEngine::AndroidJavaClass::AndroidJavaClass() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
