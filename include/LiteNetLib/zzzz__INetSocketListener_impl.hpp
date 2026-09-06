#pragma once
// IWYU pragma private; include "LiteNetLib/INetSocketListener.hpp"
#include "LiteNetLib/zzzz__INetSocketListener_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::LiteNetLib::INetSocketListener.OnMessageReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::INetSocketListener::*)(::ArrayW<uint8_t>, int32_t, ::System::Net::Sockets::SocketError, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::INetSocketListener::OnMessageReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::INetSocketListener*>(), { ::i2c::class_of<::LiteNetLib::INetSocketListener*>(), 0 }));
    return ___internal_method;
  }
};
inline void LiteNetLib::INetSocketListener::OnMessageReceived(::ArrayW<uint8_t> data, int32_t length, ::System::Net::Sockets::SocketError errorCode, ::System::Net::IPEndPoint* remoteEndPoint) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::INetSocketListener*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, length, errorCode, remoteEndPoint);
}
