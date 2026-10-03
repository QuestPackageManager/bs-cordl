#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/PooledResourceEntry_1.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__PooledResourceEntry_1_def.hpp"
template <typename Type> inline void UnityEngine::Rendering::RenderGraphModule::PooledResourceEntry_1<Type>::_ctor(Type resource, int32_t frameIndex, int32_t executionCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::PooledResourceEntry_1<Type>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<Type>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resource, frameIndex, executionCount);
}
// Ctor Parameters [CppParam { name: "resource", ty: "Type", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "frameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "executionCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template <typename Type> constexpr ::UnityEngine::Rendering::RenderGraphModule::PooledResourceEntry_1<Type>::PooledResourceEntry_1(Type resource, int32_t frameIndex, int32_t executionCount) noexcept {
  this->resource = resource;
  this->frameIndex = frameIndex;
  this->executionCount = executionCount;
}
// Ctor Parameters []
template <typename Type> constexpr ::UnityEngine::Rendering::RenderGraphModule::PooledResourceEntry_1<Type>::PooledResourceEntry_1() {}
