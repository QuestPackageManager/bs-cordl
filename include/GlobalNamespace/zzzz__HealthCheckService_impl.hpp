#pragma once
// IWYU pragma private; include "GlobalNamespace\HealthCheckService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HealthCheckService_def.hpp"
#include "GlobalNamespace/zzzz__IHealthCheckService_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthCheckService::*)(int32_t)>(&::GlobalNamespace::HealthCheckService::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x33329d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthCheckService*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3332adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthCheckService*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.PollUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::PollUpdate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3332b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthCheckService*>(), { "PollUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthCheckService.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HealthCheckService::*)()>(&::GlobalNamespace::HealthCheckService::Run)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x3332c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthCheckService*>(), { "Run", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HealthCheckService::__cordl_internal_get__port() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____port;
}
constexpr int32_t const& GlobalNamespace::HealthCheckService::__cordl_internal_get__port() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____port;
}
constexpr void GlobalNamespace::HealthCheckService::__cordl_internal_set__port(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____port = value;
}
constexpr ::System::Threading::Thread*& GlobalNamespace::HealthCheckService::__cordl_internal_get__runThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runThread;
}
constexpr ::System::Threading::Thread* const& GlobalNamespace::HealthCheckService::__cordl_internal_get__runThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runThread;
}
constexpr void GlobalNamespace::HealthCheckService::__cordl_internal_set__runThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____runThread = value;
}
constexpr bool& GlobalNamespace::HealthCheckService::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& GlobalNamespace::HealthCheckService::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void GlobalNamespace::HealthCheckService::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr ::System::Threading::ManualResetEvent*& GlobalNamespace::HealthCheckService::__cordl_internal_get__manualResetEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manualResetEvent;
}
constexpr ::System::Threading::ManualResetEvent* const& GlobalNamespace::HealthCheckService::__cordl_internal_get__manualResetEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manualResetEvent;
}
constexpr void GlobalNamespace::HealthCheckService::__cordl_internal_set__manualResetEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____manualResetEvent = value;
}
constexpr ::System::Net::HttpListener*& GlobalNamespace::HealthCheckService::__cordl_internal_get__listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listener;
}
constexpr ::System::Net::HttpListener* const& GlobalNamespace::HealthCheckService::__cordl_internal_get__listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listener;
}
constexpr void GlobalNamespace::HealthCheckService::__cordl_internal_set__listener(::System::Net::HttpListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____listener = value;
}
inline void GlobalNamespace::HealthCheckService::_ctor(int32_t port) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthCheckService*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline void GlobalNamespace::HealthCheckService::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthCheckService*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HealthCheckService::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthCheckService*>(), { "PollUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HealthCheckService::Run() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HealthCheckService*>(), { "Run", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HealthCheckService* GlobalNamespace::HealthCheckService::New_ctor(int32_t port) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HealthCheckService*>(port));
}
/// @brief Convert operator to "::GlobalNamespace::IHealthCheckService"
constexpr GlobalNamespace::HealthCheckService::operator ::GlobalNamespace::IHealthCheckService*() noexcept {
  return static_cast<::GlobalNamespace::IHealthCheckService*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IHealthCheckService"
constexpr ::GlobalNamespace::IHealthCheckService* GlobalNamespace::HealthCheckService::i___GlobalNamespace__IHealthCheckService() noexcept {
  return static_cast<::GlobalNamespace::IHealthCheckService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPollable"
constexpr GlobalNamespace::HealthCheckService::operator ::GlobalNamespace::IPollable*() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPollable"
constexpr ::GlobalNamespace::IPollable* GlobalNamespace::HealthCheckService::i___GlobalNamespace__IPollable() noexcept {
  return static_cast<::GlobalNamespace::IPollable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::HealthCheckService::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::HealthCheckService::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthCheckService::HealthCheckService() {}
