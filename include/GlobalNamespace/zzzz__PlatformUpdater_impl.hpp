#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformUpdater.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformUpdater_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformUpdater::*)(::OculusStudios::Platform::Core::IPlatform*)>(
    &::GlobalNamespace::PlatformUpdater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3678bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::IPlatform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUpdater.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformUpdater::*)()>(&::GlobalNamespace::PlatformUpdater::Tick)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3678bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUpdater*>::get(), "Tick",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___platform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlatformUpdater::_ctor(::OculusStudios::Platform::Core::IPlatform* platform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::IPlatform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platform);
}
inline void GlobalNamespace::PlatformUpdater::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUpdater*>::get(), "Tick",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformUpdater* GlobalNamespace::PlatformUpdater::New_ctor(::OculusStudios::Platform::Core::IPlatform* platform) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlatformUpdater*>(platform));
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
