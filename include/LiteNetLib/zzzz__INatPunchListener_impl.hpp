#pragma once
// IWYU pragma private; include "LiteNetLib/INatPunchListener.hpp"
#include "LiteNetLib/zzzz__INatPunchListener_def.hpp"
#include "LiteNetLib/zzzz__NatAddressType_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
//  Writing Method size for method: ::LiteNetLib::INatPunchListener.OnNatIntroductionRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::INatPunchListener::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW)>(
    &::LiteNetLib::INatPunchListener::OnNatIntroductionRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::INatPunchListener*>(), { ::i2c::class_of<::LiteNetLib::INatPunchListener*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::INatPunchListener.OnNatIntroductionSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::INatPunchListener::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NatAddressType, ::StringW)>(
    &::LiteNetLib::INatPunchListener::OnNatIntroductionSuccess)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::INatPunchListener*>(), { ::i2c::class_of<::LiteNetLib::INatPunchListener*>(), 1 }));
    return ___internal_method;
  }
};
inline void LiteNetLib::INatPunchListener::OnNatIntroductionRequest(::System::Net::IPEndPoint* localEndPoint, ::System::Net::IPEndPoint* remoteEndPoint, ::StringW token) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::INatPunchListener*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localEndPoint, remoteEndPoint, token);
}
inline void LiteNetLib::INatPunchListener::OnNatIntroductionSuccess(::System::Net::IPEndPoint* targetEndPoint, ::LiteNetLib::NatAddressType type, ::StringW token) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::INatPunchListener*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetEndPoint, type, token);
}
