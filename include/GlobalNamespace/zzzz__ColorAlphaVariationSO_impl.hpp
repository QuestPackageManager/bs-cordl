#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorAlphaVariationSO.hpp"
#include "GlobalNamespace/zzzz__ColorSO_impl.hpp"
#include "GlobalNamespace/zzzz__ColorAlphaVariationSO_def.hpp"
#include "GlobalNamespace/zzzz__AlphaSO_def.hpp"
#include "GlobalNamespace/zzzz__NoAlphaColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorAlphaVariationSO.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorAlphaVariationSO::*)()>(
    &::GlobalNamespace::ColorAlphaVariationSO::get_color)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26a53a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorAlphaVariationSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorAlphaVariationSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorAlphaVariationSO.get_baseColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::NoAlphaColorSO> (::GlobalNamespace::ColorAlphaVariationSO::*)()>(
    &::GlobalNamespace::ColorAlphaVariationSO::get_baseColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a53dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorAlphaVariationSO*>::get(),
                                                                               "get_baseColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorAlphaVariationSO.get_alpha
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::AlphaSO> (::GlobalNamespace::ColorAlphaVariationSO::*)()>(
    &::GlobalNamespace::ColorAlphaVariationSO::get_alpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a53e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorAlphaVariationSO*>::get(), "get_alpha",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorAlphaVariationSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorAlphaVariationSO::*)()>(&::GlobalNamespace::ColorAlphaVariationSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a53ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorAlphaVariationSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NoAlphaColorSO>& GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_get__baseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColor;
}
constexpr ::UnityW<::GlobalNamespace::NoAlphaColorSO> const& GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_get__baseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColor;
}
constexpr void GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_set__baseColor(::UnityW<::GlobalNamespace::NoAlphaColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____baseColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AlphaSO>& GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_get__alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr ::UnityW<::GlobalNamespace::AlphaSO> const& GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_get__alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr void GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_set__alpha(::UnityW<::GlobalNamespace::AlphaSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alpha)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Color GlobalNamespace::ColorAlphaVariationSO::get_color() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorAlphaVariationSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::NoAlphaColorSO> GlobalNamespace::ColorAlphaVariationSO::get_baseColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorAlphaVariationSO*>::get(), "get_baseColor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoAlphaColorSO>, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AlphaSO> GlobalNamespace::ColorAlphaVariationSO::get_alpha() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorAlphaVariationSO*>::get(), "get_alpha",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AlphaSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColorAlphaVariationSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorAlphaVariationSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorAlphaVariationSO* GlobalNamespace::ColorAlphaVariationSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorAlphaVariationSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorAlphaVariationSO::ColorAlphaVariationSO() {}
