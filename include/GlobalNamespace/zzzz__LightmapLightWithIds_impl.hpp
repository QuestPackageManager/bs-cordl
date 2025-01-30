#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmapLightWithIds.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e5560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>::get(), "get_intensity",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId.get_probeHighlightsIntensityMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::*)()>(
    &::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e5568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>::get(),
                                                 "get_probeHighlightsIntensityMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::*)(int32_t, float_t, float_t)>(
    &::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x39e5570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::__cordl_internal_get__probeHighlightsIntensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeHighlightsIntensityMultiplier;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::__cordl_internal_get__probeHighlightsIntensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeHighlightsIntensityMultiplier;
}
constexpr void GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::__cordl_internal_set__probeHighlightsIntensityMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____probeHighlightsIntensityMultiplier = value;
}
inline float_t GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::get_intensity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>::get(), "get_intensity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>::get(),
                                               "get_probeHighlightsIntensityMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::_ctor(int32_t lightId, float_t lightIntensity, float_t probeMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightId, lightIntensity, probeMultiplier);
}
inline ::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId* GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::New_ctor(int32_t lightId, float_t lightIntensity,
                                                                                                                                              float_t probeMultiplier) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>(lightId, lightIntensity, probeMultiplier));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId::LightmapLightWithIds_LightIntensitiesWithId() {}
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.get_mixType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorMixAndWeightingApproach (::GlobalNamespace::LightmapLightWithIds::*)()>(
    &::GlobalNamespace::LightmapLightWithIds::get_mixType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e4f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_mixType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.get_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e4f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_intensity",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.set_intensity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)(float_t)>(
    &::GlobalNamespace::LightmapLightWithIds::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e4f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "set_intensity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.get_normalizerWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::LightmapLightWithIds::*)()>(
    &::GlobalNamespace::LightmapLightWithIds::get_normalizerWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e4fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                               "get_normalizerWeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.set_normalizerWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)(float_t)>(
    &::GlobalNamespace::LightmapLightWithIds::set_normalizerWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e4fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "set_normalizerWeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.get_calculatedColorPreNormalization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightmapLightWithIds::*)()>(
    &::GlobalNamespace::LightmapLightWithIds::get_calculatedColorPreNormalization)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39e4fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_calculatedColorPreNormalization",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.get_bakeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightConstants_BakeId (::GlobalNamespace::LightmapLightWithIds::*)()>(
    &::GlobalNamespace::LightmapLightWithIds::get_bakeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e4fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_bakeId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x39e4fc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.SetChannelColorDirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::LightmapLightWithIds::SetChannelColorDirect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39e51ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "SetChannelColorDirect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.ProcessNewColorData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x39e51b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.GetLightWithIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* (
    ::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39e5540;

  inline static ::MethodInfo const* methodInfo() {

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
  constexpr static std::size_t addrs = 0x39e5158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "SetDataToShaders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.SetShaderProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::SetShaderProperties)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x39e50e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                               "SetShaderProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds.GetBakedLightsNormalizer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)()>(
    &::GlobalNamespace::LightmapLightWithIds::GetBakedLightsNormalizer)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x39e5054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                               "GetBakedLightsNormalizer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightmapLightWithIds::*)()>(&::GlobalNamespace::LightmapLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x39e5548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LightConstants_BakeId& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__bakeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakeId;
}
constexpr ::GlobalNamespace::LightConstants_BakeId const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__bakeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakeId;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__bakeId(::GlobalNamespace::LightConstants_BakeId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bakeId = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__probeIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeIntensity;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__probeIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____probeIntensity;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__probeIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____probeIntensity = value;
}
constexpr ::ArrayW<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>*>&
GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__lightIntensityData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr ::ArrayW<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>*> const&
GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__lightIntensityData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightIntensityData;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__lightIntensityData(
    ::ArrayW<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::LightmapLightWithIds_LightIntensitiesWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightIntensityData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__mixType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixType;
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__mixType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mixType;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__mixType(::GlobalNamespace::ColorMixAndWeightingApproach value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mixType = value;
}
constexpr float_t& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__normalizerWeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizerWeight;
}
constexpr float_t const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__normalizerWeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizerWeight;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__normalizerWeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalizerWeight = value;
}
constexpr ::UnityW<::GlobalNamespace::BakedLightsNormalizer>& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__bakedLightsNormalizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedLightsNormalizer;
}
constexpr ::UnityW<::GlobalNamespace::BakedLightsNormalizer> const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__bakedLightsNormalizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bakedLightsNormalizer;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__bakedLightsNormalizer(::UnityW<::GlobalNamespace::BakedLightsNormalizer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bakedLightsNormalizer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__lightmapLightIdColorPropertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapLightIdColorPropertyId;
}
constexpr int32_t const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__lightmapLightIdColorPropertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapLightIdColorPropertyId;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__lightmapLightIdColorPropertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmapLightIdColorPropertyId = value;
}
constexpr int32_t& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__lightProbeLightIdColorPropertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightProbeLightIdColorPropertyId;
}
constexpr int32_t const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__lightProbeLightIdColorPropertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightProbeLightIdColorPropertyId;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__lightProbeLightIdColorPropertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightProbeLightIdColorPropertyId = value;
}
constexpr bool& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__initializedPropertyIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializedPropertyIds;
}
constexpr bool const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__initializedPropertyIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializedPropertyIds;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__initializedPropertyIds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializedPropertyIds = value;
}
constexpr bool& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__initializedNormalizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializedNormalizer;
}
constexpr bool const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__initializedNormalizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initializedNormalizer;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__initializedNormalizer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initializedNormalizer = value;
}
constexpr bool& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__isNormalizerInScene() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isNormalizerInScene;
}
constexpr bool const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__isNormalizerInScene() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isNormalizerInScene;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__isNormalizerInScene(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isNormalizerInScene = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__calculatedColorPreNormalization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____calculatedColorPreNormalization;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightmapLightWithIds::__cordl_internal_get__calculatedColorPreNormalization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____calculatedColorPreNormalization;
}
constexpr void GlobalNamespace::LightmapLightWithIds::__cordl_internal_set__calculatedColorPreNormalization(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____calculatedColorPreNormalization = value;
}
inline ::GlobalNamespace::ColorMixAndWeightingApproach GlobalNamespace::LightmapLightWithIds::get_mixType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_mixType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorMixAndWeightingApproach, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::LightmapLightWithIds::get_intensity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_intensity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::set_intensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "set_intensity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::LightmapLightWithIds::get_normalizerWeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                             "get_normalizerWeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::set_normalizerWeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "set_normalizerWeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::LightmapLightWithIds::get_calculatedColorPreNormalization() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_calculatedColorPreNormalization",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightConstants_BakeId GlobalNamespace::LightmapLightWithIds::get_bakeId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "get_bakeId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightConstants_BakeId, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::SetChannelColorDirect(::UnityEngine::Color channelColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "SetChannelColorDirect",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channelColor);
}
inline void GlobalNamespace::LightmapLightWithIds::ProcessNewColorData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* GlobalNamespace::LightmapLightWithIds::GetLightWithIds() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::SetDataToShaders(::UnityEngine::Color lightmapColor, ::UnityEngine::Color probeColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), "SetDataToShaders", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightmapColor, probeColor);
}
inline void GlobalNamespace::LightmapLightWithIds::SetShaderProperties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                             "SetShaderProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::GetBakedLightsNormalizer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(),
                                                                             "GetBakedLightsNormalizer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightmapLightWithIds*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LightmapLightWithIds* GlobalNamespace::LightmapLightWithIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightmapLightWithIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightmapLightWithIds::LightmapLightWithIds() {}
