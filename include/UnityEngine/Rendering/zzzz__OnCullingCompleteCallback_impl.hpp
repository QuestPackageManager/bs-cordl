#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\OnCullingCompleteCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OnCullingCompleteCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutput_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OnCullingCompleteCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OnCullingCompleteCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::OnCullingCompleteCallback::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x681bc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnCullingCompleteCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OnCullingCompleteCallback::*)(::Unity::Jobs::JobHandle, ::by_ref<::UnityEngine::Rendering::BatchCullingContext>,
                                                                                                                     ::by_ref<::UnityEngine::Rendering::BatchCullingOutput>)>(
    &::UnityEngine::Rendering::OnCullingCompleteCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x681bcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnCullingCompleteCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::OnCullingCompleteCallback::*)(::Unity::Jobs::JobHandle, ::by_ref<::UnityEngine::Rendering::BatchCullingContext>, ::by_ref<::UnityEngine::Rendering::BatchCullingOutput>,
                                                            ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::Rendering::OnCullingCompleteCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x681bcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnCullingCompleteCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OnCullingCompleteCallback::*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>,
                                                                                                                     ::by_ref<::UnityEngine::Rendering::BatchCullingOutput>, ::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::OnCullingCompleteCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x681bdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OnCullingCompleteCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::OnCullingCompleteCallback::Invoke(::Unity::Jobs::JobHandle jobHandle, ::by_ref<::UnityEngine::Rendering::BatchCullingContext> cullingContext,
                                                                      ::by_ref<::UnityEngine::Rendering::BatchCullingOutput> cullingOutput) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jobHandle, cullingContext, cullingOutput);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::OnCullingCompleteCallback::BeginInvoke(::Unity::Jobs::JobHandle jobHandle,
                                                                                              ::by_ref<::UnityEngine::Rendering::BatchCullingContext> cullingContext,
                                                                                              ::by_ref<::UnityEngine::Rendering::BatchCullingOutput> cullingOutput, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, jobHandle, cullingContext, cullingOutput, callback, object);
}
inline void UnityEngine::Rendering::OnCullingCompleteCallback::EndInvoke(::by_ref<::UnityEngine::Rendering::BatchCullingContext> cullingContext,
                                                                         ::by_ref<::UnityEngine::Rendering::BatchCullingOutput> cullingOutput, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::OnCullingCompleteCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullingContext, cullingOutput, result);
}
inline ::UnityEngine::Rendering::OnCullingCompleteCallback* UnityEngine::Rendering::OnCullingCompleteCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::OnCullingCompleteCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OnCullingCompleteCallback::OnCullingCompleteCallback() {}
