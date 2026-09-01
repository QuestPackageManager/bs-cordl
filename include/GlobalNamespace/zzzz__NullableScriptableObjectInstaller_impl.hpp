#pragma once
// IWYU pragma private; include "GlobalNamespace\NullableScriptableObjectInstaller.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__NullableScriptableObjectInstaller_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullableScriptableObjectInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullableScriptableObjectInstaller::*)()>(&::GlobalNamespace::NullableScriptableObjectInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6e5c570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableScriptableObjectInstaller*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NullableScriptableObjectInstaller*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableScriptableObjectInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullableScriptableObjectInstaller::*)()>(&::GlobalNamespace::NullableScriptableObjectInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e5c610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableScriptableObjectInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Zenject::ScriptableObjectInstaller>& GlobalNamespace::NullableScriptableObjectInstaller::__cordl_internal_get__installer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installer;
}
constexpr ::UnityW<::Zenject::ScriptableObjectInstaller> const& GlobalNamespace::NullableScriptableObjectInstaller::__cordl_internal_get__installer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____installer;
}
constexpr void GlobalNamespace::NullableScriptableObjectInstaller::__cordl_internal_set__installer(::UnityW<::Zenject::ScriptableObjectInstaller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____installer = value;
}
inline void GlobalNamespace::NullableScriptableObjectInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NullableScriptableObjectInstaller*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NullableScriptableObjectInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableScriptableObjectInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NullableScriptableObjectInstaller* GlobalNamespace::NullableScriptableObjectInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullableScriptableObjectInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullableScriptableObjectInstaller::NullableScriptableObjectInstaller() {}
