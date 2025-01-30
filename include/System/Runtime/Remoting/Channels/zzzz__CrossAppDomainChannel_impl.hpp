#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/CrossAppDomainChannel.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannelReceiver_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannelSender_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainChannel_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.RegisterCrossAppDomainChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Runtime::Remoting::Channels::CrossAppDomainChannel::RegisterCrossAppDomainChannel)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3cd60f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(),
                                                 "RegisterCrossAppDomainChannel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.get_ChannelName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3ce4a54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.get_ChannelPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce4a94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.get_ChannelData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3ce4a9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.StartListening
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::StartListening)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ce4b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.CreateMessageSink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)(::StringW, ::System::Object*, ::ByRef<::StringW>)>(
        &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::CreateMessageSink)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3ce4b04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ce4a4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Channels::CrossAppDomainChannel::setStaticF_s_lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Remoting::Channels::CrossAppDomainChannel::getStaticF_s_lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get>();
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainChannel::RegisterCrossAppDomainChannel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(),
                                               "RegisterCrossAppDomainChannel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelPriority() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainChannel::StartListening(::System::Object* data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Channels::CrossAppDomainChannel::CreateMessageSink(::StringW url, ::System::Object* data,
                                                                                                                                           ::ByRef<::StringW> uri) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(this, ___internal_method, url, data, uri);
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainChannel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Channels::CrossAppDomainChannel* System::Runtime::Remoting::Channels::CrossAppDomainChannel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>());
}
/// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannel"
constexpr System::Runtime::Remoting::Channels::CrossAppDomainChannel::operator ::System::Runtime::Remoting::Channels::IChannel*() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Channels::IChannel"
constexpr ::System::Runtime::Remoting::Channels::IChannel* System::Runtime::Remoting::Channels::CrossAppDomainChannel::i___System__Runtime__Remoting__Channels__IChannel() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannelSender"
constexpr System::Runtime::Remoting::Channels::CrossAppDomainChannel::operator ::System::Runtime::Remoting::Channels::IChannelSender*() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannelSender*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Channels::IChannelSender"
constexpr ::System::Runtime::Remoting::Channels::IChannelSender* System::Runtime::Remoting::Channels::CrossAppDomainChannel::i___System__Runtime__Remoting__Channels__IChannelSender() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannelSender*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannelReceiver"
constexpr System::Runtime::Remoting::Channels::CrossAppDomainChannel::operator ::System::Runtime::Remoting::Channels::IChannelReceiver*() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannelReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Channels::IChannelReceiver"
constexpr ::System::Runtime::Remoting::Channels::IChannelReceiver* System::Runtime::Remoting::Channels::CrossAppDomainChannel::i___System__Runtime__Remoting__Channels__IChannelReceiver() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannelReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Channels::CrossAppDomainChannel::CrossAppDomainChannel() {}
