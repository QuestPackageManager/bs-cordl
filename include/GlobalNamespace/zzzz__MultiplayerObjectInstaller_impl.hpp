#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerObjectInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerObjectInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FireworkItemController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatar_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerObjectInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerObjectInstaller::*)()>(&::GlobalNamespace::MultiplayerObjectInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x59d8e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerObjectInstaller*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerObjectInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerObjectInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerObjectInstaller::*)()>(&::GlobalNamespace::MultiplayerObjectInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59d8fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerObjectInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__inEnvironmentTextsPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inEnvironmentTextsPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> const& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__inEnvironmentTextsPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inEnvironmentTextsPrefab;
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_set__inEnvironmentTextsPrefab(::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inEnvironmentTextsPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::FireworkItemController>& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__fireworkItemControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FireworkItemController> const& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__fireworkItemControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fireworkItemControllerPrefab;
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_set__fireworkItemControllerPrefab(::UnityW<::GlobalNamespace::FireworkItemController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fireworkItemControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar>& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__multiplayerResultsPyramidViewAvatarPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerResultsPyramidViewAvatarPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> const& GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_get__multiplayerResultsPyramidViewAvatarPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerResultsPyramidViewAvatarPrefab;
}
constexpr void GlobalNamespace::MultiplayerObjectInstaller::__cordl_internal_set__multiplayerResultsPyramidViewAvatarPrefab(::UnityW<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerResultsPyramidViewAvatarPrefab = value;
}
inline void GlobalNamespace::MultiplayerObjectInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerObjectInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerObjectInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerObjectInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerObjectInstaller* GlobalNamespace::MultiplayerObjectInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerObjectInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerObjectInstaller::MultiplayerObjectInstaller() {}
