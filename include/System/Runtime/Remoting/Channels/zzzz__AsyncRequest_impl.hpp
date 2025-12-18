#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/AsyncRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__AsyncRequest_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::AsyncRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::AsyncRequest::*)(
    ::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&::System::Runtime::Remoting::Channels::AsyncRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598c72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::AsyncRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ReplySink)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MsgRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Channels::AsyncRequest::_ctor(::System::Runtime::Remoting::Messaging::IMessage* msgRequest, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::AsyncRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msgRequest, replySink);
}
inline ::System::Runtime::Remoting::Channels::AsyncRequest* System::Runtime::Remoting::Channels::AsyncRequest::New_ctor(::System::Runtime::Remoting::Messaging::IMessage* msgRequest,
                                                                                                                        ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Channels::AsyncRequest*>(msgRequest, replySink));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::AsyncRequest::AsyncRequest() {}
