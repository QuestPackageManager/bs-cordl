#pragma once
// IWYU pragma private; include "GlobalNamespace/GameObjectExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectExtensions_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameObjectExtensions.ActivateSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::GameObjectExtensions::ActivateSafe)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x35adba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectExtensions*>(), { "ActivateSafe", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectExtensions.DeactivateSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::GameObjectExtensions::DeactivateSafe)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x35adbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectExtensions*>(), { "DeactivateSafe", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameObjectExtensions::ActivateSafe(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectExtensions*>(), { "ActivateSafe", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject);
}
inline void GlobalNamespace::GameObjectExtensions::DeactivateSafe(::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectExtensions*>(), { "DeactivateSafe", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameObjectExtensions::GameObjectExtensions() {}
