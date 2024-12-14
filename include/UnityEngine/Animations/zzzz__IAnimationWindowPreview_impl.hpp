#pragma once
// IWYU pragma private; include "UnityEngine/Animations/IAnimationWindowPreview.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationWindowPreview_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::IAnimationWindowPreview.UpdatePreviewGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Animations::IAnimationWindowPreview::*)(::UnityEngine::Playables::PlayableGraph)>(
    &::UnityEngine::Animations::IAnimationWindowPreview::UpdatePreviewGraph)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::IAnimationWindowPreview*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::IAnimationWindowPreview*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::IAnimationWindowPreview::UpdatePreviewGraph(::UnityEngine::Playables::PlayableGraph graph) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animations::IAnimationWindowPreview*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graph);
}
