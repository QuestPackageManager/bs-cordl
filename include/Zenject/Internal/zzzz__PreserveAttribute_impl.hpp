#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/Internal/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::PreserveAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::PreserveAttribute::*)()>(&::Zenject::Internal::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eb97a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::PreserveAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Zenject::Internal::PreserveAttribute* Zenject::Internal::PreserveAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::PreserveAttribute*>());
}
inline void Zenject::Internal::PreserveAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::PreserveAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::Internal::PreserveAttribute::PreserveAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
