#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSON_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
//  Writing Method size for method: ::OVRSimpleJSON::JSON.Parse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW)>(&::OVRSimpleJSON::JSON::Parse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2658164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSON*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSON::Parse(::StringW aJSON) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSON*>::get(), "Parse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(nullptr, ___internal_method, aJSON);
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSON::JSON() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
