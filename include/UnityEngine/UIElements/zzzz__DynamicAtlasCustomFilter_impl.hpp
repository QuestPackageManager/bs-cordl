#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasCustomFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/UIElements/zzzz__DynamicAtlasFilters_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasCustomFilter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DynamicAtlasCustomFilter::*)(::System::Object*, void*)>(
    &::UnityEngine::UIElements::DynamicAtlasCustomFilter::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2db4200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DynamicAtlasCustomFilter.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DynamicAtlasCustomFilter::*)(
    ::UnityEngine::Texture2D*, ByRef<::UnityEngine::UIElements::DynamicAtlasFilters>)>(&::UnityEngine::UIElements::DynamicAtlasCustomFilter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2db42d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::DynamicAtlasCustomFilter* UnityEngine::UIElements::DynamicAtlasCustomFilter::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>(object, method));
}
inline void UnityEngine::UIElements::DynamicAtlasCustomFilter::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool UnityEngine::UIElements::DynamicAtlasCustomFilter::Invoke(::UnityEngine::Texture2D* texture, ByRef<::UnityEngine::UIElements::DynamicAtlasFilters> filtersToApply) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DynamicAtlasCustomFilter*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, texture, filtersToApply);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DynamicAtlasCustomFilter::DynamicAtlasCustomFilter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
