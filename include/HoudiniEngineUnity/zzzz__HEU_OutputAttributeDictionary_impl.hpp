#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttribute_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SerializableDictionary_2_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttributeDictionary_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_OutputAttributeDictionary._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_OutputAttributeDictionary::*)()>(
    &::HoudiniEngineUnity::HEU_OutputAttributeDictionary::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x202d044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttributeDictionary*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::HEU_OutputAttributeDictionary* HoudiniEngineUnity::HEU_OutputAttributeDictionary::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_OutputAttributeDictionary*>());
}
inline void HoudiniEngineUnity::HEU_OutputAttributeDictionary::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_OutputAttributeDictionary*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_OutputAttributeDictionary::HEU_OutputAttributeDictionary() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
