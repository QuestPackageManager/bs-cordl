#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VRPlatformUtils_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.TriggerValueDefaultImplementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::VRPlatformUtils::TriggerValueDefaultImplementation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x20f73c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRPlatformUtils*>::get(), "TriggerValueDefaultImplementation",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.GetMenuButtonDefaultImplementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::VRPlatformUtils::GetMenuButtonDefaultImplementation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x20f6ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRPlatformUtils*>::get(),
                                                                               "GetMenuButtonDefaultImplementation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.GetMenuButtonDownDefaultImplementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::VRPlatformUtils::GetMenuButtonDownDefaultImplementation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x20f6d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRPlatformUtils*>::get(),
                                                                               "GetMenuButtonDownDefaultImplementation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.GetAnyJoystickMaxAxisDefaultImplementation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::IVRPlatformHelper*)>(
    &::GlobalNamespace::VRPlatformUtils::GetAnyJoystickMaxAxisDefaultImplementation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x20f7448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRPlatformUtils*>::get(), "GetAnyJoystickMaxAxisDefaultImplementation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRPlatformUtils.StopXR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::IVerboseLogger*)>(&::GlobalNamespace::VRPlatformUtils::StopXR)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x20f759c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRPlatformUtils*>::get(), "StopXR", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVerboseLogger*>::get() })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::VRPlatformUtils::TriggerValueDefaultImplementation(::UnityEngine::XR::XRNode node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRPlatformUtils*>::get(), "TriggerValueDefaultImplementation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::VRPlatformUtils::GetMenuButtonDefaultImplementation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRPlatformUtils*>::get(),
                                                                             "GetMenuButtonDefaultImplementation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::VRPlatformUtils::GetMenuButtonDownDefaultImplementation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRPlatformUtils*>::get(),
                                                                             "GetMenuButtonDownDefaultImplementation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 GlobalNamespace::VRPlatformUtils::GetAnyJoystickMaxAxisDefaultImplementation(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRPlatformUtils*>::get(), "GetAnyJoystickMaxAxisDefaultImplementation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, vrPlatformHelper);
}
inline void GlobalNamespace::VRPlatformUtils::StopXR(::GlobalNamespace::IVerboseLogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRPlatformUtils*>::get(), "StopXR", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVerboseLogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logger);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRPlatformUtils::VRPlatformUtils() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
