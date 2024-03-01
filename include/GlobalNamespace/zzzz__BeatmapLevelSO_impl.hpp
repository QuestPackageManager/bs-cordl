#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet.get_beatmapCharacteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> (
    ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::*)()>(&::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>::get(),
                                                 "get_beatmapCharacteristic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>* (
    ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::*)()>(&::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>::get(),
                                                 "get_difficultyBeatmaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::*)(
    ::GlobalNamespace::BeatmapCharacteristicSO*, ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*>)>(
    &::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12cba5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::__cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*>&
GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::__cordl_internal_get__previewDifficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDifficultyBeatmaps;
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*> const&
GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::__cordl_internal_get__previewDifficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDifficultyBeatmaps;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::__cordl_internal_set__previewDifficultyBeatmaps(
    ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewDifficultyBeatmaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::get_beatmapCharacteristic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>::get(),
                                               "get_beatmapCharacteristic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*
GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::get_difficultyBeatmaps() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>::get(),
                                               "get_difficultyBeatmaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet* GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::New_ctor(
    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
    ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*> previewDifficultyBeatmaps) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>(beatmapCharacteristic, previewDifficultyBeatmaps));
}
inline void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::_ctor(
    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
    ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*> previewDifficultyBeatmaps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapCharacteristic, previewDifficultyBeatmaps);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet::__BeatmapLevelSO__PreviewDifficultyBeatmapSet() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap.get_difficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), "get_difficulty",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap.get_noteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(),
                                                 "get_noteJumpMovementSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap.get_noteJumpStartBeatOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(),
                                                 "get_noteJumpStartBeatOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap.get_environmentNameIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_environmentNameIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cbaa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(),
                                                 "get_environmentNameIdx", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap.get_beatmapColorSchemeIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_beatmapColorSchemeIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cbaa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(),
                                                 "get_beatmapColorSchemeIdx", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap.get_notesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_notesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cbab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), "get_notesCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap.get_obstaclesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_obstaclesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cbab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), "get_obstaclesCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap.get_bombsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_bombsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cbac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), "get_bombsCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap.get_cuttableBeatmapObjectsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_cuttableBeatmapObjectsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cbac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(),
                                                 "get_cuttableBeatmapObjectsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::*)(
    ::GlobalNamespace::BeatmapDifficulty, float_t, float_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12cbad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty = value;
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__environmentNameIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNameIdx;
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__environmentNameIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNameIdx;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_set__environmentNameIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentNameIdx = value;
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__beatmapColorSchemeIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapColorSchemeIdx;
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__beatmapColorSchemeIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapColorSchemeIdx;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_set__beatmapColorSchemeIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapColorSchemeIdx = value;
}
constexpr float_t& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_set__noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__noteJumpStartBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr float_t const& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__noteJumpStartBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_set__noteJumpStartBeatOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpStartBeatOffset = value;
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__notesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesCount;
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__notesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesCount;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_set__notesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notesCount = value;
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__obstaclesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesCount;
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__obstaclesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesCount;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_set__obstaclesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstaclesCount = value;
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__bombsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombsCount;
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__bombsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombsCount;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_set__bombsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombsCount = value;
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__cuttableBeatmapObjectsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBeatmapObjectsCount;
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_get__cuttableBeatmapObjectsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBeatmapObjectsCount;
}
constexpr void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__cordl_internal_set__cuttableBeatmapObjectsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cuttableBeatmapObjectsCount = value;
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_difficulty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), "get_difficulty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_noteJumpMovementSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(),
                                               "get_noteJumpMovementSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_noteJumpStartBeatOffset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(),
                                               "get_noteJumpStartBeatOffset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_environmentNameIdx() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), "get_environmentNameIdx",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_beatmapColorSchemeIdx() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(),
                                               "get_beatmapColorSchemeIdx", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_notesCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), "get_notesCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_obstaclesCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), "get_obstaclesCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_bombsCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), "get_bombsCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::get_cuttableBeatmapObjectsCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(),
                                               "get_cuttableBeatmapObjectsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*
GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset,
                                                                      int32_t environmentNameIdx, int32_t beatmapColorSchemeIdx, int32_t notesCount, int32_t obstaclesCount, int32_t bombsCount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>(difficulty, noteJumpMovementSpeed, noteJumpStartBeatOffset, environmentNameIdx,
                                                                                                                  beatmapColorSchemeIdx, notesCount, obstaclesCount, bombsCount));
}
inline void GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset,
                                                                               int32_t environmentNameIdx, int32_t beatmapColorSchemeIdx, int32_t notesCount, int32_t obstaclesCount,
                                                                               int32_t bombsCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficulty, noteJumpMovementSpeed, noteJumpStartBeatOffset, environmentNameIdx, beatmapColorSchemeIdx, notesCount,
                                                          obstaclesCount, bombsCount);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmap::__BeatmapLevelSO__PreviewDifficultyBeatmap() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_hasPrecalculatedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_hasPrecalculatedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12c8bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                                                                               "get_hasPrecalculatedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_levelID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_levelID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_songName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songSubName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songSubName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_songSubName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songAuthorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_songAuthorName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_levelAuthorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_levelAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_levelAuthorName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_beatsPerMinute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_beatsPerMinute",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_integratedLufs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_integratedLufs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_integratedLufs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_songTimeOffset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_songDuration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_shuffle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_shuffle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_shuffle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_shufflePeriod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_shufflePeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_shufflePeriod",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                                                                               "get_previewStartTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cb9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_previewDuration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_environmentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentName (::GlobalNamespace::BeatmapLevelSO::*)()>(
    &::GlobalNamespace::BeatmapLevelSO::get_environmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_environmentName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_allDirectionsEnvironmentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentName (::GlobalNamespace::BeatmapLevelSO::*)()>(
    &::GlobalNamespace::BeatmapLevelSO::get_allDirectionsEnvironmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_allDirectionsEnvironmentName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_environmentNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>* (
    ::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_environmentNames)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x12c8b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                                                                               "get_environmentNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_coverImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::BeatmapLevelSO::*)()>(
    &::GlobalNamespace::BeatmapLevelSO::get_coverImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_coverImage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songPreviewAudioClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::BeatmapLevelSO::*)()>(
    &::GlobalNamespace::BeatmapLevelSO::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                                                                               "get_songPreviewAudioClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_contentRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSensitivityFlag (::GlobalNamespace::BeatmapLevelSO::*)()>(
    &::GlobalNamespace::BeatmapLevelSO::get_contentRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_contentRating",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewDifficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>* (
    ::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewDifficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_previewDifficultyBeatmapSets",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.__SetEnvironmentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(::GlobalNamespace::EnvironmentName)>(
    &::GlobalNamespace::BeatmapLevelSO::__SetEnvironmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12cba34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "__SetEnvironmentName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentName>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12cba3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
constexpr GlobalNamespace::BeatmapLevelSO::operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept {
  return static_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
constexpr ::GlobalNamespace::IAssetSongPreviewAudioClipProvider* GlobalNamespace::BeatmapLevelSO::i___GlobalNamespace__IAssetSongPreviewAudioClipProvider() noexcept {
  return static_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__songName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songSubName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songSubName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__songSubName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songSubName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__songAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songAuthorName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__levelAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__levelAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__levelAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelAuthorName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewAudioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewAudioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewAudioClip;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__previewAudioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewAudioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__beatsPerMinute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__beatsPerMinute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__beatsPerMinute(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatsPerMinute = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__integratedLufs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____integratedLufs;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__integratedLufs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____integratedLufs;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__integratedLufs(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____integratedLufs = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__shuffle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__shuffle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__shuffle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shuffle = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__shufflePeriod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__shufflePeriod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__shufflePeriod(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shufflePeriod = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__previewStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewStartTime = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__previewDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewDuration = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDuration;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDuration;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__songDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songDuration = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__coverImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__coverImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__coverImage(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coverImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentName& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__environmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr ::GlobalNamespace::EnvironmentName const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__environmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__environmentName(::GlobalNamespace::EnvironmentName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentName = value;
}
constexpr ::GlobalNamespace::EnvironmentName& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__allDirectionsEnvironmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allDirectionsEnvironmentName;
}
constexpr ::GlobalNamespace::EnvironmentName const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__allDirectionsEnvironmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allDirectionsEnvironmentName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__allDirectionsEnvironmentName(::GlobalNamespace::EnvironmentName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allDirectionsEnvironmentName = value;
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*>& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__environmentNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNames;
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*> const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__environmentNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNames;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__environmentNames(::ArrayW<::GlobalNamespace::EnvironmentName, ::Array<::GlobalNamespace::EnvironmentName>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>*>&
GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewDifficultyBeatmapSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDifficultyBeatmapSets;
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>*> const&
GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewDifficultyBeatmapSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDifficultyBeatmapSets;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__previewDifficultyBeatmapSets(
    ::ArrayW<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewDifficultyBeatmapSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__contentRating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentRating;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__contentRating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentRating;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentRating = value;
}
inline bool GlobalNamespace::BeatmapLevelSO::get_hasPrecalculatedData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                                                                             "get_hasPrecalculatedData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_levelID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_levelID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_songName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_songName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_songSubName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_songSubName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_songAuthorName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_songAuthorName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_levelAuthorName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_levelAuthorName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_beatsPerMinute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_beatsPerMinute",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_integratedLufs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_integratedLufs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_songTimeOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_songTimeOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_songDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_songDuration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_shuffle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_shuffle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_shufflePeriod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_shufflePeriod",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_previewStartTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_previewStartTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_previewDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_previewDuration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentName GlobalNamespace::BeatmapLevelSO::get_environmentName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_environmentName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentName, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentName GlobalNamespace::BeatmapLevelSO::get_allDirectionsEnvironmentName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                                                                             "get_allDirectionsEnvironmentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentName, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>* GlobalNamespace::BeatmapLevelSO::get_environmentNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_environmentNames",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>*, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::BeatmapLevelSO::get_coverImage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_coverImage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::BeatmapLevelSO::get_songPreviewAudioClip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                                                                             "get_songPreviewAudioClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::BeatmapLevelSO::get_contentRating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "get_contentRating",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSensitivityFlag, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>* GlobalNamespace::BeatmapLevelSO::get_previewDifficultyBeatmapSets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(),
                                                                             "get_previewDifficultyBeatmapSets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__BeatmapLevelSO__PreviewDifficultyBeatmapSet*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelSO::__SetEnvironmentName(::GlobalNamespace::EnvironmentName targetEnvironmentName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), "__SetEnvironmentName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentName>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetEnvironmentName);
}
inline ::GlobalNamespace::BeatmapLevelSO* GlobalNamespace::BeatmapLevelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelSO*>());
}
inline void GlobalNamespace::BeatmapLevelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelSO::BeatmapLevelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
