#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetConstants_def.hpp"
inline void LiteNetLib::NetConstants::setStaticF_PossibleMtu(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "PossibleMtu", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConstants*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> LiteNetLib::NetConstants::getStaticF_PossibleMtu() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "PossibleMtu", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConstants*>::get>();
}
inline void LiteNetLib::NetConstants::setStaticF_MaxPacketSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaxPacketSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConstants*>::get>(std::forward<int32_t>(value));
}
inline int32_t LiteNetLib::NetConstants::getStaticF_MaxPacketSize() {
  return ::cordl_internals::getStaticField<int32_t, "MaxPacketSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetConstants*>::get>();
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetConstants::NetConstants() {}
