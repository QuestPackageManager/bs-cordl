#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RendererListLegacyResource.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListLegacyResource_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource::*)(::ByRef<bool>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65caf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource::_ctor(::ByRef<bool> active) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, active);
}
// Ctor Parameters [CppParam { name: "rendererList", ty: "::UnityEngine::Rendering::RendererList", modifiers: "", def_value: Some("{}") }, CppParam { name: "isActive", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource::RendererListLegacyResource(::UnityEngine::Rendering::RendererList rendererList, bool isActive) noexcept {
  this->rendererList = rendererList;
  this->isActive = isActive;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource::RendererListLegacyResource() {}
