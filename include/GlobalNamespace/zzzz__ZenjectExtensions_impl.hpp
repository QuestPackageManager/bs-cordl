#pragma once
// IWYU pragma private; include "GlobalNamespace/ZenjectExtensions.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->___parent, value);
}
template <typename T> inline void GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::_InstantiatePrefabForComponentAt_b__0(::Zenject::InjectContext* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>*>::get(), "<InstantiatePrefabForComponentAt>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method, _);
}
template <typename T> inline ::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>* GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ZenjectExtensions___c__DisplayClass0_0_1<T>::ZenjectExtensions___c__DisplayClass0_0_1() {}
template <typename T>
inline T GlobalNamespace::ZenjectExtensions::InstantiatePrefabForComponentAt(::Zenject::DiContainer* container, ::UnityEngine::Object* prefab, ::UnityEngine::Vector3 position,
                                                                             ::UnityEngine::Quaternion rotation, ::UnityEngine::Transform* parent) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ZenjectExtensions*>::get(), "InstantiatePrefabForComponentAt",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, container, prefab, position, rotation, parent);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZenjectExtensions::ZenjectExtensions() {}
