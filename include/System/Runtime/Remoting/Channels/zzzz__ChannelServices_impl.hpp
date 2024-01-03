#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::CrossContextChannel* (*)()>(
    &::System::Runtime::Remoting::Channels::ChannelServices::get_CrossContextChannel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x249fb50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(),
                                                                               "get_CrossContextChannel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.CreateClientChannelSinkChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (*)(::StringW, ::System::Object*, ByRef<::StringW>)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x249fba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "CreateClientChannelSinkChain", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.CreateClientChannelSinkChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (*)(::System::Runtime::Remoting::Channels::IChannelSender*, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                                                                          ByRef<::StringW>)>(&::System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x24a0424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "CreateClientChannelSinkChain", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Channels::IChannelSender*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.RegisterChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::Channels::IChannel*)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x24a062c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "RegisterChannel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Channels::IChannel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.RegisterChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::Channels::IChannel*, bool)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x24a0684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "RegisterChannel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Channels::IChannel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.RegisterChannelConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::ChannelData*)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::RegisterChannelConfig)> {
  constexpr static std::size_t size = 0xbe8;
  constexpr static std::size_t addrs = 0x24a0f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "RegisterChannelConfig", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ChannelData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.CreateProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Runtime::Remoting::ProviderData*)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::CreateProvider)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x24a1ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "CreateProvider", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ProviderData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.SyncDispatchMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::SyncDispatchMessage)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x24a1e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "SyncDispatchMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.CheckIncomingMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::ReturnMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::CheckIncomingMessage)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x24a1ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "CheckIncomingMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.CheckReturnMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessage*)>(
        &::System::Runtime::Remoting::Channels::ChannelServices::CheckReturnMessage)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x24a2150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "CheckReturnMessage", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.IsLocalCall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(
    &::System::Runtime::Remoting::Channels::ChannelServices::IsLocalCall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a2320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "IsLocalCall", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::ChannelServices.GetCurrentChannelInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (*)()>(
    &::System::Runtime::Remoting::Channels::ChannelServices::GetCurrentChannelInfo)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x24a243c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(),
                                                                               "GetCurrentChannelInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Channels::ChannelServices::setStaticF_registeredChannels(::System::Collections::ArrayList* value) {
  ::cordl_internals::setStaticField<::System::Collections::ArrayList*, "registeredChannels",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get>(
      std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::Channels::ChannelServices::getStaticF_registeredChannels() {
  return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "registeredChannels",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get>();
}
inline void System::Runtime::Remoting::Channels::ChannelServices::setStaticF_delayedClientChannels(::System::Collections::ArrayList* value) {
  ::cordl_internals::setStaticField<::System::Collections::ArrayList*, "delayedClientChannels",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get>(
      std::forward<::System::Collections::ArrayList*>(value));
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::Channels::ChannelServices::getStaticF_delayedClientChannels() {
  return ::cordl_internals::getStaticField<::System::Collections::ArrayList*, "delayedClientChannels",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get>();
}
inline void System::Runtime::Remoting::Channels::ChannelServices::setStaticF__crossContextSink(::System::Runtime::Remoting::Contexts::CrossContextChannel* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Contexts::CrossContextChannel*, "_crossContextSink",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get>(
      std::forward<::System::Runtime::Remoting::Contexts::CrossContextChannel*>(value));
}
inline ::System::Runtime::Remoting::Contexts::CrossContextChannel* System::Runtime::Remoting::Channels::ChannelServices::getStaticF__crossContextSink() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Contexts::CrossContextChannel*, "_crossContextSink",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get>();
}
inline void System::Runtime::Remoting::Channels::ChannelServices::setStaticF_CrossContextUrl(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "CrossContextUrl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Remoting::Channels::ChannelServices::getStaticF_CrossContextUrl() {
  return ::cordl_internals::getStaticField<::StringW, "CrossContextUrl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get>();
}
inline void System::Runtime::Remoting::Channels::ChannelServices::setStaticF_oldStartModeTypes(::System::Collections::IList* value) {
  ::cordl_internals::setStaticField<::System::Collections::IList*, "oldStartModeTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get>(
      std::forward<::System::Collections::IList*>(value));
}
inline ::System::Collections::IList* System::Runtime::Remoting::Channels::ChannelServices::getStaticF_oldStartModeTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::IList*, "oldStartModeTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get>();
}
inline ::System::Runtime::Remoting::Contexts::CrossContextChannel* System::Runtime::Remoting::Channels::ChannelServices::get_CrossContextChannel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(),
                                                                             "get_CrossContextChannel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::CrossContextChannel*, false>(nullptr, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain(::StringW url, ::System::Object* remoteChannelData,
                                                                                                                                                ByRef<::StringW> objectUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "CreateClientChannelSinkChain", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(nullptr, ___internal_method, url, remoteChannelData, objectUri);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink*
System::Runtime::Remoting::Channels::ChannelServices::CreateClientChannelSinkChain(::System::Runtime::Remoting::Channels::IChannelSender* sender, ::StringW url,
                                                                                   ::ArrayW<::System::Object*, ::Array<::System::Object*>*> channelDataArray, ByRef<::StringW> objectUri) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "CreateClientChannelSinkChain", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Channels::IChannelSender*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(nullptr, ___internal_method, sender, url, channelDataArray, objectUri);
}
inline void System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* chnl) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "RegisterChannel", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Channels::IChannel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, chnl);
}
inline void System::Runtime::Remoting::Channels::ChannelServices::RegisterChannel(::System::Runtime::Remoting::Channels::IChannel* chnl, bool ensureSecurity) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "RegisterChannel", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Channels::IChannel*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, chnl, ensureSecurity);
}
inline void System::Runtime::Remoting::Channels::ChannelServices::RegisterChannelConfig(::System::Runtime::Remoting::ChannelData* channel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "RegisterChannelConfig", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ChannelData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, channel);
}
inline ::System::Object* System::Runtime::Remoting::Channels::ChannelServices::CreateProvider(::System::Runtime::Remoting::ProviderData* prov) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "CreateProvider", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ProviderData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, prov);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Channels::ChannelServices::SyncDispatchMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "SyncDispatchMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(nullptr, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::ReturnMessage* System::Runtime::Remoting::Channels::ChannelServices::CheckIncomingMessage(::System::Runtime::Remoting::Messaging::IMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "CheckIncomingMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::ReturnMessage*, false>(nullptr, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Channels::ChannelServices::CheckReturnMessage(::System::Runtime::Remoting::Messaging::IMessage* callMsg,
                                                                                                                                  ::System::Runtime::Remoting::Messaging::IMessage* retMsg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "CheckReturnMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessage*, false>(nullptr, ___internal_method, callMsg, retMsg);
}
inline bool System::Runtime::Remoting::Channels::ChannelServices::IsLocalCall(::System::Runtime::Remoting::Messaging::IMessage* callMsg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(), "IsLocalCall", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, callMsg);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Runtime::Remoting::Channels::ChannelServices::GetCurrentChannelInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::ChannelServices*>::get(),
                                                                             "GetCurrentChannelInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::ChannelServices::ChannelServices() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
