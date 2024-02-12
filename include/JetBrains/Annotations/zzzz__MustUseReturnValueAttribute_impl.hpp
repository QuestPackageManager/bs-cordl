#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__MustUseReturnValueAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::MustUseReturnValueAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::MustUseReturnValueAttribute::*)()>(
    &::JetBrains::Annotations::MustUseReturnValueAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ed6474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::MustUseReturnValueAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::MustUseReturnValueAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::MustUseReturnValueAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::MustUseReturnValueAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ed647c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::MustUseReturnValueAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::MustUseReturnValueAttribute.get_Justification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::JetBrains::Annotations::MustUseReturnValueAttribute::*)()>(
    &::JetBrains::Annotations::MustUseReturnValueAttribute::get_Justification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ed64a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::MustUseReturnValueAttribute*>::get(),
                                                                               "get_Justification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::MustUseReturnValueAttribute.set_Justification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::MustUseReturnValueAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::MustUseReturnValueAttribute::set_Justification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ed64ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::MustUseReturnValueAttribute*>::get(), "set_Justification",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::MustUseReturnValueAttribute::__cordl_internal_get__Justification_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Justification_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::MustUseReturnValueAttribute::__cordl_internal_get__Justification_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Justification_k__BackingField;
}
constexpr void JetBrains::Annotations::MustUseReturnValueAttribute::__cordl_internal_set__Justification_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Justification_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::JetBrains::Annotations::MustUseReturnValueAttribute* JetBrains::Annotations::MustUseReturnValueAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::MustUseReturnValueAttribute*>());
}
inline void JetBrains::Annotations::MustUseReturnValueAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::MustUseReturnValueAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::JetBrains::Annotations::MustUseReturnValueAttribute* JetBrains::Annotations::MustUseReturnValueAttribute::New_ctor(::StringW justification) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::MustUseReturnValueAttribute*>(justification));
}
inline void JetBrains::Annotations::MustUseReturnValueAttribute::_ctor(::StringW justification) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::MustUseReturnValueAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, justification);
}
inline ::StringW JetBrains::Annotations::MustUseReturnValueAttribute::get_Justification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::MustUseReturnValueAttribute*>::get(),
                                                                             "get_Justification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void JetBrains::Annotations::MustUseReturnValueAttribute::set_Justification(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::MustUseReturnValueAttribute*>::get(), "set_Justification",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::MustUseReturnValueAttribute::MustUseReturnValueAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
