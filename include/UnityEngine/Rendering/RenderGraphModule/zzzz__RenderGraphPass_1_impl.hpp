#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphPass_1.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderGraphPass_2_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphContext_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphPass_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__InternalRenderGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
template <typename PassData> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::setStaticF_c(::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext, "c",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>(value));
}
template <typename PassData> inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::getStaticF_c() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext, "c",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>::get>();
}
template <typename PassData>
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::Execute(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* renderGraphContext) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraphContext);
}
template <typename PassData> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::Release(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* pool) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pool);
}
template <typename PassData> inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename PassData> inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>* UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>*>());
}
// Ctor Parameters []
template <typename PassData> constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>::RenderGraphPass_1() {}
