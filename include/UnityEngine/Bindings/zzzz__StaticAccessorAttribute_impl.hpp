#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/StaticAccessorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__StaticAccessorType_impl.hpp"
#include "UnityEngine/Bindings/zzzz__StaticAccessorAttribute_def.hpp"
#include "UnityEngine/Bindings/zzzz__StaticAccessorType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::StaticAccessorAttribute.set_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::StaticAccessorAttribute::*)(::StringW)>(
    &::UnityEngine::Bindings::StaticAccessorAttribute::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4919c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::StaticAccessorAttribute*>::get(), "set_Name",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::StaticAccessorAttribute.set_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::StaticAccessorAttribute::*)(::UnityEngine::Bindings::StaticAccessorType)>(
    &::UnityEngine::Bindings::StaticAccessorAttribute::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4919ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::StaticAccessorAttribute*>::get(), "set_Type", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bindings::StaticAccessorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::StaticAccessorAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::StaticAccessorAttribute::*)(::StringW)>(
    &::UnityEngine::Bindings::StaticAccessorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4919cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::StaticAccessorAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::StaticAccessorAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::StaticAccessorAttribute::*)(::StringW, ::UnityEngine::Bindings::StaticAccessorType)>(
    &::UnityEngine::Bindings::StaticAccessorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4919cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::StaticAccessorAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bindings::StaticAccessorType>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Bindings::StaticAccessorType& UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::UnityEngine::Bindings::StaticAccessorType const& UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_set__Type_k__BackingField(::UnityEngine::Bindings::StaticAccessorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
inline void UnityEngine::Bindings::StaticAccessorAttribute::set_Name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::StaticAccessorAttribute*>::get(), "set_Name",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::StaticAccessorAttribute::set_Type(::UnityEngine::Bindings::StaticAccessorType value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::StaticAccessorAttribute*>::get(), "set_Type", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bindings::StaticAccessorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::StaticAccessorAttribute::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::StaticAccessorAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void UnityEngine::Bindings::StaticAccessorAttribute::_ctor(::StringW name, ::UnityEngine::Bindings::StaticAccessorType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::StaticAccessorAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Bindings::StaticAccessorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, type);
}
inline ::UnityEngine::Bindings::StaticAccessorAttribute* UnityEngine::Bindings::StaticAccessorAttribute::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::StaticAccessorAttribute*>(name));
}
inline ::UnityEngine::Bindings::StaticAccessorAttribute* UnityEngine::Bindings::StaticAccessorAttribute::New_ctor(::StringW name, ::UnityEngine::Bindings::StaticAccessorType type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Bindings::StaticAccessorAttribute*>(name, type));
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::StaticAccessorAttribute::StaticAccessorAttribute() {}
