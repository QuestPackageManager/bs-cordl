#pragma once
// IWYU pragma private; include "System/Reflection/AssemblyInformationalVersionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyInformationalVersionAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyInformationalVersionAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyInformationalVersionAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyInformationalVersionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d21d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyInformationalVersionAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyInformationalVersionAttribute::__cordl_internal_get__InformationalVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InformationalVersion_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyInformationalVersionAttribute::__cordl_internal_get__InformationalVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InformationalVersion_k__BackingField;
}
constexpr void System::Reflection::AssemblyInformationalVersionAttribute::__cordl_internal_set__InformationalVersion_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InformationalVersion_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Reflection::AssemblyInformationalVersionAttribute::_ctor(::StringW informationalVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyInformationalVersionAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, informationalVersion);
}
inline ::System::Reflection::AssemblyInformationalVersionAttribute* System::Reflection::AssemblyInformationalVersionAttribute::New_ctor(::StringW informationalVersion) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::AssemblyInformationalVersionAttribute*>(informationalVersion));
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyInformationalVersionAttribute::AssemblyInformationalVersionAttribute() {}
