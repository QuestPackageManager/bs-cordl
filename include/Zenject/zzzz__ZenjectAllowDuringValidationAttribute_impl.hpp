#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/zzzz__ZenjectAllowDuringValidationAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::ZenjectAllowDuringValidationAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectAllowDuringValidationAttribute::*)()>(
    &::Zenject::ZenjectAllowDuringValidationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d52c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectAllowDuringValidationAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Zenject::ZenjectAllowDuringValidationAttribute* Zenject::ZenjectAllowDuringValidationAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ZenjectAllowDuringValidationAttribute*>());
}
inline void Zenject::ZenjectAllowDuringValidationAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectAllowDuringValidationAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::ZenjectAllowDuringValidationAttribute::ZenjectAllowDuringValidationAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
