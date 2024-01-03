#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnableRendererWithLightId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableRendererWithLightId.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableRendererWithLightId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::EnableRendererWithLightId::ColorWasSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x210f21c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableRendererWithLightId*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableRendererWithLightId*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableRendererWithLightId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableRendererWithLightId::*)()>(&::GlobalNamespace::EnableRendererWithLightId::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x210f260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableRendererWithLightId*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Renderer*& GlobalNamespace::EnableRendererWithLightId::__get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& GlobalNamespace::EnableRendererWithLightId::__get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr void GlobalNamespace::EnableRendererWithLightId::__set__renderer(::UnityEngine::Renderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::EnableRendererWithLightId::__get__hideAlphaRangeMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMin;
}
constexpr float_t const& GlobalNamespace::EnableRendererWithLightId::__get__hideAlphaRangeMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMin;
}
constexpr void GlobalNamespace::EnableRendererWithLightId::__set__hideAlphaRangeMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideAlphaRangeMin = value;
}
constexpr float_t& GlobalNamespace::EnableRendererWithLightId::__get__hideAlphaRangeMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMax;
}
constexpr float_t const& GlobalNamespace::EnableRendererWithLightId::__get__hideAlphaRangeMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMax;
}
constexpr void GlobalNamespace::EnableRendererWithLightId::__set__hideAlphaRangeMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideAlphaRangeMax = value;
}
inline void GlobalNamespace::EnableRendererWithLightId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableRendererWithLightId*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::EnableRendererWithLightId* GlobalNamespace::EnableRendererWithLightId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnableRendererWithLightId*>());
}
inline void GlobalNamespace::EnableRendererWithLightId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableRendererWithLightId*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnableRendererWithLightId::EnableRendererWithLightId() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
