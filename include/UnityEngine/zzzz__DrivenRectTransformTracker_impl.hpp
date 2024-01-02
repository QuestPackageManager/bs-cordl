#pragma once
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__DrivenTransformProperties_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::UnityEngine::DrivenRectTransformTracker.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::DrivenRectTransformTracker::*)(
    ::UnityEngine::Object*, ::UnityEngine::RectTransform*, ::UnityEngine::DrivenTransformProperties)>(&::UnityEngine::DrivenRectTransformTracker::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ce2798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DrivenRectTransformTracker>::get(), "Add", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::DrivenTransformProperties>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::DrivenRectTransformTracker.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::DrivenRectTransformTracker::*)()>(&::UnityEngine::DrivenRectTransformTracker::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ce279c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DrivenRectTransformTracker>::get(), "Clear",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::DrivenRectTransformTracker::Add(::UnityEngine::Object* driver, ::UnityEngine::RectTransform* rectTransform, ::UnityEngine::DrivenTransformProperties drivenProperties) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DrivenRectTransformTracker>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::DrivenTransformProperties>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, driver, rectTransform, drivenProperties);
}
inline void UnityEngine::DrivenRectTransformTracker::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::DrivenRectTransformTracker>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::DrivenRectTransformTracker::DrivenRectTransformTracker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
