#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Channels\IChannelReceiver.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannelReceiver_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IChannelReceiver.get_ChannelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Channels::IChannelReceiver::*)()>(
    &::System::Runtime::Remoting::Channels::IChannelReceiver::get_ChannelData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::IChannelReceiver*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::IChannelReceiver*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IChannelReceiver.StartListening
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Channels::IChannelReceiver::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Channels::IChannelReceiver::StartListening)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::IChannelReceiver*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::IChannelReceiver*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::Runtime::Remoting::Channels::IChannelReceiver::get_ChannelData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::IChannelReceiver*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Channels::IChannelReceiver::StartListening(::System::Object* data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::IChannelReceiver*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
/// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannel"
constexpr System::Runtime::Remoting::Channels::IChannelReceiver::operator ::System::Runtime::Remoting::Channels::IChannel*() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Channels::IChannel"
constexpr ::System::Runtime::Remoting::Channels::IChannel* System::Runtime::Remoting::Channels::IChannelReceiver::i___System__Runtime__Remoting__Channels__IChannel() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
