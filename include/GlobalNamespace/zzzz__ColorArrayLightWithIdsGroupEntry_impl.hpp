#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorArrayLightWithIdsGroupEntry.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColorArrayLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__ColorArrayLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry.get_lightGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> (::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::*)()>(
    &::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::get_lightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586f518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>(), { "get_lightGroups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586f520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorArrayLightWithIds>& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__cordl_internal_get__colorArrayLightWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorArrayLightWithIds;
}
constexpr ::UnityW<::GlobalNamespace::ColorArrayLightWithIds> const& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__cordl_internal_get__colorArrayLightWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorArrayLightWithIds;
}
constexpr void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__cordl_internal_set__colorArrayLightWithIds(::UnityW<::GlobalNamespace::ColorArrayLightWithIds> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorArrayLightWithIds = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>>& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__cordl_internal_get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> const& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__cordl_internal_get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__cordl_internal_set__lightGroups(::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroups = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__cordl_internal_get__excludedLightIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__cordl_internal_get__excludedLightIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__cordl_internal_set__excludedLightIds(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____excludedLightIds = value;
}
inline ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>> GlobalNamespace::ColorArrayLightWithIdsGroupEntry::get_lightGroups() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>(), { "get_lightGroups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>>>(this, ___internal_method);
}
inline void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry* GlobalNamespace::ColorArrayLightWithIdsGroupEntry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::ColorArrayLightWithIdsGroupEntry() {}
