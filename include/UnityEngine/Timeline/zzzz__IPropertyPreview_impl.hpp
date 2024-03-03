#pragma once
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::IPropertyPreview.GatherProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::IPropertyPreview::*)(
    ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(&::UnityEngine::Timeline::IPropertyPreview::GatherProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IPropertyPreview*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IPropertyPreview*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::IPropertyPreview::GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::IPropertyPreview*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, director, driver);
}
