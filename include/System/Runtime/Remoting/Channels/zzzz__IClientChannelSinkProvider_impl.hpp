#pragma once
#include "System/Runtime/Remoting/Channels/zzzz__IClientChannelSinkProvider_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Channels::IClientChannelSinkProvider.set_Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Channels::IClientChannelSinkProvider::*)(
    ::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*)>(&::System::Runtime::Remoting::Channels::IClientChannelSinkProvider::set_Next)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::Channels::IClientChannelSinkProvider::set_Next(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
