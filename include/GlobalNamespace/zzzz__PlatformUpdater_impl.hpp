#pragma once
// IWYU pragma private; include "GlobalNamespace\PlatformUpdater.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformUpdater_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformUpdater::*)(::OculusStudios::Platform::Core::IPlatform*)>(&::GlobalNamespace::PlatformUpdater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37798d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUpdater*>(), { ".ctor", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUpdater.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformUpdater::*)()>(&::GlobalNamespace::PlatformUpdater::Tick)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x37798d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUpdater*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::PlatformUpdater::__cordl_internal_get_platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::PlatformUpdater::__cordl_internal_get_platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platform;
}
constexpr void GlobalNamespace::PlatformUpdater::__cordl_internal_set_platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___platform = value;
}
inline void GlobalNamespace::PlatformUpdater::_ctor(::OculusStudios::Platform::Core::IPlatform* platform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUpdater*>(), { ".ctor", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform);
}
inline void GlobalNamespace::PlatformUpdater::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformUpdater*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformUpdater* GlobalNamespace::PlatformUpdater::New_ctor(::OculusStudios::Platform::Core::IPlatform* platform) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformUpdater*>(platform));
}
/// @brief Convert operator to "::Zenject::ITickable"
constexpr GlobalNamespace::PlatformUpdater::operator ::Zenject::ITickable*() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::PlatformUpdater::i___Zenject__ITickable() noexcept {
  return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformUpdater::PlatformUpdater() {}
