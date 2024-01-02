#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__InstantHandleAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::InstantHandleAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::InstantHandleAttribute::*)()>(
    &::JetBrains::Annotations::InstantHandleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eba31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::InstantHandleAttribute*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::JetBrains::Annotations::InstantHandleAttribute* JetBrains::Annotations::InstantHandleAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::JetBrains::Annotations::InstantHandleAttribute*>());
}
inline void JetBrains::Annotations::InstantHandleAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::InstantHandleAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::InstantHandleAttribute::InstantHandleAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
