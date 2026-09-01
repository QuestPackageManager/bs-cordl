#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Channels\CrossAppDomainSink.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainSink_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageCtrl_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "arrResponse", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cadMrm", ty:
// "::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes::CrossAppDomainSink_ProcessMessageRes(
    ::ArrayW<uint8_t> arrResponse, ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* cadMrm) noexcept {
  this->arrResponse = arrResponse;
  this->cadMrm = cadMrm;
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes::CrossAppDomainSink_ProcessMessageRes() {}
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(int32_t)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3bef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.GetSink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Channels::CrossAppDomainSink* (*)(int32_t)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::GetSink)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5b3bc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), { "GetSink", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.get_TargetDomainId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::get_TargetDomainId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3befc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), { "get_TargetDomainId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.ProcessMessageInDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes (*)(
    ::ArrayW<uint8_t>, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageInDomain)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5b3bf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(),
                                         { "ProcessMessageInDomain", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.SyncProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (
    ::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Channels::CrossAppDomainSink::SyncProcessMessage)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5b3c1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.AsyncProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (
    ::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::AsyncProcessMessage)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b3c628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink.SendAsyncMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::SendAsyncMessage)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5b3c6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), { "SendAsyncMessage", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainSink._AsyncProcessMessage_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainSink::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainSink::_AsyncProcessMessage_b__10_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b3c904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(),
                                                                                           { "<AsyncProcessMessage>b__10_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Remoting::Channels::CrossAppDomainSink::__cordl_internal_get__domainID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domainID;
}
constexpr int32_t const& System::Runtime::Remoting::Channels::CrossAppDomainSink::__cordl_internal_get__domainID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domainID;
}
constexpr void System::Runtime::Remoting::Channels::CrossAppDomainSink::__cordl_internal_set__domainID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____domainID = value;
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainSink::setStaticF_s_sinks(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "s_sinks", ::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::Channels::CrossAppDomainSink::getStaticF_s_sinks() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "s_sinks", ::System::Runtime::Remoting::Channels::CrossAppDomainSink*>();
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainSink::setStaticF_processMessageMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "processMessageMethod", ::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Remoting::Channels::CrossAppDomainSink::getStaticF_processMessageMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "processMessageMethod", ::System::Runtime::Remoting::Channels::CrossAppDomainSink*>();
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainSink::_ctor(int32_t domainID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, domainID);
}
inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink* System::Runtime::Remoting::Channels::CrossAppDomainSink::GetSink(int32_t domainID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), { "GetSink", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(nullptr, ___internal_method, domainID);
}
inline int32_t System::Runtime::Remoting::Channels::CrossAppDomainSink::get_TargetDomainId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), { "get_TargetDomainId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes
System::Runtime::Remoting::Channels::CrossAppDomainSink::ProcessMessageInDomain(::ArrayW<uint8_t> arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(),
                                       { "ProcessMessageInDomain", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes>(nullptr, ___internal_method, arrRequest, cadMsg);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Channels::CrossAppDomainSink::SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msgRequest) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(this, ___internal_method, msgRequest);
}
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl*
System::Runtime::Remoting::Channels::CrossAppDomainSink::AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* reqMsg,
                                                                             ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, ___internal_method, reqMsg, replySink);
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainSink::SendAsyncMessage(::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(), { "SendAsyncMessage", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainSink::_AsyncProcessMessage_b__10_0(::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(),
                                                                                         { "<AsyncProcessMessage>b__10_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink* System::Runtime::Remoting::Channels::CrossAppDomainSink::New_ctor(int32_t domainID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Channels::CrossAppDomainSink*>(domainID));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr System::Runtime::Remoting::Channels::CrossAppDomainSink::operator ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Channels::CrossAppDomainSink::i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept {
  return static_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::CrossAppDomainSink::CrossAppDomainSink() {}
