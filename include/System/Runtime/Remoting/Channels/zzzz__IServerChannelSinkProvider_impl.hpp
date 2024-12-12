#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/IServerChannelSinkProvider.hpp"
#include "System/Runtime/Remoting/Channels/zzzz__IServerChannelSinkProvider_def.hpp"
inline void System::Runtime::Remoting::Channels::IServerChannelSinkProvider::set_Next(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Channels::IServerChannelSinkProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
