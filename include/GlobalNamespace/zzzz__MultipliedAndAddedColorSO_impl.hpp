#pragma once
#include "GlobalNamespace/zzzz__ColorSO_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MultipliedAndAddedColorSO_def.hpp"
#include "GlobalNamespace/zzzz__SimpleColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultipliedAndAddedColorSO.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::MultipliedAndAddedColorSO::*)()>(
    &::GlobalNamespace::MultipliedAndAddedColorSO::get_color)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x125b760;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipliedAndAddedColorSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipliedAndAddedColorSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultipliedAndAddedColorSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultipliedAndAddedColorSO::*)()>(&::GlobalNamespace::MultipliedAndAddedColorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x125b7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipliedAndAddedColorSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SimpleColorSO>& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__baseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColor;
}
constexpr ::UnityW<::GlobalNamespace::SimpleColorSO> const& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__baseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColor;
}
constexpr void GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_set__baseColor(::UnityW<::GlobalNamespace::SimpleColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____baseColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__multiplierColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__multiplierColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierColor;
}
constexpr void GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_set__multiplierColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplierColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__addColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_get__addColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addColor;
}
constexpr void GlobalNamespace::MultipliedAndAddedColorSO::__cordl_internal_set__addColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addColor = value;
}
inline ::UnityEngine::Color GlobalNamespace::MultipliedAndAddedColorSO::get_color() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipliedAndAddedColorSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultipliedAndAddedColorSO* GlobalNamespace::MultipliedAndAddedColorSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultipliedAndAddedColorSO*>());
}
inline void GlobalNamespace::MultipliedAndAddedColorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipliedAndAddedColorSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultipliedAndAddedColorSO::MultipliedAndAddedColorSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
