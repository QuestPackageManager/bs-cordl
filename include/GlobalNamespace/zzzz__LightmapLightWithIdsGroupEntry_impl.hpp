#pragma once
// IWYU pragma private; include "GlobalNamespace\LightmapLightWithIdsGroupEntry.hpp"
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIds_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData.get_lightGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LightGroupSO> (::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::*)()>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586de28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>(), { "get_lightGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData.get_groupIntensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::*)()>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::get_groupIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586de30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>(), { "get_groupIntensity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData.get_groupProbeHighlightsIntensityMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::*)()>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::get_groupProbeHighlightsIntensityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586de38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>(), { "get_groupProbeHighlightsIntensityMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::*)(::GlobalNamespace::LightGroupSO*, float_t, float_t)>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x586de40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightGroupSO*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightGroupSO>& GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::__cordl_internal_get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr ::UnityW<::GlobalNamespace::LightGroupSO> const& GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::__cordl_internal_get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::__cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroupSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroup = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::__cordl_internal_get__groupIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIntensity;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::__cordl_internal_get__groupIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIntensity;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::__cordl_internal_set__groupIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupIntensity = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::__cordl_internal_get__groupProbeHighlightsIntensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupProbeHighlightsIntensityMultiplier;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::__cordl_internal_get__groupProbeHighlightsIntensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupProbeHighlightsIntensityMultiplier;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::__cordl_internal_set__groupProbeHighlightsIntensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupProbeHighlightsIntensityMultiplier = value;
}
inline ::UnityW<::GlobalNamespace::LightGroupSO> GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::get_lightGroup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>(), { "get_lightGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightGroupSO>>(this, ___internal_method);
}
inline float_t GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::get_groupIntensity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>(), { "get_groupIntensity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::get_groupProbeHighlightsIntensityMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>(), { "get_groupProbeHighlightsIntensityMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::_ctor(::GlobalNamespace::LightGroupSO* lightGroup, float_t groupIntensity,
                                                                                  float_t groupProbeHighlightsIntensityMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LightGroupSO*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightGroup, groupIntensity, groupProbeHighlightsIntensityMultiplier);
}
inline ::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*
GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, float_t groupIntensity, float_t groupProbeHighlightsIntensityMultiplier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>(lightGroup, groupIntensity, groupProbeHighlightsIntensityMultiplier));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData::LightmapLightWithIdsGroupEntry_GroupLightData() {}
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId.get_lightId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::get_lightId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586de4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>(), { "get_lightId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586de54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>(), { "get_intensity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId.get_probeHighlightsIntensityMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586de5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>(), { "get_probeHighlightsIntensityMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::*)(int32_t, float_t, float_t)>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x586de64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_get__lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr int32_t const& GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_get__lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_set__lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightId = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_get__probeHighlightsIntensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeHighlightsIntensityMultiplier;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_get__probeHighlightsIntensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeHighlightsIntensityMultiplier;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::__cordl_internal_set__probeHighlightsIntensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____probeHighlightsIntensityMultiplier = value;
}
inline int32_t GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::get_lightId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>(), { "get_lightId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>(), { "get_intensity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>(), { "get_probeHighlightsIntensityMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::_ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightId, intensity, probeHighlightsIntensityMultiplier);
}
inline ::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*
GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::New_ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>(lightId, intensity, probeHighlightsIntensityMultiplier));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry.get_lightmapLightWithIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LightmapLightWithIds> (::GlobalNamespace::LightmapLightWithIdsGroupEntry::*)()>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry::get_lightmapLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586de04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>(), { "get_lightmapLightWithIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry.get_groupLightData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>* (
    ::GlobalNamespace::LightmapLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::LightmapLightWithIdsGroupEntry::get_groupLightData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586de0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>(), { "get_groupLightData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry.get_individualLightData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>* (
    ::GlobalNamespace::LightmapLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::LightmapLightWithIdsGroupEntry::get_individualLightData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586de14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>(), { "get_individualLightData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry.get_groupLightsWeighting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorMixAndWeightingApproach (::GlobalNamespace::LightmapLightWithIdsGroupEntry::*)()>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry::get_groupLightsWeighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586de1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>(), { "get_groupLightsWeighting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightmapLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::LightmapLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586de24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightmapLightWithIds>& GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_get__lightmapLightWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapLightWithIds;
}
constexpr ::UnityW<::GlobalNamespace::LightmapLightWithIds> const& GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_get__lightmapLightWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapLightWithIds;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_set__lightmapLightWithIds(::UnityW<::GlobalNamespace::LightmapLightWithIds> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmapLightWithIds = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>*&
GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_get__groupLightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>* const&
GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_get__groupLightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightData;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_set__groupLightData(
    ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupLightData = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>*&
GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_get__individualLightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____individualLightData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>* const&
GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_get__individualLightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____individualLightData;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_set__individualLightData(
    ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____individualLightData = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_get__excludedLightIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_get__excludedLightIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_set__excludedLightIds(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____excludedLightIds = value;
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_get__groupLightsWeighting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightsWeighting;
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_get__groupLightsWeighting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightsWeighting;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__cordl_internal_set__groupLightsWeighting(::GlobalNamespace::ColorMixAndWeightingApproach value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupLightsWeighting = value;
}
inline ::UnityW<::GlobalNamespace::LightmapLightWithIds> GlobalNamespace::LightmapLightWithIdsGroupEntry::get_lightmapLightWithIds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>(), { "get_lightmapLightWithIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightmapLightWithIds>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>* GlobalNamespace::LightmapLightWithIdsGroupEntry::get_groupLightData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>(), { "get_groupLightData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_GroupLightData*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>* GlobalNamespace::LightmapLightWithIdsGroupEntry::get_individualLightData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>(), { "get_individualLightData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::LightmapLightWithIdsGroupEntry_LightIntensitiesWithId*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorMixAndWeightingApproach GlobalNamespace::LightmapLightWithIdsGroupEntry::get_groupLightsWeighting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>(), { "get_groupLightsWeighting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorMixAndWeightingApproach>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIdsGroupEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightmapLightWithIdsGroupEntry* GlobalNamespace::LightmapLightWithIdsGroupEntry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightmapLightWithIdsGroupEntry::LightmapLightWithIdsGroupEntry() {}
