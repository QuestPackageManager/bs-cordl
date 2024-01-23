#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_ParmInfo_Extensions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_ParmInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions.ToTestObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_HAPI_ParmInfo* (*)(::HoudiniEngineUnity::HAPI_ParmInfo)>(
    &::HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions::ToTestObject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21e41a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions*>::get(), "ToTestObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ParmInfo>::get() })));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::Test_HAPI_ParmInfo* HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions::ToTestObject(::HoudiniEngineUnity::HAPI_ParmInfo self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions*>::get(), "ToTestObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ParmInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::Test_HAPI_ParmInfo*, false>(nullptr, ___internal_method, self);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_HAPI_ParmInfo_Extensions::Test_HAPI_ParmInfo_Extensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
