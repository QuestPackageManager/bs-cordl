#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Channels\CrossAppDomainChannel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__CrossAppDomainChannel_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannelReceiver_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannelSender_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.RegisterCrossAppDomainChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Runtime::Remoting::Channels::CrossAppDomainChannel::RegisterCrossAppDomainChannel)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b2dca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), { "RegisterCrossAppDomainChannel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.get_ChannelName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b3b9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.get_ChannelPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3ba18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.get_ChannelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b3ba20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.StartListening
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::StartListening)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3ba80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel.CreateMessageSink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)(::StringW, ::System::Object*, ::by_ref<::StringW>)>(
        &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::CreateMessageSink)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5b3ba84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::CrossAppDomainChannel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Channels::CrossAppDomainChannel::*)()>(
    &::System::Runtime::Remoting::Channels::CrossAppDomainChannel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b3b9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Channels::CrossAppDomainChannel::setStaticF_s_lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_lock", ::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Remoting::Channels::CrossAppDomainChannel::getStaticF_s_lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_lock", ::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>();
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainChannel::RegisterCrossAppDomainChannel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), { "RegisterCrossAppDomainChannel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelPriority() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Remoting::Channels::CrossAppDomainChannel::get_ChannelData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainChannel::StartListening(::System::Object* data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Channels::CrossAppDomainChannel::CreateMessageSink(::StringW url, ::System::Object* data,
                                                                                                                                           ::by_ref<::StringW> uri) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method, url, data, uri);
}
inline void System::Runtime::Remoting::Channels::CrossAppDomainChannel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Channels::CrossAppDomainChannel* System::Runtime::Remoting::Channels::CrossAppDomainChannel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Channels::CrossAppDomainChannel*>());
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
