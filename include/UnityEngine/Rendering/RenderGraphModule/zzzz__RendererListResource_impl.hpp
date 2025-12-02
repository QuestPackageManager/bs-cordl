#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RendererListResource.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListResource_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RendererListResource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RendererListResource::*)(
    ::ByRef<::UnityEngine::Rendering::RendererListParams>)>(&::UnityEngine::Rendering::RenderGraphModule::RendererListResource::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x65c8e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererListParams>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RendererListResource::_ctor(::ByRef<::UnityEngine::Rendering::RendererListParams> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RendererListParams>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
// Ctor Parameters [CppParam { name: "desc", ty: "::UnityEngine::Rendering::RendererListParams", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererList", ty:
// "::UnityEngine::Rendering::RendererList", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListResource::RendererListResource(::UnityEngine::Rendering::RendererListParams desc,
                                                                                                  ::UnityEngine::Rendering::RendererList rendererList) noexcept {
  this->desc = desc;
  this->rendererList = rendererList;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListResource::RendererListResource() {}
