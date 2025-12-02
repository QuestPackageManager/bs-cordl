#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PackingAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FieldPacking_impl.hpp"
#include "UnityEngine/Rendering/zzzz__PackingAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__FieldPacking_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PackingAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PackingAttribute::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::UnityEngine::Rendering::FieldPacking, int32_t, int32_t, float_t, float_t, bool, bool, bool, ::StringW)>(
    &::UnityEngine::Rendering::PackingAttribute::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6584664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PackingAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FieldPacking>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PackingAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::PackingAttribute::*)(
    ::StringW, ::UnityEngine::Rendering::FieldPacking, int32_t, int32_t, float_t, float_t, bool, bool, bool, ::StringW)>(&::UnityEngine::Rendering::PackingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6584754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PackingAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FieldPacking>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_displayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_displayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayNames;
}
constexpr void UnityEngine::Rendering::PackingAttribute::__cordl_internal_set_displayNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___displayNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_range() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___range;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_range() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___range;
}
constexpr void UnityEngine::Rendering::PackingAttribute::__cordl_internal_set_range(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___range)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::FieldPacking& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_packingScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packingScheme;
}
constexpr ::UnityEngine::Rendering::FieldPacking const& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_packingScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packingScheme;
}
constexpr void UnityEngine::Rendering::PackingAttribute::__cordl_internal_set_packingScheme(::UnityEngine::Rendering::FieldPacking value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packingScheme = value;
}
constexpr int32_t& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_offsetInSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetInSource;
}
constexpr int32_t const& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_offsetInSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsetInSource;
}
constexpr void UnityEngine::Rendering::PackingAttribute::__cordl_internal_set_offsetInSource(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsetInSource = value;
}
constexpr int32_t& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_sizeInBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeInBits;
}
constexpr int32_t const& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_sizeInBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sizeInBits;
}
constexpr void UnityEngine::Rendering::PackingAttribute::__cordl_internal_set_sizeInBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sizeInBits = value;
}
constexpr bool& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_isDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirection;
}
constexpr bool const& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_isDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDirection;
}
constexpr void UnityEngine::Rendering::PackingAttribute::__cordl_internal_set_isDirection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDirection = value;
}
constexpr bool& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_sRGBDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sRGBDisplay;
}
constexpr bool const& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_sRGBDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sRGBDisplay;
}
constexpr void UnityEngine::Rendering::PackingAttribute::__cordl_internal_set_sRGBDisplay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sRGBDisplay = value;
}
constexpr bool& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_checkIsNormalized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkIsNormalized;
}
constexpr bool const& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_checkIsNormalized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___checkIsNormalized;
}
constexpr void UnityEngine::Rendering::PackingAttribute::__cordl_internal_set_checkIsNormalized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___checkIsNormalized = value;
}
constexpr ::StringW& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_preprocessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preprocessor;
}
constexpr ::StringW const& UnityEngine::Rendering::PackingAttribute::__cordl_internal_get_preprocessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preprocessor;
}
constexpr void UnityEngine::Rendering::PackingAttribute::__cordl_internal_set_preprocessor(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___preprocessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::PackingAttribute::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> displayNames, ::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize,
                                                            int32_t offsetInSource, float_t minValue, float_t maxValue, bool isDirection, bool sRGBDisplay, bool checkIsNormalized,
                                                            ::StringW preprocessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PackingAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FieldPacking>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayNames, packingScheme, bitSize, offsetInSource, minValue, maxValue, isDirection, sRGBDisplay,
                                                          checkIsNormalized, preprocessor);
}
inline void UnityEngine::Rendering::PackingAttribute::_ctor(::StringW displayName, ::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize, int32_t offsetInSource, float_t minValue,
                                                            float_t maxValue, bool isDirection, bool sRGBDisplay, bool checkIsNormalized, ::StringW preprocessor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::PackingAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::FieldPacking>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, packingScheme, bitSize, offsetInSource, minValue, maxValue, isDirection, sRGBDisplay,
                                                          checkIsNormalized, preprocessor);
}
inline ::UnityEngine::Rendering::PackingAttribute* UnityEngine::Rendering::PackingAttribute::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> displayNames,
                                                                                                      ::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize, int32_t offsetInSource,
                                                                                                      float_t minValue, float_t maxValue, bool isDirection, bool sRGBDisplay, bool checkIsNormalized,
                                                                                                      ::StringW preprocessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::PackingAttribute*>(displayNames, packingScheme, bitSize, offsetInSource, minValue, maxValue, isDirection, sRGBDisplay,
                                                                                               checkIsNormalized, preprocessor));
}
inline ::UnityEngine::Rendering::PackingAttribute* UnityEngine::Rendering::PackingAttribute::New_ctor(::StringW displayName, ::UnityEngine::Rendering::FieldPacking packingScheme, int32_t bitSize,
                                                                                                      int32_t offsetInSource, float_t minValue, float_t maxValue, bool isDirection, bool sRGBDisplay,
                                                                                                      bool checkIsNormalized, ::StringW preprocessor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::PackingAttribute*>(displayName, packingScheme, bitSize, offsetInSource, minValue, maxValue, isDirection, sRGBDisplay,
                                                                                               checkIsNormalized, preprocessor));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PackingAttribute::PackingAttribute() {}
