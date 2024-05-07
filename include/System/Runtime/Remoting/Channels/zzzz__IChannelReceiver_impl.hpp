#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/IChannelReceiver.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannelReceiver_def.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IChannel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IChannelReceiver.get_ChannelData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Channels::IChannelReceiver::*)()>(
    &::System::Runtime::Remoting::Channels::IChannelReceiver::get_ChannelData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IChannelReceiver.StartListening
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::IChannelReceiver::*)(::System::Object*)>(
    &::System::Runtime::Remoting::Channels::IChannelReceiver::StartListening)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IChannelReceiver*>::get(), 1));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::Channels::IChannel"
constexpr System::Runtime::Remoting::Channels::IChannelReceiver::operator ::System::Runtime::Remoting::Channels::IChannel*() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Remoting::Channels::IChannel"
constexpr ::System::Runtime::Remoting::Channels::IChannel* System::Runtime::Remoting::Channels::IChannelReceiver::i___System__Runtime__Remoting__Channels__IChannel() noexcept {
  return static_cast<::System::Runtime::Remoting::Channels::IChannel*>(static_cast<void*>(this));
}
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
