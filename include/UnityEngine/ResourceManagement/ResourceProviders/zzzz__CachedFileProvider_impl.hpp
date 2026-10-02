#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/CachedFileProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__CachedFileProvider_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__CachedFileProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp.GetPercentComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::GetPercentComplete)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d47284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(), { "GetPercentComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::Start)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x6d46e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(),
                                                                                           { "Start",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp.WaitForCompletionHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::WaitForCompletionHandler)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d4729c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(), { "WaitForCompletionHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp.RequestOperation_completed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::RequestOperation_completed)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6d47310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(),
                                                                                           { "RequestOperation_completed", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp.SendWebRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::*)(::StringW, ::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::SendWebRequest)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x6d474d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(),
                                                            { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d46e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp._SendWebRequest_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::_SendWebRequest_b__12_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6d47774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(),
                                                             { "<SendWebRequest>b__12_0", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*&
UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_Provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Provider;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider* const&
UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Provider;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Provider = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_RequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const&
UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_RequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_set_m_RequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestOperation = value;
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*&
UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_RequestQueueOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestQueueOperation;
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* const&
UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_RequestQueueOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestQueueOperation;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_set_m_RequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestQueueOperation = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_PI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PI;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const&
UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_PI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PI;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_set_m_PI(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PI = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_IgnoreFailures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreFailures;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_IgnoreFailures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreFailures;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_set_m_IgnoreFailures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreFailures = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_Complete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Complete;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_Complete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Complete;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_set_m_Complete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Complete = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_Timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_Timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_set_m_Timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Timeout = value;
}
constexpr ::StringW& UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_CachePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachePath;
}
constexpr ::StringW const& UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_get_m_CachePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachePath;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::__cordl_internal_set_m_CachePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachePath = value;
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::GetPercentComplete() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(), { "GetPercentComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle,
                                                                                                     ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider* rawProvider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(),
                                                                                         { "Start",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provideHandle, rawProvider);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::WaitForCompletionHandler() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(), { "WaitForCompletionHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::RequestOperation_completed(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(),
                                                                                         { "RequestOperation_completed", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::SendWebRequest(::StringW remotePath, ::StringW cachePath) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remotePath, cachePath);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::_SendWebRequest_b__12_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>(),
                                                           { "<SendWebRequest>b__12_0", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOperation);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp* UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider_InternalOp::CachedFileProvider_InternalOp() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider.Provide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider::Provide)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6d46dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d47280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provideHandle);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider* UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::CachedFileProvider::CachedFileProvider() {}
