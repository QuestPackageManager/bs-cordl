#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__XRSubsystemHelper_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRSubsystemHelper.GetCurrentDisplaySubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Il2CppObject* (*)()>(&::GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystem)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1fabe50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get(),
                                                                               "GetCurrentDisplaySubsystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRSubsystemHelper.GetCurrentDisplaySubsystemDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRDisplaySubsystemDescriptor* (*)()>(
    &::GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystemDescriptor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1fabf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get(),
                                                                               "GetCurrentDisplaySubsystemDescriptor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRSubsystemHelper.GetCurrentInputSubsystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRInputSubsystem* (*)()>(&::GlobalNamespace::XRSubsystemHelper::GetCurrentInputSubsystem)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1fac0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get(),
                                                                               "GetCurrentInputSubsystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRSubsystemHelper::setStaticF_s_displaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_displaySubsystems",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* GlobalNamespace::XRSubsystemHelper::getStaticF_s_displaySubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_displaySubsystems",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get>();
}
inline void GlobalNamespace::XRSubsystemHelper::setStaticF_s_displaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_displaySubsystemDescriptors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* GlobalNamespace::XRSubsystemHelper::getStaticF_s_displaySubsystemDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_displaySubsystemDescriptors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get>();
}
inline void GlobalNamespace::XRSubsystemHelper::setStaticF_s_inputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_inputSubsystems",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* GlobalNamespace::XRSubsystemHelper::getStaticF_s_inputSubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_inputSubsystems",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get>();
}
inline Il2CppObject* GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get(),
                                                                             "GetCurrentDisplaySubsystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystemDescriptor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get(),
                                                                             "GetCurrentDisplaySubsystemDescriptor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRDisplaySubsystemDescriptor*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRInputSubsystem* GlobalNamespace::XRSubsystemHelper::GetCurrentInputSubsystem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XRSubsystemHelper*>::get(),
                                                                             "GetCurrentInputSubsystem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRInputSubsystem*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRSubsystemHelper::XRSubsystemHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
