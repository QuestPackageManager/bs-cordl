#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Channels\AsyncRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__AsyncRequest_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::AsyncRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Channels::AsyncRequest::*)(
    ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&::System::Runtime::Remoting::Channels::AsyncRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3c6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::AsyncRequest*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Channels::AsyncRequest::__cordl_internal_get_ReplySink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReplySink;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::Channels::AsyncRequest::__cordl_internal_get_ReplySink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReplySink;
}
constexpr void System::Runtime::Remoting::Channels::AsyncRequest::__cordl_internal_set_ReplySink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReplySink = value;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessage*& System::Runtime::Remoting::Channels::AsyncRequest::__cordl_internal_get_MsgRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MsgRequest;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessage* const& System::Runtime::Remoting::Channels::AsyncRequest::__cordl_internal_get_MsgRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MsgRequest;
}
constexpr void System::Runtime::Remoting::Channels::AsyncRequest::__cordl_internal_set_MsgRequest(::System::Runtime::Remoting::Messaging::IMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MsgRequest = value;
}
inline void System::Runtime::Remoting::Channels::AsyncRequest::_ctor(::System::Runtime::Remoting::Messaging::IMessage* msgRequest, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::AsyncRequest*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessageSink*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msgRequest, replySink);
}
inline ::System::Runtime::Remoting::Channels::AsyncRequest* System::Runtime::Remoting::Channels::AsyncRequest::New_ctor(::System::Runtime::Remoting::Messaging::IMessage* msgRequest,
                                                                                                                        ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Channels::AsyncRequest*>(msgRequest, replySink));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::AsyncRequest::AsyncRequest() {}
