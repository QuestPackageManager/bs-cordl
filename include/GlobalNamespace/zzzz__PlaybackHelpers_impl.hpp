#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaybackHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlaybackHelpers_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseOffsets_def.hpp"
#include "BeatSaber/Settings/zzzz__ControllerSettings_def.hpp"
#include "BeatSaber/Settings/zzzz__RoomSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__LevelRecording_def.hpp"
#include "GlobalNamespace/zzzz__PlaybackRecord_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlaybackHelpers.CreateAndBindAutoPlayback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Zenject::DiContainer*, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::PlaybackHelpers::CreateAndBindAutoPlayback)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3ac7690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackHelpers*>::get(), "CreateAndBindAutoPlayback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackHelpers.CreateAutoLevelRecording
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::LevelRecording* (*)(::GlobalNamespace::GameplayCoreSceneSetupData*, ::GlobalNamespace::BeatmapObjectSpawnController*)>(
        &::GlobalNamespace::PlaybackHelpers::CreateAutoLevelRecording)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x3ac7820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackHelpers*>::get(), "CreateAutoLevelRecording", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectSpawnController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackHelpers.CreatePlaybackRecord
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PlaybackRecord> (*)(::Zenject::DiContainer*, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::PlaybackHelpers::CreatePlaybackRecord)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3ac79d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackHelpers*>::get(), "CreatePlaybackRecord", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlaybackHelpers.CreatePoseOffsets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::RecPlay::PoseOffsets (*)(
    ByRef<::BeatSaber::Settings::ControllerSettings>, ByRef<::BeatSaber::Settings::RoomSettings>, ::GlobalNamespace::IVRPlatformHelper*)>(&::GlobalNamespace::PlaybackHelpers::CreatePoseOffsets)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x3ac7a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackHelpers*>::get(), "CreatePoseOffsets", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::Settings::ControllerSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::Settings::RoomSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlaybackHelpers::CreateAndBindAutoPlayback(::Zenject::DiContainer* container, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackHelpers*>::get(), "CreateAndBindAutoPlayback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, container, gameObject);
}
inline ::GlobalNamespace::LevelRecording* GlobalNamespace::PlaybackHelpers::CreateAutoLevelRecording(::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetup,
                                                                                                     ::GlobalNamespace::BeatmapObjectSpawnController* beatmapSpawnerController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackHelpers*>::get(), "CreateAutoLevelRecording", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectSpawnController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelRecording*, false>(nullptr, ___internal_method, sceneSetup, beatmapSpawnerController);
}
inline ::UnityW<::GlobalNamespace::PlaybackRecord> GlobalNamespace::PlaybackHelpers::CreatePlaybackRecord(::Zenject::DiContainer* container, ::UnityEngine::GameObject* gameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackHelpers*>::get(), "CreatePlaybackRecord", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlaybackRecord>, false>(nullptr, ___internal_method, container, gameObject);
}
inline ::BeatSaber::RecPlay::PoseOffsets GlobalNamespace::PlaybackHelpers::CreatePoseOffsets(ByRef<::BeatSaber::Settings::ControllerSettings> controller,
                                                                                             ByRef<::BeatSaber::Settings::RoomSettings> room, ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlaybackHelpers*>::get(), "CreatePoseOffsets", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::Settings::ControllerSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::Settings::RoomSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVRPlatformHelper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::PoseOffsets, false>(nullptr, ___internal_method, controller, room, vrPlatformHelper);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaybackHelpers::PlaybackHelpers() {}
