#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RasterRenderGraphPass_1.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderGraphPass_2_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterRenderGraphPass_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
template <typename PassData>
inline void UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>::setStaticF_c(::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext, "c", ::UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>(value));
}
template <typename PassData> inline ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>::getStaticF_c() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext, "c", ::UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>*>();
}
template <typename PassData>
inline void UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>::Execute(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* renderGraphContext) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraphContext);
}
template <typename PassData>
inline void UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>::Release(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* pool) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool);
}
template <typename PassData> inline void UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename PassData>
inline ::UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>* UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>*>());
}
// Ctor Parameters []
template <typename PassData> constexpr ::UnityEngine::Rendering::RenderGraphModule::RasterRenderGraphPass_1<PassData>::RasterRenderGraphPass_1() {}
