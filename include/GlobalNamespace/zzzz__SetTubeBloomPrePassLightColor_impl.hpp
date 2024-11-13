#pragma once
// IWYU pragma private; include "GlobalNamespace/SetTubeBloomPrePassLightColor.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetTubeBloomPrePassLightColor_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetTubeBloomPrePassLightColor.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetTubeBloomPrePassLightColor::*)()>(
    &::GlobalNamespace::SetTubeBloomPrePassLightColor::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3b86a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetTubeBloomPrePassLightColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetTubeBloomPrePassLightColor::*)()>(
    &::GlobalNamespace::SetTubeBloomPrePassLightColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b86a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_set__color(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____color)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>&
GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_get__tubeLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const&
GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_get__tubeLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLights;
}
constexpr void GlobalNamespace::SetTubeBloomPrePassLightColor::__cordl_internal_set__tubeLights(
    ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>, ::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tubeLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SetTubeBloomPrePassLightColor::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SetTubeBloomPrePassLightColor* GlobalNamespace::SetTubeBloomPrePassLightColor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SetTubeBloomPrePassLightColor*>());
}
inline void GlobalNamespace::SetTubeBloomPrePassLightColor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetTubeBloomPrePassLightColor::SetTubeBloomPrePassLightColor() {}
