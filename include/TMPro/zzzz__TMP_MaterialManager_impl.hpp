#pragma once
// IWYU pragma private; include "TMPro/TMP_MaterialManager.hpp"
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
//  Writing Method size for method: ::TMPro::TMP_MaterialManager_FallbackMaterial._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_MaterialManager_FallbackMaterial::*)()>(&::TMPro::TMP_MaterialManager_FallbackMaterial::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47ff020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager_FallbackMaterial*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_get_fallbackID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackID;
}
constexpr int64_t const& TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_get_fallbackID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackID;
}
constexpr void TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_set_fallbackID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallbackID = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_get_sourceMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_get_sourceMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMaterial;
}
constexpr void TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_set_sourceMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sourceMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_get_sourceMaterialCRC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMaterialCRC;
}
constexpr int32_t const& TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_get_sourceMaterialCRC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceMaterialCRC;
}
constexpr void TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_set_sourceMaterialCRC(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceMaterialCRC = value;
}
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_get_fallbackMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_get_fallbackMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackMaterial;
}
constexpr void TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_set_fallbackMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fallbackMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void TMPro::TMP_MaterialManager_FallbackMaterial::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
inline void TMPro::TMP_MaterialManager_FallbackMaterial::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager_FallbackMaterial*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_MaterialManager_FallbackMaterial* TMPro::TMP_MaterialManager_FallbackMaterial::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_MaterialManager_FallbackMaterial*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_MaterialManager_FallbackMaterial::TMP_MaterialManager_FallbackMaterial() {}
//  Writing Method size for method: ::TMPro::TMP_MaterialManager_MaskingMaterial._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_MaterialManager_MaskingMaterial::*)()>(&::TMPro::TMP_MaterialManager_MaskingMaterial::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47fd630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager_MaskingMaterial*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_get_baseMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_get_baseMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMaterial;
}
constexpr void TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_set_baseMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_get_stencilMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_get_stencilMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr void TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_get_stencilID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilID;
}
constexpr int32_t const& TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_get_stencilID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilID;
}
constexpr void TMPro::TMP_MaterialManager_MaskingMaterial::__cordl_internal_set_stencilID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilID = value;
}
inline void TMPro::TMP_MaterialManager_MaskingMaterial::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager_MaskingMaterial*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_MaterialManager_MaskingMaterial* TMPro::TMP_MaterialManager_MaskingMaterial::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_MaterialManager_MaskingMaterial*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_MaterialManager_MaskingMaterial::TMP_MaterialManager_MaskingMaterial() {}
//  Writing Method size for method: ::TMPro::TMP_MaterialManager___c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_MaterialManager___c__DisplayClass11_0::*)()>(
    &::TMPro::TMP_MaterialManager___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47fdcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass11_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager___c__DisplayClass11_0._AddMaskingMaterial_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_MaterialManager___c__DisplayClass11_0::*)(::TMPro::TMP_MaterialManager_MaskingMaterial*)>(
    &::TMPro::TMP_MaterialManager___c__DisplayClass11_0::_AddMaskingMaterial_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x47ff950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass11_0*>::get(), "<AddMaskingMaterial>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_MaterialManager_MaskingMaterial*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_MaterialManager___c__DisplayClass11_0::__cordl_internal_get_stencilMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_MaterialManager___c__DisplayClass11_0::__cordl_internal_get_stencilMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr void TMPro::TMP_MaterialManager___c__DisplayClass11_0::__cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TMPro::TMP_MaterialManager___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass11_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::TMP_MaterialManager___c__DisplayClass11_0::_AddMaskingMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass11_0*>::get(), "<AddMaskingMaterial>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_MaterialManager_MaskingMaterial*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
inline ::TMPro::TMP_MaterialManager___c__DisplayClass11_0* TMPro::TMP_MaterialManager___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_MaterialManager___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_MaterialManager___c__DisplayClass11_0::TMP_MaterialManager___c__DisplayClass11_0() {}
//  Writing Method size for method: ::TMPro::TMP_MaterialManager___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_MaterialManager___c__DisplayClass12_0::*)()>(
    &::TMPro::TMP_MaterialManager___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47fde1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass12_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager___c__DisplayClass12_0._RemoveStencilMaterial_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_MaterialManager___c__DisplayClass12_0::*)(::TMPro::TMP_MaterialManager_MaskingMaterial*)>(
    &::TMPro::TMP_MaterialManager___c__DisplayClass12_0::_RemoveStencilMaterial_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x47ff9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass12_0*>::get(), "<RemoveStencilMaterial>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_MaterialManager_MaskingMaterial*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_MaterialManager___c__DisplayClass12_0::__cordl_internal_get_stencilMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_MaterialManager___c__DisplayClass12_0::__cordl_internal_get_stencilMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr void TMPro::TMP_MaterialManager___c__DisplayClass12_0::__cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TMPro::TMP_MaterialManager___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass12_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::TMP_MaterialManager___c__DisplayClass12_0::_RemoveStencilMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass12_0*>::get(), "<RemoveStencilMaterial>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_MaterialManager_MaskingMaterial*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
inline ::TMPro::TMP_MaterialManager___c__DisplayClass12_0* TMPro::TMP_MaterialManager___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_MaterialManager___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_MaterialManager___c__DisplayClass12_0::TMP_MaterialManager___c__DisplayClass12_0() {}
//  Writing Method size for method: ::TMPro::TMP_MaterialManager___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_MaterialManager___c__DisplayClass13_0::*)()>(
    &::TMPro::TMP_MaterialManager___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47fe2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass13_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager___c__DisplayClass13_0._ReleaseBaseMaterial_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_MaterialManager___c__DisplayClass13_0::*)(::TMPro::TMP_MaterialManager_MaskingMaterial*)>(
    &::TMPro::TMP_MaterialManager___c__DisplayClass13_0::_ReleaseBaseMaterial_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x47ffa30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass13_0*>::get(), "<ReleaseBaseMaterial>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_MaterialManager_MaskingMaterial*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_MaterialManager___c__DisplayClass13_0::__cordl_internal_get_baseMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_MaterialManager___c__DisplayClass13_0::__cordl_internal_get_baseMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMaterial;
}
constexpr void TMPro::TMP_MaterialManager___c__DisplayClass13_0::__cordl_internal_set_baseMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TMPro::TMP_MaterialManager___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass13_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::TMP_MaterialManager___c__DisplayClass13_0::_ReleaseBaseMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass13_0*>::get(), "<ReleaseBaseMaterial>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_MaterialManager_MaskingMaterial*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
inline ::TMPro::TMP_MaterialManager___c__DisplayClass13_0* TMPro::TMP_MaterialManager___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_MaterialManager___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_MaterialManager___c__DisplayClass13_0::TMP_MaterialManager___c__DisplayClass13_0() {}
//  Writing Method size for method: ::TMPro::TMP_MaterialManager___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_MaterialManager___c__DisplayClass9_0::*)()>(
    &::TMPro::TMP_MaterialManager___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47fd988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass9_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager___c__DisplayClass9_0._GetBaseMaterial_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TMPro::TMP_MaterialManager___c__DisplayClass9_0::*)(::TMPro::TMP_MaterialManager_MaskingMaterial*)>(
    &::TMPro::TMP_MaterialManager___c__DisplayClass9_0::_GetBaseMaterial_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x47ffaa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass9_0*>::get(), "<GetBaseMaterial>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_MaterialManager_MaskingMaterial*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& TMPro::TMP_MaterialManager___c__DisplayClass9_0::__cordl_internal_get_stencilMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& TMPro::TMP_MaterialManager___c__DisplayClass9_0::__cordl_internal_get_stencilMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMaterial;
}
constexpr void TMPro::TMP_MaterialManager___c__DisplayClass9_0::__cordl_internal_set_stencilMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TMPro::TMP_MaterialManager___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass9_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool TMPro::TMP_MaterialManager___c__DisplayClass9_0::_GetBaseMaterial_b__0(::TMPro::TMP_MaterialManager_MaskingMaterial* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager___c__DisplayClass9_0*>::get(), "<GetBaseMaterial>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_MaterialManager_MaskingMaterial*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
inline ::TMPro::TMP_MaterialManager___c__DisplayClass9_0* TMPro::TMP_MaterialManager___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_MaterialManager___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_MaterialManager___c__DisplayClass9_0::TMP_MaterialManager___c__DisplayClass9_0() {}
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.OnPreRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_MaterialManager::OnPreRender)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x47fc538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "OnPreRender",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetStencilMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Material*, int32_t)>(
    &::TMPro::TMP_MaterialManager::GetStencilMaterial)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x47fc7c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetStencilMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.ReleaseStencilMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::ReleaseStencilMaterial)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x47fd638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseStencilMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetBaseMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::GetBaseMaterial)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x47fd828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetBaseMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.SetStencil
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Material*, int32_t)>(
    &::TMPro::TMP_MaterialManager::SetStencil)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x47fd990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "SetStencil", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.AddMaskingMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*, int32_t)>(
    &::TMPro::TMP_MaterialManager::AddMaskingMaterial)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x47fda4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "AddMaskingMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.RemoveStencilMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::RemoveStencilMaterial)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x47fdcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "RemoveStencilMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.ReleaseBaseMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::ReleaseBaseMaterial)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x47fde24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseBaseMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.ClearMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_MaterialManager::ClearMaterials)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x47fe2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ClearMaterials",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetStencilID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::GameObject*)>(&::TMPro::TMP_MaterialManager::GetStencilID)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x47fe47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetStencilID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetMaterialForRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::UI::MaskableGraphic*, ::UnityEngine::Material*)>(
    &::TMPro::TMP_MaterialManager::GetMaterialForRendering)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x47fe8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetMaterialForRendering", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::MaskableGraphic*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.FindRootSortOverrideCanvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*)>(
    &::TMPro::TMP_MaterialManager::FindRootSortOverrideCanvas)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x47fe748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "FindRootSortOverrideCanvas", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetFallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::TMPro::TMP_FontAsset*, ::UnityEngine::Material*, int32_t)>(
    &::TMPro::TMP_MaterialManager::GetFallbackMaterial)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x47feae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetFallbackMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.GetFallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(
    &::TMPro::TMP_MaterialManager::GetFallbackMaterial)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x47ff028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetFallbackMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.AddFallbackMaterialReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::AddFallbackMaterialReference)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x47ff44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "AddFallbackMaterialReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.RemoveFallbackMaterialReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::RemoveFallbackMaterialReference)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x47ff590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "RemoveFallbackMaterialReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.CleanupFallbackMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_MaterialManager::CleanupFallbackMaterials)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x47fc5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "CleanupFallbackMaterials",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.ReleaseFallbackMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::TMPro::TMP_MaterialManager::ReleaseFallbackMaterial)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x47ff760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseFallbackMaterial", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_MaterialManager.CopyMaterialPresetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(
    &::TMPro::TMP_MaterialManager::CopyMaterialPresetProperties)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x47fedb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "CopyMaterialPresetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_MaterialManager::setStaticF_m_materialList(::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>*, "m_materialList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>*>(value));
}
inline ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>* TMPro::TMP_MaterialManager::getStaticF_m_materialList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>*, "m_materialList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>();
}
inline void TMPro::TMP_MaterialManager::setStaticF_m_fallbackMaterials(::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::TMP_MaterialManager_FallbackMaterial*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::TMP_MaterialManager_FallbackMaterial*>*, "m_fallbackMaterials",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::TMP_MaterialManager_FallbackMaterial*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::TMP_MaterialManager_FallbackMaterial*>* TMPro::TMP_MaterialManager::getStaticF_m_fallbackMaterials() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::TMPro::TMP_MaterialManager_FallbackMaterial*>*, "m_fallbackMaterials",
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
inline void TMPro::TMP_MaterialManager::setStaticF_m_fallbackCleanupList(::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>*, "m_fallbackCleanupList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>*>(value));
}
inline ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>* TMPro::TMP_MaterialManager::getStaticF_m_fallbackCleanupList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>*, "m_fallbackCleanupList",
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
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_MaterialManager::GetStencilMaterial(::UnityEngine::Material* baseMaterial, int32_t stencilID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetStencilMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, baseMaterial, stencilID);
}
inline void TMPro::TMP_MaterialManager::ReleaseStencilMaterial(::UnityEngine::Material* stencilMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseStencilMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stencilMaterial);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_MaterialManager::GetBaseMaterial(::UnityEngine::Material* stencilMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetBaseMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, stencilMaterial);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_MaterialManager::SetStencil(::UnityEngine::Material* material, int32_t stencilID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "SetStencil", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, material, stencilID);
}
inline void TMPro::TMP_MaterialManager::AddMaskingMaterial(::UnityEngine::Material* baseMaterial, ::UnityEngine::Material* stencilMaterial, int32_t stencilID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "AddMaskingMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseMaterial, stencilMaterial, stencilID);
}
inline void TMPro::TMP_MaterialManager::RemoveStencilMaterial(::UnityEngine::Material* stencilMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "RemoveStencilMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stencilMaterial);
}
inline void TMPro::TMP_MaterialManager::ReleaseBaseMaterial(::UnityEngine::Material* baseMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseBaseMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseMaterial);
}
inline void TMPro::TMP_MaterialManager::ClearMaterials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ClearMaterials",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline int32_t TMPro::TMP_MaterialManager::GetStencilID(::UnityEngine::GameObject* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetStencilID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_MaterialManager::GetMaterialForRendering(::UnityEngine::UI::MaskableGraphic* graphic, ::UnityEngine::Material* baseMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetMaterialForRendering", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::MaskableGraphic*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, graphic, baseMaterial);
}
inline ::UnityW<::UnityEngine::Transform> TMPro::TMP_MaterialManager::FindRootSortOverrideCanvas(::UnityEngine::Transform* start) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "FindRootSortOverrideCanvas", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(nullptr, ___internal_method, start);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_MaterialManager::GetFallbackMaterial(::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::Material* sourceMaterial, int32_t atlasIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetFallbackMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, fontAsset, sourceMaterial, atlasIndex);
}
inline ::UnityW<::UnityEngine::Material> TMPro::TMP_MaterialManager::GetFallbackMaterial(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* targetMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "GetFallbackMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, sourceMaterial, targetMaterial);
}
inline void TMPro::TMP_MaterialManager::AddFallbackMaterialReference(::UnityEngine::Material* targetMaterial) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "AddFallbackMaterialReference", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetMaterial);
}
inline void TMPro::TMP_MaterialManager::RemoveFallbackMaterialReference(::UnityEngine::Material* targetMaterial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "RemoveFallbackMaterialReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, targetMaterial);
}
inline void TMPro::TMP_MaterialManager::CleanupFallbackMaterials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "CleanupFallbackMaterials",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_MaterialManager::ReleaseFallbackMaterial(::UnityEngine::Material* fallbackMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "ReleaseFallbackMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fallbackMaterial);
}
inline void TMPro::TMP_MaterialManager::CopyMaterialPresetProperties(::UnityEngine::Material* source, ::UnityEngine::Material* destination) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_MaterialManager*>::get(), "CopyMaterialPresetProperties", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, destination);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_MaterialManager::TMP_MaterialManager() {}
