#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderHandles.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderHandles_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderHandles.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::OccluderHandles::*)()>(&::UnityEngine::Rendering::OccluderHandles::IsValid)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x660f8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderHandles>::get(), "IsValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderHandles.UseForOcclusionTest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OccluderHandles::*)(
    ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*)>(&::UnityEngine::Rendering::OccluderHandles::UseForOcclusionTest)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x660fa14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderHandles>::get(), "UseForOcclusionTest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderHandles.UseForOccluderUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OccluderHandles::*)(
    ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*)>(&::UnityEngine::Rendering::OccluderHandles::UseForOccluderUpdate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x660fb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderHandles>::get(), "UseForOccluderUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::OccluderHandles::IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderHandles>::get(), "IsValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::OccluderHandles::UseForOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderHandles>::get(), "UseForOcclusionTest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder);
}
inline void UnityEngine::Rendering::OccluderHandles::UseForOccluderUpdate(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderHandles>::get(), "UseForOccluderUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder);
}
// Ctor Parameters [CppParam { name: "occluderDepthPyramid", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "occlusionDebugOverlay", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OccluderHandles::OccluderHandles(::UnityEngine::Rendering::RenderGraphModule::TextureHandle occluderDepthPyramid,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::BufferHandle occlusionDebugOverlay) noexcept {
  this->occluderDepthPyramid = occluderDepthPyramid;
  this->occlusionDebugOverlay = occlusionDebugOverlay;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OccluderHandles::OccluderHandles() {}
