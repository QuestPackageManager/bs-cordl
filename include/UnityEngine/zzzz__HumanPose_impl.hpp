#pragma once
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__HumanPose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::HumanPose.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::HumanPose::*)()>(&::UnityEngine::HumanPose::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2c96338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HumanPose>::get(), "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::HumanPose::Init() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HumanPose>::get(), "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "bodyPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "bodyRotation", ty: "::UnityEngine::Quaternion", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "muscles", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::HumanPose::HumanPose(::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation, ::ArrayW<float_t, ::Array<float_t>*> muscles) noexcept {
  this->bodyPosition = bodyPosition;
  this->bodyRotation = bodyRotation;
  this->muscles = muscles;
}
// Ctor Parameters []
constexpr ::UnityEngine::HumanPose::HumanPose() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
