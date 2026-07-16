#pragma once
// IWYU pragma private; include "GlobalNamespace/RpcPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RpcPool_def.hpp"
#include "GlobalNamespace/zzzz__IRemoteProcedureCall_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RpcPool.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IRemoteProcedureCall*)>(&::GlobalNamespace::RpcPool::Release)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x333e3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcPool*>(), { "Release", {}, { ::i2c::type_of<::GlobalNamespace::IRemoteProcedureCall*>() } })));
    return ___internal_method;
  }
};
template <typename T> inline T GlobalNamespace::RpcPool::Obtain() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcPool*>(), { "Obtain", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::RpcPool::Fill() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcPool*>(), { "Fill", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::RpcPool::Release(::GlobalNamespace::IRemoteProcedureCall* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RpcPool*>(), { "Release", {}, { ::i2c::type_of<::GlobalNamespace::IRemoteProcedureCall*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RpcPool::RpcPool() {}
