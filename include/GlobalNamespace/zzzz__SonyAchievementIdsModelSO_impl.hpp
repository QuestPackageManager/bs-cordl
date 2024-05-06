#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyAchievementIdsModelSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SonyAchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyAchievementIdsModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData.get_ps4TrophyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::*)()>(
    &::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::get_ps4TrophyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14de1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>::get(), "get_ps4TrophyId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData.get_achievementId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::*)()>(
    &::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::get_achievementId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x14ddf6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>::get(), "get_achievementId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::*)()>(
    &::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14de1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::__cordl_internal_get__trophyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trophyId;
}
constexpr int32_t const& GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::__cordl_internal_get__trophyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trophyId;
}
constexpr void GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::__cordl_internal_set__trophyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____trophyId = value;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO>& GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::__cordl_internal_get__achievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievement;
}
constexpr ::UnityW<::GlobalNamespace::AchievementSO> const& GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::__cordl_internal_get__achievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievement;
}
constexpr void GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::__cordl_internal_set__achievement(::UnityW<::GlobalNamespace::AchievementSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::get_ps4TrophyId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>::get(), "get_ps4TrophyId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::get_achievementId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>::get(), "get_achievementId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData* GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>());
}
inline void GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData::__SonyAchievementIdsModelSO__AchievementIdData() {}
//  Writing Method size for method: ::GlobalNamespace::SonyAchievementIdsModelSO.get_achievementsIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* (
    ::GlobalNamespace::SonyAchievementIdsModelSO::*)()>(&::GlobalNamespace::SonyAchievementIdsModelSO::get_achievementsIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14ddd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(),
                                                                               "get_achievementsIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyAchievementIdsModelSO.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyAchievementIdsModelSO::*)()>(&::GlobalNamespace::SonyAchievementIdsModelSO::OnEnable)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x14ddd2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyAchievementIdsModelSO.GetTrophyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SonyAchievementIdsModelSO::*)(::StringW, ByRef<int32_t>)>(
    &::GlobalNamespace::SonyAchievementIdsModelSO::GetTrophyId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14ddf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(), "GetTrophyId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyAchievementIdsModelSO.GetTrophyIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::GlobalNamespace::SonyAchievementIdsModelSO::*)()>(
    &::GlobalNamespace::SonyAchievementIdsModelSO::GetTrophyIds)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x14ddff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(),
                                                                               "GetTrophyIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyAchievementIdsModelSO.GetAchievementId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::SonyAchievementIdsModelSO::*)(int32_t, ByRef<::StringW>)>(
    &::GlobalNamespace::SonyAchievementIdsModelSO::GetAchievementId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14de05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(), "GetAchievementId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyAchievementIdsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyAchievementIdsModelSO::*)()>(&::GlobalNamespace::SonyAchievementIdsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x14de0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>*&
GlobalNamespace::SonyAchievementIdsModelSO::__cordl_internal_get__achievementsIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>*> const&
GlobalNamespace::SonyAchievementIdsModelSO::__cordl_internal_get__achievementsIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementsIds;
}
constexpr void
GlobalNamespace::SonyAchievementIdsModelSO::__cordl_internal_set__achievementsIds(::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementsIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& GlobalNamespace::SonyAchievementIdsModelSO::__cordl_internal_get__achievementIdToTrophyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdToTrophyId;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const&
GlobalNamespace::SonyAchievementIdsModelSO::__cordl_internal_get__achievementIdToTrophyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdToTrophyId;
}
constexpr void GlobalNamespace::SonyAchievementIdsModelSO::__cordl_internal_set__achievementIdToTrophyId(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementIdToTrophyId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*& GlobalNamespace::SonyAchievementIdsModelSO::__cordl_internal_get__trophyIdToAchievementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trophyIdToAchievementId;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*> const&
GlobalNamespace::SonyAchievementIdsModelSO::__cordl_internal_get__trophyIdToAchievementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trophyIdToAchievementId;
}
constexpr void GlobalNamespace::SonyAchievementIdsModelSO::__cordl_internal_set__trophyIdToAchievementId(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trophyIdToAchievementId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>* GlobalNamespace::SonyAchievementIdsModelSO::get_achievementsIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(),
                                                                             "get_achievementsIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__SonyAchievementIdsModelSO__AchievementIdData*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::SonyAchievementIdsModelSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SonyAchievementIdsModelSO::GetTrophyId(::StringW achievementId, ByRef<int32_t> trophyId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(), "GetTrophyId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, achievementId, trophyId);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> GlobalNamespace::SonyAchievementIdsModelSO::GetTrophyIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(),
                                                                             "GetTrophyIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline bool GlobalNamespace::SonyAchievementIdsModelSO::GetAchievementId(int32_t trophyId, ByRef<::StringW> achievementId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(), "GetAchievementId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, trophyId, achievementId);
}
inline ::GlobalNamespace::SonyAchievementIdsModelSO* GlobalNamespace::SonyAchievementIdsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SonyAchievementIdsModelSO*>());
}
inline void GlobalNamespace::SonyAchievementIdsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyAchievementIdsModelSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyAchievementIdsModelSO::SonyAchievementIdsModelSO() {}
