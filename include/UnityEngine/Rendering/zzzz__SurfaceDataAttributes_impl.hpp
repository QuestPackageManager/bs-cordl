#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SurfaceDataAttributes.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FieldPrecision_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SurfaceDataAttributes_def.hpp"
#include "UnityEngine/Rendering/zzzz__FieldPrecision_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SurfaceDataAttributes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SurfaceDataAttributes::*)(
    ::StringW, bool, bool, ::UnityEngine::Rendering::FieldPrecision, bool, ::StringW)>(&::UnityEngine::Rendering::SurfaceDataAttributes::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6584580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SurfaceDataAttributes*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FieldPrecision>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SurfaceDataAttributes._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SurfaceDataAttributes::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, bool, bool, ::UnityEngine::Rendering::FieldPrecision, bool, ::StringW)>(&::UnityEngine::Rendering::SurfaceDataAttributes::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x658463c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SurfaceDataAttributes*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FieldPrecision>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_displayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_displayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayNames;
}
constexpr void UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_set_displayNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_isDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirection;
}
constexpr bool const& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_isDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirection;
}
constexpr void UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_set_isDirection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDirection = value;
}
constexpr bool& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_sRGBDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sRGBDisplay;
}
constexpr bool const& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_sRGBDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sRGBDisplay;
}
constexpr void UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_set_sRGBDisplay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sRGBDisplay = value;
}
constexpr ::UnityEngine::Rendering::FieldPrecision& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_precision() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___precision;
}
constexpr ::UnityEngine::Rendering::FieldPrecision const& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_precision() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___precision;
}
constexpr void UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_set_precision(::UnityEngine::Rendering::FieldPrecision value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___precision = value;
}
constexpr bool& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_checkIsNormalized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkIsNormalized;
}
constexpr bool const& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_checkIsNormalized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkIsNormalized;
}
constexpr void UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_set_checkIsNormalized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkIsNormalized = value;
}
constexpr ::StringW& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_preprocessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preprocessor;
}
constexpr ::StringW const& UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_get_preprocessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preprocessor;
}
constexpr void UnityEngine::Rendering::SurfaceDataAttributes::__cordl_internal_set_preprocessor(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preprocessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::SurfaceDataAttributes::_ctor(::StringW displayName, bool isDirection, bool sRGBDisplay, ::UnityEngine::Rendering::FieldPrecision precision, bool checkIsNormalized,
                                                                 ::StringW preprocessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SurfaceDataAttributes*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FieldPrecision>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, isDirection, sRGBDisplay, precision, checkIsNormalized, preprocessor);
}
inline void UnityEngine::Rendering::SurfaceDataAttributes::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> displayNames, bool isDirection, bool sRGBDisplay,
                                                                 ::UnityEngine::Rendering::FieldPrecision precision, bool checkIsNormalized, ::StringW preprocessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SurfaceDataAttributes*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FieldPrecision>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayNames, isDirection, sRGBDisplay, precision, checkIsNormalized, preprocessor);
}
inline ::UnityEngine::Rendering::SurfaceDataAttributes* UnityEngine::Rendering::SurfaceDataAttributes::New_ctor(::StringW displayName, bool isDirection, bool sRGBDisplay,
                                                                                                                ::UnityEngine::Rendering::FieldPrecision precision, bool checkIsNormalized,
                                                                                                                ::StringW preprocessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::SurfaceDataAttributes*>(displayName, isDirection, sRGBDisplay, precision, checkIsNormalized, preprocessor));
}
inline ::UnityEngine::Rendering::SurfaceDataAttributes* UnityEngine::Rendering::SurfaceDataAttributes::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> displayNames, bool isDirection,
                                                                                                                bool sRGBDisplay, ::UnityEngine::Rendering::FieldPrecision precision,
                                                                                                                bool checkIsNormalized, ::StringW preprocessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::SurfaceDataAttributes*>(displayNames, isDirection, sRGBDisplay, precision, checkIsNormalized, preprocessor));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SurfaceDataAttributes::SurfaceDataAttributes() {}
