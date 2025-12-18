#pragma once
// IWYU pragma private; include "Unity/Properties/GeneratePropertyBagsForTypesQualifiedWithAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Properties/zzzz__TypeGenerationOptions_impl.hpp"
#include "Unity/Properties/zzzz__GeneratePropertyBagsForTypesQualifiedWithAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__TypeGenerationOptions_def.hpp"
//  Writing Method size for method: ::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::*)(
    ::System::Type*, ::Unity::Properties::TypeGenerationOptions)>(&::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x69d3018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::TypeGenerationOptions>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::System::Type* const& Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_set__Type_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Type_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Properties::TypeGenerationOptions& Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_get__Options_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr ::Unity::Properties::TypeGenerationOptions const& Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_get__Options_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Options_k__BackingField;
}
constexpr void Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::__cordl_internal_set__Options_k__BackingField(::Unity::Properties::TypeGenerationOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Options_k__BackingField = value;
}
inline void Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::_ctor(::System::Type* type, ::Unity::Properties::TypeGenerationOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::TypeGenerationOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, options);
}
inline ::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute*
Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::New_ctor(::System::Type* type, ::Unity::Properties::TypeGenerationOptions options) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute*>(type, options));
}
// Ctor Parameters []
constexpr ::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute::GeneratePropertyBagsForTypesQualifiedWithAttribute() {}
