#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllersRecorderExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VRControllersRecorderExtensions_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__PlaymodeOptions_def.hpp"
#include "GlobalNamespace/zzzz__VRControllersRecorder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorderExtensions.ToVRControllersRecorderMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRControllersRecorder_Mode (*)(::GlobalNamespace::PlaymodeOptions)>(
    &::GlobalNamespace::VRControllersRecorderExtensions::ToVRControllersRecorderMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x574e8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorderExtensions*>::get(), "ToVRControllersRecorderMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlaymodeOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersRecorderExtensions.ToVRControllersRecorderInitData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRControllersRecorder_InitData* (*)(::GlobalNamespace::GameplayAdditionalInformation*)>(
    &::GlobalNamespace::VRControllersRecorderExtensions::ToVRControllersRecorderInitData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x574e8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorderExtensions*>::get(), "ToVRControllersRecorderInitData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayAdditionalInformation*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::VRControllersRecorder_Mode GlobalNamespace::VRControllersRecorderExtensions::ToVRControllersRecorderMode(::GlobalNamespace::PlaymodeOptions playmodeOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorderExtensions*>::get(), "ToVRControllersRecorderMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlaymodeOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRControllersRecorder_Mode, false>(nullptr, ___internal_method, playmodeOptions);
}
inline ::GlobalNamespace::VRControllersRecorder_InitData*
GlobalNamespace::VRControllersRecorderExtensions::ToVRControllersRecorderInitData(::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VRControllersRecorderExtensions*>::get(), "ToVRControllersRecorderInitData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayAdditionalInformation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRControllersRecorder_InitData*, false>(nullptr, ___internal_method, gameplayAdditionalInformation);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRControllersRecorderExtensions::VRControllersRecorderExtensions() {}
