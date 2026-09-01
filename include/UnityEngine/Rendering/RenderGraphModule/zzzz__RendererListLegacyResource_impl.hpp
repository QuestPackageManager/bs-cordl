#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\RendererListLegacyResource.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListLegacyResource_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource::*)(::by_ref<bool>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67e9c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource::_ctor(::by_ref<bool> active) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, active);
}
// Ctor Parameters [CppParam { name: "rendererList", ty: "::UnityEngine::Rendering::RendererList", modifiers: "", def_value: Some("{}") }, CppParam { name: "isActive", ty: "bool", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource::RendererListLegacyResource(::UnityEngine::Rendering::RendererList rendererList, bool isActive) noexcept {
  this->rendererList = rendererList;
  this->isActive = isActive;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListLegacyResource::RendererListLegacyResource() {}
