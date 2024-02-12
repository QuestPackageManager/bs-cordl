#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspMvcDisplayTemplateAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcDisplayTemplateAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspMvcDisplayTemplateAttribute::*)()>(
    &::JetBrains::Annotations::AspMvcDisplayTemplateAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ed676c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMvcDisplayTemplateAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::JetBrains::Annotations::AspMvcDisplayTemplateAttribute* JetBrains::Annotations::AspMvcDisplayTemplateAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::AspMvcDisplayTemplateAttribute*>());
}
inline void JetBrains::Annotations::AspMvcDisplayTemplateAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspMvcDisplayTemplateAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspMvcDisplayTemplateAttribute::AspMvcDisplayTemplateAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
