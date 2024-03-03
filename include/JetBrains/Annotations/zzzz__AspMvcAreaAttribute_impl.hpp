#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspMvcAreaAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspMvcAreaAttribute::*)()>(&::JetBrains::Annotations::AspMvcAreaAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc9df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMvcAreaAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspMvcAreaAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::AspMvcAreaAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2fc9dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMvcAreaAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaAttribute.get_AnonymousProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::JetBrains::Annotations::AspMvcAreaAttribute::*)()>(
    &::JetBrains::Annotations::AspMvcAreaAttribute::get_AnonymousProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc9e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMvcAreaAttribute*>::get(),
                                                                               "get_AnonymousProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaAttribute.set_AnonymousProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspMvcAreaAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::AspMvcAreaAttribute::set_AnonymousProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fc9e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMvcAreaAttribute*>::get(), "set_AnonymousProperty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::AspMvcAreaAttribute::__cordl_internal_get__AnonymousProperty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AnonymousProperty_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::AspMvcAreaAttribute::__cordl_internal_get__AnonymousProperty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AnonymousProperty_k__BackingField;
}
constexpr void JetBrains::Annotations::AspMvcAreaAttribute::__cordl_internal_set__AnonymousProperty_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AnonymousProperty_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::JetBrains::Annotations::AspMvcAreaAttribute* JetBrains::Annotations::AspMvcAreaAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::AspMvcAreaAttribute*>());
}
inline void JetBrains::Annotations::AspMvcAreaAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMvcAreaAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::JetBrains::Annotations::AspMvcAreaAttribute* JetBrains::Annotations::AspMvcAreaAttribute::New_ctor(::StringW anonymousProperty) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::AspMvcAreaAttribute*>(anonymousProperty));
}
inline void JetBrains::Annotations::AspMvcAreaAttribute::_ctor(::StringW anonymousProperty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMvcAreaAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anonymousProperty);
}
inline ::StringW JetBrains::Annotations::AspMvcAreaAttribute::get_AnonymousProperty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMvcAreaAttribute*>::get(),
                                                                             "get_AnonymousProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspMvcAreaAttribute::set_AnonymousProperty(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMvcAreaAttribute*>::get(), "set_AnonymousProperty",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspMvcAreaAttribute::AspMvcAreaAttribute() {}
