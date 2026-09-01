#pragma once
// IWYU pragma private; include "Zenject\IInstaller.hpp"
#include "Zenject/zzzz__IInstaller_def.hpp"
//  Writing Method size for method: ::Zenject::IInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IInstaller::*)()>(&::Zenject::IInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstaller*>(), { ::i2c::class_of<::Zenject::IInstaller*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IInstaller.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Zenject::IInstaller::*)()>(&::Zenject::IInstaller::get_IsEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Zenject::IInstaller*>(), { ::i2c::class_of<::Zenject::IInstaller*>(), 1 }));
    return ___internal_method;
  }
};
inline void Zenject::IInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstaller*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Zenject::IInstaller::get_IsEnabled() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IInstaller*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
