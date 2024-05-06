#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProviderAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProviderAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::TypeDescriptionProviderAttribute::*)(::StringW)>(
    &::System::ComponentModel::TypeDescriptionProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2f48fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProviderAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptionProviderAttribute.get_TypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::TypeDescriptionProviderAttribute::*)()>(
    &::System::ComponentModel::TypeDescriptionProviderAttribute::get_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f49048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProviderAttribute*>::get(), "get_TypeName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::TypeDescriptionProviderAttribute::__cordl_internal_get__TypeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::TypeDescriptionProviderAttribute::__cordl_internal_get__TypeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeName_k__BackingField;
}
constexpr void System::ComponentModel::TypeDescriptionProviderAttribute::__cordl_internal_set__TypeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TypeName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::TypeDescriptionProviderAttribute* System::ComponentModel::TypeDescriptionProviderAttribute::New_ctor(::StringW typeName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::TypeDescriptionProviderAttribute*>(typeName));
}
inline void System::ComponentModel::TypeDescriptionProviderAttribute::_ctor(::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProviderAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeName);
}
inline ::StringW System::ComponentModel::TypeDescriptionProviderAttribute::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptionProviderAttribute*>::get(),
                                                                             "get_TypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptionProviderAttribute::TypeDescriptionProviderAttribute() {}
