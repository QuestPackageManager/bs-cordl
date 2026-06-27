#pragma once
// IWYU pragma private; include "GlobalNamespace/MockBeatmapProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockBeatmapProvider::*)(::GlobalNamespace::BeatmapLevelsModel*)>(&::GlobalNamespace::MockBeatmapProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.VerifyBeatmapForSelectionMask
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MockBeatmapProvider::*)(::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::BeatmapLevelSelectionMask)>(&::GlobalNamespace::MockBeatmapProvider::VerifyBeatmapForSelectionMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(),
                        "VerifyBeatmapForSelectionMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKeyNetSerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKeyNetSerializable* (::GlobalNamespace::MockBeatmapProvider::*)(int32_t, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapKeyNetSerializable*>*, ::GlobalNamespace::BeatmapLevelSelectionMask, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>*)>(&::GlobalNamespace::MockBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5893a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(),
                        "SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapKeyNetSerializable*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.GetBeatmapDurationMs
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MockBeatmapProvider::*)(::GlobalNamespace::BeatmapKeyNetSerializable*)>(&::GlobalNamespace::MockBeatmapProvider::GetBeatmapDurationMs)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5893af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(),
                        "GetBeatmapDurationMs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKeyNetSerializable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockBeatmapProvider::*)()>(&::GlobalNamespace::MockBeatmapProvider::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5893c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MockBeatmapProvider::__cordl_internal_get__beatmapLevelsModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::MockBeatmapProvider::__cordl_internal_get__beatmapLevelsModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MockBeatmapProvider::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MockBeatmapProvider::_ctor(::GlobalNamespace::BeatmapLevelsModel*  beatmapLevelsModel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelsModel);
}
inline bool GlobalNamespace::MockBeatmapProvider::VerifyBeatmapForSelectionMask(::GlobalNamespace::BeatmapKeyNetSerializable*  beatmapKeySerializable, ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(),
                        "VerifyBeatmapForSelectionMask",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKeyNetSerializable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapKeySerializable, selectionMask);
}
inline ::GlobalNamespace::BeatmapKeyNetSerializable* GlobalNamespace::MockBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(int32_t  playerCount, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapKeyNetSerializable*>*  suggestedBeatmaps, ::GlobalNamespace::BeatmapLevelSelectionMask  selectionMask, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>*  ownedSongPacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(),
                        "SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::BeatmapKeyNetSerializable*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::SongPackMask>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKeyNetSerializable*, false>(this, ___internal_method, playerCount, suggestedBeatmaps, selectionMask, ownedSongPacks);
}
inline int32_t GlobalNamespace::MockBeatmapProvider::GetBeatmapDurationMs(::GlobalNamespace::BeatmapKeyNetSerializable*  beatmapKeySerializable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(),
                        "GetBeatmapDurationMs",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKeyNetSerializable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, beatmapKeySerializable);
}
inline void GlobalNamespace::MockBeatmapProvider::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockBeatmapProvider*>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MockBeatmapProvider* GlobalNamespace::MockBeatmapProvider::New_ctor(::GlobalNamespace::BeatmapLevelsModel*  beatmapLevelsModel)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MockBeatmapProvider*>(beatmapLevelsModel));
}
/// @brief Convert operator to "::GlobalNamespace::IServerBeatmapProvider"
constexpr  GlobalNamespace::MockBeatmapProvider::operator ::GlobalNamespace::IServerBeatmapProvider*() noexcept {
return static_cast<::GlobalNamespace::IServerBeatmapProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IServerBeatmapProvider"
constexpr ::GlobalNamespace::IServerBeatmapProvider* GlobalNamespace::MockBeatmapProvider::i___GlobalNamespace__IServerBeatmapProvider() noexcept {
return static_cast<::GlobalNamespace::IServerBeatmapProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockBeatmapProvider::MockBeatmapProvider()   {
}
