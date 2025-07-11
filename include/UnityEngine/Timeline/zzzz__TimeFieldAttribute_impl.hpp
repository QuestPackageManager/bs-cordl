#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeFieldAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode::TimeFieldAttribute_UseEditMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode::TimeFieldAttribute_UseEditMode() {}
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode UnityEngine::Timeline::TimeFieldAttribute_UseEditMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode UnityEngine::Timeline::TimeFieldAttribute_UseEditMode::ApplyEditMode{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute.get_useEditMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode (::UnityEngine::Timeline::TimeFieldAttribute::*)()>(
    &::UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x482a93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(),
                                                                               "get_useEditMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeFieldAttribute::*)(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode)>(
    &::UnityEngine::Timeline::TimeFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x482a944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode& UnityEngine::Timeline::TimeFieldAttribute::__cordl_internal_get__useEditMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEditMode_k__BackingField;
}
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode const& UnityEngine::Timeline::TimeFieldAttribute::__cordl_internal_get__useEditMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEditMode_k__BackingField;
}
constexpr void UnityEngine::Timeline::TimeFieldAttribute::__cordl_internal_set__useEditMode_k__BackingField(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useEditMode_k__BackingField = value;
}
inline ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(),
                                                                             "get_useEditMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimeFieldAttribute::_ctor(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode useEditMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useEditMode);
}
inline ::UnityEngine::Timeline::TimeFieldAttribute* UnityEngine::Timeline::TimeFieldAttribute::New_ctor(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode useEditMode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::TimeFieldAttribute*>(useEditMode));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeFieldAttribute::TimeFieldAttribute() {}
