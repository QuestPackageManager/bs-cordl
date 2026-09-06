#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/IClientChannelSinkProvider.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IClientChannelSinkProvider_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IClientChannelSinkProvider.set_Next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Channels::IClientChannelSinkProvider::*)(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*)>(
    &::System::Runtime::Remoting::Channels::IClientChannelSinkProvider::set_Next)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Channels::IClientChannelSinkProvider::set_Next(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
