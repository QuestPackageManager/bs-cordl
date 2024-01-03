#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ServerObjectReplySink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectReplySink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::ServerObjectReplySink::*)(
    ::System::Runtime::Remoting::ServerIdentity*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&::System::Runtime::Remoting::Messaging::ServerObjectReplySink::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24b38f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectReplySink.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessage* (::System::Runtime::Remoting::Messaging::ServerObjectReplySink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
        &::System::Runtime::Remoting::Messaging::ServerObjectReplySink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24b3920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink*>::get(), "SyncProcessMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::ServerObjectReplySink.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Messaging::ServerObjectReplySink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24b39e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink*>::get(), "AsyncProcessMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Messaging::ServerObjectReplySink::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Messaging::ServerObjectReplySink::__get__replySink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replySink;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& System::Runtime::Remoting::Messaging::ServerObjectReplySink::__get__replySink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replySink;
}
constexpr void System::Runtime::Remoting::Messaging::ServerObjectReplySink::__set__replySink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replySink)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::ServerIdentity*& System::Runtime::Remoting::Messaging::ServerObjectReplySink::__get__identity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identity;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::ServerIdentity*> const& System::Runtime::Remoting::Messaging::ServerObjectReplySink::__get__identity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identity;
}
constexpr void System::Runtime::Remoting::Messaging::ServerObjectReplySink::__set__identity(::System::Runtime::Remoting::ServerIdentity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____identity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::Messaging::ServerObjectReplySink*
System::Runtime::Remoting::Messaging::ServerObjectReplySink::New_ctor(::System::Runtime::Remoting::ServerIdentity* identity, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::ServerObjectReplySink*>(identity, replySink));
}
inline void System::Runtime::Remoting::Messaging::ServerObjectReplySink::_ctor(::System::Runtime::Remoting::ServerIdentity* identity, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identity, replySink);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::ServerObjectReplySink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink*>::get(), "SyncProcessMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl*
System::Runtime::Remoting::Messaging::ServerObjectReplySink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg,
                                                                                 ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::ServerObjectReplySink*>::get(), "AsyncProcessMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*, false>(this, ___internal_method, msg, replySink);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::ServerObjectReplySink::ServerObjectReplySink() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
