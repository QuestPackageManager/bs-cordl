#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundLightWithId.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::BloomPrePassBackgroundLightWithId::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundLightWithId::get_color)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23f1ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                                                                               "get_color", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::BloomPrePassBackgroundLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23f1b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundLightWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundLightWithId::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23f1b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor>& GlobalNamespace::BloomPrePassBackgroundLightWithId::__cordl_internal_get__bloomPrePassBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColor;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor> const& GlobalNamespace::BloomPrePassBackgroundLightWithId::__cordl_internal_get__bloomPrePassBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColor;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundLightWithId::__cordl_internal_set__bloomPrePassBackgroundColor(::UnityW<::GlobalNamespace::BloomPrePassBackgroundColor> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomPrePassBackgroundColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Color GlobalNamespace::BloomPrePassBackgroundLightWithId::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                                                                             "get_color", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBackgroundLightWithId::ColorWasSet(::UnityEngine::Color newColor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newColor);
}
inline ::GlobalNamespace::BloomPrePassBackgroundLightWithId* GlobalNamespace::BloomPrePassBackgroundLightWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>());
}
inline void GlobalNamespace::BloomPrePassBackgroundLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBackgroundLightWithId*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundLightWithId::BloomPrePassBackgroundLightWithId() {}
