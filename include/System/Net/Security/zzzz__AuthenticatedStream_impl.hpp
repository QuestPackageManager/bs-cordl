#pragma once
// IWYU pragma private; include "System/Net/Security/AuthenticatedStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/Security/zzzz__AuthenticatedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::Net::Security::AuthenticatedStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::AuthenticatedStream::*)(::System::IO::Stream*, bool)>(&::System::Net::Security::AuthenticatedStream::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x636b00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Security::AuthenticatedStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::AuthenticatedStream.get_InnerStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::Security::AuthenticatedStream::*)()>(&::System::Net::Security::AuthenticatedStream::get_InnerStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636b18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::AuthenticatedStream*>(), { "get_InnerStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::AuthenticatedStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::AuthenticatedStream::*)(bool)>(&::System::Net::Security::AuthenticatedStream::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x636b194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Security::AuthenticatedStream*>(), { ::i2c::class_of<::System::Net::Security::AuthenticatedStream*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::AuthenticatedStream.get_IsAuthenticated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::AuthenticatedStream::*)()>(&::System::Net::Security::AuthenticatedStream::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Security::AuthenticatedStream*>(), { ::i2c::class_of<::System::Net::Security::AuthenticatedStream*>(), 42 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::Security::AuthenticatedStream::__cordl_internal_get__InnerStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream;
}
constexpr ::System::IO::Stream* const& System::Net::Security::AuthenticatedStream::__cordl_internal_get__InnerStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InnerStream;
}
constexpr void System::Net::Security::AuthenticatedStream::__cordl_internal_set__InnerStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InnerStream = value;
}
constexpr bool& System::Net::Security::AuthenticatedStream::__cordl_internal_get__LeaveStreamOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LeaveStreamOpen;
}
constexpr bool const& System::Net::Security::AuthenticatedStream::__cordl_internal_get__LeaveStreamOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LeaveStreamOpen;
}
constexpr void System::Net::Security::AuthenticatedStream::__cordl_internal_set__LeaveStreamOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LeaveStreamOpen = value;
}
inline void System::Net::Security::AuthenticatedStream::_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::AuthenticatedStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerStream, leaveInnerStreamOpen);
}
inline ::System::IO::Stream* System::Net::Security::AuthenticatedStream::get_InnerStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::AuthenticatedStream*>(), { "get_InnerStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline void System::Net::Security::AuthenticatedStream::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Security::AuthenticatedStream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool System::Net::Security::AuthenticatedStream::get_IsAuthenticated() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Security::AuthenticatedStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::Security::AuthenticatedStream* System::Net::Security::AuthenticatedStream::New_ctor(::System::IO::Stream* innerStream, bool leaveInnerStreamOpen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::AuthenticatedStream*>(innerStream, leaveInnerStreamOpen));
}
// Ctor Parameters []
constexpr ::System::Net::Security::AuthenticatedStream::AuthenticatedStream() {}
