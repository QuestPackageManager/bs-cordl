#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet.get_beatmapCharacteristicSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::get_beatmapCharacteristicSerializedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12835fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(),
                                                 "get_beatmapCharacteristicSerializedName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*> (
        ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::*)()>(&::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1283604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(),
                                                 "get_difficultyBeatmaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::*)(
    ::StringW, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*)>(&::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x128360c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristicSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicSerializedName;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristicSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicSerializedName;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__cordl_internal_set__beatmapCharacteristicSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicSerializedName)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*>&
GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__cordl_internal_get__difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*> const&
GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__cordl_internal_get__difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__cordl_internal_set__difficultyBeatmaps(
    ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::get_beatmapCharacteristicSerializedName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(),
                                               "get_beatmapCharacteristicSerializedName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*>
GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::get_difficultyBeatmaps() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(), "get_difficultyBeatmaps",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*>, false>(
      this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*
GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::New_ctor(::StringW beatmapCharacteristicSerializedName,
                                                                      ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* difficultyBeatmaps) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>(beatmapCharacteristicSerializedName, difficultyBeatmaps));
}
inline void
GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::_ctor(::StringW beatmapCharacteristicSerializedName,
                                                                   ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>* difficultyBeatmaps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapCharacteristicSerializedName, difficultyBeatmaps);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet::__BeatmapLevelDataSO__DifficultyBeatmapSet() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.get_beatmapAssetChecksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_beatmapAssetChecksum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x128367c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "get_beatmapAssetChecksum",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.set_beatmapAssetChecksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)(::StringW)>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::set_beatmapAssetChecksum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1283684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "set_beatmapAssetChecksum",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.get_beatmapAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_beatmapAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x128368c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "get_beatmapAsset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.set_beatmapAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)(::UnityEngine::TextAsset*)>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::set_beatmapAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1283694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "set_beatmapAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.get_hasLightshowAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_hasLightshowAsset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x128369c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "get_hasLightshowAsset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.get_lightshowAssetChecksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_lightshowAssetChecksum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12836fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                 "get_lightshowAssetChecksum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.set_lightshowAssetChecksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)(::StringW)>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::set_lightshowAssetChecksum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1283704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "set_lightshowAssetChecksum",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.get_lightshowAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_lightshowAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x128370c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "get_lightshowAsset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.set_lightshowAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)(::UnityEngine::TextAsset*)>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::set_lightshowAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1283714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "set_lightshowAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.get_difficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x128371c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "get_difficulty",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)(
    ::GlobalNamespace::BeatmapDifficulty, ::UnityEngine::TextAsset*)>(&::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1283724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)(
    ::GlobalNamespace::BeatmapDifficulty, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*)>(&::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1283754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1282e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "GetBeatmapStringAsync",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1282f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "GetLightshowStringAsync",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.GetBeatmapString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::GetBeatmapString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1283294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "GetBeatmapString",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.GetLightshowString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::GetLightshowString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1283374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "GetLightshowString",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap.GetBeatmapChecksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::GetBeatmapChecksum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1283794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "GetBeatmapChecksum",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty = value;
}
constexpr ::StringW& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_get__beatmapAssetChecksum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapAssetChecksum;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_get__beatmapAssetChecksum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapAssetChecksum;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_set__beatmapAssetChecksum(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapAssetChecksum)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_get__beatmapAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_get__beatmapAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapAsset;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_set__beatmapAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_get__lightshowAssetChecksum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightshowAssetChecksum;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_get__lightshowAssetChecksum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightshowAssetChecksum;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_set__lightshowAssetChecksum(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightshowAssetChecksum)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_get__lightshowAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightshowAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_get__lightshowAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightshowAsset;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__cordl_internal_set__lightshowAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightshowAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_beatmapAssetChecksum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "get_beatmapAssetChecksum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::set_beatmapAssetChecksum(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "set_beatmapAssetChecksum",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::TextAsset> GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_beatmapAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "get_beatmapAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::set_beatmapAsset(::UnityEngine::TextAsset* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "set_beatmapAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_hasLightshowAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "get_hasLightshowAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_lightshowAssetChecksum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "get_lightshowAssetChecksum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::set_lightshowAssetChecksum(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "set_lightshowAssetChecksum",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::TextAsset> GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_lightshowAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "get_lightshowAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::set_lightshowAsset(::UnityEngine::TextAsset* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), "set_lightshowAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::get_difficulty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "get_difficulty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                                                                                      ::UnityEngine::TextAsset* beatmapAsset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>(difficulty, beatmapAsset));
}
inline void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficulty, beatmapAsset);
}
inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*
GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset, ::UnityEngine::TextAsset* lightshowAsset) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>(difficulty, beatmapAsset, lightshowAsset));
}
inline void GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset,
                                                                            ::UnityEngine::TextAsset* lightshowAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficulty, beatmapAsset, lightshowAsset);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::GetBeatmapStringAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "GetBeatmapStringAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::GetLightshowStringAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "GetLightshowStringAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::GetBeatmapString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "GetBeatmapString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::GetLightshowString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "GetLightshowString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::GetBeatmapChecksum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get(),
                                                                             "GetBeatmapChecksum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap::__BeatmapLevelDataSO__DifficultyBeatmap() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1283498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0._GetDifficultyBeatmap_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::*)(
    ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*)>(&::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::_GetDifficultyBeatmap_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x128379c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0*>::get(), "<GetDifficultyBeatmap>b__0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
inline ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0* GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0*>());
}
inline void GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::_GetDifficultyBeatmap_b__0(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* difficultyBeatmap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0*>::get(), "<GetDifficultyBeatmap>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, difficultyBeatmap);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass25_0::__BeatmapLevelDataSO____c__DisplayClass25_0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1283590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0._GetDifficultyBeatmapSet_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::*)(
    ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*)>(&::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::_GetDifficultyBeatmapSet_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x12837c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0*>::get(), "<GetDifficultyBeatmapSet>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::__cordl_internal_get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::__cordl_internal_get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::__cordl_internal_set_beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0* GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0*>());
}
inline void GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::_GetDifficultyBeatmapSet_b__0(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* difficultyBeatmapSet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0*>::get(), "<GetDifficultyBeatmapSet>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, difficultyBeatmapSet);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataSO____c__DisplayClass26_0::__BeatmapLevelDataSO____c__DisplayClass26_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_songAudioClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::BeatmapLevelDataSO::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO::get_songAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1282aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                               "get_songAudioClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_difficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> (::GlobalNamespace::BeatmapLevelDataSO::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1282ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                               "get_difficultyBeatmapSets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_hasAudioAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::get_hasAudioAsset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1282abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                               "get_hasAudioAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_audioDataAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (::GlobalNamespace::BeatmapLevelDataSO::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO::get_audioDataAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1282b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                               "get_audioDataAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.set_audioDataAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)(::UnityEngine::TextAsset*)>(
    &::GlobalNamespace::BeatmapLevelDataSO::set_audioDataAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1282b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "set_audioDataAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_audioDataAssetChecksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO::get_audioDataAssetChecksum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1282b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                               "get_audioDataAssetChecksum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.set_audioDataAssetChecksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)(::StringW)>(
    &::GlobalNamespace::BeatmapLevelDataSO::set_audioDataAssetChecksum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1282b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "set_audioDataAssetChecksum",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetAudioDataStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::BeatmapLevelDataSO::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO::GetAudioDataStringAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1282b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                               "GetAudioDataStringAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::BeatmapLevelDataSO::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::BeatmapLevelDataSO::GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1282c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetBeatmapStringAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::BeatmapLevelDataSO::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::BeatmapLevelDataSO::GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1282ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetLightshowStringAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetAudioDataString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::GetAudioDataString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x128309c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                               "GetAudioDataString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetBeatmapString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::GetBeatmapString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1283258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetBeatmapString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetLightshowString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::GetLightshowString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1283338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetLightshowString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetBeatmapChecksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::GetBeatmapChecksum)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1283464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetBeatmapChecksum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* (
    ::GlobalNamespace::BeatmapLevelDataSO::*)(::GlobalNamespace::BeatmapKey)>(&::GlobalNamespace::BeatmapLevelDataSO::GetDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1282d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetDifficultyBeatmap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetDifficultyBeatmapSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* (
    ::GlobalNamespace::BeatmapLevelDataSO::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(&::GlobalNamespace::BeatmapLevelDataSO::GetDifficultyBeatmapSet)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x12834a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetDifficultyBeatmapSet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.InitFromLevel__Editor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)(
    ::UnityEngine::AudioClip*, ::UnityEngine::TextAsset*,
    ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::InitFromLevel__Editor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1283598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "InitFromLevel__Editor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.InitFromLevel__Editor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)(
    ::UnityEngine::AudioClip*, ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::InitFromLevel__Editor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12835a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "InitFromLevel__Editor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12835b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::BeatmapLevelDataSO::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12835b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "IBeatmapLevelData.GetBeatmapStringAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::BeatmapLevelDataSO::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12835bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "IBeatmapLevelData.GetLightshowStringAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_GetBeatmapString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetBeatmapString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12835c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "IBeatmapLevelData.GetBeatmapString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_GetLightshowString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetLightshowString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12835c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "IBeatmapLevelData.GetLightshowString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_GetBeatmapChecksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)(ByRef<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetBeatmapChecksum)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x12835c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "IBeatmapLevelData.GetBeatmapChecksum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
constexpr GlobalNamespace::BeatmapLevelDataSO::operator ::GlobalNamespace::IBeatmapLevelData*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
constexpr ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::BeatmapLevelDataSO::i___GlobalNamespace__IBeatmapLevelData() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAssetSongAudioClipProvider"
constexpr GlobalNamespace::BeatmapLevelDataSO::operator ::GlobalNamespace::IAssetSongAudioClipProvider*() noexcept {
  return static_cast<::GlobalNamespace::IAssetSongAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAssetSongAudioClipProvider"
constexpr ::GlobalNamespace::IAssetSongAudioClipProvider* GlobalNamespace::BeatmapLevelDataSO::i___GlobalNamespace__IAssetSongAudioClipProvider() noexcept {
  return static_cast<::GlobalNamespace::IAssetSongAudioClipProvider*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__audioDataAssetChecksum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioDataAssetChecksum;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__audioDataAssetChecksum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioDataAssetChecksum;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_set__audioDataAssetChecksum(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioDataAssetChecksum)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__audioDataAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioDataAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__audioDataAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioDataAsset;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_set__audioDataAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioDataAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>&
GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__difficultyBeatmapSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> const&
GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__difficultyBeatmapSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_set__difficultyBeatmapSets(
    ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmapSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::BeatmapLevelDataSO::get_songAudioClip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "get_songAudioClip",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>
GlobalNamespace::BeatmapLevelDataSO::get_difficultyBeatmapSets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                             "get_difficultyBeatmapSets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>, false>(
      this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelDataSO::get_hasAudioAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "get_hasAudioAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> GlobalNamespace::BeatmapLevelDataSO::get_audioDataAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                             "get_audioDataAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataSO::set_audioDataAsset(::UnityEngine::TextAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "set_audioDataAsset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::get_audioDataAssetChecksum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                             "get_audioDataAssetChecksum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataSO::set_audioDataAssetChecksum(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "set_audioDataAssetChecksum",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO::GetAudioDataStringAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                             "GetAudioDataStringAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO::GetBeatmapStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetBeatmapStringAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, beatmapKey);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO::GetLightshowStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetLightshowStringAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::GetAudioDataString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                                                             "GetAudioDataString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::GetBeatmapString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetBeatmapString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::GetLightshowString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetLightshowString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::GetBeatmapChecksum(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetBeatmapChecksum", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap* GlobalNamespace::BeatmapLevelDataSO::GetDifficultyBeatmap(::GlobalNamespace::BeatmapKey beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetDifficultyBeatmap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmap*, false>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* GlobalNamespace::BeatmapLevelDataSO::GetDifficultyBeatmapSet(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "GetDifficultyBeatmapSet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, false>(this, ___internal_method, beatmapCharacteristic);
}
inline void GlobalNamespace::BeatmapLevelDataSO::InitFromLevel__Editor(
    ::UnityEngine::AudioClip* audioClip, ::UnityEngine::TextAsset* audioDataAsset,
    ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> difficultyBeatmapSets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "InitFromLevel__Editor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip, audioDataAsset, difficultyBeatmapSets);
}
inline void GlobalNamespace::BeatmapLevelDataSO::InitFromLevel__Editor(
    ::UnityEngine::AudioClip* audioClip,
    ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*> difficultyBeatmapSets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "InitFromLevel__Editor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::Array<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, audioClip, difficultyBeatmapSets);
}
inline ::GlobalNamespace::BeatmapLevelDataSO* GlobalNamespace::BeatmapLevelDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelDataSO*>());
}
inline void GlobalNamespace::BeatmapLevelDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetBeatmapStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "IBeatmapLevelData.GetBeatmapStringAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, beatmapKey);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetLightshowStringAsync(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "IBeatmapLevelData.GetLightshowStringAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetBeatmapString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "IBeatmapLevelData.GetBeatmapString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetLightshowString(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "IBeatmapLevelData.GetLightshowString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetBeatmapChecksum(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataSO*>::get(), "IBeatmapLevelData.GetBeatmapChecksum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, beatmapKey);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataSO::BeatmapLevelDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
