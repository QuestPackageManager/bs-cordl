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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename PassData, typename ContextType>
inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::Invoke(PassData data, ContextType renderGraphContext) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, renderGraphContext);
}
template <typename PassData, typename ContextType>
inline ::System::IAsyncResult* UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::BeginInvoke(PassData data, ContextType renderGraphContext,
                                                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, renderGraphContext, callback, object);
}
template <typename PassData, typename ContextType> inline void UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename PassData, typename ContextType>
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*
UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>*>(object, method));
}
// Ctor Parameters []
template <typename PassData, typename ContextType> constexpr ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>::BaseRenderFunc_2() {}
