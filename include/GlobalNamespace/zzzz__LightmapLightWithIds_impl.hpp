#pragma once
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_impl.hpp"
#include "GlobalNamespace/zzzz__LightConstants_impl.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__BakedLightsNormalizer_def.hpp"
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "GlobalNamespace/zzzz__LightConstants_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIds_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21100e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>::get(), "get_intensity",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId.get_probeHighlightsIntensityMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21100f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>::get(),
                                                 "get_probeHighlightsIntensityMultiplier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::*)(int32_t, float_t, float_t)>(
    &::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21100f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::__get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::__get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::__set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::__get__probeHighlightsIntensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeHighlightsIntensityMultiplier;
}
constexpr float_t const& GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::__get__probeHighlightsIntensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeHighlightsIntensityMultiplier;
}
constexpr void GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::__set__probeHighlightsIntensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____probeHighlightsIntensityMultiplier = value;
}
inline float_t GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>::get(), "get_intensity",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>::get(),
                                               "get_probeHighlightsIntensityMultiplier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId* GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::New_ctor(int32_t lightId, float_t lightIntensity,
                                                                                                                                                    float_t probeMultiplier) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>(lightId, lightIntensity, probeMultiplier));
}
inline void GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::_ctor(int32_t lightId, float_t lightIntensity, float_t probeMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightId, lightIntensity, probeMultiplier);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId::__LightmapLightWithIds__LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.get_mixType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorMixAndWeightingApproach (::GlobalNamespace::LightmapLightWithIds::*)()>(
    &::GlobalNamespace::LightmapLightWithIds::get_mixType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210fa98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_mixType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210faa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_intensity",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.set_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)(float_t)>(
    &::GlobalNamespace::LightmapLightWithIds::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210faa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "set_intensity", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.get_normalizerWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::LightmapLightWithIds::*)()>(
    &::GlobalNamespace::LightmapLightWithIds::get_normalizerWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210fab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                               "get_normalizerWeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.set_normalizerWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)(float_t)>(
    &::GlobalNamespace::LightmapLightWithIds::set_normalizerWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210fab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "set_normalizerWeight",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.get_calculatedColorPreNormalization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightmapLightWithIds::*)()>(
    &::GlobalNamespace::LightmapLightWithIds::get_calculatedColorPreNormalization)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x210fac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                               "get_calculatedColorPreNormalization", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.get_bakeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__LightConstants__BakeId (::GlobalNamespace::LightmapLightWithIds::*)()>(
    &::GlobalNamespace::LightmapLightWithIds::get_bakeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210facc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_bakeId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x210fad4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.ProcessNewColorData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x210fd2c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.GetLightWithIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* (
    ::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21100c8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.SetDataToShaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)(::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::LightmapLightWithIds::SetDataToShaders)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x210fcd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "SetDataToShaders", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.SetShaderProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::SetShaderProperties)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x210fbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                               "SetShaderProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.GetBakedLightsNormalizer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)()>(
    &::GlobalNamespace::LightmapLightWithIds::GetBakedLightsNormalizer)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x210fb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                               "GetBakedLightsNormalizer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21100d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__LightConstants__BakeId& GlobalNamespace::LightmapLightWithIds::__get__bakeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakeId;
}
constexpr ::GlobalNamespace::__LightConstants__BakeId const& GlobalNamespace::LightmapLightWithIds::__get__bakeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakeId;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__bakeId(::GlobalNamespace::__LightConstants__BakeId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bakeId = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIds::__get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIds::__get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIds::__get__probeIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeIntensity;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIds::__get__probeIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeIntensity;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__probeIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____probeIntensity = value;
}
constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>*>&
GlobalNamespace::LightmapLightWithIds::__get__lightIntensityData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr ::ArrayW<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>*> const&
GlobalNamespace::LightmapLightWithIds::__get__lightIntensityData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__lightIntensityData(
    ::ArrayW<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__LightmapLightWithIds__LightIntensitiesWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightIntensityData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& GlobalNamespace::LightmapLightWithIds::__get__mixType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixType;
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& GlobalNamespace::LightmapLightWithIds::__get__mixType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixType;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__mixType(::GlobalNamespace::ColorMixAndWeightingApproach value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mixType = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIds::__get__normalizerWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizerWeight;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIds::__get__normalizerWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizerWeight;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__normalizerWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalizerWeight = value;
}
constexpr ::GlobalNamespace::BakedLightsNormalizer*& GlobalNamespace::LightmapLightWithIds::__get__bakedLightsNormalizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedLightsNormalizer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BakedLightsNormalizer*> const& GlobalNamespace::LightmapLightWithIds::__get__bakedLightsNormalizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedLightsNormalizer;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__bakedLightsNormalizer(::GlobalNamespace::BakedLightsNormalizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bakedLightsNormalizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LightmapLightWithIds::__get__lightmapLightIdColorPropertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapLightIdColorPropertyId;
}
constexpr int32_t const& GlobalNamespace::LightmapLightWithIds::__get__lightmapLightIdColorPropertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapLightIdColorPropertyId;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__lightmapLightIdColorPropertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmapLightIdColorPropertyId = value;
}
constexpr int32_t& GlobalNamespace::LightmapLightWithIds::__get__lightProbeLightIdColorPropertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightProbeLightIdColorPropertyId;
}
constexpr int32_t const& GlobalNamespace::LightmapLightWithIds::__get__lightProbeLightIdColorPropertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightProbeLightIdColorPropertyId;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__lightProbeLightIdColorPropertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightProbeLightIdColorPropertyId = value;
}
constexpr bool& GlobalNamespace::LightmapLightWithIds::__get__initializedPropertyIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializedPropertyIds;
}
constexpr bool const& GlobalNamespace::LightmapLightWithIds::__get__initializedPropertyIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializedPropertyIds;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__initializedPropertyIds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializedPropertyIds = value;
}
constexpr bool& GlobalNamespace::LightmapLightWithIds::__get__initializedNormalizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializedNormalizer;
}
constexpr bool const& GlobalNamespace::LightmapLightWithIds::__get__initializedNormalizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializedNormalizer;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__initializedNormalizer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializedNormalizer = value;
}
constexpr bool& GlobalNamespace::LightmapLightWithIds::__get__isNormalizerInScene() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isNormalizerInScene;
}
constexpr bool const& GlobalNamespace::LightmapLightWithIds::__get__isNormalizerInScene() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isNormalizerInScene;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__isNormalizerInScene(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isNormalizerInScene = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightmapLightWithIds::__get__calculatedColorPreNormalization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____calculatedColorPreNormalization;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightmapLightWithIds::__get__calculatedColorPreNormalization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____calculatedColorPreNormalization;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__calculatedColorPreNormalization(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____calculatedColorPreNormalization = value;
}
inline ::GlobalNamespace::ColorMixAndWeightingApproach GlobalNamespace::LightmapLightWithIds::get_mixType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_mixType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorMixAndWeightingApproach, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::LightmapLightWithIds::get_intensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_intensity",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::set_intensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "set_intensity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::LightmapLightWithIds::get_normalizerWeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                             "get_normalizerWeight", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::set_normalizerWeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "set_normalizerWeight",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::LightmapLightWithIds::get_calculatedColorPreNormalization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                             "get_calculatedColorPreNormalization", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__LightConstants__BakeId GlobalNamespace::LightmapLightWithIds::get_bakeId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_bakeId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__LightConstants__BakeId, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::ProcessNewColorData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GlobalNamespace::LightmapLightWithIds::GetLightWithIds() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::SetDataToShaders(::UnityEngine::Color lightmapColor, ::UnityEngine::Color probeColor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "SetDataToShaders", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightmapColor, probeColor);
}
inline void GlobalNamespace::LightmapLightWithIds::SetShaderProperties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                             "SetShaderProperties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::GetBakedLightsNormalizer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                             "GetBakedLightsNormalizer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightmapLightWithIds* GlobalNamespace::LightmapLightWithIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightmapLightWithIds*>());
}
inline void GlobalNamespace::LightmapLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightmapLightWithIds::LightmapLightWithIds() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
