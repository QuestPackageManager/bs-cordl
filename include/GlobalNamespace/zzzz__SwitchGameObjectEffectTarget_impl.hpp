#pragma once
// IWYU pragma private; include "GlobalNamespace/SwitchGameObjectEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__SwitchGameObjectEffectTarget_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SwitchGameObjectEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SwitchGameObjectEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e370c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectEffectTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectEffectTarget*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SwitchGameObjectEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SwitchGameObjectEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e37e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectEffectTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectEffectTarget*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectEffectTarget.SetFloat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SwitchGameObjectEffectTarget::*)(float_t)>(
    &::GlobalNamespace::SwitchGameObjectEffectTarget::SetFloat)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57e3710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectEffectTarget*>::get(), "SetFloat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SwitchGameObjectEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SwitchGameObjectEffectTarget::*)()>(
    &::GlobalNamespace::SwitchGameObjectEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e37ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectEffectTarget*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_get__gameObject01() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject01;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_get__gameObject01() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject01;
}
constexpr void GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_set__gameObject01(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObject01)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_get__gameObject02() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject02;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_get__gameObject02() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject02;
}
constexpr void GlobalNamespace::SwitchGameObjectEffectTarget::__cordl_internal_set__gameObject02(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObject02)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SwitchGameObjectEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectEffectTarget*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SwitchGameObjectEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectEffectTarget*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SwitchGameObjectEffectTarget::SetFloat(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectEffectTarget*>::get(), "SetFloat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SwitchGameObjectEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SwitchGameObjectEffectTarget*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SwitchGameObjectEffectTarget* GlobalNamespace::SwitchGameObjectEffectTarget::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SwitchGameObjectEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SwitchGameObjectEffectTarget::SwitchGameObjectEffectTarget() {}
