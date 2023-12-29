#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodCallMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodReturnMessage_def.hpp"
// Ctor Parameters [CppParam { name: "arrResponse", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cadMrm", ty:
// "::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Runtime::Remoting::Channels::__CrossAppDomainSink__ProcessMessageRes::__CrossAppDomainSink__ProcessMessageRes(
    ::ArrayW<uint8_t, ::Array<uint8_t>*> arrResponse, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* cadMrm) noexcept {
  this->arrResponse = arrResponse;
  this->cadMrm = cadMrm;
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::__CrossAppDomainSink__ProcessMessageRes::__CrossAppDomainSink__ProcessMessageRes() {}
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(int32_t)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x234a750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.GetSink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Channels::CrossAppDomainSink* (*)(int32_t)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::GetSink)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x234a438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "GetSink",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.get_TargetDomainId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::get_TargetDomainId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234a778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "get_TargetDomainId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.ProcessMessageInDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Channels::__CrossAppDomainSink__ProcessMessageRes (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageInDomain)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x234a780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "ProcessMessageInDomain", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x234a9f8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x234b140;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.SendAsyncMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::SendAsyncMessage)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x234b238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "SendAsyncMessage",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink._AsyncProcessMessage_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::_AsyncProcessMessage_b__10_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x234b440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "<AsyncProcessMessage>b__10_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Channels::CrossAppDomainSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
constexpr int32_t& System::Runtime::Remoting::Channels::CrossAppDomainSink::__get__domainID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domainID;
}
constexpr int32_t const& System::Runtime::Remoting::Channels::CrossAppDomainSink::__get__domainID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domainID;
}
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainSink::__set__domainID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____domainID = value;
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainSink::setStaticF_s_sinks(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "s_sinks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::Channels::CrossAppDomainSink::getStaticF_s_sinks() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "s_sinks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get>();
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainSink::setStaticF_processMessageMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "processMessageMethod",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::Channels::CrossAppDomainSink::getStaticF_processMessageMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "processMessageMethod",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get>();
}
inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink* System::Runtime::Remoting::Channels::CrossAppDomainSink::New_ctor(int32_t domainID) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(domainID));
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainSink::_ctor(int32_t domainID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, domainID);
}
inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink* System::Runtime::Remoting::Channels::CrossAppDomainSink::GetSink(int32_t domainID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "GetSink",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Channels::CrossAppDomainSink*, false>(nullptr, ___internal_method, domainID);
}
inline int32_t System::Runtime::Remoting::Channels::CrossAppDomainSink::get_TargetDomainId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(),
                                                                             "get_TargetDomainId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Channels::__CrossAppDomainSink__ProcessMessageRes
System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageInDomain(::ArrayW<uint8_t, ::Array<uint8_t>*> arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "ProcessMessageInDomain", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Channels::__CrossAppDomainSink__ProcessMessageRes, false>(nullptr, ___internal_method, arrRequest, cadMsg);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Channels::CrossAppDomainSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msgRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "SyncProcessMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(this, ___internal_method, msgRequest);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl*
System::Runtime::Remoting::Channels::CrossAppDomainSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* reqMsg,
                                                                             ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "AsyncProcessMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessageSink*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*, false>(this, ___internal_method, reqMsg, replySink);
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainSink::SendAsyncMessage(::System::Object* data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "SendAsyncMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainSink::_AsyncProcessMessage_b__10_0(::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>::get(), "<AsyncProcessMessage>b__10_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::CrossAppDomainSink::CrossAppDomainSink() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
