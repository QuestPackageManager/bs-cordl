#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Channels\IChannel.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IChannel.get_ChannelName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Channels::IChannel::*)()>(&::System::Runtime::Remoting::Channels::IChannel::get_ChannelName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::IChannel*>(), { ::i2c::class_of<::System::Runtime::Remoting::Channels::IChannel*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IChannel.get_ChannelPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Channels::IChannel::*)()>(&::System::Runtime::Remoting::Channels::IChannel::get_ChannelPriority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::IChannel*>(), { ::i2c::class_of<::System::Runtime::Remoting::Channels::IChannel*>(), 1 }));
    return ___internal_method;
  }
};
inline ::StringW System::Runtime::Remoting::Channels::IChannel::get_ChannelName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::IChannel*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Runtime::Remoting::Channels::IChannel::get_ChannelPriority() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::IChannel*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
