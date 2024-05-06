#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlaybackHelpers_def.hpp"
#include "BeatSaber/GameSettings/zzzz__MainSettingsHandler_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseOffsets_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlaybackHelpers.CreatePoseOffsets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::RecPlay::PoseOffsets (*)(
    ::BeatSaber::GameSettings::MainSettingsHandler*, ::GlobalNamespace::IVRPlatformHelper*)>(&::GlobalNamespace::PlaybackHelpers::CreatePoseOffsets)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x26904ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackHelpers*>::get(), "CreatePoseOffsets", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::MainSettingsHandler*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get() })));
    return ___internal_method;
  }
};
inline ::BeatSaber::RecPlay::PoseOffsets GlobalNamespace::PlaybackHelpers::CreatePoseOffsets(::BeatSaber::GameSettings::MainSettingsHandler* mainSettingsHandler,
                                                                                             ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackHelpers*>::get(), "CreatePoseOffsets", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::MainSettingsHandler*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::PoseOffsets, false>(nullptr, ___internal_method, mainSettingsHandler, vrPlatformHelper);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaybackHelpers::PlaybackHelpers() {}
