#pragma once
// IWYU pragma private; include "GlobalNamespace/SwitchGameObjectArrayEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__SwitchGameObjectArrayEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__SwitchGameObjectArrayEffectTarget_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "threshold", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation::SwitchGameObjectArrayEffectTarget_GameObjectActivation(float_t threshold,
                                                                                                                                            ::UnityW<::UnityEngine::GameObject> gameObject) noexcept {
  this->threshold = threshold;
  this->gameObject = gameObject;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation::SwitchGameObjectArrayEffectTarget_GameObjectActivation() {}
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectArrayEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SwitchGameObjectArrayEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SwitchGameObjectArrayEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x577cda8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectArrayEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SwitchGameObjectArrayEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SwitchGameObjectArrayEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x577ce5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectArrayEffectTarget.SetFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SwitchGameObjectArrayEffectTarget::*)(float_t)>(
    &::GlobalNamespace::SwitchGameObjectArrayEffectTarget::SetFloat)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x577cdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>::get(), "SetFloat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectArrayEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SwitchGameObjectArrayEffectTarget::*)()>(
    &::GlobalNamespace::SwitchGameObjectArrayEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x577ce60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, ::Array<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation>*>&
GlobalNamespace::SwitchGameObjectArrayEffectTarget::__cordl_internal_get_gameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjects;
}
constexpr ::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, ::Array<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation>*> const&
GlobalNamespace::SwitchGameObjectArrayEffectTarget::__cordl_internal_get_gameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjects;
}
constexpr void GlobalNamespace::SwitchGameObjectArrayEffectTarget::__cordl_internal_set_gameObjects(
    ::ArrayW<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation, ::Array<::GlobalNamespace::SwitchGameObjectArrayEffectTarget_GameObjectActivation>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SwitchGameObjectArrayEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SwitchGameObjectArrayEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SwitchGameObjectArrayEffectTarget::SetFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>::get(), "SetFloat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SwitchGameObjectArrayEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SwitchGameObjectArrayEffectTarget* GlobalNamespace::SwitchGameObjectArrayEffectTarget::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SwitchGameObjectArrayEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SwitchGameObjectArrayEffectTarget::SwitchGameObjectArrayEffectTarget() {}
