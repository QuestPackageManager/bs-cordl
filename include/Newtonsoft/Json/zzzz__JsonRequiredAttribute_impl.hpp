#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonRequiredAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonRequiredAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::JsonRequiredAttribute::*)()>(&::Newtonsoft::Json::JsonRequiredAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263efa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonRequiredAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::JsonRequiredAttribute* Newtonsoft::Json::JsonRequiredAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::JsonRequiredAttribute*>());
}
inline void Newtonsoft::Json::JsonRequiredAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::JsonRequiredAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonRequiredAttribute::JsonRequiredAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
