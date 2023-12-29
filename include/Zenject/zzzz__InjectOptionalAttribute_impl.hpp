#pragma once
#include "Zenject/zzzz__InjectAttributeBase_impl.hpp"
#include "Zenject/zzzz__InjectOptionalAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::InjectOptionalAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectOptionalAttribute::*)()>(&::Zenject::InjectOptionalAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d51a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectOptionalAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Zenject::InjectOptionalAttribute* Zenject::InjectOptionalAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::InjectOptionalAttribute*>());
}
inline void Zenject::InjectOptionalAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectOptionalAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::InjectOptionalAttribute::InjectOptionalAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
