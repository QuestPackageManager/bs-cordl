#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColorsGradientTintColorWithLightIds.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientTintColorWithLightIds_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39eefa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39eefc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>&
GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__cordl_internal_get__bloomPrePassBackgroundColorsGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> const&
GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__cordl_internal_get__bloomPrePassBackgroundColorsGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__cordl_internal_set__bloomPrePassBackgroundColorsGradient(
    ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassBackgroundColorsGradient)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds* GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::BloomPrePassBackgroundColorsGradientTintColorWithLightIds() {}
