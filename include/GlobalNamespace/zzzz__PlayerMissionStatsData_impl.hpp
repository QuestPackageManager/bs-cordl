#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerMissionStatsData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerMissionStatsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData.get_missionId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerMissionStatsData::*)()>(&::GlobalNamespace::PlayerMissionStatsData::get_missionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerMissionStatsData*>(), { "get_missionId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData.get_cleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerMissionStatsData::*)()>(&::GlobalNamespace::PlayerMissionStatsData::get_cleared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerMissionStatsData*>(), { "get_cleared", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData.set_cleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMissionStatsData::*)(bool)>(&::GlobalNamespace::PlayerMissionStatsData::set_cleared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3749a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerMissionStatsData*>(), { "set_cleared", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMissionStatsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMissionStatsData::*)(::StringW, bool)>(&::GlobalNamespace::PlayerMissionStatsData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3747a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerMissionStatsData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerMissionStatsData::__cordl_internal_get__missionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionId;
}
constexpr ::StringW const& GlobalNamespace::PlayerMissionStatsData::__cordl_internal_get__missionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionId;
}
constexpr void GlobalNamespace::PlayerMissionStatsData::__cordl_internal_set__missionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionId = value;
}
constexpr bool& GlobalNamespace::PlayerMissionStatsData::__cordl_internal_get__cleared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cleared;
}
constexpr bool const& GlobalNamespace::PlayerMissionStatsData::__cordl_internal_get__cleared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cleared;
}
constexpr void GlobalNamespace::PlayerMissionStatsData::__cordl_internal_set__cleared(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cleared = value;
}
inline ::StringW GlobalNamespace::PlayerMissionStatsData::get_missionId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerMissionStatsData*>(), { "get_missionId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerMissionStatsData::get_cleared() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerMissionStatsData*>(), { "get_cleared", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMissionStatsData::set_cleared(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerMissionStatsData*>(), { "set_cleared", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerMissionStatsData::_ctor(::StringW missionId, bool cleared) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerMissionStatsData*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionId, cleared);
}
inline ::GlobalNamespace::PlayerMissionStatsData* GlobalNamespace::PlayerMissionStatsData::New_ctor(::StringW missionId, bool cleared) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerMissionStatsData*>(missionId, cleared));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerMissionStatsData::PlayerMissionStatsData() {}
