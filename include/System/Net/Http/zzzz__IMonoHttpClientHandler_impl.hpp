#pragma once
// IWYU pragma private; include "System/Net/Http/IMonoHttpClientHandler.hpp"
#include "System/Net/Http/zzzz__IMonoHttpClientHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Security/zzzz__SslClientAuthenticationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Http::IMonoHttpClientHandler.get_SslOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Security::SslClientAuthenticationOptions* (::System::Net::Http::IMonoHttpClientHandler::*)()>(
    &::System::Net::Http::IMonoHttpClientHandler::get_SslOptions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::IMonoHttpClientHandler.set_SslOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::IMonoHttpClientHandler::*)(::System::Net::Security::SslClientAuthenticationOptions*)>(
    &::System::Net::Http::IMonoHttpClientHandler::set_SslOptions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::IMonoHttpClientHandler.set_UseProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::IMonoHttpClientHandler::*)(bool)>(&::System::Net::Http::IMonoHttpClientHandler::set_UseProxy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::IMonoHttpClientHandler.set_AllowAutoRedirect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::IMonoHttpClientHandler::*)(bool)>(&::System::Net::Http::IMonoHttpClientHandler::set_AllowAutoRedirect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::IMonoHttpClientHandler.SendAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::IMonoHttpClientHandler::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::IMonoHttpClientHandler::SendAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::IMonoHttpClientHandler.SetWebRequestTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::IMonoHttpClientHandler::*)(::System::TimeSpan)>(&::System::Net::Http::IMonoHttpClientHandler::SetWebRequestTimeout)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 5 }));
    return ___internal_method;
  }
};
inline ::System::Net::Security::SslClientAuthenticationOptions* System::Net::Http::IMonoHttpClientHandler::get_SslOptions() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::SslClientAuthenticationOptions*>(this, ___internal_method);
}
inline void System::Net::Http::IMonoHttpClientHandler::set_SslOptions(::System::Net::Security::SslClientAuthenticationOptions* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Http::IMonoHttpClientHandler::set_UseProxy(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Http::IMonoHttpClientHandler::set_AllowAutoRedirect(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::IMonoHttpClientHandler::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                                           ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, cancellationToken);
}
inline void System::Net::Http::IMonoHttpClientHandler::SetWebRequestTimeout(::System::TimeSpan timeout) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::IMonoHttpClientHandler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeout);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Http::IMonoHttpClientHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Http::IMonoHttpClientHandler::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
