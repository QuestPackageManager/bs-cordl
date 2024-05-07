#pragma once
// IWYU pragma private; include "GlobalNamespace/ThreadStaticPacketPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ThreadStaticPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
template <typename T> inline ::GlobalNamespace::PacketPool_1<T>* GlobalNamespace::ThreadStaticPacketPool_1<T>::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ThreadStaticPacketPool_1<T>*>::get(), "get_pool",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<T>*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ThreadStaticPacketPool_1<T>::ThreadStaticPacketPool_1() {}
