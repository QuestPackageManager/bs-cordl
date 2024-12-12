#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_LayerMask_Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_LayerMask_Extensions_def.hpp"
#include "HoudiniEngineUnity/zzzz__Test_LayerMask_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_LayerMask_Extensions.ToTestObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_LayerMask* (*)(::UnityEngine::LayerMask)>(
    &::HoudiniEngineUnity::Test_LayerMask_Extensions::ToTestObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3a9ade4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LayerMask_Extensions*>::get(), "ToTestObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::Test_LayerMask* HoudiniEngineUnity::Test_LayerMask_Extensions::ToTestObject(::UnityEngine::LayerMask self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LayerMask_Extensions*>::get(), "ToTestObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::Test_LayerMask*, false>(nullptr, ___internal_method, self);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_LayerMask_Extensions::Test_LayerMask_Extensions() {}
