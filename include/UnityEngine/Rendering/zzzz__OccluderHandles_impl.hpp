#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderHandles.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderHandles_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderHandles.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::OccluderHandles::*)()>(&::UnityEngine::Rendering::OccluderHandles::IsValid)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6828dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderHandles>(), { "IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderHandles.UseForOcclusionTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OccluderHandles::*)(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*)>(
    &::UnityEngine::Rendering::OccluderHandles::UseForOcclusionTest)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6828ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderHandles>(),
                                                             { "UseForOcclusionTest", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderHandles.UseForOccluderUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OccluderHandles::*)(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*)>(
    &::UnityEngine::Rendering::OccluderHandles::UseForOccluderUpdate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6829050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderHandles>(),
                                                             { "UseForOccluderUpdate", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::OccluderHandles::IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderHandles>(), { "IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::OccluderHandles::UseForOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderHandles>(),
                                                           { "UseForOcclusionTest", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, builder);
}
inline void UnityEngine::Rendering::OccluderHandles::UseForOccluderUpdate(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderHandles>(),
                                                           { "UseForOccluderUpdate", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, builder);
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
