#pragma once
#include "GlobalNamespace/zzzz__ColorSO_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MultipliedColorSO_def.hpp"
#include "GlobalNamespace/zzzz__SimpleColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultipliedColorSO.get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::MultipliedColorSO::*)()>(&::GlobalNamespace::MultipliedColorSO::get_color)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x122d948;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipliedColorSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipliedColorSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultipliedColorSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultipliedColorSO::*)()>(&::GlobalNamespace::MultipliedColorSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122d998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipliedColorSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SimpleColorSO*& GlobalNamespace::MultipliedColorSO::__get__baseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____baseColor;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleColorSO*> const& GlobalNamespace::MultipliedColorSO::__get__baseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____baseColor;
}
constexpr void GlobalNamespace::MultipliedColorSO::__set__baseColor(::GlobalNamespace::SimpleColorSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____baseColor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultipliedColorSO::__get__multiplierColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplierColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultipliedColorSO::__get__multiplierColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplierColor;
}
constexpr void GlobalNamespace::MultipliedColorSO::__set__multiplierColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____multiplierColor = value;
}
inline ::UnityEngine::Color GlobalNamespace::MultipliedColorSO::get_color() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipliedColorSO*>::get(), "get_color",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultipliedColorSO* GlobalNamespace::MultipliedColorSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultipliedColorSO*>());
}
inline void GlobalNamespace::MultipliedColorSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultipliedColorSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultipliedColorSO::MultipliedColorSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
