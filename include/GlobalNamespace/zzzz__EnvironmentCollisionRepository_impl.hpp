#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentCollisionRepository.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentCollisionRepository_def.hpp"
#include "GlobalNamespace/zzzz__ColliderEventEffect_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentCollisionRepository.RegisterColliderEventEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentCollisionRepository::*)(::GlobalNamespace::ColliderEventEffect*)>(
    &::GlobalNamespace::EnvironmentCollisionRepository::RegisterColliderEventEffect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x599a394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentCollisionRepository*>(),
                                                                                           { "RegisterColliderEventEffect", {}, { ::i2c::type_of<::GlobalNamespace::ColliderEventEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentCollisionRepository.TryGetColliderEventEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::EnvironmentCollisionRepository::*)(::UnityEngine::Collider*, ::by_ref<::GlobalNamespace::ColliderEventEffect*>)>(
    &::GlobalNamespace::EnvironmentCollisionRepository::TryGetColliderEventEffect)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x599a424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentCollisionRepository*>(),
                                         { "TryGetColliderEventEffect", {}, { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ColliderEventEffect*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentCollisionRepository._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnvironmentCollisionRepository::*)()>(&::GlobalNamespace::EnvironmentCollisionRepository::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x599a4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentCollisionRepository*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::GlobalNamespace::ColliderEventEffect>>*&
GlobalNamespace::EnvironmentCollisionRepository::__cordl_internal_get__colliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colliders;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::GlobalNamespace::ColliderEventEffect>>* const&
GlobalNamespace::EnvironmentCollisionRepository::__cordl_internal_get__colliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colliders;
}
constexpr void GlobalNamespace::EnvironmentCollisionRepository::__cordl_internal_set__colliders(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>, ::UnityW<::GlobalNamespace::ColliderEventEffect>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colliders = value;
}
inline void GlobalNamespace::EnvironmentCollisionRepository::RegisterColliderEventEffect(::GlobalNamespace::ColliderEventEffect* colliderEventEffect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentCollisionRepository*>(),
                                                                                         { "RegisterColliderEventEffect", {}, { ::i2c::type_of<::GlobalNamespace::ColliderEventEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colliderEventEffect);
}
inline bool GlobalNamespace::EnvironmentCollisionRepository::TryGetColliderEventEffect(::UnityEngine::Collider* collider, ::by_ref<::GlobalNamespace::ColliderEventEffect*> colliderEventEffect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentCollisionRepository*>(),
                                       { "TryGetColliderEventEffect", {}, { ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ColliderEventEffect*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collider, colliderEventEffect);
}
inline void GlobalNamespace::EnvironmentCollisionRepository::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnvironmentCollisionRepository*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentCollisionRepository* GlobalNamespace::EnvironmentCollisionRepository::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnvironmentCollisionRepository*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentCollisionRepository::EnvironmentCollisionRepository() {}
