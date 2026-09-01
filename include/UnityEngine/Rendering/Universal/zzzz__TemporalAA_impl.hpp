#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\TemporalAA.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAAQuality_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAAQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__TaaAccumulationTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TaaAccumulationTex", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__TaaAccumulationTex() {
  return ::cordl_internals::getStaticField<int32_t, "_TaaAccumulationTex", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__TaaMotionVectorTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TaaMotionVectorTex", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__TaaMotionVectorTex() {
  return ::cordl_internals::getStaticField<int32_t, "_TaaMotionVectorTex", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__TaaFilterWeights(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TaaFilterWeights", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__TaaFilterWeights() {
  return ::cordl_internals::getStaticField<int32_t, "_TaaFilterWeights", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__TaaFrameInfluence(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TaaFrameInfluence", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__TaaFrameInfluence() {
  return ::cordl_internals::getStaticField<int32_t, "_TaaFrameInfluence", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__TaaVarianceClampScale(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TaaVarianceClampScale", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__TaaVarianceClampScale() {
  return ::cordl_internals::getStaticField<int32_t, "_TaaVarianceClampScale", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__CameraDepthTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CameraDepthTexture", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__CameraDepthTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_CameraDepthTexture", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::TemporalAA_ShaderConstants() {}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords::setStaticF_TAA_LOW_PRECISION_SOURCE(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "TAA_LOW_PRECISION_SOURCE", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords::getStaticF_TAA_LOW_PRECISION_SOURCE() {
  return ::cordl_internals::getStaticField<::StringW, "TAA_LOW_PRECISION_SOURCE", ::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords::TemporalAA_ShaderKeywords() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_quality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::TemporalAAQuality (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_quality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c1128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_quality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_quality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(::UnityEngine::Rendering::Universal::TemporalAAQuality)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_quality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68c1130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(),
                                                                                           { "set_quality", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::TemporalAAQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_baseBlendFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_baseBlendFactor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68c1148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_baseBlendFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_baseBlendFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_baseBlendFactor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68c1158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "set_baseBlendFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_jitterScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_jitterScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c117c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_jitterScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_jitterScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_jitterScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68c1184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "set_jitterScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_mipBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_mipBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c11a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_mipBias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_mipBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_mipBias)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68c11ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "set_mipBias", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_varianceClampScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_varianceClampScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c11cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_varianceClampScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_varianceClampScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_varianceClampScale)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68c11d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "set_varianceClampScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_contrastAdaptiveSharpening
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_contrastAdaptiveSharpening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c11f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_contrastAdaptiveSharpening", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_contrastAdaptiveSharpening
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_contrastAdaptiveSharpening)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68c1200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "set_contrastAdaptiveSharpening", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::TemporalAA_Settings (*)()>(&::UnityEngine::Rendering::Universal::TemporalAA_Settings::Create)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68c1220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::TemporalAAQuality UnityEngine::Rendering::Universal::TemporalAA_Settings::get_quality() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_quality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TemporalAAQuality>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_quality(::UnityEngine::Rendering::Universal::TemporalAAQuality value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(),
                                                                                         { "set_quality", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::TemporalAAQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::TemporalAA_Settings::get_baseBlendFactor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_baseBlendFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_baseBlendFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "set_baseBlendFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::TemporalAA_Settings::get_jitterScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_jitterScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_jitterScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "set_jitterScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::TemporalAA_Settings::get_mipBias() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_mipBias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_mipBias(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "set_mipBias", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::TemporalAA_Settings::get_varianceClampScale() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_varianceClampScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_varianceClampScale(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "set_varianceClampScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::TemporalAA_Settings::get_contrastAdaptiveSharpening() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "get_contrastAdaptiveSharpening", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_contrastAdaptiveSharpening(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "set_contrastAdaptiveSharpening", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::TemporalAA_Settings UnityEngine::Rendering::Universal::TemporalAA_Settings::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TemporalAA_Settings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Quality", ty: "::UnityEngine::Rendering::Universal::TemporalAAQuality", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FrameInfluence", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_JitterScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MipBias", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m_VarianceClampScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ContrastAdaptiveSharpening", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "resetHistoryFrames", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "jitterFrameCountOffset", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_Settings::TemporalAA_Settings(::UnityEngine::Rendering::Universal::TemporalAAQuality m_Quality, float_t m_FrameInfluence,
                                                                                        float_t m_JitterScale, float_t m_MipBias, float_t m_VarianceClampScale, float_t m_ContrastAdaptiveSharpening,
                                                                                        int32_t resetHistoryFrames, int32_t jitterFrameCountOffset) noexcept {
  this->m_Quality = m_Quality;
  this->m_FrameInfluence = m_FrameInfluence;
  this->m_JitterScale = m_JitterScale;
  this->m_MipBias = m_MipBias;
  this->m_VarianceClampScale = m_VarianceClampScale;
  this->m_ContrastAdaptiveSharpening = m_ContrastAdaptiveSharpening;
  this->resetHistoryFrames = resetHistoryFrames;
  this->jitterFrameCountOffset = jitterFrameCountOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_Settings::TemporalAA_Settings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68bee3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::*)(int32_t, ::by_ref<::UnityEngine::Vector2>, ::by_ref<bool>)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68c1240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::*)(int32_t, ::by_ref<::UnityEngine::Vector2>, ::by_ref<bool>, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68c1254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::*)(::by_ref<::UnityEngine::Vector2>, ::by_ref<bool>, ::System::IAsyncResult*)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68c131c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(), 15 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::Invoke(int32_t frameIndex, ::by_ref<::UnityEngine::Vector2> jitter, ::by_ref<bool> allowScaling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameIndex, jitter, allowScaling);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::BeginInvoke(int32_t frameIndex, ::by_ref<::UnityEngine::Vector2> jitter, ::by_ref<bool> allowScaling,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, frameIndex, jitter, allowScaling, callback, object);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::EndInvoke(::by_ref<::UnityEngine::Vector2> jitter, ::by_ref<bool> allowScaling, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jitter, allowScaling, result);
}
inline ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::TemporalAA_JitterFunc() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::*)()>(&::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68c1340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_dstTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dstTex;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_dstTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dstTex;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_dstTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dstTex = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_srcColorTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcColorTex;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_srcColorTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcColorTex;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_srcColorTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___srcColorTex = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_srcDepthTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcDepthTex;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_srcDepthTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcDepthTex;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_srcDepthTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___srcDepthTex = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_srcMotionVectorTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcMotionVectorTex;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_srcMotionVectorTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcMotionVectorTex;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_srcMotionVectorTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___srcMotionVectorTex = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_srcTaaAccumTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcTaaAccumTex;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_srcTaaAccumTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___srcTaaAccumTex;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_srcTaaAccumTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___srcTaaAccumTex = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_passIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_passIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_passIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndex = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaFrameInfluence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaFrameInfluence;
}
constexpr float_t const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaFrameInfluence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaFrameInfluence;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_taaFrameInfluence(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___taaFrameInfluence = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaVarianceClampScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaVarianceClampScale;
}
constexpr float_t const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaVarianceClampScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaVarianceClampScale;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_taaVarianceClampScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___taaVarianceClampScale = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaFilterWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaFilterWeights;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaFilterWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaFilterWeights;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_taaFilterWeights(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___taaFilterWeights = value;
}
constexpr bool& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaLowPrecisionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaLowPrecisionSource;
}
constexpr bool const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaLowPrecisionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaLowPrecisionSource;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_taaLowPrecisionSource(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___taaLowPrecisionSource = value;
}
constexpr bool& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaAlphaOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaAlphaOutput;
}
constexpr bool const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaAlphaOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaAlphaOutput;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_taaAlphaOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___taaAlphaOutput = value;
}
inline void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData* UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::TemporalAA_TaaPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA___c::*)()>(&::UnityEngine::Rendering::Universal::TemporalAA___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68c1398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA___c._Render_b__17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA___c::*)(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::TemporalAA___c::_Render_b__17_0)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x68c139c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA___c*>(),
                                                                                           { "<Render>b__17_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA___c._Render_b__17_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA___c::*)(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::TemporalAA___c::_Render_b__17_1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x68c16b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA___c*>(),
                                                                                           { "<Render>b__17_1",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::TemporalAA___c::setStaticF___9(::UnityEngine::Rendering::Universal::TemporalAA___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::TemporalAA___c*, "<>9", ::UnityEngine::Rendering::Universal::TemporalAA___c*>(
      std::forward<::UnityEngine::Rendering::Universal::TemporalAA___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::TemporalAA___c* UnityEngine::Rendering::Universal::TemporalAA___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::TemporalAA___c*, "<>9", ::UnityEngine::Rendering::Universal::TemporalAA___c*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA___c::setStaticF___9__17_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__17_0", ::UnityEngine::Rendering::Universal::TemporalAA___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::TemporalAA___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__17_0", ::UnityEngine::Rendering::Universal::TemporalAA___c*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA___c::setStaticF___9__17_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__17_1", ::UnityEngine::Rendering::Universal::TemporalAA___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::TemporalAA___c::getStaticF___9__17_1() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__17_1", ::UnityEngine::Rendering::Universal::TemporalAA___c*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA___c::_Render_b__17_0(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData* data,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA___c*>(),
                          { "<Render>b__17_0",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::TemporalAA___c::_Render_b__17_1(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData* data,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA___c*>(),
                          { "<Render>b__17_1",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::TemporalAA___c* UnityEngine::Rendering::Universal::TemporalAA___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::TemporalAA___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA___c::TemporalAA___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.CalculateTaaFrameIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>)>(
    &::UnityEngine::Rendering::Universal::TemporalAA::CalculateTaaFrameIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68bea6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                             { "CalculateTaaFrameIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.CalculateJitterMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*)>(&::UnityEngine::Rendering::Universal::TemporalAA::CalculateJitterMatrix)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x68bf0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                            { "CalculateJitterMatrix",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.CalculateJitter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Vector2>, ::by_ref<bool>)>(&::UnityEngine::Rendering::Universal::TemporalAA::CalculateJitter)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x68bf2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                { "CalculateJitter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.CalculateFilterWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>)>(
    &::UnityEngine::Rendering::Universal::TemporalAA::CalculateFilterWeights)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x68bf340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                             { "CalculateFilterWeights", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.TemporalAADescFromCameraDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (*)(::by_ref<::UnityEngine::RenderTextureDescriptor>)>(
    &::UnityEngine::Rendering::Universal::TemporalAA::TemporalAADescFromCameraDesc)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x68bf57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                             { "TemporalAADescFromCameraDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.ValidateAndWarn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, bool)>(
    &::UnityEngine::Rendering::Universal::TemporalAA::ValidateAndWarn)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x68bf784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                             { "ValidateAndWarn", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>,
                                                                ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::RenderTexture*)>(
    &::UnityEngine::Rendering::Universal::TemporalAA::ExecutePass)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x68bfc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                             { "ExecutePass",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Material*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
        &::UnityEngine::Rendering::Universal::TemporalAA::Render)> {
  constexpr static std::size_t size = 0xbb4;
  constexpr static std::size_t addrs = 0x68c0190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
            { "Render",
              {},
              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::TemporalAA::setStaticF_s_JitterFunc(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*, "s_JitterFunc", ::UnityEngine::Rendering::Universal::TemporalAA*>(
      std::forward<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(value));
}
inline ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* UnityEngine::Rendering::Universal::TemporalAA::getStaticF_s_JitterFunc() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*, "s_JitterFunc", ::UnityEngine::Rendering::Universal::TemporalAA*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA::setStaticF_taaFilterOffsets(::ArrayW<::UnityEngine::Vector2> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "taaFilterOffsets", ::UnityEngine::Rendering::Universal::TemporalAA*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Rendering::Universal::TemporalAA::getStaticF_taaFilterOffsets() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "taaFilterOffsets", ::UnityEngine::Rendering::Universal::TemporalAA*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA::setStaticF_taaFilterWeights(::ArrayW<float_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t>, "taaFilterWeights", ::UnityEngine::Rendering::Universal::TemporalAA*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> UnityEngine::Rendering::Universal::TemporalAA::getStaticF_taaFilterWeights() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t>, "taaFilterWeights", ::UnityEngine::Rendering::Universal::TemporalAA*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA::setStaticF_AccumulationFormatList(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>, "AccumulationFormatList", ::UnityEngine::Rendering::Universal::TemporalAA*>(
      std::forward<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>(value));
}
inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> UnityEngine::Rendering::Universal::TemporalAA::getStaticF_AccumulationFormatList() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>, "AccumulationFormatList", ::UnityEngine::Rendering::Universal::TemporalAA*>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA::setStaticF_s_warnCounter(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_warnCounter", ::UnityEngine::Rendering::Universal::TemporalAA*>(std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::Rendering::Universal::TemporalAA::getStaticF_s_warnCounter() {
  return ::cordl_internals::getStaticField<uint32_t, "s_warnCounter", ::UnityEngine::Rendering::Universal::TemporalAA*>();
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA::CalculateTaaFrameIndex(::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings> settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                           { "CalculateTaaFrameIndex", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, settings);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::TemporalAA::CalculateJitterMatrix(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                     ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* jitterFunc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                          { "CalculateJitterMatrix",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, cameraData, jitterFunc);
}
inline void UnityEngine::Rendering::Universal::TemporalAA::CalculateJitter(int32_t frameIndex, ::by_ref<::UnityEngine::Vector2> jitter, ::by_ref<bool> allowScaling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                              { "CalculateJitter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, frameIndex, jitter, allowScaling);
}
inline ::ArrayW<float_t> UnityEngine::Rendering::Universal::TemporalAA::CalculateFilterWeights(::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings> settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                           { "CalculateFilterWeights", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, settings);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::TemporalAA::TemporalAADescFromCameraDesc(::by_ref<::UnityEngine::RenderTextureDescriptor> cameraDesc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                           { "TemporalAADescFromCameraDesc", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(nullptr, ___internal_method, cameraDesc);
}
inline ::StringW UnityEngine::Rendering::Universal::TemporalAA::ValidateAndWarn(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool isSTPRequested) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                           { "ValidateAndWarn", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, cameraData, isSTPRequested);
}
inline void UnityEngine::Rendering::Universal::TemporalAA::ExecutePass(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* taaMaterial,
                                                                       ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::RTHandle* source,
                                                                       ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::RenderTexture* motionVectors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
                                                           { "ExecutePass",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, taaMaterial, cameraData, source, destination, motionVectors);
}
inline void UnityEngine::Rendering::Universal::TemporalAA::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Material* taaMaterial,
                                                                  ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> srcColor,
                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> srcDepth,
                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> srcMotionVectors,
                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> dstColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::TemporalAA*>(),
          { "Render",
            {},
            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Material*>(),
              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderGraph, taaMaterial, cameraData, srcColor, srcDepth, srcMotionVectors, dstColor);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA::TemporalAA() {}
