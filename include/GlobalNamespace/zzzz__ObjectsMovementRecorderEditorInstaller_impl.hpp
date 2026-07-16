#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectsMovementRecorderEditorInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectsMovementRecorderEditorInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorderEditorInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorderEditorInstaller::*)()>(
    &::GlobalNamespace::ObjectsMovementRecorderEditorInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e69a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderEditorInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderEditorInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectsMovementRecorderEditorInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectsMovementRecorderEditorInstaller::*)()>(&::GlobalNamespace::ObjectsMovementRecorderEditorInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e69ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderEditorInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ObjectsMovementRecorderEditorInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderEditorInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectsMovementRecorderEditorInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObjectsMovementRecorderEditorInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObjectsMovementRecorderEditorInstaller* GlobalNamespace::ObjectsMovementRecorderEditorInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObjectsMovementRecorderEditorInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectsMovementRecorderEditorInstaller::ObjectsMovementRecorderEditorInstaller() {}
