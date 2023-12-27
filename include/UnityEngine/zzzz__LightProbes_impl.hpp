#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightProbes_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallTetrahedralizationCompletedFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallTetrahedralizationCompletedFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cb7238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes*>::get(),
                                                                               "Internal_CallTetrahedralizationCompletedFunction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightProbes.Internal_CallNeedsRetetrahedralizationFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::LightProbes::Internal_CallNeedsRetetrahedralizationFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2cb729c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes*>::get(),
                                                                               "Internal_CallNeedsRetetrahedralizationFunction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbes::setStaticF_tetrahedralizationCompleted(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "tetrahedralizationCompleted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_tetrahedralizationCompleted() {
  return ::cordl_internals::getStaticField<::System::Action*, "tetrahedralizationCompleted", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes*>::get>();
}
inline void UnityEngine::LightProbes::setStaticF_needsRetetrahedralization(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "needsRetetrahedralization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::LightProbes::getStaticF_needsRetetrahedralization() {
  return ::cordl_internals::getStaticField<::System::Action*, "needsRetetrahedralization", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes*>::get>();
}
inline void UnityEngine::LightProbes::Internal_CallTetrahedralizationCompletedFunction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes*>::get(),
                                                                             "Internal_CallTetrahedralizationCompletedFunction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::LightProbes::Internal_CallNeedsRetetrahedralizationFunction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::LightProbes*>::get(),
                                                                             "Internal_CallNeedsRetetrahedralizationFunction", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbes::LightProbes() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
