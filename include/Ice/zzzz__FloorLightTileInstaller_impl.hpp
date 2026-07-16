#pragma once
// IWYU pragma private; include "Ice/FloorLightTileInstaller.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "Ice/zzzz__FloorLightTileInstaller_def.hpp"
#include "Ice/zzzz__FloorLightTile_def.hpp"
//  Writing Method size for method: ::Ice::FloorLightTileInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTileInstaller::*)()>(&::Ice::FloorLightTileInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x328916c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Ice::FloorLightTileInstaller*>(), { ::i2c::class_of<::Ice::FloorLightTileInstaller*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTileInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTileInstaller::*)()>(&::Ice::FloorLightTileInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32891f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTileInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Ice::FloorLightTile>& Ice::FloorLightTileInstaller::__cordl_internal_get__floorLightTilePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilePrefab;
}
constexpr ::UnityW<::Ice::FloorLightTile> const& Ice::FloorLightTileInstaller::__cordl_internal_get__floorLightTilePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorLightTilePrefab;
}
constexpr void Ice::FloorLightTileInstaller::__cordl_internal_set__floorLightTilePrefab(::UnityW<::Ice::FloorLightTile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorLightTilePrefab = value;
}
inline void Ice::FloorLightTileInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Ice::FloorLightTileInstaller*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::FloorLightTileInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTileInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ice::FloorLightTileInstaller* Ice::FloorLightTileInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ice::FloorLightTileInstaller*>());
}
// Ctor Parameters []
constexpr ::Ice::FloorLightTileInstaller::FloorLightTileInstaller() {}
