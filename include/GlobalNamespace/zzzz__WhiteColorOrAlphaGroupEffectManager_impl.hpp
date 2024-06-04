#pragma once
// IWYU pragma private; include "GlobalNamespace/WhiteColorOrAlphaGroupEffectManager.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(
    &::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::Start)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x26e0868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(
    &::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x26e0ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::*)()>(
    &::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26e0c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*>&
GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> const&
GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr void
GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_set__lightGroup(::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*&
GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__whiteColorOrAlphaEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whiteColorOrAlphaEffects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>*> const&
GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_get__whiteColorOrAlphaEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whiteColorOrAlphaEffects;
}
constexpr void
GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::__cordl_internal_set__whiteColorOrAlphaEffects(::System::Collections::Generic::List_1<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____whiteColorOrAlphaEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager* GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>());
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WhiteColorOrAlphaGroupEffectManager::WhiteColorOrAlphaGroupEffectManager() {}
