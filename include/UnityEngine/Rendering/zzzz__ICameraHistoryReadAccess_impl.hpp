#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ICameraHistoryReadAccess.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ICameraHistoryReadAccess_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ICameraHistoryReadAccess_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPerFrameHistoryAccessTracker_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x674728c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::*)(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*)>(
    &::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67473d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::*)(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker*, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67473e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::*)(::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6747404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::Invoke(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* historyAccess) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, historyAccess);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::BeginInvoke(::UnityEngine::Rendering::IPerFrameHistoryAccessTracker* historyAccess,
                                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, historyAccess, callback, object);
}
inline void UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate::ICameraHistoryReadAccess_HistoryRequestDelegate() {}
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess.add_OnGatherHistoryRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ICameraHistoryReadAccess::*)(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*)>(
    &::UnityEngine::Rendering::ICameraHistoryReadAccess::add_OnGatherHistoryRequests)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess*>(), { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ICameraHistoryReadAccess.remove_OnGatherHistoryRequests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ICameraHistoryReadAccess::*)(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate*)>(
    &::UnityEngine::Rendering::ICameraHistoryReadAccess::remove_OnGatherHistoryRequests)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess*>(), { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess*>(), 2 }));
    return ___internal_method;
  }
};
template <typename Type> inline Type UnityEngine::Rendering::ICameraHistoryReadAccess::GetHistoryForRead() {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess*>(), 0 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<Type>() }));
  return ::cordl_internals::RunMethodRethrow<Type>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ICameraHistoryReadAccess::add_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ICameraHistoryReadAccess::remove_OnGatherHistoryRequests(::UnityEngine::Rendering::ICameraHistoryReadAccess_HistoryRequestDelegate* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ICameraHistoryReadAccess*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
