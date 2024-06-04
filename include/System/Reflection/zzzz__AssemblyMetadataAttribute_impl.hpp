#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyMetadataAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyMetadataAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyMetadataAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyMetadataAttribute::*)(::StringW, ::StringW)>(
    &::System::Reflection::AssemblyMetadataAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x287f070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyMetadataAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyMetadataAttribute::__cordl_internal_get__Key_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyMetadataAttribute::__cordl_internal_get__Key_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Key_k__BackingField;
}
constexpr void System::Reflection::AssemblyMetadataAttribute::__cordl_internal_set__Key_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Key_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Reflection::AssemblyMetadataAttribute::__cordl_internal_get__Value_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyMetadataAttribute::__cordl_internal_get__Value_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Value_k__BackingField;
}
constexpr void System::Reflection::AssemblyMetadataAttribute::__cordl_internal_set__Value_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Value_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::AssemblyMetadataAttribute* System::Reflection::AssemblyMetadataAttribute::New_ctor(::StringW key, ::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::AssemblyMetadataAttribute*>(key, value));
}
inline void System::Reflection::AssemblyMetadataAttribute::_ctor(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyMetadataAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyMetadataAttribute::AssemblyMetadataAttribute() {}
