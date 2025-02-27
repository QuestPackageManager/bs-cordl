#pragma once
// IWYU pragma private; include "GlobalNamespace/FileSystemBeatmapLevelData.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_impl.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileSystemBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__FileDifficultyBeatmap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::FileSystemBeatmapLevelData::*)()>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d26b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(),
                                                                               "get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.get_songAudioClipPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)()>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::get_songAudioClipPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d26bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(),
                                                                               "get_songAudioClipPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)()>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d26c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(),
                                                                               "get_name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemBeatmapLevelData::*)(
    ::StringW, ::StringW, ::StringW,
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                 ::GlobalNamespace::FileDifficultyBeatmap*>*)>(&::GlobalNamespace::FileSystemBeatmapLevelData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26d26cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
                ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::FileDifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetAudioDataStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileSystemBeatmapLevelData::*)()>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::GetAudioDataStringAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26d270c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(),
                                                                               "GetAudioDataStringAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::FileSystemBeatmapLevelData::GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26d27c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "GetBeatmapStringAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::FileSystemBeatmapLevelData::GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26d2904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "GetLightshowStringAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetAudioDataString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)()>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::GetAudioDataString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26d2998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(),
                                                                               "GetAudioDataString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetBeatmapString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::GetBeatmapString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26d2a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "GetBeatmapString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetLightshowString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::GetLightshowString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26d2a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "GetLightshowString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.ContainsBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::ContainsBeatmapData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26d2a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "ContainsBeatmapData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.GetDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::FileDifficultyBeatmap* (
    ::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::FileSystemBeatmapLevelData::GetDifficultyBeatmap)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x26d2858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "GetDifficultyBeatmap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.IBeatmapLevelData_GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26d2a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "IBeatmapLevelData.GetBeatmapStringAsync",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.IBeatmapLevelData_GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26d2a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "IBeatmapLevelData.GetLightshowStringAsync",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.IBeatmapLevelData_GetBeatmapString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetBeatmapString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26d2a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "IBeatmapLevelData.GetBeatmapString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.IBeatmapLevelData_GetLightshowString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetLightshowString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26d2a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "IBeatmapLevelData.GetLightshowString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemBeatmapLevelData.IBeatmapLevelData_ContainsBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FileSystemBeatmapLevelData::*)(::ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_ContainsBeatmapData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26d2a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "IBeatmapLevelData.ContainsBeatmapData",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioClipPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipPath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioClipPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClipPath;
}
constexpr void GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_set__audioClipPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClipPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioDataPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioDataPath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioDataPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioDataPath;
}
constexpr void GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_set__audioDataPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioDataPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                       ::GlobalNamespace::FileDifficultyBeatmap*>*&
GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                       ::GlobalNamespace::FileDifficultyBeatmap*>* const&
GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr void GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_set__difficultyBeatmaps(
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                 ::GlobalNamespace::FileDifficultyBeatmap*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_get__audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr void GlobalNamespace::FileSystemBeatmapLevelData::__cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t GlobalNamespace::FileSystemBeatmapLevelData::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(),
                                                                             "get_version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::get_songAudioClipPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(),
                                                                             "get_songAudioClipPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "get_name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::FileSystemBeatmapLevelData::_ctor(
    ::StringW name, ::StringW audioClipPath, ::StringW audioDataPath,
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                 ::GlobalNamespace::FileDifficultyBeatmap*>* difficultyBeatmaps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<
              ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::FileDifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, audioClipPath, audioDataPath, difficultyBeatmaps);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemBeatmapLevelData::GetAudioDataStringAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(),
                                                                             "GetAudioDataStringAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemBeatmapLevelData::GetBeatmapStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "GetBeatmapStringAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, beatmapKey);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemBeatmapLevelData::GetLightshowStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "GetLightshowStringAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::GetAudioDataString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(),
                                                                             "GetAudioDataString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::GetBeatmapString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "GetBeatmapString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::GetLightshowString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "GetLightshowString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, beatmapKey);
}
inline bool GlobalNamespace::FileSystemBeatmapLevelData::ContainsBeatmapData(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "ContainsBeatmapData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::FileDifficultyBeatmap* GlobalNamespace::FileSystemBeatmapLevelData::GetDifficultyBeatmap(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "GetDifficultyBeatmap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FileDifficultyBeatmap*, false>(this, ___internal_method, beatmapKey);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetBeatmapStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "IBeatmapLevelData.GetBeatmapStringAsync",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, beatmapKey);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetLightshowStringAsync(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "IBeatmapLevelData.GetLightshowStringAsync",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetBeatmapString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "IBeatmapLevelData.GetBeatmapString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_GetLightshowString(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "IBeatmapLevelData.GetLightshowString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, beatmapKey);
}
inline bool GlobalNamespace::FileSystemBeatmapLevelData::IBeatmapLevelData_ContainsBeatmapData(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemBeatmapLevelData*>::get(), "IBeatmapLevelData.ContainsBeatmapData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::FileSystemBeatmapLevelData* GlobalNamespace::FileSystemBeatmapLevelData::New_ctor(
    ::StringW name, ::StringW audioClipPath, ::StringW audioDataPath,
    ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                 ::GlobalNamespace::FileDifficultyBeatmap*>* difficultyBeatmaps) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FileSystemBeatmapLevelData*>(name, audioClipPath, audioDataPath, difficultyBeatmaps));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
constexpr GlobalNamespace::FileSystemBeatmapLevelData::operator ::GlobalNamespace::IBeatmapLevelData*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
constexpr ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::FileSystemBeatmapLevelData::i___GlobalNamespace__IBeatmapLevelData() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IFilePathSongAudioClipProvider"
constexpr GlobalNamespace::FileSystemBeatmapLevelData::operator ::GlobalNamespace::IFilePathSongAudioClipProvider*() noexcept {
  return static_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFilePathSongAudioClipProvider"
constexpr ::GlobalNamespace::IFilePathSongAudioClipProvider* GlobalNamespace::FileSystemBeatmapLevelData::i___GlobalNamespace__IFilePathSongAudioClipProvider() noexcept {
  return static_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemBeatmapLevelData::FileSystemBeatmapLevelData() {}
