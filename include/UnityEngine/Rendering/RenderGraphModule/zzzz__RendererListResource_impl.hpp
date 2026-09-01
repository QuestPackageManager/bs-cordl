#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\RendererListResource.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListResource_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RendererListResource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RendererListResource::*)(::by_ref<::UnityEngine::Rendering::RendererListParams>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RendererListResource::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67e7b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererListParams>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RendererListResource::_ctor(::by_ref<::UnityEngine::Rendering::RendererListParams> desc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListResource>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RendererListParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, desc);
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
