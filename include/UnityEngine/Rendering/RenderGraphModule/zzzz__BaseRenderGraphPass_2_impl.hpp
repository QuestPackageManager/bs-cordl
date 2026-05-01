#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BaseRenderGraphPass_2.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->___data, value);
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
  ::cordl_internals::setInstanceField(this, &this->___renderFunc, value);
}
template <typename PassData, typename TRenderGraphContext>
inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::Initialize(int32_t passIndex, PassData passData, ::StringW passName,
                                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType passType,
                                                                                                                        ::UnityEngine::Rendering::ProfilingSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>::get(), "Initialize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<PassData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPassType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passIndex, passData, passName, passType, sampler);
}
template <typename PassData, typename TRenderGraphContext>
inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::Release(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* pool) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pool);
}
template <typename PassData, typename TRenderGraphContext> inline bool UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::HasRenderFunc() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename PassData, typename TRenderGraphContext> inline int32_t UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::GetRenderFuncHash() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename PassData, typename TRenderGraphContext> inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename PassData, typename TRenderGraphContext>
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*
UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>*>());
}
// Ctor Parameters []
template <typename PassData, typename TRenderGraphContext> constexpr ::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, TRenderGraphContext>::BaseRenderGraphPass_2() {}
