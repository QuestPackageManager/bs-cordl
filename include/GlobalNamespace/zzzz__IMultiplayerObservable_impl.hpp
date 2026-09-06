#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerObservable.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerObservable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IMultiplayerObservable.get_offsetSyncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::IMultiplayerObservable::*)()>(&::GlobalNamespace::IMultiplayerObservable::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMultiplayerObservable*>(), { ::i2c::class_of<::GlobalNamespace::IMultiplayerObservable*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IMultiplayerObservable.get_isFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IMultiplayerObservable::*)()>(&::GlobalNamespace::IMultiplayerObservable::get_isFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IMultiplayerObservable*>(), { ::i2c::class_of<::GlobalNamespace::IMultiplayerObservable*>(), 1 }));
    return ___internal_method;
  }
};
inline int64_t GlobalNamespace::IMultiplayerObservable::get_offsetSyncTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerObservable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool GlobalNamespace::IMultiplayerObservable::get_isFailed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IMultiplayerObservable*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
