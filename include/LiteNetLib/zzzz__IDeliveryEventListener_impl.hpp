#pragma once
// IWYU pragma private; include "LiteNetLib\IDeliveryEventListener.hpp"
#include "LiteNetLib/zzzz__IDeliveryEventListener_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::IDeliveryEventListener.OnMessageDelivered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::IDeliveryEventListener::*)(::LiteNetLib::NetPeer*, ::System::Object*)>(
    &::LiteNetLib::IDeliveryEventListener::OnMessageDelivered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::IDeliveryEventListener*>(), { ::i2c::class_of<::LiteNetLib::IDeliveryEventListener*>(), 0 }));
    return ___internal_method;
  }
};
inline void LiteNetLib::IDeliveryEventListener::OnMessageDelivered(::LiteNetLib::NetPeer* peer, ::System::Object* userData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::IDeliveryEventListener*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peer, userData);
}
