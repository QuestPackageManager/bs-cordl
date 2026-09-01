#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\BaseRenderGraphPass_2.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderGraphPass_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPassType_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
template <typename PassData, typename TRenderGraphContext>
constexpr PassData& UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename PassData, typename TRenderGraphContext>
constexpr PassData const& UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename PassData, typename TRenderGraphContext>
constexpr void UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::__cordl_internal_set_data(PassData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
template <typename PassData, typename TRenderGraphContext>
constexpr ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, TRenderGraphContext>*&
UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::__cordl_internal_get_renderFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderFunc;
}
template <typename PassData, typename TRenderGraphContext>
constexpr ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, TRenderGraphContext>* const&
UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::__cordl_internal_get_renderFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderFunc;
}
template <typename PassData, typename TRenderGraphContext>
constexpr void UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::__cordl_internal_set_renderFunc(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, TRenderGraphContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderFunc = value;
}
template <typename PassData, typename TRenderGraphContext>
inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::Initialize(int32_t passIndex, PassData passData, ::StringW passName,
                                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType passType,
                                                                                                                        ::UnityEngine::Rendering::ProfilingSampler* sampler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>(),
                                       { "Initialize",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<PassData>(), ::i2c::type_of<::StringW>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType>(), ::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passIndex, passData, passName, passType, sampler);
}
template <typename PassData, typename TRenderGraphContext>
inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::Release(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* pool) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool);
}
template <typename PassData, typename TRenderGraphContext> inline bool UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::HasRenderFunc() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename PassData, typename TRenderGraphContext> inline int32_t UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::GetRenderFuncHash() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename PassData, typename TRenderGraphContext> inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename PassData, typename TRenderGraphContext>
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*
UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>());
}
// Ctor Parameters []
template <typename PassData, typename TRenderGraphContext> constexpr ::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::BaseRenderGraphPass_2() {}
