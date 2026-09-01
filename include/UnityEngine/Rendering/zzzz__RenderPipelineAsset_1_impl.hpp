#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderPipelineAsset_1.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename TRenderPipeline> inline ::System::Type* UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>::get_pipelineType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>*>(), { "get_pipelineType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TRenderPipeline> inline ::StringW UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>::get_renderPipelineShaderTag() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename TRenderPipeline> inline ::System::Type* UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>::get_renderPipelineType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>*>(), { "get_renderPipelineType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TRenderPipeline> inline void UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TRenderPipeline> inline ::UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>* UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>*>());
}
// Ctor Parameters []
template <typename TRenderPipeline> constexpr ::UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>::RenderPipelineAsset_1() {}
