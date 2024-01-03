#pragma once
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode::__TimeFieldAttribute__UseEditMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode::__TimeFieldAttribute__UseEditMode() {}
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode::ApplyEditMode{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute.get_useEditMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode (::UnityEngine::Timeline::TimeFieldAttribute::*)()>(
    &::UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6e760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(),
                                                                               "get_useEditMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeFieldAttribute::*)(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode)>(
    &::UnityEngine::Timeline::TimeFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c6e768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode& UnityEngine::Timeline::TimeFieldAttribute::__get__useEditMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEditMode_k__BackingField;
}
constexpr ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode const& UnityEngine::Timeline::TimeFieldAttribute::__get__useEditMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEditMode_k__BackingField;
}
constexpr void UnityEngine::Timeline::TimeFieldAttribute::__set__useEditMode_k__BackingField(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useEditMode_k__BackingField = value;
}
inline ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(),
                                                                             "get_useEditMode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode, false>(this, ___internal_method);
}
/// @param useEditMode: ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode (default: static_cast<int32_t>(0x1))
inline ::UnityEngine::Timeline::TimeFieldAttribute* UnityEngine::Timeline::TimeFieldAttribute::New_ctor(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode useEditMode) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TimeFieldAttribute*>(useEditMode));
}
/// @param useEditMode: ::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode (default: static_cast<int32_t>(0x1))
inline void UnityEngine::Timeline::TimeFieldAttribute::_ctor(::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode useEditMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimeFieldAttribute__UseEditMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useEditMode);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeFieldAttribute::TimeFieldAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
