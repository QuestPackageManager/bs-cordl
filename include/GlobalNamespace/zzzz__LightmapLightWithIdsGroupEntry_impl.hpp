#pragma once
#include "GlobalNamespace/zzzz__LightmapLightWithIdsGroupEntry_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting() {}
constexpr ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting::Maximum{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting::LinearFraction{ static_cast<int32_t>(
    0x1) };
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData.get_lightGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroupSO* (::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::*)()>(
    &::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fba740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>::get(), "get_lightGroup",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData.get_groupIntensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::*)()>(
    &::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::get_groupIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fba748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>::get(),
                                                 "get_groupIntensity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData.get_groupProbeHighlightsIntensityMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::*)()>(
    &::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::get_groupProbeHighlightsIntensityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fba750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>::get(),
                                                 "get_groupProbeHighlightsIntensityMultiplier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::*)(
    ::GlobalNamespace::LightGroupSO*, float_t, float_t)>(&::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1fba758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LightGroupSO*& GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::__get__lightGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> const& GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::__get__lightGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroup;
}
constexpr void GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::__set__lightGroup(::GlobalNamespace::LightGroupSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::__get__groupIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIntensity;
}
constexpr float_t const& GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::__get__groupIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIntensity;
}
constexpr void GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::__set__groupIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupIntensity = value;
}
constexpr float_t& GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::__get__groupProbeHighlightsIntensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupProbeHighlightsIntensityMultiplier;
}
constexpr float_t const& GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::__get__groupProbeHighlightsIntensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupProbeHighlightsIntensityMultiplier;
}
constexpr void GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::__set__groupProbeHighlightsIntensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupProbeHighlightsIntensityMultiplier = value;
}
inline ::GlobalNamespace::LightGroupSO* GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::get_lightGroup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>::get(), "get_lightGroup",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightGroupSO*, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::get_groupIntensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>::get(),
                                               "get_groupIntensity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::get_groupProbeHighlightsIntensityMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>::get(),
                                               "get_groupProbeHighlightsIntensityMultiplier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*
GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::New_ctor(::GlobalNamespace::LightGroupSO* lightGroup, float_t groupIntensity, float_t groupProbeHighlightsIntensityMultiplier) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>(lightGroup, groupIntensity, groupProbeHighlightsIntensityMultiplier));
}
inline void GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::_ctor(::GlobalNamespace::LightGroupSO* lightGroup, float_t groupIntensity,
                                                                                     float_t groupProbeHighlightsIntensityMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightGroup, groupIntensity, groupProbeHighlightsIntensityMultiplier);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData::__LightmapLightWithIdsGroupEntry__GroupLightData() {}
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId.get_lightId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_lightId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fba794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                                                 "get_lightId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fba79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                                                 "get_intensity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId.get_probeHighlightsIntensityMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fba7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                                                 "get_probeHighlightsIntensityMultiplier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::*)(int32_t, float_t, float_t)>(
    &::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1fba7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__get__lightId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr int32_t const& GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__get__lightId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightId;
}
constexpr void GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__set__lightId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightId = value;
}
constexpr float_t& GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__get__probeHighlightsIntensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeHighlightsIntensityMultiplier;
}
constexpr float_t const& GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__get__probeHighlightsIntensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeHighlightsIntensityMultiplier;
}
constexpr void GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__set__probeHighlightsIntensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____probeHighlightsIntensityMultiplier = value;
}
inline int32_t GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_lightId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                                               "get_lightId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                                               "get_intensity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                                               "get_probeHighlightsIntensityMultiplier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*
GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::New_ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>(lightId, intensity, probeHighlightsIntensityMultiplier));
}
inline void GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::_ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightId, intensity, probeHighlightsIntensityMultiplier);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry.get_lightmapLightWithIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightmapLightWithIds* (::GlobalNamespace::LightmapLightWithIdsGroupEntry::*)()>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry::get_lightmapLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fba730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>::get(),
                                                                               "get_lightmapLightWithIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIdsGroupEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIdsGroupEntry::*)()>(
    &::GlobalNamespace::LightmapLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fba738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LightmapLightWithIds*& GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__lightmapLightWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapLightWithIds;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightmapLightWithIds*> const& GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__lightmapLightWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapLightWithIds;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__set__lightmapLightWithIds(::GlobalNamespace::LightmapLightWithIds* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightmapLightWithIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>*>&
GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__groupLightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightData;
}
constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>*> const&
GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__groupLightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightData;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__set__groupLightData(
    ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____groupLightData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>*>&
GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__individualLightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____individualLightData;
}
constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>*> const&
GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__individualLightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____individualLightData;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__set__individualLightData(
    ::ArrayW<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____individualLightData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__excludedLightIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__excludedLightIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____excludedLightIds;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__set__excludedLightIds(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____excludedLightIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting& GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__groupLightsWeighting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightsWeighting;
}
constexpr ::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting const& GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__groupLightsWeighting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupLightsWeighting;
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__set__groupLightsWeighting(::GlobalNamespace::__LightmapLightWithIdsGroupEntry__GroupLightsWeighting value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupLightsWeighting = value;
}
inline ::GlobalNamespace::LightmapLightWithIds* GlobalNamespace::LightmapLightWithIdsGroupEntry::get_lightmapLightWithIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>::get(),
                                                                             "get_lightmapLightWithIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightmapLightWithIds*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightmapLightWithIdsGroupEntry* GlobalNamespace::LightmapLightWithIdsGroupEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>());
}
inline void GlobalNamespace::LightmapLightWithIdsGroupEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIdsGroupEntry*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightmapLightWithIdsGroupEntry::LightmapLightWithIdsGroupEntry() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
