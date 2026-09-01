#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Messaging\ServerObjectTerminatorSink.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ServerObjectTerminatorSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4ae70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
        &::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5b4ae78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*>(),
                                                                                           { "SyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5b4aff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*>(),
            { "AsyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::__cordl_internal_get__nextSink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextSink;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::__cordl_internal_get__nextSink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextSink;
}
constexpr void System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::__cordl_internal_set__nextSink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextSink = value;
}
inline void System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextSink);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*>(),
                                                                                         { "SyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl*
System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                      ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*>(),
          { "AsyncProcessMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, ___internal_method, msg, replySink);
}
inline ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*
System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::New_ctor(::System::Runtime::Remoting::Messaging::IMessageSink* nextSink) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*>(nextSink));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink::ServerObjectTerminatorSink() {}
