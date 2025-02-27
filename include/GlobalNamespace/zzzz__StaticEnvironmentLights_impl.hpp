#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticEnvironmentLights.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StaticEnvironmentLights_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticEnvironmentLights.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticEnvironmentLights::*)()>(&::GlobalNamespace::StaticEnvironmentLights::Awake)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3bad028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticEnvironmentLights._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticEnvironmentLights::*)()>(&::GlobalNamespace::StaticEnvironmentLights::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bad0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& GlobalNamespace::StaticEnvironmentLights::__cordl_internal_get__lightColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColors;
}
constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& GlobalNamespace::StaticEnvironmentLights::__cordl_internal_get__lightColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightColors;
}
constexpr void GlobalNamespace::StaticEnvironmentLights::__cordl_internal_set__lightColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightColors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& GlobalNamespace::StaticEnvironmentLights::__cordl_internal_get__materials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& GlobalNamespace::StaticEnvironmentLights::__cordl_internal_get__materials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materials;
}
constexpr void GlobalNamespace::StaticEnvironmentLights::__cordl_internal_set__materials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::StaticEnvironmentLights::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StaticEnvironmentLights::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticEnvironmentLights*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StaticEnvironmentLights* GlobalNamespace::StaticEnvironmentLights::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StaticEnvironmentLights*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticEnvironmentLights::StaticEnvironmentLights() {}
