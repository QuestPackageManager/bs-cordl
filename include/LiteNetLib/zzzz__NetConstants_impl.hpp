#pragma once
// IWYU pragma private; include "LiteNetLib/NetConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetConstants_def.hpp"
inline void LiteNetLib::NetConstants::setStaticF_PossibleMtu(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "PossibleMtu", ::LiteNetLib::NetConstants*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> LiteNetLib::NetConstants::getStaticF_PossibleMtu() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "PossibleMtu", ::LiteNetLib::NetConstants*>();
}
inline void LiteNetLib::NetConstants::setStaticF_MaxPacketSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaxPacketSize", ::LiteNetLib::NetConstants*>(std::forward<int32_t>(value));
}
inline int32_t LiteNetLib::NetConstants::getStaticF_MaxPacketSize() {
  return ::cordl_internals::getStaticField<int32_t, "MaxPacketSize", ::LiteNetLib::NetConstants*>();
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetConstants::NetConstants() {}
