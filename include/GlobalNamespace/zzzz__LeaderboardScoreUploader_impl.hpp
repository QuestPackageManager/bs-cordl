#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.get_playerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232826c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                               "get_playerId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.set_playerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(::StringW)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2328274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_playerId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.get_beatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmap* (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_beatmap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232827c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                               "get_beatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.set_beatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(::GlobalNamespace::IDifficultyBeatmap*)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_beatmap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2328284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_beatmap", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232828c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                               "get_gameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.set_gameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2328294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_gameplayModifiers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.get_multipliedScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_multipliedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232829c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                               "get_multipliedScore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.set_multipliedScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_multipliedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23282a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_multipliedScore",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.get_modifiedScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_modifiedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23282ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                               "get_modifiedScore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.set_modifiedScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_modifiedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23282b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_modifiedScore",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.get_fullCombo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_fullCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23282bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                               "get_fullCombo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.set_fullCombo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(bool)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_fullCombo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23282c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_fullCombo",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.get_goodCutsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_goodCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23282d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                               "get_goodCutsCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.set_goodCutsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_goodCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23282d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_goodCutsCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.get_badCutsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_badCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23282e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                               "get_badCutsCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.set_badCutsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_badCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23282e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_badCutsCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.get_missedCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_missedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23282f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                               "get_missedCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.set_missedCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_missedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23282f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_missedCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.get_maxCombo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_maxCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2328300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                               "get_maxCombo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData.set_maxCombo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(int32_t)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_maxCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2328308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_maxCombo",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::*)(
    ::StringW, ::GlobalNamespace::IDifficultyBeatmap*, int32_t, int32_t, bool, int32_t, int32_t, int32_t, int32_t, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2328310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__playerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__playerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId_k__BackingField;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set__playerId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap*& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__beatmap_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmap_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__beatmap_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmap_k__BackingField;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set__beatmap_k__BackingField(::GlobalNamespace::IDifficultyBeatmap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmap_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__gameplayModifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__gameplayModifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiers_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__multipliedScore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipliedScore_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__multipliedScore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipliedScore_k__BackingField;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set__multipliedScore_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multipliedScore_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__modifiedScore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiedScore_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__modifiedScore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiedScore_k__BackingField;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set__modifiedScore_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiedScore_k__BackingField = value;
}
constexpr bool& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__fullCombo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo_k__BackingField;
}
constexpr bool const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__fullCombo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo_k__BackingField;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set__fullCombo_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullCombo_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__goodCutsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__goodCutsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutsCount_k__BackingField;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set__goodCutsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____goodCutsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__badCutsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__badCutsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutsCount_k__BackingField;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set__badCutsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badCutsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__missedCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__missedCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedCount_k__BackingField;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set__missedCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missedCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__maxCombo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCombo_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get__maxCombo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCombo_k__BackingField;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set__maxCombo_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxCombo_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get_uploadAttemptCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uploadAttemptCount;
}
constexpr int32_t const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get_uploadAttemptCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uploadAttemptCount;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set_uploadAttemptCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uploadAttemptCount = value;
}
constexpr int32_t& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get_currentUploadAttemptCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentUploadAttemptCount;
}
constexpr int32_t const& GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__get_currentUploadAttemptCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentUploadAttemptCount;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__set_currentUploadAttemptCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentUploadAttemptCount = value;
}
inline ::StringW GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_playerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                             "get_playerId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_playerId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_playerId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_beatmap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                             "get_beatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmap*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_beatmap(::GlobalNamespace::IDifficultyBeatmap* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_beatmap", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_gameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                             "get_gameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_gameplayModifiers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_multipliedScore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                             "get_multipliedScore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_multipliedScore(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_multipliedScore",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_modifiedScore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                             "get_modifiedScore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_modifiedScore(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_modifiedScore",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_fullCombo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                             "get_fullCombo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_fullCombo(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_fullCombo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_goodCutsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                             "get_goodCutsCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_goodCutsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_goodCutsCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_badCutsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                             "get_badCutsCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_badCutsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_badCutsCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_missedCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                             "get_missedCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_missedCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_missedCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::__LeaderboardScoreUploader__ScoreData::get_maxCombo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                                                             "get_maxCombo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::set_maxCombo(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), "set_maxCombo",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* GlobalNamespace::__LeaderboardScoreUploader__ScoreData::New_ctor(::StringW playerId, ::GlobalNamespace::IDifficultyBeatmap* beatmap,
                                                                                                                                  int32_t multipliedScore, int32_t modifiedScore, bool fullCombo,
                                                                                                                                  int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount,
                                                                                                                                  int32_t maxCombo,
                                                                                                                                  ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>(playerId, beatmap, multipliedScore, modifiedScore, fullCombo, goodCutsCount, badCutsCount,
                                                                                                     missedCount, maxCombo, gameplayModifiers));
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoreData::_ctor(::StringW playerId, ::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t multipliedScore, int32_t modifiedScore,
                                                                          bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t maxCombo,
                                                                          ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerId, beatmap, multipliedScore, modifiedScore, fullCombo, goodCutsCount, badCutsCount, missedCount, maxCombo,
                                                          gameplayModifiers);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData::__LeaderboardScoreUploader__ScoreData() {}
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23280f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*& GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData::__get_scores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scores;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*> const&
GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData::__get_scores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scores;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData::__set_scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scores)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData* GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData*>());
}
inline void GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LeaderboardScoreUploader__ScoresToUploadData::__LeaderboardScoreUploader__ScoresToUploadData() {}
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2328398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::*)(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*,
                                                                           ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23284c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::*)(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*,
                                                                           ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23284dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2328504;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback* GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>(object, method));
}
inline void GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::Invoke(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                                         ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, scoreData, completionHandler);
}
inline ::System::IAsyncResult*
GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::BeginInvoke(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                                              ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler,
                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, scoreData, completionHandler, callback, object);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback::__LeaderboardScoreUploader__UploadScoreCallback() {}
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2328510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0._UploadScoresCoroutine_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::*)(
    ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult)>(&::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::_UploadScoresCoroutine_b__0)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2328518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0*>::get(), "<UploadScoresCoroutine>b__0",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*& GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::__get_scoreData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoreData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*> const&
GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::__get_scoreData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoreData;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::__set_scoreData(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scoreData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LeaderboardScoreUploader*& GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardScoreUploader*> const& GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::__set___4__this(::GlobalNamespace::LeaderboardScoreUploader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0* GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0*>());
}
inline void GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::_UploadScoresCoroutine_b__0(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0*>::get(), "<UploadScoresCoroutine>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LeaderboardScoreUploader____c__DisplayClass16_0::__LeaderboardScoreUploader____c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)(int32_t)>(
    &::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2327b64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2328750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2328754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2328a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2328a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::*)()>(
    &::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2328a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LeaderboardScoreUploader*& GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardScoreUploader*> const& GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__set___4__this(::GlobalNamespace::LeaderboardScoreUploader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16* GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>(__1__state));
}
inline void GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16::__LeaderboardScoreUploader___UploadScoresCoroutine_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.add_allScoresDidUploadEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)(::System::Action*)>(
    &::GlobalNamespace::LeaderboardScoreUploader::add_allScoresDidUploadEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23278b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(), "add_allScoresDidUploadEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.remove_allScoresDidUploadEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)(::System::Action*)>(
    &::GlobalNamespace::LeaderboardScoreUploader::remove_allScoresDidUploadEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2327954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(), "remove_allScoresDidUploadEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)(
    ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*, ::StringW)>(&::GlobalNamespace::LeaderboardScoreUploader::Init)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23279f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(), "Init", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.Uninitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader::Uninitialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2327ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                               "Uninitialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2327b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                               "OnApplicationQuit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.UploadScoresCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::LeaderboardScoreUploader::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader::UploadScoresCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2327a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                               "UploadScoresCoroutine", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.LoadScoresToUploadFromFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader::LoadScoresToUploadFromFile)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2327b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                               "LoadScoresToUploadFromFile", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.SaveScoresToUploadToFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader::SaveScoresToUploadToFile)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2327f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                               "SaveScoresToUploadToFile", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.AddScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*)>(
    &::GlobalNamespace::LeaderboardScoreUploader::AddScore)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23280f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(), "AddScore", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)()>(&::GlobalNamespace::LeaderboardScoreUploader::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x23281bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader._UploadScoresCoroutine_b__16_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LeaderboardScoreUploader::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader::_UploadScoresCoroutine_b__16_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x232825c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                               "<UploadScoresCoroutine>b__16_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::LeaderboardScoreUploader::__get_allScoresDidUploadEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allScoresDidUploadEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::LeaderboardScoreUploader::__get_allScoresDidUploadEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allScoresDidUploadEvent;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set_allScoresDidUploadEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allScoresDidUploadEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*& GlobalNamespace::LeaderboardScoreUploader::__get__scoresToUpload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoresToUpload;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*> const&
GlobalNamespace::LeaderboardScoreUploader::__get__scoresToUpload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoresToUpload;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__scoresToUpload(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoresToUpload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*& GlobalNamespace::LeaderboardScoreUploader::__get__scoresToUploadForCurrentPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoresToUploadForCurrentPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>*> const&
GlobalNamespace::LeaderboardScoreUploader::__get__scoresToUploadForCurrentPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoresToUploadForCurrentPlayer;
}
constexpr void
GlobalNamespace::LeaderboardScoreUploader::__set__scoresToUploadForCurrentPlayer(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoresToUploadForCurrentPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*& GlobalNamespace::LeaderboardScoreUploader::__get__uploadScoreCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploadScoreCallback;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*> const&
GlobalNamespace::LeaderboardScoreUploader::__get__uploadScoreCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploadScoreCallback;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__uploadScoreCallback(::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uploadScoreCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::LeaderboardScoreUploader::__get__playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardScoreUploader::__get__playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__playerId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::LeaderboardScoreUploader::__get__uploading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploading;
}
constexpr bool const& GlobalNamespace::LeaderboardScoreUploader::__get__uploading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploading;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__uploading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uploading = value;
}
constexpr ::GlobalNamespace::ISaveData*& GlobalNamespace::LeaderboardScoreUploader::__get__saveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& GlobalNamespace::LeaderboardScoreUploader::__get__saveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__set__saveData(::GlobalNamespace::ISaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LeaderboardScoreUploader::add_allScoresDidUploadEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(), "add_allScoresDidUploadEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardScoreUploader::remove_allScoresDidUploadEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(), "remove_allScoresDidUploadEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardScoreUploader::Init(::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback* uploadScoreCallback, ::StringW playerId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LeaderboardScoreUploader__UploadScoreCallback*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uploadScoreCallback, playerId);
}
inline void GlobalNamespace::LeaderboardScoreUploader::Uninitialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                             "Uninitialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                             "OnApplicationQuit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::LeaderboardScoreUploader::UploadScoresCoroutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                             "UploadScoresCoroutine", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader::LoadScoresToUploadFromFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                             "LoadScoresToUploadFromFile", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader::SaveScoresToUploadToFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                             "SaveScoresToUploadToFile", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader::AddScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(), "AddScore", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scoreData);
}
inline ::GlobalNamespace::LeaderboardScoreUploader* GlobalNamespace::LeaderboardScoreUploader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LeaderboardScoreUploader*>());
}
inline void GlobalNamespace::LeaderboardScoreUploader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LeaderboardScoreUploader::_UploadScoresCoroutine_b__16_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardScoreUploader*>::get(),
                                                                             "<UploadScoresCoroutine>b__16_1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardScoreUploader::LeaderboardScoreUploader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
