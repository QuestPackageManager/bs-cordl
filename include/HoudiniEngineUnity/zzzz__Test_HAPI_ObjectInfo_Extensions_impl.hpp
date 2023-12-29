#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_ObjectInfo_Extensions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_ObjectInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_ObjectInfo_Extensions.ToTestObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_HAPI_ObjectInfo* (*)(::HoudiniEngineUnity::HAPI_ObjectInfo)>(
    &::HoudiniEngineUnity::Test_HAPI_ObjectInfo_Extensions::ToTestObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x208a490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ObjectInfo_Extensions*>::get(), "ToTestObject", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ObjectInfo>::get() })));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::Test_HAPI_ObjectInfo* HoudiniEngineUnity::Test_HAPI_ObjectInfo_Extensions::ToTestObject(::HoudiniEngineUnity::HAPI_ObjectInfo self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ObjectInfo_Extensions*>::get(), "ToTestObject", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ObjectInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::Test_HAPI_ObjectInfo*, false>(nullptr, ___internal_method, self);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_HAPI_ObjectInfo_Extensions::Test_HAPI_ObjectInfo_Extensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
