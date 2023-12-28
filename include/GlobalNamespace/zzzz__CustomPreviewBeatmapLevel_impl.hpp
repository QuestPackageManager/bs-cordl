#pragma once
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelInfoSaveData_def.hpp"
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__ISpriteAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69::*)()>(
    &::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x23477f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2347b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::CustomPreviewBeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder, ::GlobalNamespace::CustomPreviewBeatmapLevel* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69() {}
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_spriteAsyncLoader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ISpriteAsyncLoader* (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_spriteAsyncLoader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234764c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_spriteAsyncLoader", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_standardLevelInfoSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardLevelInfoSaveData* (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_standardLevelInfoSaveData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2347654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_standardLevelInfoSaveData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_customLevelPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_customLevelPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234765c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_customLevelPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_levelID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2347664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_levelID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_songName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_songName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234766c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_songName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_songSubName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_songSubName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2347674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_songSubName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_songAuthorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_songAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234767c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_songAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_levelAuthorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_levelAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2347684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_levelAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_beatsPerMinute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234768c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_beatsPerMinute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_songTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2347694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_songTimeOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_songDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_songDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234769c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_songDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_shuffle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_shuffle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_shuffle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_shufflePeriod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_shufflePeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_shufflePeriod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_previewStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_previewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_previewStartTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_previewDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_previewDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_previewDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_environmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_environmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_allDirectionsEnvironmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_environmentInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> (
    ::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&::GlobalNamespace::CustomPreviewBeatmapLevel::get_environmentInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_environmentInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_defaultCoverImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_defaultCoverImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_defaultCoverImage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_previewDifficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* (
    ::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&::GlobalNamespace::CustomPreviewBeatmapLevel::get_previewDifficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_songPreviewAudioClipPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_songPreviewAudioClipPath)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23473d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_songPreviewAudioClipPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_beatmapOverrideColorSchemes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> (
    ::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&::GlobalNamespace::CustomPreviewBeatmapLevel::get_beatmapOverrideColorSchemes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_beatmapOverrideColorSchemes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.get_contentRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSensitivityFlag (::GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::get_contentRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23476f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                               "get_contentRating", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel.GetCoverImageAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* (
    ::GlobalNamespace::CustomPreviewBeatmapLevel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::CustomPreviewBeatmapLevel::GetCoverImageAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x23476fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(), "GetCoverImageAsync", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomPreviewBeatmapLevel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomPreviewBeatmapLevel::*)(
    ::UnityEngine::Sprite*, ::GlobalNamespace::StandardLevelInfoSaveData*, ::StringW, ::GlobalNamespace::ISpriteAsyncLoader*, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, float_t, float_t,
    float_t, float_t, float_t, float_t, ::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::EnvironmentInfoSO*,
    ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*>, ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*>,
    ::GlobalNamespace::PlayerSensitivityFlag, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*)>(
    &::GlobalNamespace::CustomPreviewBeatmapLevel::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2347508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISpriteAsyncLoader*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
constexpr GlobalNamespace::CustomPreviewBeatmapLevel::operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept {
  return static_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IFilePathSongPreviewAudioClipProvider"
constexpr GlobalNamespace::CustomPreviewBeatmapLevel::operator ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*() noexcept {
  return static_cast<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::ISpriteAsyncLoader*& GlobalNamespace::CustomPreviewBeatmapLevel::__get__spriteAsyncLoader_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteAsyncLoader_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISpriteAsyncLoader*> const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__spriteAsyncLoader_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteAsyncLoader_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__spriteAsyncLoader_k__BackingField(::GlobalNamespace::ISpriteAsyncLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteAsyncLoader_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StandardLevelInfoSaveData*& GlobalNamespace::CustomPreviewBeatmapLevel::__get__standardLevelInfoSaveData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelInfoSaveData_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelInfoSaveData*> const&
GlobalNamespace::CustomPreviewBeatmapLevel::__get__standardLevelInfoSaveData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelInfoSaveData_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__standardLevelInfoSaveData_k__BackingField(::GlobalNamespace::StandardLevelInfoSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelInfoSaveData_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::CustomPreviewBeatmapLevel::__get__customLevelPath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelPath_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__customLevelPath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelPath_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__customLevelPath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customLevelPath_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::CustomPreviewBeatmapLevel::__get__levelID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__levelID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__levelID_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::CustomPreviewBeatmapLevel::__get__songName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__songName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__songName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::CustomPreviewBeatmapLevel::__get__songSubName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__songSubName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__songSubName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songSubName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::CustomPreviewBeatmapLevel::__get__songAuthorName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__songAuthorName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__songAuthorName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songAuthorName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::CustomPreviewBeatmapLevel::__get__levelAuthorName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__levelAuthorName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__levelAuthorName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelAuthorName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::CustomPreviewBeatmapLevel::__get__beatsPerMinute_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute_k__BackingField;
}
constexpr float_t const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__beatsPerMinute_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__beatsPerMinute_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatsPerMinute_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::CustomPreviewBeatmapLevel::__get__songTimeOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset_k__BackingField;
}
constexpr float_t const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__songTimeOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__songTimeOffset_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeOffset_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::CustomPreviewBeatmapLevel::__get__songDuration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDuration_k__BackingField;
}
constexpr float_t const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__songDuration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDuration_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__songDuration_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songDuration_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::CustomPreviewBeatmapLevel::__get__shuffle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle_k__BackingField;
}
constexpr float_t const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__shuffle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__shuffle_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shuffle_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::CustomPreviewBeatmapLevel::__get__shufflePeriod_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod_k__BackingField;
}
constexpr float_t const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__shufflePeriod_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__shufflePeriod_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shufflePeriod_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::CustomPreviewBeatmapLevel::__get__previewStartTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__previewStartTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__previewStartTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewStartTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::CustomPreviewBeatmapLevel::__get__previewDuration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration_k__BackingField;
}
constexpr float_t const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__previewDuration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__previewDuration_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewDuration_k__BackingField = value;
}
constexpr ::GlobalNamespace::EnvironmentInfoSO*& GlobalNamespace::CustomPreviewBeatmapLevel::__get__environmentInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfo_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__environmentInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfo_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__environmentInfo_k__BackingField(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentInfo_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO*& GlobalNamespace::CustomPreviewBeatmapLevel::__get__allDirectionsEnvironmentInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allDirectionsEnvironmentInfo_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__allDirectionsEnvironmentInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allDirectionsEnvironmentInfo_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__allDirectionsEnvironmentInfo_k__BackingField(::GlobalNamespace::EnvironmentInfoSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allDirectionsEnvironmentInfo_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*>& GlobalNamespace::CustomPreviewBeatmapLevel::__get__environmentInfos_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfos_k__BackingField;
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> const&
GlobalNamespace::CustomPreviewBeatmapLevel::__get__environmentInfos_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfos_k__BackingField;
}
constexpr void
GlobalNamespace::CustomPreviewBeatmapLevel::__set__environmentInfos_k__BackingField(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentInfos_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::CustomPreviewBeatmapLevel::__get__defaultCoverImage_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultCoverImage_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__defaultCoverImage_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultCoverImage_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__defaultCoverImage_k__BackingField(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultCoverImage_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*&
GlobalNamespace::CustomPreviewBeatmapLevel::__get__previewDifficultyBeatmapSets_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDifficultyBeatmapSets_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> const&
GlobalNamespace::CustomPreviewBeatmapLevel::__get__previewDifficultyBeatmapSets_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDifficultyBeatmapSets_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__previewDifficultyBeatmapSets_k__BackingField(
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewDifficultyBeatmapSets_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*>& GlobalNamespace::CustomPreviewBeatmapLevel::__get__beatmapOverrideColorSchemes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapOverrideColorSchemes_k__BackingField;
}
constexpr ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> const&
GlobalNamespace::CustomPreviewBeatmapLevel::__get__beatmapOverrideColorSchemes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapOverrideColorSchemes_k__BackingField;
}
constexpr void
GlobalNamespace::CustomPreviewBeatmapLevel::__set__beatmapOverrideColorSchemes_k__BackingField(::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapOverrideColorSchemes_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::CustomPreviewBeatmapLevel::__get__contentRating_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentRating_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__contentRating_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentRating_k__BackingField;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__contentRating_k__BackingField(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentRating_k__BackingField = value;
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::CustomPreviewBeatmapLevel::__get__coverImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::CustomPreviewBeatmapLevel::__get__coverImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr void GlobalNamespace::CustomPreviewBeatmapLevel::__set__coverImage(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coverImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ISpriteAsyncLoader* GlobalNamespace::CustomPreviewBeatmapLevel::get_spriteAsyncLoader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_spriteAsyncLoader", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ISpriteAsyncLoader*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelInfoSaveData* GlobalNamespace::CustomPreviewBeatmapLevel::get_standardLevelInfoSaveData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_standardLevelInfoSaveData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardLevelInfoSaveData*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomPreviewBeatmapLevel::get_customLevelPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_customLevelPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomPreviewBeatmapLevel::get_levelID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_levelID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomPreviewBeatmapLevel::get_songName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_songName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomPreviewBeatmapLevel::get_songSubName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_songSubName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomPreviewBeatmapLevel::get_songAuthorName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_songAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomPreviewBeatmapLevel::get_levelAuthorName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_levelAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomPreviewBeatmapLevel::get_beatsPerMinute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_beatsPerMinute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomPreviewBeatmapLevel::get_songTimeOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_songTimeOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomPreviewBeatmapLevel::get_songDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_songDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomPreviewBeatmapLevel::get_shuffle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_shuffle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomPreviewBeatmapLevel::get_shufflePeriod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_shufflePeriod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomPreviewBeatmapLevel::get_previewStartTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_previewStartTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::CustomPreviewBeatmapLevel::get_previewDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_previewDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::CustomPreviewBeatmapLevel::get_environmentInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_environmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::CustomPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> GlobalNamespace::CustomPreviewBeatmapLevel::get_environmentInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_environmentInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::Sprite* GlobalNamespace::CustomPreviewBeatmapLevel::get_defaultCoverImage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_defaultCoverImage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* GlobalNamespace::CustomPreviewBeatmapLevel::get_previewDifficultyBeatmapSets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomPreviewBeatmapLevel::get_songPreviewAudioClipPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_songPreviewAudioClipPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> GlobalNamespace::CustomPreviewBeatmapLevel::get_beatmapOverrideColorSchemes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_beatmapOverrideColorSchemes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::CustomPreviewBeatmapLevel::get_contentRating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(),
                                                                             "get_contentRating", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSensitivityFlag, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GlobalNamespace::CustomPreviewBeatmapLevel::GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(), "GetCoverImageAsync", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*, false>(this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::CustomPreviewBeatmapLevel* GlobalNamespace::CustomPreviewBeatmapLevel::New_ctor(
    ::UnityEngine::Sprite* defaultCoverImage, ::GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData, ::StringW customLevelPath,
    ::GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute,
    float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
    ::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo, ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos,
    ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> beatmapOverrideColorSchemes, ::GlobalNamespace::PlayerSensitivityFlag contentRating,
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomPreviewBeatmapLevel*>(
      defaultCoverImage, standardLevelInfoSaveData, customLevelPath, spriteAsyncLoader, levelID, songName, songSubName, songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, shuffle,
      shufflePeriod, previewStartTime, previewDuration, environmentInfo, allDirectionsEnvironmentInfo, environmentInfos, beatmapOverrideColorSchemes, contentRating, previewDifficultyBeatmapSets));
}
inline void GlobalNamespace::CustomPreviewBeatmapLevel::_ctor(::UnityEngine::Sprite* defaultCoverImage, ::GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData,
                                                              ::StringW customLevelPath, ::GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader, ::StringW levelID, ::StringW songName,
                                                              ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset,
                                                              float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration,
                                                              ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo,
                                                              ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos,
                                                              ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> beatmapOverrideColorSchemes,
                                                              ::GlobalNamespace::PlayerSensitivityFlag contentRating,
                                                              ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardLevelInfoSaveData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISpriteAsyncLoader*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentInfoSO*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, defaultCoverImage, standardLevelInfoSaveData, customLevelPath, spriteAsyncLoader, levelID, songName, songSubName,
                                                          songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, shuffle, shufflePeriod, previewStartTime, previewDuration, environmentInfo,
                                                          allDirectionsEnvironmentInfo, environmentInfos, beatmapOverrideColorSchemes, contentRating, previewDifficultyBeatmapSets);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomPreviewBeatmapLevel::CustomPreviewBeatmapLevel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
