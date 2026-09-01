#pragma once
// IWYU pragma private; include "System\Net\ExceptionHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ExceptionHelper_def.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/zzzz__NotImplementedException_def.hpp"
#include "System/zzzz__NotSupportedException_def.hpp"
//  Writing Method size for method: ::System::Net::ExceptionHelper.get_MethodNotImplementedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::NotImplementedException* (*)()>(&::System::Net::ExceptionHelper::get_MethodNotImplementedException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x640bb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ExceptionHelper*>(), { "get_MethodNotImplementedException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ExceptionHelper.get_PropertyNotImplementedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::NotImplementedException* (*)()>(&::System::Net::ExceptionHelper::get_PropertyNotImplementedException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x640bad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ExceptionHelper*>(), { "get_PropertyNotImplementedException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ExceptionHelper.get_TimeoutException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebException* (*)()>(&::System::Net::ExceptionHelper::get_TimeoutException)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6405474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ExceptionHelper*>(), { "get_TimeoutException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ExceptionHelper.get_PropertyNotSupportedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::NotSupportedException* (*)()>(&::System::Net::ExceptionHelper::get_PropertyNotSupportedException)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x640a70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ExceptionHelper*>(), { "get_PropertyNotSupportedException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ExceptionHelper.get_RequestAbortedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebException* (*)()>(&::System::Net::ExceptionHelper::get_RequestAbortedException)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6402db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ExceptionHelper*>(), { "get_RequestAbortedException", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::NotImplementedException* System::Net::ExceptionHelper::get_MethodNotImplementedException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ExceptionHelper*>(), { "get_MethodNotImplementedException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::NotImplementedException*>(nullptr, ___internal_method);
}
inline ::System::NotImplementedException* System::Net::ExceptionHelper::get_PropertyNotImplementedException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ExceptionHelper*>(), { "get_PropertyNotImplementedException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::NotImplementedException*>(nullptr, ___internal_method);
}
inline ::System::Net::WebException* System::Net::ExceptionHelper::get_TimeoutException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ExceptionHelper*>(), { "get_TimeoutException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*>(nullptr, ___internal_method);
}
inline ::System::NotSupportedException* System::Net::ExceptionHelper::get_PropertyNotSupportedException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ExceptionHelper*>(), { "get_PropertyNotSupportedException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::NotSupportedException*>(nullptr, ___internal_method);
}
inline ::System::Net::WebException* System::Net::ExceptionHelper::get_RequestAbortedException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ExceptionHelper*>(), { "get_RequestAbortedException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebException*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::ExceptionHelper::ExceptionHelper() {}
