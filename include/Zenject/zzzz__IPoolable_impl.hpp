#pragma once
// IWYU pragma private; include "Zenject/IPoolable.hpp"
#include "Zenject/zzzz__IPoolable_def.hpp"
//  Writing Method size for method: ::Zenject::IPoolable.OnDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IPoolable::*)()>(&::Zenject::IPoolable::OnDespawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IPoolable*>(), { ::i2c::class_of<::Zenject::IPoolable*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IPoolable.OnSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IPoolable::*)()>(&::Zenject::IPoolable::OnSpawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IPoolable*>(), { ::i2c::class_of<::Zenject::IPoolable*>(), 1 }));
    return ___internal_method;
  }
};
inline void Zenject::IPoolable::OnDespawned() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPoolable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Zenject::IPoolable::OnSpawned() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IPoolable*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
