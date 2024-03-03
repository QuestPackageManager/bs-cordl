#pragma once
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProvider.VerifyBeatmapForSelectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IServerBeatmapProvider::*)(
    ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::BeatmapLevelSelectionMask)>(&::GlobalNamespace::IServerBeatmapProvider::VerifyBeatmapForSelectionMask)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IServerBeatmapProvider.SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKeyNetSerializable* (
    ::GlobalNamespace::IServerBeatmapProvider::*)(int32_t, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*,
                                                  ::GlobalNamespace::BeatmapLevelSelectionMask, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*)>(
    &::GlobalNamespace::IServerBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProvider*>::get(), 1));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IServerBeatmapProvider::VerifyBeatmapForSelectionMask(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable,
                                                                                   ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapKeySerializable, selectionMask);
}
inline ::GlobalNamespace::BeatmapKeyNetSerializable* GlobalNamespace::IServerBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(
    int32_t playerCount, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* beatmapsSuggestedByPlayers,
    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* playerOwnedSongPacks) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IServerBeatmapProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKeyNetSerializable*, false>(this, ___internal_method, playerCount, beatmapsSuggestedByPlayers, selectionMask,
                                                                                                   playerOwnedSongPacks);
}
