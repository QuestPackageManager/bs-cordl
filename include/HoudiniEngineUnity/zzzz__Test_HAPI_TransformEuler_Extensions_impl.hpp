#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_HAPI_TransformEuler_Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_TransformEuler_Extensions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_TransformEuler_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_TransformEuler_Extensions.ToTestObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_HAPI_TransformEuler* (*)(::HoudiniEngineUnity::HAPI_TransformEuler)>(
    &::HoudiniEngineUnity::Test_HAPI_TransformEuler_Extensions::ToTestObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3a97238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_TransformEuler_Extensions*>::get(), "ToTestObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_TransformEuler>::get() })));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::Test_HAPI_TransformEuler* HoudiniEngineUnity::Test_HAPI_TransformEuler_Extensions::ToTestObject(::HoudiniEngineUnity::HAPI_TransformEuler self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_TransformEuler_Extensions*>::get(), "ToTestObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_TransformEuler>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::Test_HAPI_TransformEuler*, false>(nullptr, ___internal_method, self);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_HAPI_TransformEuler_Extensions::Test_HAPI_TransformEuler_Extensions() {}
