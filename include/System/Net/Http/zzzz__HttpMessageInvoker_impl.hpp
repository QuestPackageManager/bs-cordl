#pragma once
// IWYU pragma private; include "System\Net\Http\HttpMessageInvoker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__HttpMessageInvoker_def.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpMessageInvoker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpMessageInvoker::*)(::System::Net::Http::HttpMessageHandler*, bool)>(
    &::System::Net::Http::HttpMessageInvoker::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60db63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpMessageInvoker*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpMessageHandler*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpMessageInvoker.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpMessageInvoker::*)()>(&::System::Net::Http::HttpMessageInvoker::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60decfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpMessageInvoker*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpMessageInvoker.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::HttpMessageInvoker::*)(bool)>(&::System::Net::Http::HttpMessageInvoker::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60db86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpMessageInvoker*>(), { ::i2c::class_of<::System::Net::Http::HttpMessageInvoker*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpMessageInvoker.SendAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpMessageInvoker::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpMessageInvoker::SendAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60dc2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpMessageInvoker*>(), { ::i2c::class_of<::System::Net::Http::HttpMessageInvoker*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::Http::HttpMessageHandler*& System::Net::Http::HttpMessageInvoker::__cordl_internal_get_handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
constexpr ::System::Net::Http::HttpMessageHandler* const& System::Net::Http::HttpMessageInvoker::__cordl_internal_get_handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handler;
}
constexpr void System::Net::Http::HttpMessageInvoker::__cordl_internal_set_handler(::System::Net::Http::HttpMessageHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handler = value;
}
constexpr bool& System::Net::Http::HttpMessageInvoker::__cordl_internal_get_disposeHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposeHandler;
}
constexpr bool const& System::Net::Http::HttpMessageInvoker::__cordl_internal_get_disposeHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposeHandler;
}
constexpr void System::Net::Http::HttpMessageInvoker::__cordl_internal_set_disposeHandler(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposeHandler = value;
}
inline void System::Net::Http::HttpMessageInvoker::_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpMessageInvoker*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::HttpMessageHandler*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler, disposeHandler);
}
inline void System::Net::Http::HttpMessageInvoker::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::HttpMessageInvoker*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Http::HttpMessageInvoker::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::HttpMessageInvoker*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpMessageInvoker::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::HttpMessageInvoker*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*>(this, ___internal_method, request, cancellationToken);
}
inline ::System::Net::Http::HttpMessageInvoker* System::Net::Http::HttpMessageInvoker::New_ctor(::System::Net::Http::HttpMessageHandler* handler, bool disposeHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::HttpMessageInvoker*>(handler, disposeHandler));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Http::HttpMessageInvoker::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Http::HttpMessageInvoker::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpMessageInvoker::HttpMessageInvoker() {}
