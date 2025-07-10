#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyLeaderboardIdsSO.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdContainer_impl.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdData_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsSO_def.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdData_def.hpp"
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsSO_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData.get_difficultyBeatmapId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::*)()>(
    &::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::get_difficultyBeatmapId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ce91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>::get(), "get_difficultyBeatmapId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData.get_sonyLeaderboardId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::*)()>(
    &::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::get_sonyLeaderboardId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ce924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>::get(), "get_sonyLeaderboardId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::*)(uint32_t, ::StringW)>(
    &::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26ce92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::__cordl_internal_get__difficultyBeatmapId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapId;
}
constexpr ::StringW const& GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::__cordl_internal_get__difficultyBeatmapId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapId;
}
constexpr void GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::__cordl_internal_set__difficultyBeatmapId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmapId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::__cordl_internal_get__sonyLeaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyLeaderboardId;
}
constexpr uint32_t const& GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::__cordl_internal_get__sonyLeaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyLeaderboardId;
}
constexpr void GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::__cordl_internal_set__sonyLeaderboardId(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sonyLeaderboardId = value;
}
inline ::StringW GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::get_difficultyBeatmapId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>::get(),
                                                                             "get_difficultyBeatmapId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::get_sonyLeaderboardId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>::get(),
                                                                             "get_sonyLeaderboardId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::_ctor(uint32_t sonyLeaderboardId, ::StringW difficultyBeatmapId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sonyLeaderboardId, difficultyBeatmapId);
}
inline ::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData* GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::New_ctor(uint32_t sonyLeaderboardId, ::StringW difficultyBeatmapId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>(sonyLeaderboardId, difficultyBeatmapId));
}
/// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdData"
constexpr GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::operator ::GlobalNamespace::ILeaderboardIdData*() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILeaderboardIdData"
constexpr ::GlobalNamespace::ILeaderboardIdData* GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::i___GlobalNamespace__ILeaderboardIdData() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData::SonyLeaderboardIdsSO_LeaderboardIdData() {}
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsSO.ILeaderboardIdContainer_get_leaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* (
    ::GlobalNamespace::SonyLeaderboardIdsSO::*)()>(&::GlobalNamespace::SonyLeaderboardIdsSO::ILeaderboardIdContainer_get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ce834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO*>::get(), "ILeaderboardIdContainer.get_leaderboardIds",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsSO.get_leaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* (
    ::GlobalNamespace::SonyLeaderboardIdsSO::*)()>(&::GlobalNamespace::SonyLeaderboardIdsSO::get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26ce83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO*>::get(),
                                                                               "get_leaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsSO.set_leaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyLeaderboardIdsSO::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>*)>(&::GlobalNamespace::SonyLeaderboardIdsSO::set_leaderboardIds)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26ce844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO*>::get(), "set_leaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SonyLeaderboardIdsSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SonyLeaderboardIdsSO::*)()>(&::GlobalNamespace::SonyLeaderboardIdsSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26ce8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>*& GlobalNamespace::SonyLeaderboardIdsSO::__cordl_internal_get__leaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* const&
GlobalNamespace::SonyLeaderboardIdsSO::__cordl_internal_get__leaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr void GlobalNamespace::SonyLeaderboardIdsSO::__cordl_internal_set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* GlobalNamespace::SonyLeaderboardIdsSO::ILeaderboardIdContainer_get_leaderboardIds() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO*>::get(), "ILeaderboardIdContainer.get_leaderboardIds",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* GlobalNamespace::SonyLeaderboardIdsSO::get_leaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO*>::get(),
                                                                             "get_leaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::SonyLeaderboardIdsSO::set_leaderboardIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO*>::get(), "set_leaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SonyLeaderboardIdsSO_LeaderboardIdData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::SonyLeaderboardIdsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SonyLeaderboardIdsSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SonyLeaderboardIdsSO* GlobalNamespace::SonyLeaderboardIdsSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SonyLeaderboardIdsSO*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdContainer"
constexpr GlobalNamespace::SonyLeaderboardIdsSO::operator ::GlobalNamespace::ILeaderboardIdContainer*() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILeaderboardIdContainer"
constexpr ::GlobalNamespace::ILeaderboardIdContainer* GlobalNamespace::SonyLeaderboardIdsSO::i___GlobalNamespace__ILeaderboardIdContainer() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdContainer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SonyLeaderboardIdsSO::SonyLeaderboardIdsSO() {}
