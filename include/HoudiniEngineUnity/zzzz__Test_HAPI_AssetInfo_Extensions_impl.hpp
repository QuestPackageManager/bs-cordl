#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_AssetInfo_Extensions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_AssetInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_AssetInfo_Extensions.ToTestObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_HAPI_AssetInfo* (*)(::HoudiniEngineUnity::HAPI_AssetInfo)>(
    &::HoudiniEngineUnity::Test_HAPI_AssetInfo_Extensions::ToTestObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21e27b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AssetInfo_Extensions*>::get(), "ToTestObject", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AssetInfo>::get() })));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::Test_HAPI_AssetInfo* HoudiniEngineUnity::Test_HAPI_AssetInfo_Extensions::ToTestObject(::HoudiniEngineUnity::HAPI_AssetInfo self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AssetInfo_Extensions*>::get(), "ToTestObject", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AssetInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::Test_HAPI_AssetInfo*, false>(nullptr, ___internal_method, self);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_HAPI_AssetInfo_Extensions::Test_HAPI_AssetInfo_Extensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
