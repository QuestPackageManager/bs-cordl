#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativeConditionalAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NativeConditionalAttribute.set_Condition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeConditionalAttribute::*)(::StringW)>(
    &::UnityEngine::Bindings::NativeConditionalAttribute::set_Condition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1822c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeConditionalAttribute*>::get(), "set_Condition",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeConditionalAttribute.set_Enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeConditionalAttribute::*)(bool)>(
    &::UnityEngine::Bindings::NativeConditionalAttribute::set_Enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d18234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeConditionalAttribute*>::get(), "set_Enabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeConditionalAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::NativeConditionalAttribute::*)(::StringW)>(
    &::UnityEngine::Bindings::NativeConditionalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d18240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeConditionalAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Bindings::NativeConditionalAttribute::__get__Condition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Condition_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Bindings::NativeConditionalAttribute::__get__Condition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Condition_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativeConditionalAttribute::__set__Condition_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Condition_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Bindings::NativeConditionalAttribute::__get__Enabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enabled_k__BackingField;
}
constexpr bool const& UnityEngine::Bindings::NativeConditionalAttribute::__get__Enabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enabled_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativeConditionalAttribute::__set__Enabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Enabled_k__BackingField = value;
}
inline void UnityEngine::Bindings::NativeConditionalAttribute::set_Condition(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeConditionalAttribute*>::get(), "set_Condition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::NativeConditionalAttribute::set_Enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeConditionalAttribute*>::get(), "set_Enabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Bindings::NativeConditionalAttribute* UnityEngine::Bindings::NativeConditionalAttribute::New_ctor(::StringW condition) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Bindings::NativeConditionalAttribute*>(condition));
}
inline void UnityEngine::Bindings::NativeConditionalAttribute::_ctor(::StringW condition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::NativeConditionalAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, condition);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::NativeConditionalAttribute::NativeConditionalAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
