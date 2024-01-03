#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_MaterialManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_MaterialManager_def.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::TMPro::__TMP_MaterialManager__FallbackMaterial._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_MaterialManager__FallbackMaterial::*)()>(
    &::TMPro::__TMP_MaterialManager__FallbackMaterial::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3c460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager__FallbackMaterial*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int64_t& TMPro::__TMP_MaterialManager__FallbackMaterial::__get_fallbackID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackID;
}
constexpr int64_t const& TMPro::__TMP_MaterialManager__FallbackMaterial::__get_fallbackID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackID;
}
constexpr void TMPro::__TMP_MaterialManager__FallbackMaterial::__set_fallbackID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallbackID = value;
}
constexpr ::UnityEngine::Material*& TMPro::__TMP_MaterialManager__FallbackMaterial::__get_sourceMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& TMPro::__TMP_MaterialManager__FallbackMaterial::__get_sourceMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMaterial;
}
constexpr void TMPro::__TMP_MaterialManager__FallbackMaterial::__set_sourceMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sourceMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TMPro::__TMP_MaterialManager__FallbackMaterial::__get_sourceMaterialCRC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMaterialCRC;
}
constexpr int32_t const& TMPro::__TMP_MaterialManager__FallbackMaterial::__get_sourceMaterialCRC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMaterialCRC;
}
constexpr void TMPro::__TMP_MaterialManager__FallbackMaterial::__set_sourceMaterialCRC(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceMaterialCRC = value;
}
constexpr ::UnityEngine::Material*& TMPro::__TMP_MaterialManager__FallbackMaterial::__get_fallbackMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& TMPro::__TMP_MaterialManager__FallbackMaterial::__get_fallbackMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackMaterial;
}
constexpr void TMPro::__TMP_MaterialManager__FallbackMaterial::__set_fallbackMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fallbackMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TMPro::__TMP_MaterialManager__FallbackMaterial::__get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& TMPro::__TMP_MaterialManager__FallbackMaterial::__get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void TMPro::__TMP_MaterialManager__FallbackMaterial::__set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
inline ::TMPro::__TMP_MaterialManager__FallbackMaterial* TMPro::__TMP_MaterialManager__FallbackMaterial::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_MaterialManager__FallbackMaterial*>());
}
inline void TMPro::__TMP_MaterialManager__FallbackMaterial::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager__FallbackMaterial*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_MaterialManager__FallbackMaterial::__TMP_MaterialManager__FallbackMaterial() {}
//  Writing Method size for method: ::TMPro::__TMP_MaterialManager__MaskingMaterial._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_MaterialManager__MaskingMaterial::*)()>(
    &::TMPro::__TMP_MaterialManager__MaskingMaterial::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3a9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager__MaskingMaterial*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Material*& TMPro::__TMP_MaterialManager__MaskingMaterial::__get_baseMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& TMPro::__TMP_MaterialManager__MaskingMaterial::__get_baseMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMaterial;
}
constexpr void TMPro::__TMP_MaterialManager__MaskingMaterial::__set_baseMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& TMPro::__TMP_MaterialManager__MaskingMaterial::__get_stencilMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& TMPro::__TMP_MaterialManager__MaskingMaterial::__get_stencilMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr void TMPro::__TMP_MaterialManager__MaskingMaterial::__set_stencilMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TMPro::__TMP_MaterialManager__MaskingMaterial::__get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& TMPro::__TMP_MaterialManager__MaskingMaterial::__get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void TMPro::__TMP_MaterialManager__MaskingMaterial::__set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& TMPro::__TMP_MaterialManager__MaskingMaterial::__get_stencilID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilID;
}
constexpr int32_t const& TMPro::__TMP_MaterialManager__MaskingMaterial::__get_stencilID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilID;
}
constexpr void TMPro::__TMP_MaterialManager__MaskingMaterial::__set_stencilID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilID = value;
}
inline ::TMPro::__TMP_MaterialManager__MaskingMaterial* TMPro::__TMP_MaterialManager__MaskingMaterial::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_MaterialManager__MaskingMaterial*>());
}
inline void TMPro::__TMP_MaterialManager__MaskingMaterial::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager__MaskingMaterial*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_MaterialManager__MaskingMaterial::__TMP_MaterialManager__MaskingMaterial() {}
//  Writing Method size for method: ::TMPro::__TMP_MaterialManager____c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_MaterialManager____c__DisplayClass9_0::*)()>(
    &::TMPro::__TMP_MaterialManager____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3ad24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass9_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_MaterialManager____c__DisplayClass9_0._GetBaseMaterial_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::__TMP_MaterialManager____c__DisplayClass9_0::*)(::TMPro::__TMP_MaterialManager__MaskingMaterial*)>(
    &::TMPro::__TMP_MaterialManager____c__DisplayClass9_0::_GetBaseMaterial_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c3cd94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass9_0*>::get(), "<GetBaseMaterial>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_MaterialManager__MaskingMaterial*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Material*& TMPro::__TMP_MaterialManager____c__DisplayClass9_0::__get_stencilMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& TMPro::__TMP_MaterialManager____c__DisplayClass9_0::__get_stencilMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr void TMPro::__TMP_MaterialManager____c__DisplayClass9_0::__set_stencilMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::TMPro::__TMP_MaterialManager____c__DisplayClass9_0* TMPro::__TMP_MaterialManager____c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_MaterialManager____c__DisplayClass9_0*>());
}
inline void TMPro::__TMP_MaterialManager____c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass9_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::__TMP_MaterialManager____c__DisplayClass9_0::_GetBaseMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass9_0*>::get(), "<GetBaseMaterial>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_MaterialManager__MaskingMaterial*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_MaterialManager____c__DisplayClass9_0::__TMP_MaterialManager____c__DisplayClass9_0() {}
//  Writing Method size for method: ::TMPro::__TMP_MaterialManager____c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_MaterialManager____c__DisplayClass11_0::*)()>(
    &::TMPro::__TMP_MaterialManager____c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3b05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass11_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_MaterialManager____c__DisplayClass11_0._AddMaskingMaterial_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::__TMP_MaterialManager____c__DisplayClass11_0::*)(::TMPro::__TMP_MaterialManager__MaskingMaterial*)>(
    &::TMPro::__TMP_MaterialManager____c__DisplayClass11_0::_AddMaskingMaterial_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c3ce04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass11_0*>::get(), "<AddMaskingMaterial>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_MaterialManager__MaskingMaterial*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Material*& TMPro::__TMP_MaterialManager____c__DisplayClass11_0::__get_stencilMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& TMPro::__TMP_MaterialManager____c__DisplayClass11_0::__get_stencilMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr void TMPro::__TMP_MaterialManager____c__DisplayClass11_0::__set_stencilMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::TMPro::__TMP_MaterialManager____c__DisplayClass11_0* TMPro::__TMP_MaterialManager____c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_MaterialManager____c__DisplayClass11_0*>());
}
inline void TMPro::__TMP_MaterialManager____c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass11_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::__TMP_MaterialManager____c__DisplayClass11_0::_AddMaskingMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass11_0*>::get(), "<AddMaskingMaterial>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_MaterialManager__MaskingMaterial*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_MaterialManager____c__DisplayClass11_0::__TMP_MaterialManager____c__DisplayClass11_0() {}
//  Writing Method size for method: ::TMPro::__TMP_MaterialManager____c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_MaterialManager____c__DisplayClass12_0::*)()>(
    &::TMPro::__TMP_MaterialManager____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3b1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass12_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_MaterialManager____c__DisplayClass12_0._RemoveStencilMaterial_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::__TMP_MaterialManager____c__DisplayClass12_0::*)(::TMPro::__TMP_MaterialManager__MaskingMaterial*)>(
    &::TMPro::__TMP_MaterialManager____c__DisplayClass12_0::_RemoveStencilMaterial_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c3ce74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass12_0*>::get(), "<RemoveStencilMaterial>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_MaterialManager__MaskingMaterial*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Material*& TMPro::__TMP_MaterialManager____c__DisplayClass12_0::__get_stencilMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& TMPro::__TMP_MaterialManager____c__DisplayClass12_0::__get_stencilMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr void TMPro::__TMP_MaterialManager____c__DisplayClass12_0::__set_stencilMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::TMPro::__TMP_MaterialManager____c__DisplayClass12_0* TMPro::__TMP_MaterialManager____c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_MaterialManager____c__DisplayClass12_0*>());
}
inline void TMPro::__TMP_MaterialManager____c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass12_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::__TMP_MaterialManager____c__DisplayClass12_0::_RemoveStencilMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass12_0*>::get(), "<RemoveStencilMaterial>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_MaterialManager__MaskingMaterial*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_MaterialManager____c__DisplayClass12_0::__TMP_MaterialManager____c__DisplayClass12_0() {}
//  Writing Method size for method: ::TMPro::__TMP_MaterialManager____c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::__TMP_MaterialManager____c__DisplayClass13_0::*)()>(
    &::TMPro::__TMP_MaterialManager____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c3b6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass13_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::__TMP_MaterialManager____c__DisplayClass13_0._ReleaseBaseMaterial_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::__TMP_MaterialManager____c__DisplayClass13_0::*)(::TMPro::__TMP_MaterialManager__MaskingMaterial*)>(
    &::TMPro::__TMP_MaterialManager____c__DisplayClass13_0::_ReleaseBaseMaterial_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c3cee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass13_0*>::get(), "<ReleaseBaseMaterial>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_MaterialManager__MaskingMaterial*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Material*& TMPro::__TMP_MaterialManager____c__DisplayClass13_0::__get_baseMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& TMPro::__TMP_MaterialManager____c__DisplayClass13_0::__get_baseMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMaterial;
}
constexpr void TMPro::__TMP_MaterialManager____c__DisplayClass13_0::__set_baseMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::TMPro::__TMP_MaterialManager____c__DisplayClass13_0* TMPro::__TMP_MaterialManager____c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::__TMP_MaterialManager____c__DisplayClass13_0*>());
}
inline void TMPro::__TMP_MaterialManager____c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass13_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::__TMP_MaterialManager____c__DisplayClass13_0::_ReleaseBaseMaterial_b__0(::TMPro::__TMP_MaterialManager__MaskingMaterial* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::__TMP_MaterialManager____c__DisplayClass13_0*>::get(), "<ReleaseBaseMaterial>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::__TMP_MaterialManager__MaskingMaterial*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::TMPro::__TMP_MaterialManager____c__DisplayClass13_0::__TMP_MaterialManager____c__DisplayClass13_0() {}
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.OnPreRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_MaterialManager::OnPreRender)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c39890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "OnPreRender",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetStencilMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, int32_t)>(&::TMPro::TMP_MaterialManager::GetStencilMaterial)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2c39b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetStencilMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.ReleaseStencilMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::ReleaseStencilMaterial)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2c3a9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseStencilMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetBaseMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::GetBaseMaterial)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2c3abc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetBaseMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.SetStencil
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, int32_t)>(&::TMPro::TMP_MaterialManager::SetStencil)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c3ad2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "SetStencil", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.AddMaskingMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*, int32_t)>(
    &::TMPro::TMP_MaterialManager::AddMaskingMaterial)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2c3ade8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "AddMaskingMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.RemoveStencilMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::RemoveStencilMaterial)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2c3b064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "RemoveStencilMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.ReleaseBaseMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::ReleaseBaseMaterial)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x2c3b1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseBaseMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.ClearMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_MaterialManager::ClearMaterials)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2c3b700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ClearMaterials",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetStencilID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::GameObject*)>(&::TMPro::TMP_MaterialManager::GetStencilID)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2c3b8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetStencilID", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetMaterialForRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::UI::MaskableGraphic*, ::UnityEngine::Material*)>(
    &::TMPro::TMP_MaterialManager::GetMaterialForRendering)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2c3bd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetMaterialForRendering", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::MaskableGraphic*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.FindRootSortOverrideCanvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (*)(::UnityEngine::Transform*)>(
    &::TMPro::TMP_MaterialManager::FindRootSortOverrideCanvas)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2c3bb88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "FindRootSortOverrideCanvas", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetFallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::TMPro::TMP_FontAsset*, ::UnityEngine::Material*, int32_t)>(
    &::TMPro::TMP_MaterialManager::GetFallbackMaterial)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2c3bf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetFallbackMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetFallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(
    &::TMPro::TMP_MaterialManager::GetFallbackMaterial)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2c3c468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetFallbackMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.AddFallbackMaterialReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::AddFallbackMaterialReference)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2c3c888;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "AddFallbackMaterialReference", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.RemoveFallbackMaterialReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::RemoveFallbackMaterialReference)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2c3c9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "RemoveFallbackMaterialReference", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.CleanupFallbackMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_MaterialManager::CleanupFallbackMaterials)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2c39908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "CleanupFallbackMaterials",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.ReleaseFallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::ReleaseFallbackMaterial)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2c3cba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseFallbackMaterial", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.CopyMaterialPresetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(
    &::TMPro::TMP_MaterialManager::CopyMaterialPresetProperties)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2c3c1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "CopyMaterialPresetProperties", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_MaterialManager::setStaticF_m_materialList(::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__MaskingMaterial*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__MaskingMaterial*>*, "m_materialList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__MaskingMaterial*>*>(value));
}
inline ::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__MaskingMaterial*>* TMPro::TMP_MaterialManager::getStaticF_m_materialList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__MaskingMaterial*>*, "m_materialList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>();
}
inline void TMPro::TMP_MaterialManager::setStaticF_m_fallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::__TMP_MaterialManager__FallbackMaterial*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::__TMP_MaterialManager__FallbackMaterial*>*, "m_fallbackMaterials",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::__TMP_MaterialManager__FallbackMaterial*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::__TMP_MaterialManager__FallbackMaterial*>* TMPro::TMP_MaterialManager::getStaticF_m_fallbackMaterials() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::__TMP_MaterialManager__FallbackMaterial*>*, "m_fallbackMaterials",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>();
}
inline void TMPro::TMP_MaterialManager::setStaticF_m_fallbackMaterialLookup(::System::Collections::Generic::Dictionary_2<int32_t, int64_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, int64_t>*, "m_fallbackMaterialLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, int64_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, int64_t>* TMPro::TMP_MaterialManager::getStaticF_m_fallbackMaterialLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, int64_t>*, "m_fallbackMaterialLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>();
}
inline void TMPro::TMP_MaterialManager::setStaticF_m_fallbackCleanupList(::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__FallbackMaterial*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__FallbackMaterial*>*, "m_fallbackCleanupList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__FallbackMaterial*>*>(value));
}
inline ::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__FallbackMaterial*>* TMPro::TMP_MaterialManager::getStaticF_m_fallbackCleanupList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::TMPro::__TMP_MaterialManager__FallbackMaterial*>*, "m_fallbackCleanupList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>();
}
inline void TMPro::TMP_MaterialManager::setStaticF_isFallbackListDirty(bool value) {
  ::cordl_internals::setStaticField<bool, "isFallbackListDirty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>(std::forward<bool>(value));
}
inline bool TMPro::TMP_MaterialManager::getStaticF_isFallbackListDirty() {
  return ::cordl_internals::getStaticField<bool, "isFallbackListDirty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>();
}
inline void TMPro::TMP_MaterialManager::OnPreRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "OnPreRender",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Material* TMPro::TMP_MaterialManager::GetStencilMaterial(::UnityEngine::Material* baseMaterial, int32_t stencilID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetStencilMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, baseMaterial, stencilID);
}
inline void TMPro::TMP_MaterialManager::ReleaseStencilMaterial(::UnityEngine::Material* stencilMaterial) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseStencilMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stencilMaterial);
}
inline ::UnityEngine::Material* TMPro::TMP_MaterialManager::GetBaseMaterial(::UnityEngine::Material* stencilMaterial) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetBaseMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, stencilMaterial);
}
inline ::UnityEngine::Material* TMPro::TMP_MaterialManager::SetStencil(::UnityEngine::Material* material, int32_t stencilID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "SetStencil", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, material, stencilID);
}
inline void TMPro::TMP_MaterialManager::AddMaskingMaterial(::UnityEngine::Material* baseMaterial, ::UnityEngine::Material* stencilMaterial, int32_t stencilID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "AddMaskingMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseMaterial, stencilMaterial, stencilID);
}
inline void TMPro::TMP_MaterialManager::RemoveStencilMaterial(::UnityEngine::Material* stencilMaterial) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "RemoveStencilMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stencilMaterial);
}
inline void TMPro::TMP_MaterialManager::ReleaseBaseMaterial(::UnityEngine::Material* baseMaterial) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseBaseMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseMaterial);
}
inline void TMPro::TMP_MaterialManager::ClearMaterials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ClearMaterials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline int32_t TMPro::TMP_MaterialManager::GetStencilID(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetStencilID", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj);
}
inline ::UnityEngine::Material* TMPro::TMP_MaterialManager::GetMaterialForRendering(::UnityEngine::UI::MaskableGraphic* graphic, ::UnityEngine::Material* baseMaterial) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetMaterialForRendering", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::MaskableGraphic*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, graphic, baseMaterial);
}
inline ::UnityEngine::Transform* TMPro::TMP_MaterialManager::FindRootSortOverrideCanvas(::UnityEngine::Transform* start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "FindRootSortOverrideCanvas", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(nullptr, ___internal_method, start);
}
inline ::UnityEngine::Material* TMPro::TMP_MaterialManager::GetFallbackMaterial(::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::Material* sourceMaterial, int32_t atlasIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetFallbackMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, fontAsset, sourceMaterial, atlasIndex);
}
inline ::UnityEngine::Material* TMPro::TMP_MaterialManager::GetFallbackMaterial(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* targetMaterial) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetFallbackMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(nullptr, ___internal_method, sourceMaterial, targetMaterial);
}
inline void TMPro::TMP_MaterialManager::AddFallbackMaterialReference(::UnityEngine::Material* targetMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "AddFallbackMaterialReference", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetMaterial);
}
inline void TMPro::TMP_MaterialManager::RemoveFallbackMaterialReference(::UnityEngine::Material* targetMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "RemoveFallbackMaterialReference", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetMaterial);
}
inline void TMPro::TMP_MaterialManager::CleanupFallbackMaterials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "CleanupFallbackMaterials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_MaterialManager::ReleaseFallbackMaterial(::UnityEngine::Material* fallbackMaterial) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseFallbackMaterial", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fallbackMaterial);
}
inline void TMPro::TMP_MaterialManager::CopyMaterialPresetProperties(::UnityEngine::Material* source, ::UnityEngine::Material* destination) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "CopyMaterialPresetProperties", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, destination);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_MaterialManager::TMP_MaterialManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
