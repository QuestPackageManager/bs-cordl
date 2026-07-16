#pragma once
// IWYU pragma private; include "GlobalNamespace/FireworksItemPoolInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__FireworksItemPoolInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "GlobalNamespace/zzzz__FireworksController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FireworksItemPoolInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksItemPoolInstaller::*)()>(&::GlobalNamespace::FireworksItemPoolInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x597fc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworksItemPoolInstaller*>(), { ::i2c::class_of<::GlobalNamespace::FireworksItemPoolInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FireworksItemPoolInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FireworksItemPoolInstaller::*)()>(&::GlobalNamespace::FireworksItemPoolInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597fcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworksItemPoolInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FireworksController>& GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_get__fireworksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworksController;
}
constexpr ::UnityW<::GlobalNamespace::FireworksController> const& GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_get__fireworksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworksController;
}
constexpr void GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_set__fireworksController(::UnityW<::GlobalNamespace::FireworksController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fireworksController = value;
}
constexpr ::UnityW<::GlobalNamespace::FireworkItemController>& GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_get__fireworkItemControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FireworkItemController> const& GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_get__fireworkItemControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr void GlobalNamespace::FireworksItemPoolInstaller::__cordl_internal_set__fireworkItemControllerPrefab(::UnityW<::GlobalNamespace::FireworkItemController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fireworkItemControllerPrefab = value;
}
inline void GlobalNamespace::FireworksItemPoolInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FireworksItemPoolInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FireworksItemPoolInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FireworksItemPoolInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FireworksItemPoolInstaller* GlobalNamespace::FireworksItemPoolInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FireworksItemPoolInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FireworksItemPoolInstaller::FireworksItemPoolInstaller() {}
