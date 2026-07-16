#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AbstractAdapterInstallerSO.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AbstractAdapterInstallerSO.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AbstractAdapterInstallerSO::*)(::Zenject::DiContainer*)>(
    &::BeatSaber::AvatarCore::AbstractAdapterInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AbstractAdapterInstallerSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AbstractAdapterInstallerSO::*)()>(&::BeatSaber::AvatarCore::AbstractAdapterInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3269280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AbstractAdapterInstallerSO::InstallBindings(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void BeatSaber::AvatarCore::AbstractAdapterInstallerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::AbstractAdapterInstallerSO* BeatSaber::AvatarCore::AbstractAdapterInstallerSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AbstractAdapterInstallerSO::AbstractAdapterInstallerSO() {}
