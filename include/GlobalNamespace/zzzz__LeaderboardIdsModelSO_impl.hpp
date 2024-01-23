#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData.get_platformLeaderboardId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::*)()>(
    &::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::get_platformLeaderboardId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232787c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>::get(),
                                                 "get_platformLeaderboardId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData.get_difficultyBeatmapId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::*)()>(
    &::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::get_difficultyBeatmapId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2327884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>::get(),
                                                 "get_difficultyBeatmapId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x232788c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::__cordl_internal_get__difficultyBeatmapId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapId;
}
constexpr ::StringW const& GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::__cordl_internal_get__difficultyBeatmapId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapId;
}
constexpr void GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::__cordl_internal_set__difficultyBeatmapId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmapId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::__cordl_internal_get__platformLeaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardId;
}
constexpr ::StringW const& GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::__cordl_internal_get__platformLeaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardId;
}
constexpr void GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::__cordl_internal_set__platformLeaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformLeaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::get_platformLeaderboardId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>::get(),
                                               "get_platformLeaderboardId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::get_difficultyBeatmapId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>::get(), "get_difficultyBeatmapId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData* GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::New_ctor(::StringW difficultyBeatmapId,
                                                                                                                                            ::StringW platformLeaderboardId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>(difficultyBeatmapId, platformLeaderboardId));
}
inline void GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::_ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficultyBeatmapId, platformLeaderboardId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData::__LeaderboardIdsModelSO__LeaderboardIdData() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsModelSO.RebuildMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardIdsModelSO::*)()>(&::GlobalNamespace::LeaderboardIdsModelSO::RebuildMap)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2327564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsModelSO*>::get(), "RebuildMap",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsModelSO.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardIdsModelSO::*)()>(&::GlobalNamespace::LeaderboardIdsModelSO::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2327704;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsModelSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsModelSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsModelSO.TryGetPlatformLeaderboardId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LeaderboardIdsModelSO::*)(::GlobalNamespace::IDifficultyBeatmap*, ByRef<::StringW>)>(
    &::GlobalNamespace::LeaderboardIdsModelSO::TryGetPlatformLeaderboardId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2327720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsModelSO*>::get(), "TryGetPlatformLeaderboardId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardIdsModelSO::*)()>(&::GlobalNamespace::LeaderboardIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x23277bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsModelSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>*& GlobalNamespace::LeaderboardIdsModelSO::__cordl_internal_get__leaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>*> const&
GlobalNamespace::LeaderboardIdsModelSO::__cordl_internal_get__leaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr void
GlobalNamespace::LeaderboardIdsModelSO::__cordl_internal_set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsModelSO__LeaderboardIdData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& GlobalNamespace::LeaderboardIdsModelSO::__cordl_internal_get__leaderboardIdMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIdMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
GlobalNamespace::LeaderboardIdsModelSO::__cordl_internal_get__leaderboardIdMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIdMap;
}
constexpr void GlobalNamespace::LeaderboardIdsModelSO::__cordl_internal_set__leaderboardIdMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardIdMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LeaderboardIdsModelSO::RebuildMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsModelSO*>::get(), "RebuildMap",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardIdsModelSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsModelSO*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LeaderboardIdsModelSO::TryGetPlatformLeaderboardId(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ByRef<::StringW> platformLeaderboardId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsModelSO*>::get(), "TryGetPlatformLeaderboardId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, difficultyBeatmap, platformLeaderboardId);
}
inline ::GlobalNamespace::LeaderboardIdsModelSO* GlobalNamespace::LeaderboardIdsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LeaderboardIdsModelSO*>());
}
inline void GlobalNamespace::LeaderboardIdsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsModelSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardIdsModelSO::LeaderboardIdsModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
