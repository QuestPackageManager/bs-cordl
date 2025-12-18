#pragma once
// IWYU pragma private; include "System/ComponentModel/ProvidePropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ProvidePropertyAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute.get_PropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::ProvidePropertyAttribute::*)()>(
    &::System::ComponentModel::ProvidePropertyAttribute::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6210e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProvidePropertyAttribute*>::get(),
                                                                               "get_PropertyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ProvidePropertyAttribute.get_ReceiverTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::ProvidePropertyAttribute::*)()>(
    &::System::ComponentModel::ProvidePropertyAttribute::get_ReceiverTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6210e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProvidePropertyAttribute*>::get(),
                                                                               "get_ReceiverTypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_get__PropertyName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_get__PropertyName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyName_k__BackingField;
}
constexpr void System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_set__PropertyName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PropertyName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_get__ReceiverTypeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReceiverTypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_get__ReceiverTypeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReceiverTypeName_k__BackingField;
}
constexpr void System::ComponentModel::ProvidePropertyAttribute::__cordl_internal_set__ReceiverTypeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ReceiverTypeName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW System::ComponentModel::ProvidePropertyAttribute::get_PropertyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProvidePropertyAttribute*>::get(),
                                                                             "get_PropertyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::ProvidePropertyAttribute::get_ReceiverTypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ProvidePropertyAttribute*>::get(),
                                                                             "get_ReceiverTypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ProvidePropertyAttribute::ProvidePropertyAttribute() {}
