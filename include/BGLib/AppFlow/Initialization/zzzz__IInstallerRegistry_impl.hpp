#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/IInstallerRegistry.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "Zenject/zzzz__IInstaller_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::IInstallerRegistry.AddInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::IInstallerRegistry::*)(::Zenject::IInstaller*)>(
    &::BGLib::AppFlow::Initialization::IInstallerRegistry::AddInstaller)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::IInstallerRegistry*>(),
                                                                                          { ::i2c::class_of<::BGLib::AppFlow::Initialization::IInstallerRegistry*>(), 0 }));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::IInstallerRegistry::AddInstaller(::Zenject::IInstaller* newInstaller) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::IInstallerRegistry*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newInstaller);
}
