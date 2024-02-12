#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RpcPool_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RpcPool.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::IRemoteProcedureCall*)>(&::GlobalNamespace::RpcPool::Release)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xe7f2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcPool*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRemoteProcedureCall*>::get() })));
    return ___internal_method;
  }
};
template <typename T> inline T GlobalNamespace::RpcPool::Obtain() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcPool*>::get(), "Obtain",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::RpcPool::Fill() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcPool*>::get(), "Fill",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RpcPool::Release(::GlobalNamespace::IRemoteProcedureCall* t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RpcPool*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRemoteProcedureCall*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RpcPool::RpcPool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
