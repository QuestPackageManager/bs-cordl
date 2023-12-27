#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffectManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(
    &::GlobalNamespace::BufferedLightColorGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x23a7e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                                                                               "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(
    &::GlobalNamespace::BufferedLightColorGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23a8004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffectManager::*)()>(
    &::GlobalNamespace::BufferedLightColorGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a8060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*>& GlobalNamespace::BufferedLightColorGroupEffectManager::__get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroups;
}
constexpr ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> const& GlobalNamespace::BufferedLightColorGroupEffectManager::__get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroups;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__lightGroups(::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>&
GlobalNamespace::BufferedLightColorGroupEffectManager::__get__materialPropertyBlockControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const&
GlobalNamespace::BufferedLightColorGroupEffectManager::__get__materialPropertyBlockControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__materialPropertyBlockControllers(
    ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::BufferedLightColorGroupEffectManager::__get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& GlobalNamespace::BufferedLightColorGroupEffectManager::__get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*>&
GlobalNamespace::BufferedLightColorGroupEffectManager::__get__bufferedLightColorGroupEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bufferedLightColorGroupEffects;
}
constexpr ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*> const&
GlobalNamespace::BufferedLightColorGroupEffectManager::__get__bufferedLightColorGroupEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bufferedLightColorGroupEffects;
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffectManager::__set__bufferedLightColorGroupEffects(
    ::ArrayW<::GlobalNamespace::BufferedLightColorGroupEffect*, ::Array<::GlobalNamespace::BufferedLightColorGroupEffect*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bufferedLightColorGroupEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BufferedLightColorGroupEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                                                                             "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BufferedLightColorGroupEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BufferedLightColorGroupEffectManager* GlobalNamespace::BufferedLightColorGroupEffectManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BufferedLightColorGroupEffectManager*>());
}
inline void GlobalNamespace::BufferedLightColorGroupEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffectManager*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BufferedLightColorGroupEffectManager::BufferedLightColorGroupEffectManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
