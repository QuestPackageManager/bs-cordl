#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MessageHandlerAnalyticsManagerExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "BGNet/Core/zzzz__IAnalyticsManager_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedUnreliableMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions.GetMessageName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BGNet::Core::Messages::IUnconnectedMessage*)>(
    &::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::GetMessageName)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xdc26a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "GetMessageName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions.GetResponseCodeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::BGNet::Core::Messages::IUnconnectedResponse*)>(
    &::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::GetResponseCodeName)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xdc27e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "GetResponseCodeName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions.ReceivedReliableRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*)>(
    &::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedReliableRequestEvent)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xdc2ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "ReceivedReliableRequestEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions.SentReliableRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*)>(
    &::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentReliableRequestEvent)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xdc2db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "SentReliableRequestEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions.ReceivedReliableResponseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedReliableResponse*)>(
    &::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedReliableResponseEvent)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xdc2fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "ReceivedReliableResponseEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions.SentReliableResponseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedReliableResponse*)>(
    &::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentReliableResponseEvent)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xdc3250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "SentReliableResponseEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions.ReceivedUnreliableMessageEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedUnreliableMessage*)>(
    &::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedUnreliableMessageEvent)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xdc34b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "ReceivedUnreliableMessageEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedUnreliableMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions.SentUnreliableMessageEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedUnreliableMessage*)>(
    &::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentUnreliableMessageEvent)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xdc36e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "SentUnreliableMessageEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedUnreliableMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions.ReceivedUnreliableResponseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedResponse*)>(
    &::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedUnreliableResponseEvent)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xdc3918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "ReceivedUnreliableResponseEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions.SentUnreliableResponseEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Core::IAnalyticsManager*, ::BGNet::Core::Messages::IUnconnectedResponse*)>(
    &::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentUnreliableResponseEvent)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xdc3b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "SentUnreliableResponseEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::setStaticF__typeNameLookup(::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>*, "_typeNameLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::getStaticF__typeNameLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>*, "_typeNameLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get>();
}
inline void GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::setStaticF__responseCodeLookup(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::StringW>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::StringW>*>*, "_responseCodeLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::StringW>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::StringW>*>*
GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::getStaticF__responseCodeLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<uint8_t, ::StringW>*>*, "_responseCodeLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get>();
}
inline ::StringW GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::GetMessageName(::BGNet::Core::Messages::IUnconnectedMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "GetMessageName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, message);
}
inline ::StringW GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::GetResponseCodeName(::BGNet::Core::Messages::IUnconnectedResponse* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "GetResponseCodeName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedReliableRequestEvent(::BGNet::Core::IAnalyticsManager* analyticsManager,
                                                                                                    ::BGNet::Core::Messages::IUnconnectedReliableRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "ReceivedReliableRequestEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, analyticsManager, request);
}
inline void GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentReliableRequestEvent(::BGNet::Core::IAnalyticsManager* analyticsManager,
                                                                                                ::BGNet::Core::Messages::IUnconnectedReliableRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "SentReliableRequestEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, analyticsManager, request);
}
inline void GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedReliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager,
                                                                                                     ::BGNet::Core::Messages::IUnconnectedReliableResponse* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "ReceivedReliableResponseEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, analyticsManager, response);
}
inline void GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentReliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager,
                                                                                                 ::BGNet::Core::Messages::IUnconnectedReliableResponse* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "SentReliableResponseEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedReliableResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, analyticsManager, response);
}
inline void GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedUnreliableMessageEvent(::BGNet::Core::IAnalyticsManager* analyticsManager,
                                                                                                      ::BGNet::Core::Messages::IUnconnectedUnreliableMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "ReceivedUnreliableMessageEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedUnreliableMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, analyticsManager, message);
}
inline void GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentUnreliableMessageEvent(::BGNet::Core::IAnalyticsManager* analyticsManager,
                                                                                                  ::BGNet::Core::Messages::IUnconnectedUnreliableMessage* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "SentUnreliableMessageEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedUnreliableMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, analyticsManager, message);
}
inline void GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::ReceivedUnreliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager,
                                                                                                       ::BGNet::Core::Messages::IUnconnectedResponse* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "ReceivedUnreliableResponseEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, analyticsManager, response);
}
inline void GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::SentUnreliableResponseEvent(::BGNet::Core::IAnalyticsManager* analyticsManager,
                                                                                                   ::BGNet::Core::Messages::IUnconnectedResponse* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions*>::get(), "SentUnreliableResponseEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::IAnalyticsManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::Messages::IUnconnectedResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, analyticsManager, response);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MessageHandlerAnalyticsManagerExtensions::MessageHandlerAnalyticsManagerExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
