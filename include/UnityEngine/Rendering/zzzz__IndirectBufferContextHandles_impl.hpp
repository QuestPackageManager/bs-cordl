#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContextHandles.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContextHandles_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IndirectBufferContextHandles.UseForOcclusionTest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::IndirectBufferContextHandles::*)(
    ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*)>(&::UnityEngine::Rendering::IndirectBufferContextHandles::UseForOcclusionTest)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6611040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferContextHandles>::get(), "UseForOcclusionTest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::IndirectBufferContextHandles::UseForOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IndirectBufferContextHandles>::get(), "UseForOcclusionTest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder);
}
// Ctor Parameters [CppParam { name: "instanceBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceInfoBuffer",
// ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "argsBuffer", ty:
// "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawInfoBuffer", ty:
// "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::IndirectBufferContextHandles::IndirectBufferContextHandles(::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceBuffer,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::BufferHandle instanceInfoBuffer,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::BufferHandle argsBuffer,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::BufferHandle drawInfoBuffer) noexcept {
  this->instanceBuffer = instanceBuffer;
  this->instanceInfoBuffer = instanceInfoBuffer;
  this->argsBuffer = argsBuffer;
  this->drawInfoBuffer = drawInfoBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::IndirectBufferContextHandles::IndirectBufferContextHandles() {}
