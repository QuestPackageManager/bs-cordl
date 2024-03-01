#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/zzzz__NoReflectionBakingAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::NoReflectionBakingAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::NoReflectionBakingAttribute::*)()>(&::Zenject::NoReflectionBakingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fca230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoReflectionBakingAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Zenject::NoReflectionBakingAttribute* Zenject::NoReflectionBakingAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::NoReflectionBakingAttribute*>());
}
inline void Zenject::NoReflectionBakingAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoReflectionBakingAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::NoReflectionBakingAttribute::NoReflectionBakingAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
