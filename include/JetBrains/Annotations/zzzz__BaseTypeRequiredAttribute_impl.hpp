#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__BaseTypeRequiredAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::BaseTypeRequiredAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::BaseTypeRequiredAttribute::*)(::System::Type*)>(
    &::JetBrains::Annotations::BaseTypeRequiredAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d52394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::BaseTypeRequiredAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::BaseTypeRequiredAttribute.get_BaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::JetBrains::Annotations::BaseTypeRequiredAttribute::*)()>(
    &::JetBrains::Annotations::BaseTypeRequiredAttribute::get_BaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d523bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::BaseTypeRequiredAttribute*>::get(),
                                                                               "get_BaseType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::BaseTypeRequiredAttribute.set_BaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::BaseTypeRequiredAttribute::*)(::System::Type*)>(
    &::JetBrains::Annotations::BaseTypeRequiredAttribute::set_BaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d523c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::BaseTypeRequiredAttribute*>::get(), "set_BaseType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& JetBrains::Annotations::BaseTypeRequiredAttribute::__get__BaseType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseType_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& JetBrains::Annotations::BaseTypeRequiredAttribute::__get__BaseType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseType_k__BackingField;
}
constexpr void JetBrains::Annotations::BaseTypeRequiredAttribute::__set__BaseType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BaseType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::JetBrains::Annotations::BaseTypeRequiredAttribute* JetBrains::Annotations::BaseTypeRequiredAttribute::New_ctor(::System::Type* baseType) {
  return THROW_UNLESS(::il2cpp_utils::New<::JetBrains::Annotations::BaseTypeRequiredAttribute*>(baseType));
}
inline void JetBrains::Annotations::BaseTypeRequiredAttribute::_ctor(::System::Type* baseType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::BaseTypeRequiredAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseType);
}
inline ::System::Type* JetBrains::Annotations::BaseTypeRequiredAttribute::get_BaseType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::BaseTypeRequiredAttribute*>::get(),
                                                                             "get_BaseType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void JetBrains::Annotations::BaseTypeRequiredAttribute::set_BaseType(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::BaseTypeRequiredAttribute*>::get(), "set_BaseType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::BaseTypeRequiredAttribute::BaseTypeRequiredAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
