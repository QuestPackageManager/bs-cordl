#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ThreadStaticPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
template <typename T> inline ::GlobalNamespace::PacketPool_1<T>* GlobalNamespace::ThreadStaticPacketPool_1<T>::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThreadStaticPacketPool_1<T>*>::get(), "get_pool",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<T>*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ThreadStaticPacketPool_1<T>::ThreadStaticPacketPool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
