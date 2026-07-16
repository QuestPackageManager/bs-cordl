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
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData.get_platformLeaderboardId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::*)()>(
    &::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::get_platformLeaderboardId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3726c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>(), { "get_platformLeaderboardId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData.get_difficultyBeatmapId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::*)()>(
    &::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::get_difficultyBeatmapId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3726c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>(), { "get_difficultyBeatmapId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3726bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::__cordl_internal_get__difficultyBeatmapId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapId;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::__cordl_internal_get__difficultyBeatmapId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapId;
}
constexpr void GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::__cordl_internal_set__difficultyBeatmapId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultyBeatmapId = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::__cordl_internal_get__platformLeaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardId;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::__cordl_internal_get__platformLeaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardId;
}
constexpr void GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::__cordl_internal_set__platformLeaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformLeaderboardId = value;
}
inline ::StringW GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::get_platformLeaderboardId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>(), { "get_platformLeaderboardId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::get_difficultyBeatmapId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>(), { "get_difficultyBeatmapId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::_ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, difficultyBeatmapId, platformLeaderboardId);
}
inline ::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData* GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::New_ctor(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>(difficultyBeatmapId, platformLeaderboardId));
}
/// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdData"
constexpr GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::operator ::GlobalNamespace::ILeaderboardIdData*() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILeaderboardIdData"
constexpr ::GlobalNamespace::ILeaderboardIdData* GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::i___GlobalNamespace__ILeaderboardIdData() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData::LeaderboardIdsSO_LeaderboardIdData() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO.ILeaderboardIdContainer_get_leaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* (::GlobalNamespace::LeaderboardIdsSO::*)()>(
    &::GlobalNamespace::LeaderboardIdsSO::ILeaderboardIdContainer_get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3726a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO*>(), { "ILeaderboardIdContainer.get_leaderboardIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO.get_leaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* (
    ::GlobalNamespace::LeaderboardIdsSO::*)()>(&::GlobalNamespace::LeaderboardIdsSO::get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3726a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO*>(), { "get_leaderboardIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO.set_leaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardIdsSO::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>*)>(&::GlobalNamespace::LeaderboardIdsSO::set_leaderboardIds)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3726a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO*>(),
                                         { "set_leaderboardIds", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardIdsSO::*)(::StringW, ::StringW)>(&::GlobalNamespace::LeaderboardIdsSO::Add)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3726adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO*>(), { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardIdsSO::*)()>(&::GlobalNamespace::LeaderboardIdsSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3726bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>*& GlobalNamespace::LeaderboardIdsSO::__cordl_internal_get__leaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* const& GlobalNamespace::LeaderboardIdsSO::__cordl_internal_get__leaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr void GlobalNamespace::LeaderboardIdsSO::__cordl_internal_set__leaderboardIds(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaderboardIds = value;
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>* GlobalNamespace::LeaderboardIdsSO::ILeaderboardIdContainer_get_leaderboardIds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO*>(), { "ILeaderboardIdContainer.get_leaderboardIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILeaderboardIdData*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* GlobalNamespace::LeaderboardIdsSO::get_leaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO*>(), { "get_leaderboardIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardIdsSO::set_leaderboardIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO*>(),
                                       { "set_leaderboardIds", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LeaderboardIdsSO_LeaderboardIdData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardIdsSO::Add(::StringW difficultyBeatmapId, ::StringW platformLeaderboardId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO*>(), { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, difficultyBeatmapId, platformLeaderboardId);
}
inline void GlobalNamespace::LeaderboardIdsSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LeaderboardIdsSO* GlobalNamespace::LeaderboardIdsSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardIdsSO*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILeaderboardIdContainer"
constexpr GlobalNamespace::LeaderboardIdsSO::operator ::GlobalNamespace::ILeaderboardIdContainer*() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILeaderboardIdContainer"
constexpr ::GlobalNamespace::ILeaderboardIdContainer* GlobalNamespace::LeaderboardIdsSO::i___GlobalNamespace__ILeaderboardIdContainer() noexcept {
  return static_cast<::GlobalNamespace::ILeaderboardIdContainer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardIdsSO::LeaderboardIdsSO() {}
