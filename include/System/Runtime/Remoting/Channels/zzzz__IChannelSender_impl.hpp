#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Channels\IChannelSender.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannelSender_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IChannelSender.CreateMessageSink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (
    ::System::Runtime::Remoting::Channels::IChannelSender::*)(::StringW, ::System::Object*, ::by_ref<::StringW>)>(&::System::Runtime::Remoting::Channels::IChannelSender::CreateMessageSink)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::IChannelSender*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::IChannelSender*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Channels::IChannelSender::CreateMessageSink(::StringW url, ::System::Object* remoteChannelData,
                                                                                                                                    ::by_ref<::StringW> objectURI) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::IChannelSender*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method, url, remoteChannelData, objectURI);
}
/// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannel"
constexpr System::Runtime::Remoting::Channels::IChannelSender::operator ::System::Runtime::Remoting::Channels::IChannel*() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Channels::IChannel"
constexpr ::System::Runtime::Remoting::Channels::IChannel* System::Runtime::Remoting::Channels::IChannelSender::i___System__Runtime__Remoting__Channels__IChannel() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
