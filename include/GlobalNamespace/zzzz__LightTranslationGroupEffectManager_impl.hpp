#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffectManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffectManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffectManager::*)()>(
    &::GlobalNamespace::LightTranslationGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x23abb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffectManager::*)()>(
    &::GlobalNamespace::LightTranslationGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x23abf78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffectManager::*)()>(
    &::GlobalNamespace::LightTranslationGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23ac0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::LightTranslationGroup*, ::Array<::GlobalNamespace::LightTranslationGroup*>*>&
GlobalNamespace::LightTranslationGroupEffectManager::__get__lightTranslationGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationGroups;
}
constexpr ::ArrayW<::GlobalNamespace::LightTranslationGroup*, ::Array<::GlobalNamespace::LightTranslationGroup*>*> const&
GlobalNamespace::LightTranslationGroupEffectManager::__get__lightTranslationGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationGroups;
}
constexpr void
GlobalNamespace::LightTranslationGroupEffectManager::__set__lightTranslationGroups(::ArrayW<::GlobalNamespace::LightTranslationGroup*, ::Array<::GlobalNamespace::LightTranslationGroup*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightTranslationGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::LightTranslationGroupEffectManager::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& GlobalNamespace::LightTranslationGroupEffectManager::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::LightTranslationGroupEffectManager::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*& GlobalNamespace::LightTranslationGroupEffectManager::__get__lightTranslationGroupEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationGroupEffects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*> const&
GlobalNamespace::LightTranslationGroupEffectManager::__get__lightTranslationGroupEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationGroupEffects;
}
constexpr void
GlobalNamespace::LightTranslationGroupEffectManager::__set__lightTranslationGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightTranslationGroupEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LightTranslationGroupEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightTranslationGroupEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightTranslationGroupEffectManager* GlobalNamespace::LightTranslationGroupEffectManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightTranslationGroupEffectManager*>());
}
inline void GlobalNamespace::LightTranslationGroupEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffectManager*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationGroupEffectManager::LightTranslationGroupEffectManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
