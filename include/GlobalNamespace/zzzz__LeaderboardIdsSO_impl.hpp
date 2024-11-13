#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardIdsSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsSO_def.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdContainer_def.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdData_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsSO_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData.get_platformLeaderboardId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::*)()>(
    &::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::get_platformLeaderboardId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26975ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>::get(),
                                                                               "get_platformLeaderboardId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData.get_difficultyBeatmapId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::*)()>(
    &::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::get_difficultyBeatmapId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26975b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>::get(),
                                                                               "get_difficultyBeatmapId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2697504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdData"
constexpr GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::operator ::GlobalNamespace::ILeaderboardIdData*() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILeaderboardIdData"
constexpr ::GlobalNamespace::ILeaderboardIdData* GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::i___GlobalNamespace__ILeaderboardIdData() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdData*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::__cordl_internal_get__difficultyBeatmapId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapId;
}
constexpr ::StringW const& GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::__cordl_internal_get__difficultyBeatmapId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapId;
}
constexpr void GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::__cordl_internal_set__difficultyBeatmapId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmapId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::__cordl_internal_get__platformLeaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardId;
}
constexpr ::StringW const& GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::__cordl_internal_get__platformLeaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardId;
}
constexpr void GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::__cordl_internal_set__platformLeaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformLeaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::get_platformLeaderboardId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>::get(),
                                                                             "get_platformLeaderboardId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::get_difficultyBeatmapId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>::get(),
                                                                             "get_difficultyBeatmapId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData* GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::New_ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>(difficultyBeatmapId, platformLeaderboardId));
}
inline void GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::_ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficultyBeatmapId, platformLeaderboardId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData::__LeaderboardIdsSO__LeaderboardIdData() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO.ILeaderboardIdContainer_get_leaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* (
    ::GlobalNamespace::LeaderboardIdsSO::*)()>(&::GlobalNamespace::LeaderboardIdsSO::ILeaderboardIdContainer_get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26973b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsSO*>::get(), "ILeaderboardIdContainer.get_leaderboardIds",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO.get_leaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>* (
    ::GlobalNamespace::LeaderboardIdsSO::*)()>(&::GlobalNamespace::LeaderboardIdsSO::get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26973bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsSO*>::get(),
                                                                               "get_leaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO.set_leaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardIdsSO::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>*)>(&::GlobalNamespace::LeaderboardIdsSO::set_leaderboardIds)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26973c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsSO*>::get(), "set_leaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardIdsSO::*)(::StringW, ::StringW)>(&::GlobalNamespace::LeaderboardIdsSO::Add)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2697420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsSO*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardIdsSO::*)()>(&::GlobalNamespace::LeaderboardIdsSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2697530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdContainer"
constexpr GlobalNamespace::LeaderboardIdsSO::operator ::GlobalNamespace::ILeaderboardIdContainer*() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILeaderboardIdContainer"
constexpr ::GlobalNamespace::ILeaderboardIdContainer* GlobalNamespace::LeaderboardIdsSO::i___GlobalNamespace__ILeaderboardIdContainer() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdContainer*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>*& GlobalNamespace::LeaderboardIdsSO::__cordl_internal_get__leaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>*> const&
GlobalNamespace::LeaderboardIdsSO::__cordl_internal_get__leaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr void GlobalNamespace::LeaderboardIdsSO::__cordl_internal_set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* GlobalNamespace::LeaderboardIdsSO::ILeaderboardIdContainer_get_leaderboardIds() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsSO*>::get(), "ILeaderboardIdContainer.get_leaderboardIds",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>* GlobalNamespace::LeaderboardIdsSO::get_leaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsSO*>::get(), "get_leaderboardIds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardIdsSO::set_leaderboardIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsSO*>::get(), "set_leaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LeaderboardIdsSO__LeaderboardIdData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardIdsSO::Add(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsSO*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficultyBeatmapId, platformLeaderboardId);
}
inline ::GlobalNamespace::LeaderboardIdsSO* GlobalNamespace::LeaderboardIdsSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LeaderboardIdsSO*>());
}
inline void GlobalNamespace::LeaderboardIdsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardIdsSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardIdsSO::LeaderboardIdsSO() {}
