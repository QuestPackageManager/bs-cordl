#pragma once
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_impl.hpp"
#include "GlobalNamespace/zzzz__CustomBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevel.get_beatmapLevelData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData* (::GlobalNamespace::CustomBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23473c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                                                                               "get_beatmapLevelData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevel.get_songAudioClipPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::CustomBeatmapLevel::*)()>(
    &::GlobalNamespace::CustomBeatmapLevel::get_songAudioClipPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23473cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                                                                               "get_songAudioClipPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBeatmapLevel::*)(::GlobalNamespace::CustomPreviewBeatmapLevel*)>(
    &::GlobalNamespace::CustomBeatmapLevel::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2347440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevel.SetBeatmapLevelData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBeatmapLevel::*)(::GlobalNamespace::BeatmapLevelData*)>(
    &::GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2347600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(), "SetBeatmapLevelData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevel.GetBeatmapLevelColorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::CustomBeatmapLevel::*)(int32_t)>(
    &::GlobalNamespace::CustomBeatmapLevel::GetBeatmapLevelColorScheme)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2347608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(), "GetBeatmapLevelColorScheme",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevel"
constexpr GlobalNamespace::CustomBeatmapLevel::operator ::GlobalNamespace::IBeatmapLevel*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapLevel"
constexpr ::GlobalNamespace::IBeatmapLevel* GlobalNamespace::CustomBeatmapLevel::i___GlobalNamespace__IBeatmapLevel() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
constexpr GlobalNamespace::CustomBeatmapLevel::operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept {
  return static_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPreviewBeatmapLevel"
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::CustomBeatmapLevel::i___GlobalNamespace__IPreviewBeatmapLevel() noexcept {
  return static_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IFilePathSongAudioClipProvider"
constexpr GlobalNamespace::CustomBeatmapLevel::operator ::GlobalNamespace::IFilePathSongAudioClipProvider*() noexcept {
  return static_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFilePathSongAudioClipProvider"
constexpr ::GlobalNamespace::IFilePathSongAudioClipProvider* GlobalNamespace::CustomBeatmapLevel::i___GlobalNamespace__IFilePathSongAudioClipProvider() noexcept {
  return static_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::BeatmapLevelData*& GlobalNamespace::CustomBeatmapLevel::__cordl_internal_get__beatmapLevelData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelData*> const& GlobalNamespace::CustomBeatmapLevel::__cordl_internal_get__beatmapLevelData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelData;
}
constexpr void GlobalNamespace::CustomBeatmapLevel::__cordl_internal_set__beatmapLevelData(::GlobalNamespace::BeatmapLevelData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                                                                             "get_beatmapLevelData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomBeatmapLevel::get_songAudioClipPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                                                                             "get_songAudioClipPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomBeatmapLevel* GlobalNamespace::CustomBeatmapLevel::New_ctor(::GlobalNamespace::CustomPreviewBeatmapLevel* customPreviewBeatmapLevel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CustomBeatmapLevel*>(customPreviewBeatmapLevel));
}
inline void GlobalNamespace::CustomBeatmapLevel::_ctor(::GlobalNamespace::CustomPreviewBeatmapLevel* customPreviewBeatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customPreviewBeatmapLevel);
}
inline void GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData(::GlobalNamespace::BeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(), "SetBeatmapLevelData", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelData);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::CustomBeatmapLevel::GetBeatmapLevelColorScheme(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(), "GetBeatmapLevelColorScheme",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(this, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomBeatmapLevel::CustomBeatmapLevel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
