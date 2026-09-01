#pragma once
// IWYU pragma private; include "GlobalNamespace\ZenjectExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ZenjectExtensions_def.hpp"
#include "GlobalNamespace/zzzz__ZenjectExtensions_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
template <typename T> constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
template <typename T> constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
template <typename T> constexpr void GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::__cordl_internal_set_parent(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parent = value;
}
template <typename T> inline void GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::_InstantiatePrefabForComponentAt_b__0(::Zenject::InjectContext* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>*>(),
                                                                                         { "<InstantiatePrefabForComponentAt>b__0", {}, { ::i2c::type_of<::Zenject::InjectContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, _);
}
template <typename T> inline ::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>* GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::ZenjectExtensions___c__DisplayClass0_0_1() {}
template <typename T>
inline T GlobalNamespace::ZenjectExtensions::InstantiatePrefabForComponentAt(::Zenject::DiContainer* container, ::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position,
                                                                             ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ZenjectExtensions*>(),
                                                           { "InstantiatePrefabForComponentAt",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, container, prefab, position, rotation, parent);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZenjectExtensions::ZenjectExtensions() {}
