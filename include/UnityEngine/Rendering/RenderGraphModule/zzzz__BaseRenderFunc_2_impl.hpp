#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BaseRenderFunc_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename PassData, typename ContextType>
inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename PassData, typename ContextType>
inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::Invoke(PassData data, ContextType renderGraphContext) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, renderGraphContext);
}
template <typename PassData, typename ContextType>
inline ::System::IAsyncResult* UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::BeginInvoke(PassData data, ContextType renderGraphContext,
                                                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, data, renderGraphContext, callback, object);
}
template <typename PassData, typename ContextType> inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename PassData, typename ContextType>
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*
UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*>(object, method));
}
// Ctor Parameters []
template <typename PassData, typename ContextType> constexpr ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::BaseRenderFunc_2() {}
