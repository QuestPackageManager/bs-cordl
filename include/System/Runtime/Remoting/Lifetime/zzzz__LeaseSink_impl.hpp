#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Lifetime\LeaseSink.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseSink._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseSink::*)(::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Lifetime::LeaseSink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b35f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseSink*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseSink.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Lifetime::LeaseSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Lifetime::LeaseSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b35f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseSink*>(),
                                                                                           { "SyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseSink.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Lifetime::LeaseSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Lifetime::LeaseSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b362a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseSink*>(),
            { "AsyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::LeaseSink.RenewLease
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Lifetime::LeaseSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Lifetime::LeaseSink::RenewLease)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5b36018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseSink*>(),
                                                                                           { "RenewLease", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Lifetime::LeaseSink::__cordl_internal_get__nextSink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextSink;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::Lifetime::LeaseSink::__cordl_internal_get__nextSink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextSink;
}
constexpr void System::Runtime::Remoting::Lifetime::LeaseSink::__cordl_internal_set__nextSink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextSink = value;
}
inline void System::Runtime::Remoting::Lifetime::LeaseSink::_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseSink*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextSink);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Lifetime::LeaseSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseSink*>(),
                                                                                         { "SyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::Lifetime::LeaseSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                                                                 ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseSink*>(),
          { "AsyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, ___internal_method, msg, replySink);
}
inline void System::Runtime::Remoting::Lifetime::LeaseSink::RenewLease(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Lifetime::LeaseSink*>(),
                                                                                         { "RenewLease", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Lifetime::LeaseSink* System::Runtime::Remoting::Lifetime::LeaseSink::New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Lifetime::LeaseSink*>(nextSink));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Lifetime::LeaseSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Lifetime::LeaseSink::i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Lifetime::LeaseSink::LeaseSink() {}
