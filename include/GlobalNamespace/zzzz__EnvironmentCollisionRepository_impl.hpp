#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentCollisionRepository.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentCollisionRepository_def.hpp"
#include "GlobalNamespace/zzzz__ColliderEventEffect_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnvironmentCollisionRepository.RegisterColliderEventEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentCollisionRepository::*)(::GlobalNamespace::ColliderEventEffect*)>(
    &::GlobalNamespace::EnvironmentCollisionRepository::RegisterColliderEventEffect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3b9d720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCollisionRepository*>::get(), "RegisterColliderEventEffect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColliderEventEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentCollisionRepository.TryGetColliderEventEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::EnvironmentCollisionRepository::*)(
    ::UnityEngine::Collider*, ::ByRef<::GlobalNamespace::ColliderEventEffect*>)>(&::GlobalNamespace::EnvironmentCollisionRepository::TryGetColliderEventEffect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3b9d798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCollisionRepository*>::get(), "TryGetColliderEventEffect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::ColliderEventEffect*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentCollisionRepository._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentCollisionRepository::*)()>(
    &::GlobalNamespace::EnvironmentCollisionRepository::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3b9d850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCollisionRepository*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EnvironmentCollisionRepository::RegisterColliderEventEffect(::GlobalNamespace::ColliderEventEffect* colliderEventEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCollisionRepository*>::get(), "RegisterColliderEventEffect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColliderEventEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colliderEventEffect);
}
inline bool GlobalNamespace::EnvironmentCollisionRepository::TryGetColliderEventEffect(::UnityEngine::Collider* collider, ::ByRef<::GlobalNamespace::ColliderEventEffect*> colliderEventEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCollisionRepository*>::get(), "TryGetColliderEventEffect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Collider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::ColliderEventEffect*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, collider, colliderEventEffect);
}
inline void GlobalNamespace::EnvironmentCollisionRepository::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentCollisionRepository*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentCollisionRepository* GlobalNamespace::EnvironmentCollisionRepository::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentCollisionRepository*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentCollisionRepository::EnvironmentCollisionRepository() {}
