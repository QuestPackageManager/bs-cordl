#pragma once
// IWYU pragma private; include "GlobalNamespace\IServerBeatmapProvider.hpp"
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProvider.VerifyBeatmapForSelectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IServerBeatmapProvider::*)(
    ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::BeatmapLevelSelectionMask)>(&::GlobalNamespace::IServerBeatmapProvider::VerifyBeatmapForSelectionMask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IServerBeatmapProvider*>(), { ::i2c::class_of<::GlobalNamespace::IServerBeatmapProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProvider.SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKeyNetSerializable* (
    ::GlobalNamespace::IServerBeatmapProvider::*)(int32_t, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*,
                                                  ::GlobalNamespace::BeatmapLevelSelectionMask, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*)>(
    &::GlobalNamespace::IServerBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IServerBeatmapProvider*>(), { ::i2c::class_of<::GlobalNamespace::IServerBeatmapProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProvider.GetBeatmapDurationMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::IServerBeatmapProvider::*)(::GlobalNamespace::BeatmapKeyNetSerializable*)>(
    &::GlobalNamespace::IServerBeatmapProvider::GetBeatmapDurationMs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IServerBeatmapProvider*>(), { ::i2c::class_of<::GlobalNamespace::IServerBeatmapProvider*>(), 2 }));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IServerBeatmapProvider::VerifyBeatmapForSelectionMask(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable,
                                                                                   ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IServerBeatmapProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapKeySerializable, selectionMask);
}
inline ::GlobalNamespace::BeatmapKeyNetSerializable* GlobalNamespace::IServerBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(
    int32_t playerCount, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* beatmapsSuggestedByPlayers,
    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* playerOwnedSongPacks) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IServerBeatmapProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKeyNetSerializable*>(this, ___internal_method, playerCount, beatmapsSuggestedByPlayers, selectionMask, playerOwnedSongPacks);
}
inline int32_t GlobalNamespace::IServerBeatmapProvider::GetBeatmapDurationMs(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IServerBeatmapProvider*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, beatmapKeySerializable);
}
