#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupElementsSpawner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupElementsSpawner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupElementsSpawner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupElementsSpawner::*)()>(&::GlobalNamespace::LightGroupElementsSpawner::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586e794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupElementsSpawner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__lightPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__lightPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightPrefab;
}
constexpr void GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_set__lightPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightPrefab = value;
}
constexpr bool& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__useAlternatePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAlternatePrefab;
}
constexpr bool const& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__useAlternatePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useAlternatePrefab;
}
constexpr void GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_set__useAlternatePrefab(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useAlternatePrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__alternateLightPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternateLightPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_get__alternateLightPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alternateLightPrefab;
}
constexpr void GlobalNamespace::LightGroupElementsSpawner::__cordl_internal_set__alternateLightPrefab(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alternateLightPrefab = value;
}
inline void GlobalNamespace::LightGroupElementsSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupElementsSpawner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupElementsSpawner* GlobalNamespace::LightGroupElementsSpawner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupElementsSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupElementsSpawner::LightGroupElementsSpawner() {}
