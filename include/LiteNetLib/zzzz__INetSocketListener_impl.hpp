#pragma once
#include "LiteNetLib/zzzz__INetSocketListener_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
//  Writing Method size for method: ::LiteNetLib::INetSocketListener.OnMessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::INetSocketListener::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::System::Net::Sockets::SocketError, ::System::Net::IPEndPoint*)>(&::LiteNetLib::INetSocketListener::OnMessageReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::INetSocketListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::INetSocketListener*>::get(), 0));
    return ___internal_method;
  }
};
inline void LiteNetLib::INetSocketListener::OnMessageReceived(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length, ::System::Net::Sockets::SocketError errorCode,
                                                              ::System::Net::IPEndPoint* remoteEndPoint) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::INetSocketListener*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, length, errorCode, remoteEndPoint);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
