#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Reflection/zzzz__AssemblyCompanyAttribute_def.hpp"
//  Writing Method size for method: ::System::Reflection::AssemblyCompanyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::AssemblyCompanyAttribute::*)(::StringW)>(
    &::System::Reflection::AssemblyCompanyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e5e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyCompanyAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Reflection::AssemblyCompanyAttribute::__get__Company_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Company_k__BackingField;
}
constexpr ::StringW const& System::Reflection::AssemblyCompanyAttribute::__get__Company_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Company_k__BackingField;
}
constexpr void System::Reflection::AssemblyCompanyAttribute::__set__Company_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Company_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::AssemblyCompanyAttribute* System::Reflection::AssemblyCompanyAttribute::New_ctor(::StringW company) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::AssemblyCompanyAttribute*>(company));
}
inline void System::Reflection::AssemblyCompanyAttribute::_ctor(::StringW company) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::AssemblyCompanyAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, company);
}
// Ctor Parameters []
constexpr ::System::Reflection::AssemblyCompanyAttribute::AssemblyCompanyAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
