#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/IChannelReceiver.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_impl.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannelReceiver_def.hpp"
#include "System/zzzz__Object_def.hpp"
inline ::System::Object* System::Runtime::Remoting::Channels::IChannelReceiver::get_ChannelData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Channels::IChannelReceiver::StartListening(::System::Object* data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
/// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannel"
constexpr System::Runtime::Remoting::Channels::IChannelReceiver::operator ::System::Runtime::Remoting::Channels::IChannel*() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Channels::IChannel"
constexpr ::System::Runtime::Remoting::Channels::IChannel* System::Runtime::Remoting::Channels::IChannelReceiver::i___System__Runtime__Remoting__Channels__IChannel() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
