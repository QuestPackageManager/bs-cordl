#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyProductAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyProductAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyProductAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyProductAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyProductAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d21df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyProductAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyProductAttribute::__cordl_internal_get__Product_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Product_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyProductAttribute::__cordl_internal_get__Product_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Product_k__BackingField;
}
constexpr void System::Reflection::AssemblyProductAttribute::__cordl_internal_set__Product_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Product_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Reflection::AssemblyProductAttribute::_ctor(::StringW product) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyProductAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, product);
}
inline ::System::Reflection::AssemblyProductAttribute* System::Reflection::AssemblyProductAttribute::New_ctor(::StringW product) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::AssemblyProductAttribute*>(product));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyProductAttribute::AssemblyProductAttribute() {}
