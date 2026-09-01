#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\IComputeRenderGraphBuilder.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IComputeRenderGraphBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
template <typename PassData>
inline void UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder::SetRenderFunc(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* renderFunc) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<PassData>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderFunc);
}
/// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
constexpr UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder::operator ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
constexpr ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*
UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder::i___UnityEngine__Rendering__RenderGraphModule__IBaseRenderGraphBuilder() noexcept {
  return static_cast<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
