#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyDefaultAliasAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyDefaultAliasAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyDefaultAliasAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyDefaultAliasAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2505050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyDefaultAliasAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyDefaultAliasAttribute::__cordl_internal_get__DefaultAlias_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultAlias_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyDefaultAliasAttribute::__cordl_internal_get__DefaultAlias_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DefaultAlias_k__BackingField;
}
constexpr void System::Reflection::AssemblyDefaultAliasAttribute::__cordl_internal_set__DefaultAlias_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DefaultAlias_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::AssemblyDefaultAliasAttribute* System::Reflection::AssemblyDefaultAliasAttribute::New_ctor(::StringW defaultAlias) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::AssemblyDefaultAliasAttribute*>(defaultAlias));
}
inline void System::Reflection::AssemblyDefaultAliasAttribute::_ctor(::StringW defaultAlias) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyDefaultAliasAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, defaultAlias);
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyDefaultAliasAttribute::AssemblyDefaultAliasAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
