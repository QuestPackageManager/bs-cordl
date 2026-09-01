#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\LightData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::LightData::*)(::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::LightData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e3948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_universalLightData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalLightData* (::UnityEngine::Rendering::Universal::LightData::*)()>(
    &::UnityEngine::Rendering::Universal::LightData::get_universalLightData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68e3950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_universalLightData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_mainLightIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::LightData::*)()>(&::UnityEngine::Rendering::Universal::LightData::get_mainLightIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e39a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_mainLightIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_additionalLightsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::LightData::*)()>(
    &::UnityEngine::Rendering::Universal::LightData::get_additionalLightsCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_additionalLightsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_maxPerObjectAdditionalLightsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::LightData::*)()>(
    &::UnityEngine::Rendering::Universal::LightData::get_maxPerObjectAdditionalLightsCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_maxPerObjectAdditionalLightsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_visibleLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> (::UnityEngine::Rendering::Universal::LightData::*)()>(
    &::UnityEngine::Rendering::Universal::LightData::get_visibleLights)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_visibleLights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_shadeAdditionalLightsPerVertex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::LightData::*)()>(
    &::UnityEngine::Rendering::Universal::LightData::get_shadeAdditionalLightsPerVertex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_shadeAdditionalLightsPerVertex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_supportsMixedLighting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::LightData::*)()>(
    &::UnityEngine::Rendering::Universal::LightData::get_supportsMixedLighting)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_supportsMixedLighting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_reflectionProbeBoxProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::LightData::*)()>(
    &::UnityEngine::Rendering::Universal::LightData::get_reflectionProbeBoxProjection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_reflectionProbeBoxProjection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_reflectionProbeBlending
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::LightData::*)()>(
    &::UnityEngine::Rendering::Universal::LightData::get_reflectionProbeBlending)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_reflectionProbeBlending", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_supportsLightLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::LightData::*)()>(
    &::UnityEngine::Rendering::Universal::LightData::get_supportsLightLayers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_supportsLightLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightData.get_supportsAdditionalLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::LightData::*)()>(
    &::UnityEngine::Rendering::Universal::LightData::get_supportsAdditionalLights)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_supportsAdditionalLights", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::LightData::_ctor(::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, frameData);
}
inline ::UnityEngine::Rendering::Universal::UniversalLightData* UnityEngine::Rendering::Universal::LightData::get_universalLightData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_universalLightData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalLightData*>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::LightData::get_mainLightIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_mainLightIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::LightData::get_additionalLightsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_additionalLightsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::LightData::get_maxPerObjectAdditionalLightsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_maxPerObjectAdditionalLightsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> UnityEngine::Rendering::Universal::LightData::get_visibleLights() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_visibleLights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::LightData::get_shadeAdditionalLightsPerVertex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_shadeAdditionalLightsPerVertex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::LightData::get_supportsMixedLighting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_supportsMixedLighting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::LightData::get_reflectionProbeBoxProjection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_reflectionProbeBoxProjection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::LightData::get_reflectionProbeBlending() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_reflectionProbeBlending", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::LightData::get_supportsLightLayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_supportsLightLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::LightData::get_supportsAdditionalLights() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::LightData>(), { "get_supportsAdditionalLights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightData::LightData(::UnityEngine::Rendering::ContextContainer* frameData) noexcept {
  this->frameData = frameData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightData::LightData() {}
