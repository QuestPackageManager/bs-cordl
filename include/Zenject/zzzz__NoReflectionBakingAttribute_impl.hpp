#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/zzzz__NoReflectionBakingAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::NoReflectionBakingAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::NoReflectionBakingAttribute::*)()>(&::Zenject::NoReflectionBakingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eba9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoReflectionBakingAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Zenject::NoReflectionBakingAttribute* Zenject::NoReflectionBakingAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::NoReflectionBakingAttribute*>());
}
inline void Zenject::NoReflectionBakingAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoReflectionBakingAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::NoReflectionBakingAttribute::NoReflectionBakingAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
