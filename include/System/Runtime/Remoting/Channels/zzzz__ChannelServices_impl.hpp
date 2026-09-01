#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Channels\ChannelServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__ChannelServices_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannelSender_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__CrossContextChannel_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__ReturnMessage_def.hpp"
#include "System/Runtime/Remoting/zzzz__ChannelData_def.hpp"
#include "System/Runtime/Remoting/zzzz__ProviderData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.get_CrossContextChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::CrossContextChannel* (*)()>(
    &::System::Runtime::Remoting::Channels::ChannelServices::get_CrossContextChannel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b393c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(), { "get_CrossContextChannel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.CreateClientChannelSinkChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (*)(::StringW, ::System::Object*, ::by_ref<::StringW>)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x5b2cabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                { "CreateClientChannelSinkChain", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.CreateClientChannelSinkChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (*)(::System::Runtime::Remoting::Channels::IChannelSender*, ::StringW, ::ArrayW<::System::Object*>, ::by_ref<::StringW>)>(
        &::System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5b3941c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                           { "CreateClientChannelSinkChain",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Remoting::Channels::IChannelSender*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.RegisterChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::Channels::IChannel*)>(&::System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b3963c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                           { "RegisterChannel", {}, { ::i2c::type_of<::System::Runtime::Remoting::Channels::IChannel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.RegisterChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::Channels::IChannel*, bool)>(&::System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0x5b39698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                             { "RegisterChannel", {}, { ::i2c::type_of<::System::Runtime::Remoting::Channels::IChannel*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.RegisterChannelConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::ChannelData*)>(&::System::Runtime::Remoting::Channels::ChannelServices::RegisterChannelConfig)> {
  constexpr static std::size_t size = 0xbe8;
  constexpr static std::size_t addrs = 0x5b39eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                           { "RegisterChannelConfig", {}, { ::i2c::type_of<::System::Runtime::Remoting::ChannelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.CreateProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ProviderData*)>(&::System::Runtime::Remoting::Channels::ChannelServices::CreateProvider)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5b3aa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                           { "CreateProvider", {}, { ::i2c::type_of<::System::Runtime::Remoting::ProviderData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.SyncDispatchMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::SyncDispatchMessage)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b3ad98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                           { "SyncDispatchMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.CheckIncomingMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::ReturnMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::CheckIncomingMessage)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5b3ae44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                           { "CheckIncomingMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.CheckReturnMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessage*)>(
        &::System::Runtime::Remoting::Channels::ChannelServices::CheckReturnMessage)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5b3b0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                         { "CheckReturnMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.IsLocalCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Channels::ChannelServices::IsLocalCall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3b2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                           { "IsLocalCall", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.GetCurrentChannelInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (*)()>(&::System::Runtime::Remoting::Channels::ChannelServices::GetCurrentChannelInfo)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x5b3b2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(), { "GetCurrentChannelInfo", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Channels::ChannelServices::setStaticF_registeredChannels(::System::Collections::ArrayList* value) {
  ::cordl_internals::setStaticField<::System::Collections::ArrayList*, "registeredChannels", ::System::Runtime::Remoting::Channels::ChannelServices*>(
      std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::Channels::ChannelServices::getStaticF_registeredChannels() {
  return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "registeredChannels", ::System::Runtime::Remoting::Channels::ChannelServices*>();
}
inline void System::Runtime::Remoting::Channels::ChannelServices::setStaticF_delayedClientChannels(::System::Collections::ArrayList* value) {
  ::cordl_internals::setStaticField<::System::Collections::ArrayList*, "delayedClientChannels", ::System::Runtime::Remoting::Channels::ChannelServices*>(
      std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::Channels::ChannelServices::getStaticF_delayedClientChannels() {
  return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "delayedClientChannels", ::System::Runtime::Remoting::Channels::ChannelServices*>();
}
inline void System::Runtime::Remoting::Channels::ChannelServices::setStaticF__crossContextSink(::System::Runtime::Remoting::Contexts::CrossContextChannel* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Contexts::CrossContextChannel*, "_crossContextSink", ::System::Runtime::Remoting::Channels::ChannelServices*>(
      std::forward<::System::Runtime::Remoting::Contexts::CrossContextChannel*>(value));
}
inline ::System::Runtime::Remoting::Contexts::CrossContextChannel* System::Runtime::Remoting::Channels::ChannelServices::getStaticF__crossContextSink() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Contexts::CrossContextChannel*, "_crossContextSink", ::System::Runtime::Remoting::Channels::ChannelServices*>();
}
inline void System::Runtime::Remoting::Channels::ChannelServices::setStaticF_CrossContextUrl(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "CrossContextUrl", ::System::Runtime::Remoting::Channels::ChannelServices*>(std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Remoting::Channels::ChannelServices::getStaticF_CrossContextUrl() {
  return ::cordl_internals::getStaticField<::StringW, "CrossContextUrl", ::System::Runtime::Remoting::Channels::ChannelServices*>();
}
inline void System::Runtime::Remoting::Channels::ChannelServices::setStaticF_oldStartModeTypes(::System::Collections::IList* value) {
  ::cordl_internals::setStaticField<::System::Collections::IList*, "oldStartModeTypes", ::System::Runtime::Remoting::Channels::ChannelServices*>(std::forward<::System::Collections::IList*>(value));
}
inline ::System::Collections::IList* System::Runtime::Remoting::Channels::ChannelServices::getStaticF_oldStartModeTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::IList*, "oldStartModeTypes", ::System::Runtime::Remoting::Channels::ChannelServices*>();
}
inline ::System::Runtime::Remoting::Contexts::CrossContextChannel* System::Runtime::Remoting::Channels::ChannelServices::get_CrossContextChannel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(), { "get_CrossContextChannel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::CrossContextChannel*>(nullptr, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain(::StringW url, ::System::Object* remoteChannelData,
                                                                                                                                                ::by_ref<::StringW> objectUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                              { "CreateClientChannelSinkChain", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(nullptr, ___internal_method, url, remoteChannelData, objectUri);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink*
System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain(::System::Runtime::Remoting::Channels::IChannelSender* sender, ::StringW url,
                                                                                   ::ArrayW<::System::Object*> channelDataArray, ::by_ref<::StringW> objectUri) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                         { "CreateClientChannelSinkChain",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Remoting::Channels::IChannelSender*>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(nullptr, ___internal_method, sender, url, channelDataArray, objectUri);
}
inline void System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* chnl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                         { "RegisterChannel", {}, { ::i2c::type_of<::System::Runtime::Remoting::Channels::IChannel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, chnl);
}
inline void System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* chnl, bool ensureSecurity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                           { "RegisterChannel", {}, { ::i2c::type_of<::System::Runtime::Remoting::Channels::IChannel*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, chnl, ensureSecurity);
}
inline void System::Runtime::Remoting::Channels::ChannelServices::RegisterChannelConfig(::System::Runtime::Remoting::ChannelData* channel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                         { "RegisterChannelConfig", {}, { ::i2c::type_of<::System::Runtime::Remoting::ChannelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, channel);
}
inline ::System::Object* System::Runtime::Remoting::Channels::ChannelServices::CreateProvider(::System::Runtime::Remoting::ProviderData* prov) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                         { "CreateProvider", {}, { ::i2c::type_of<::System::Runtime::Remoting::ProviderData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, prov);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Channels::ChannelServices::SyncDispatchMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                         { "SyncDispatchMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(nullptr, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::ReturnMessage* System::Runtime::Remoting::Channels::ChannelServices::CheckIncomingMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                         { "CheckIncomingMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::ReturnMessage*>(nullptr, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Channels::ChannelServices::CheckReturnMessage(::System::Runtime::Remoting::Messaging::IMessage* callMsg,
                                                                                                                                  ::System::Runtime::Remoting::Messaging::IMessage* retMsg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                          { "CheckReturnMessage", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*>(nullptr, ___internal_method, callMsg, retMsg);
}
inline bool System::Runtime::Remoting::Channels::ChannelServices::IsLocalCall(::System::Runtime::Remoting::Messaging::IMessage* callMsg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(),
                                                                                         { "IsLocalCall", {}, { ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callMsg);
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Channels::ChannelServices::GetCurrentChannelInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::ChannelServices*>(), { "GetCurrentChannelInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::ChannelServices::ChannelServices() {}
