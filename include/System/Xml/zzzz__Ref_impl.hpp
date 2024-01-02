#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__Ref_def.hpp"
//  Writing Method size for method: ::System::Xml::Ref.Equal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::Xml::Ref::Equal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x288e178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ref*>::get(), "Equal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline bool System::Xml::Ref::Equal(::StringW strA, ::StringW strB) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Ref*>::get(), "Equal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, strA, strB);
}
// Ctor Parameters []
constexpr ::System::Xml::Ref::Ref() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
