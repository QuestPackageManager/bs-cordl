#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IVirtualTexturingEnabledRenderPipeline.hpp"
#include "UnityEngine/Rendering/zzzz__IVirtualTexturingEnabledRenderPipeline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline.get_virtualTexturingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline::*)()>(
    &::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline::get_virtualTexturingEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline*>::get(), 0));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline::get_virtualTexturingEnabled() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
