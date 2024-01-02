#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.VerifyBeatmapForSelectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MockBeatmapProvider::*)(
    ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::BeatmapLevelSelectionMask)>(&::GlobalNamespace::MockBeatmapProvider::VerifyBeatmapForSelectionMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23df858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(), "VerifyBeatmapForSelectionMask", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapIdentifierNetSerializable* (
    ::GlobalNamespace::MockBeatmapProvider::*)(int32_t, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*,
                                               ::GlobalNamespace::BeatmapLevelSelectionMask, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*)>(
    &::GlobalNamespace::MockBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23df860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(), "SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockBeatmapProvider::*)()>(&::GlobalNamespace::MockBeatmapProvider::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23df8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockBeatmapProvider::*)()>(&::GlobalNamespace::MockBeatmapProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23df8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IServerBeatmapProvider"
constexpr GlobalNamespace::MockBeatmapProvider::operator ::GlobalNamespace::IServerBeatmapProvider*() noexcept {
  return static_cast<::GlobalNamespace::IServerBeatmapProvider*>(static_cast<void*>(this));
}
inline bool GlobalNamespace::MockBeatmapProvider::VerifyBeatmapForSelectionMask(::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId,
                                                                                ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(), "VerifyBeatmapForSelectionMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapId, selectionMask);
}
inline ::GlobalNamespace::BeatmapIdentifierNetSerializable* GlobalNamespace::MockBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(
    int32_t playerCount, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>* suggestedBeatmaps,
    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* ownedSongPacks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(), "SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapIdentifierNetSerializable*, false>(this, ___internal_method, playerCount, suggestedBeatmaps, selectionMask, ownedSongPacks);
}
inline void GlobalNamespace::MockBeatmapProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MockBeatmapProvider* GlobalNamespace::MockBeatmapProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockBeatmapProvider*>());
}
inline void GlobalNamespace::MockBeatmapProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockBeatmapProvider::MockBeatmapProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
