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
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapProvider::*)(::GlobalNamespace::BeatmapLevelsModel*)>(&::GlobalNamespace::MockBeatmapProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c4518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapProvider*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.VerifyBeatmapForSelectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockBeatmapProvider::*)(::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::BeatmapLevelSelectionMask)>(
    &::GlobalNamespace::MockBeatmapProvider::VerifyBeatmapForSelectionMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c4520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MockBeatmapProvider*>(),
            { "VerifyBeatmapForSelectionMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKeyNetSerializable* (
    ::GlobalNamespace::MockBeatmapProvider::*)(int32_t, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*,
                                               ::GlobalNamespace::BeatmapLevelSelectionMask, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*)>(
    &::GlobalNamespace::MockBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59c4528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapProvider*>(),
                                         { "SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*>(),
                                             ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                             ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.GetBeatmapDurationMs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MockBeatmapProvider::*)(::GlobalNamespace::BeatmapKeyNetSerializable*)>(
    &::GlobalNamespace::MockBeatmapProvider::GetBeatmapDurationMs)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x59c45b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapProvider*>(),
                                                                                           { "GetBeatmapDurationMs", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockBeatmapProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockBeatmapProvider::*)()>(&::GlobalNamespace::MockBeatmapProvider::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59c46d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapProvider*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MockBeatmapProvider::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::MockBeatmapProvider::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MockBeatmapProvider::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
inline void GlobalNamespace::MockBeatmapProvider::_ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapProvider*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelsModel);
}
inline bool GlobalNamespace::MockBeatmapProvider::VerifyBeatmapForSelectionMask(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable,
                                                                                ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MockBeatmapProvider*>(),
                       { "VerifyBeatmapForSelectionMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapKeySerializable, selectionMask);
}
inline ::GlobalNamespace::BeatmapKeyNetSerializable* GlobalNamespace::MockBeatmapProvider::SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks(
    int32_t playerCount, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* suggestedBeatmaps,
    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>* ownedSongPacks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapProvider*>(),
                                              { "SelectBeatmapFromSuggestionsWithSelectionMaskAndOwnedSongPacks",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*>(),
                                                  ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                  ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SongPackMask>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKeyNetSerializable*>(this, ___internal_method, playerCount, suggestedBeatmaps, selectionMask, ownedSongPacks);
}
inline int32_t GlobalNamespace::MockBeatmapProvider::GetBeatmapDurationMs(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapProvider*>(),
                                                                                         { "GetBeatmapDurationMs", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, beatmapKeySerializable);
}
inline void GlobalNamespace::MockBeatmapProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockBeatmapProvider*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MockBeatmapProvider* GlobalNamespace::MockBeatmapProvider::New_ctor(::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockBeatmapProvider*>(beatmapLevelsModel));
}
/// @brief Convert operator to "::GlobalNamespace::IServerBeatmapProvider"
constexpr GlobalNamespace::MockBeatmapProvider::operator ::GlobalNamespace::IServerBeatmapProvider*() noexcept {
  return static_cast<::GlobalNamespace::IServerBeatmapProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IServerBeatmapProvider"
constexpr ::GlobalNamespace::IServerBeatmapProvider* GlobalNamespace::MockBeatmapProvider::i___GlobalNamespace__IServerBeatmapProvider() noexcept {
  return static_cast<::GlobalNamespace::IServerBeatmapProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockBeatmapProvider::MockBeatmapProvider() {}
