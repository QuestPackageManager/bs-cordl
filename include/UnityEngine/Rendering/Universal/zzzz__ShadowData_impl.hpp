#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\ShadowData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightsShadowAtlasLayout_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPLightShadowCullingInfos_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ShadowData::*)(::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::ShadowData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e5b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_universalShadowData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalShadowData* (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_universalShadowData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68e5b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_universalShadowData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_supportsMainLightShadows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_supportsMainLightShadows)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_supportsMainLightShadows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowmapWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowmapWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowmapWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowmapHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowmapHeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowmapHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowCascadesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadesCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowCascadesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowCascadesSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Vector3> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadesSplit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowCascadesSplit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowCascadeBorder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<float_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadeBorder)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowCascadeBorder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_supportsAdditionalLightShadows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_supportsAdditionalLightShadows)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_supportsAdditionalLightShadows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_additionalLightShadowsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_additionalLightShadowsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_additionalLightShadowsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_additionalLightsShadowmapWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_additionalLightsShadowmapWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_additionalLightsShadowmapWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_additionalLightsShadowmapHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_additionalLightsShadowmapHeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_additionalLightsShadowmapHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_supportsSoftShadows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_supportsSoftShadows)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_supportsSoftShadows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_shadowmapDepthBufferBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_shadowmapDepthBufferBits)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e5fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_shadowmapDepthBufferBits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_bias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_bias)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e6048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_bias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_resolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::System::Collections::Generic::List_1<int32_t>*> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_resolution)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e60a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_resolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_isKeywordAdditionalLightShadowsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_isKeywordAdditionalLightShadowsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e6108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_isKeywordAdditionalLightShadowsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_isKeywordSoftShadowsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_isKeywordSoftShadowsEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e6168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_isKeywordSoftShadowsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightShadowResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowResolution)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e61c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightRenderTargetWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightRenderTargetWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e6228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightRenderTargetWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_mainLightRenderTargetHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<int32_t> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_mainLightRenderTargetHeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e6288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightRenderTargetHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_visibleLightsShadowCullingInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>> (
    ::UnityEngine::Rendering::Universal::ShadowData::*)()>(&::UnityEngine::Rendering::Universal::ShadowData::get_visibleLightsShadowCullingInfos)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e62e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_visibleLightsShadowCullingInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ShadowData.get_shadowAtlasLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> (::UnityEngine::Rendering::Universal::ShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::ShadowData::get_shadowAtlasLayout)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e6348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_shadowAtlasLayout", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ShadowData::_ctor(::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, frameData);
}
inline ::UnityEngine::Rendering::Universal::UniversalShadowData* UnityEngine::Rendering::Universal::ShadowData::get_universalShadowData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_universalShadowData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalShadowData*>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::ShadowData::get_supportsMainLightShadows() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_supportsMainLightShadows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowsEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowmapWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowmapWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowmapHeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowmapHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadesCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowCascadesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Vector3> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadesSplit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowCascadesSplit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Vector3>>(*this, ___internal_method);
}
inline ::by_ref<float_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowCascadeBorder() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowCascadeBorder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<float_t>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::ShadowData::get_supportsAdditionalLightShadows() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_supportsAdditionalLightShadows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::ShadowData::get_additionalLightShadowsEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_additionalLightShadowsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_additionalLightsShadowmapWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_additionalLightsShadowmapWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_additionalLightsShadowmapHeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_additionalLightsShadowmapHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::ShadowData::get_supportsSoftShadows() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_supportsSoftShadows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_shadowmapDepthBufferBits() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_shadowmapDepthBufferBits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> UnityEngine::Rendering::Universal::ShadowData::get_bias() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_bias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>>(*this, ___internal_method);
}
inline ::by_ref<::System::Collections::Generic::List_1<int32_t>*> UnityEngine::Rendering::Universal::ShadowData::get_resolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_resolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::System::Collections::Generic::List_1<int32_t>*>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::ShadowData::get_isKeywordAdditionalLightShadowsEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_isKeywordAdditionalLightShadowsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::ShadowData::get_isKeywordSoftShadowsEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_isKeywordSoftShadowsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightShadowResolution() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightShadowResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightRenderTargetWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightRenderTargetWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<int32_t> UnityEngine::Rendering::Universal::ShadowData::get_mainLightRenderTargetHeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_mainLightRenderTargetHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<int32_t>>(*this, ___internal_method);
}
inline ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>
UnityEngine::Rendering::Universal::ShadowData::get_visibleLightsShadowCullingInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_visibleLightsShadowCullingInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout> UnityEngine::Rendering::Universal::ShadowData::get_shadowAtlasLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ShadowData>(), { "get_shadowAtlasLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ShadowData::ShadowData(::UnityEngine::Rendering::ContextContainer* frameData) noexcept {
  this->frameData = frameData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ShadowData::ShadowData() {}
