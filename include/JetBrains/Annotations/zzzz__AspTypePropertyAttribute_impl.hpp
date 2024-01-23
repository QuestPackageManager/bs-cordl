#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspTypePropertyAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspTypePropertyAttribute.get_CreateConstructorReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::JetBrains::Annotations::AspTypePropertyAttribute::*)()>(
    &::JetBrains::Annotations::AspTypePropertyAttribute::get_CreateConstructorReferences)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eba828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspTypePropertyAttribute*>::get(), "get_CreateConstructorReferences",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspTypePropertyAttribute.set_CreateConstructorReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspTypePropertyAttribute::*)(bool)>(
    &::JetBrains::Annotations::AspTypePropertyAttribute::set_CreateConstructorReferences)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2eba830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspTypePropertyAttribute*>::get(), "set_CreateConstructorReferences",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspTypePropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspTypePropertyAttribute::*)(bool)>(
    &::JetBrains::Annotations::AspTypePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2eba83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspTypePropertyAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& JetBrains::Annotations::AspTypePropertyAttribute::__cordl_internal_get__CreateConstructorReferences_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreateConstructorReferences_k__BackingField;
}
constexpr bool const& JetBrains::Annotations::AspTypePropertyAttribute::__cordl_internal_get__CreateConstructorReferences_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreateConstructorReferences_k__BackingField;
}
constexpr void JetBrains::Annotations::AspTypePropertyAttribute::__cordl_internal_set__CreateConstructorReferences_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CreateConstructorReferences_k__BackingField = value;
}
inline bool JetBrains::Annotations::AspTypePropertyAttribute::get_CreateConstructorReferences() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspTypePropertyAttribute*>::get(),
                                                                             "get_CreateConstructorReferences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspTypePropertyAttribute::set_CreateConstructorReferences(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspTypePropertyAttribute*>::get(), "set_CreateConstructorReferences",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::AspTypePropertyAttribute* JetBrains::Annotations::AspTypePropertyAttribute::New_ctor(bool createConstructorReferences) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::AspTypePropertyAttribute*>(createConstructorReferences));
}
inline void JetBrains::Annotations::AspTypePropertyAttribute::_ctor(bool createConstructorReferences) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspTypePropertyAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, createConstructorReferences);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspTypePropertyAttribute::AspTypePropertyAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
