#pragma once
#include "BGNet/Core/Messages/zzzz__BaseClientUnconnectedMessageHandler_impl.hpp"
#include "GlobalNamespace/zzzz__GameLiftClientMessageHandler_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedAuthenticateRequest_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "GlobalNamespace/zzzz__DnsEndPoint_def.hpp"
#include "BGNet/Core/zzzz__IAnalyticsManager_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateValidator_def.hpp"
#include "BGNet/Core/Messages/zzzz__UnconnectedMessageHandler_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientMessageHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftClientMessageHandler::*)(
    ::GlobalNamespace::IUnconnectedMessageSender*, ::GlobalNamespace::DnsEndPoint*, ::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::ICertificateValidator*,
    ::BGNet::Core::IAnalyticsManager*)>(&::GlobalNamespace::GameLiftClientMessageHandler::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdb0c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IUnconnectedMessageSender*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DnsEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICertificateValidator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientMessageHandler.RegisterGameLiftMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameLiftClientMessageHandler::*)()>(
    &::GlobalNamespace::GameLiftClientMessageHandler::RegisterGameLiftMessages)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0xdb0c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(),
                                                                               "RegisterGameLiftMessages", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientMessageHandler.ShouldHandleMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameLiftClientMessageHandler::*)(
    ::BGNet::Core::Messages::IUnconnectedMessage*, ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin)>(&::GlobalNamespace::GameLiftClientMessageHandler::ShouldHandleMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xdb105c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientMessageHandler.GetMessageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::GameLiftClientMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedMessage*)>(
    &::GlobalNamespace::GameLiftClientMessageHandler::GetMessageType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xdb110c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientMessageHandler.GetAuthenticationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>* (
    ::GlobalNamespace::GameLiftClientMessageHandler::*)()>(&::GlobalNamespace::GameLiftClientMessageHandler::GetAuthenticationRequest)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xdb1188;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftClientMessageHandler.AuthenticateWithGameLiftServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::GameLiftClientMessageHandler::*)(::StringW, ::StringW, ::StringW)>(&::GlobalNamespace::GameLiftClientMessageHandler::AuthenticateWithGameLiftServer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xdb123c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(), "AuthenticateWithGameLiftServer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GameLiftClientMessageHandler::__get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::GameLiftClientMessageHandler::__get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::GameLiftClientMessageHandler::__set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GameLiftClientMessageHandler::__get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::GameLiftClientMessageHandler::__get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::GameLiftClientMessageHandler::__set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GameLiftClientMessageHandler::__get__playerSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSessionId;
}
constexpr ::StringW const& GlobalNamespace::GameLiftClientMessageHandler::__get__playerSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSessionId;
}
constexpr void GlobalNamespace::GameLiftClientMessageHandler::__set__playerSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param analytics: ::BGNet::Core::IAnalyticsManager* (default: nullptr)
inline ::GlobalNamespace::GameLiftClientMessageHandler* GlobalNamespace::GameLiftClientMessageHandler::New_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender,
                                                                                                                ::GlobalNamespace::DnsEndPoint* endPoint, ::BGNet::Core::ITimeProvider* timeProvider,
                                                                                                                ::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                                ::GlobalNamespace::ICertificateValidator* certificateValidator,
                                                                                                                ::BGNet::Core::IAnalyticsManager* analytics) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameLiftClientMessageHandler*>(sender, endPoint, timeProvider, taskUtility, certificateValidator, analytics));
}
/// @param analytics: ::BGNet::Core::IAnalyticsManager* (default: nullptr)
inline void GlobalNamespace::GameLiftClientMessageHandler::_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::GlobalNamespace::DnsEndPoint* endPoint,
                                                                 ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                 ::GlobalNamespace::ICertificateValidator* certificateValidator, ::BGNet::Core::IAnalyticsManager* analytics) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IUnconnectedMessageSender*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DnsEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICertificateValidator*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, endPoint, timeProvider, taskUtility, certificateValidator, analytics);
}
inline void GlobalNamespace::GameLiftClientMessageHandler::RegisterGameLiftMessages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(),
                                                                             "RegisterGameLiftMessages", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::GameLiftClientMessageHandler::ShouldHandleMessage(::BGNet::Core::Messages::IUnconnectedMessage* packet,
                                                                               ::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin origin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(), "ShouldHandleMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::__UnconnectedMessageHandler__MessageOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packet, origin);
}
inline uint32_t GlobalNamespace::GameLiftClientMessageHandler::GetMessageType(::BGNet::Core::Messages::IUnconnectedMessage* message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(), "GetMessageType", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, message);
}
inline ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>* GlobalNamespace::GameLiftClientMessageHandler::GetAuthenticationRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(),
                                                                             "GetAuthenticationRequest", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::GameLiftClientMessageHandler::AuthenticateWithGameLiftServer(::StringW userId, ::StringW userName, ::StringW playerSessionId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameLiftClientMessageHandler*>::get(), "AuthenticateWithGameLiftServer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, userId, userName, playerSessionId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLiftClientMessageHandler::GameLiftClientMessageHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
