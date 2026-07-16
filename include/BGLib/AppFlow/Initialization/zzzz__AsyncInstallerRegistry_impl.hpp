#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncInstallerRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstallerRegistry_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IInstaller_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry.AddInstaller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)(::Zenject::IInstaller*)>(
    &::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddInstaller)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3306d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(), { "AddInstaller", {}, { ::i2c::type_of<::Zenject::IInstaller*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)()>(&::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3306e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Zenject::IInstaller*>*& BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_get_installers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installers;
}
constexpr ::System::Collections::Generic::List_1<::Zenject::IInstaller*>* const& BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_get_installers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___installers;
}
constexpr void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__cordl_internal_set_installers(::System::Collections::Generic::List_1<::Zenject::IInstaller*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___installers = value;
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddInstaller(::Zenject::IInstaller* newInstaller) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(), { "AddInstaller", {}, { ::i2c::type_of<::Zenject::IInstaller*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newInstaller);
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* BGLib::AppFlow::Initialization::AsyncInstallerRegistry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>());
}
/// @brief Convert operator to "::BGLib::AppFlow::Initialization::IInstallerRegistry"
constexpr BGLib::AppFlow::Initialization::AsyncInstallerRegistry::operator ::BGLib::AppFlow::Initialization::IInstallerRegistry*() noexcept {
  return static_cast<::BGLib::AppFlow::Initialization::IInstallerRegistry*>(static_cast<void*>(this));
}
/// @brief Convert to "::BGLib::AppFlow::Initialization::IInstallerRegistry"
constexpr ::BGLib::AppFlow::Initialization::IInstallerRegistry* BGLib::AppFlow::Initialization::AsyncInstallerRegistry::i___BGLib__AppFlow__Initialization__IInstallerRegistry() noexcept {
  return static_cast<::BGLib::AppFlow::Initialization::IInstallerRegistry*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AsyncInstallerRegistry() {}
