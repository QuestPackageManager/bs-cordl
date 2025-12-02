#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TemporalAA.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAAQuality_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
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
  ::cordl_internals::setStaticField<int32_t, "_TaaAccumulationTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__TaaAccumulationTex() {
  return ::cordl_internals::getStaticField<int32_t, "_TaaAccumulationTex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__TaaMotionVectorTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TaaMotionVectorTex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__TaaMotionVectorTex() {
  return ::cordl_internals::getStaticField<int32_t, "_TaaMotionVectorTex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__TaaFilterWeights(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TaaFilterWeights", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__TaaFilterWeights() {
  return ::cordl_internals::getStaticField<int32_t, "_TaaFilterWeights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__TaaFrameInfluence(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TaaFrameInfluence", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__TaaFrameInfluence() {
  return ::cordl_internals::getStaticField<int32_t, "_TaaFrameInfluence",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__TaaVarianceClampScale(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TaaVarianceClampScale", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__TaaVarianceClampScale() {
  return ::cordl_internals::getStaticField<int32_t, "_TaaVarianceClampScale",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::setStaticF__CameraDepthTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CameraDepthTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::getStaticF__CameraDepthTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_CameraDepthTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants::TemporalAA_ShaderConstants() {}
inline void UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords::setStaticF_TAA_LOW_PRECISION_SOURCE(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "TAA_LOW_PRECISION_SOURCE",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords::getStaticF_TAA_LOW_PRECISION_SOURCE() {
  return ::cordl_internals::getStaticField<::StringW, "TAA_LOW_PRECISION_SOURCE",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords::TemporalAA_ShaderKeywords() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_quality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::TemporalAAQuality (
    ::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(&::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_quality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66a11c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                               "get_quality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_quality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(
    ::UnityEngine::Rendering::Universal::TemporalAAQuality)>(&::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_quality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x66a11cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_quality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TemporalAAQuality>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_baseBlendFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_baseBlendFactor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x66a11e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                               "get_baseBlendFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_baseBlendFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_baseBlendFactor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66a11f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_baseBlendFactor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_jitterScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_jitterScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66a1218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                               "get_jitterScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_jitterScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_jitterScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66a1220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_jitterScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_mipBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_mipBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66a1240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                               "get_mipBias", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_mipBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_mipBias)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66a1248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_mipBias",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_varianceClampScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_varianceClampScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66a1268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                               "get_varianceClampScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_varianceClampScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_varianceClampScale)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66a1270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_varianceClampScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.get_contrastAdaptiveSharpening
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::get_contrastAdaptiveSharpening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66a1294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                               "get_contrastAdaptiveSharpening", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.set_contrastAdaptiveSharpening
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_Settings::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::set_contrastAdaptiveSharpening)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66a129c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_contrastAdaptiveSharpening",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_Settings.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::TemporalAA_Settings (*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_Settings::Create)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x66a12bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                               "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::TemporalAAQuality UnityEngine::Rendering::Universal::TemporalAA_Settings::get_quality() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                             "get_quality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TemporalAAQuality, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_quality(::UnityEngine::Rendering::Universal::TemporalAAQuality value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_quality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TemporalAAQuality>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::TemporalAA_Settings::get_baseBlendFactor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                             "get_baseBlendFactor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_baseBlendFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_baseBlendFactor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::TemporalAA_Settings::get_jitterScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                             "get_jitterScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_jitterScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_jitterScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::TemporalAA_Settings::get_mipBias() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                             "get_mipBias", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_mipBias(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_mipBias",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::TemporalAA_Settings::get_varianceClampScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                             "get_varianceClampScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_varianceClampScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_varianceClampScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::TemporalAA_Settings::get_contrastAdaptiveSharpening() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                             "get_contrastAdaptiveSharpening", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_Settings::set_contrastAdaptiveSharpening(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(), "set_contrastAdaptiveSharpening",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::TemporalAA_Settings UnityEngine::Rendering::Universal::TemporalAA_Settings::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_Settings>::get(),
                                                                             "Create", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::TemporalAA_Settings, false>(nullptr, ___internal_method);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x669eed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::*)(
    int32_t, ::ByRef<::UnityEngine::Vector2>, ::ByRef<bool>)>(&::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x66a12dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::*)(int32_t, ::ByRef<::UnityEngine::Vector2>, ::ByRef<bool>, ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::BeginInvoke)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x66a12f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::*)(
    ::ByRef<::UnityEngine::Vector2>, ::ByRef<bool>, ::System::IAsyncResult*)>(&::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x66a13b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(), 15));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::Invoke(int32_t frameIndex, ::ByRef<::UnityEngine::Vector2> jitter, ::ByRef<bool> allowScaling) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameIndex, jitter, allowScaling);
}
inline ::System::IAsyncResult* UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::BeginInvoke(int32_t frameIndex, ::ByRef<::UnityEngine::Vector2> jitter, ::ByRef<bool> allowScaling,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, frameIndex, jitter, allowScaling, callback, object);
}
inline void UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::EndInvoke(::ByRef<::UnityEngine::Vector2> jitter, ::ByRef<bool> allowScaling, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, jitter, allowScaling, result);
}
inline ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc::TemporalAA_JitterFunc() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66a13dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaFilterWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaFilterWeights;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_get_taaFilterWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taaFilterWeights;
}
constexpr void UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::__cordl_internal_set_taaFilterWeights(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taaFilterWeights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData* UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData::TemporalAA_TaaPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA___c::*)()>(
    &::UnityEngine::Rendering::Universal::TemporalAA___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66a1434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA___c._Render_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA___c::*)(
    ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::TemporalAA___c::_Render_b__17_0)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x66a1438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get(), "<Render>b__17_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA___c._Render_b__17_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::TemporalAA___c::*)(
    ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::TemporalAA___c::_Render_b__17_1)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x66a1750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get(), "<Render>b__17_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::TemporalAA___c::setStaticF___9(::UnityEngine::Rendering::Universal::TemporalAA___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::TemporalAA___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::TemporalAA___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::TemporalAA___c* UnityEngine::Rendering::Universal::TemporalAA___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::TemporalAA___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA___c::setStaticF___9__17_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::TemporalAA___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA___c::setStaticF___9__17_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__17_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::TemporalAA___c::getStaticF___9__17_1() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__17_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::TemporalAA___c::_Render_b__17_0(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData* data,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get(), "<Render>b__17_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::TemporalAA___c::_Render_b__17_1(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData* data,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA___c*>::get(), "<Render>b__17_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::TemporalAA___c* UnityEngine::Rendering::Universal::TemporalAA___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::TemporalAA___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA___c::TemporalAA___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.CalculateTaaFrameIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings>)>(
    &::UnityEngine::Rendering::Universal::TemporalAA::CalculateTaaFrameIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x669eb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "CalculateTaaFrameIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.CalculateJitterMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*)>(&::UnityEngine::Rendering::Universal::TemporalAA::CalculateJitterMatrix)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x669f17c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "CalculateJitterMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.CalculateJitter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::ByRef<::UnityEngine::Vector2>, ::ByRef<bool>)>(
    &::UnityEngine::Rendering::Universal::TemporalAA::CalculateJitter)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x669f344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "CalculateJitter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.CalculateFilterWeights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (*)(::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings>)>(
    &::UnityEngine::Rendering::Universal::TemporalAA::CalculateFilterWeights)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x669f3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "CalculateFilterWeights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.TemporalAADescFromCameraDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (*)(::ByRef<::UnityEngine::RenderTextureDescriptor>)>(
    &::UnityEngine::Rendering::Universal::TemporalAA::TemporalAADescFromCameraDesc)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x669f618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "TemporalAADescFromCameraDesc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.ValidateAndWarn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, bool)>(
    &::UnityEngine::Rendering::Universal::TemporalAA::ValidateAndWarn)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x669f820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "ValidateAndWarn", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::ByRef<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Rendering::RTHandle*,
                         ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::RenderTexture*)>(&::UnityEngine::Rendering::Universal::TemporalAA::ExecutePass)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x669fcf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TemporalAA.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Material*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
        &::UnityEngine::Rendering::Universal::TemporalAA::Render)> {
  constexpr static std::size_t size = 0xbb4;
  constexpr static std::size_t addrs = 0x66a022c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::TemporalAA::setStaticF_s_JitterFunc(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*, "s_JitterFunc",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(value));
}
inline ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* UnityEngine::Rendering::Universal::TemporalAA::getStaticF_s_JitterFunc() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*, "s_JitterFunc",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA::setStaticF_taaFilterOffsets(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, "taaFilterOffsets",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> UnityEngine::Rendering::Universal::TemporalAA::getStaticF_taaFilterOffsets() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, "taaFilterOffsets",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA::setStaticF_taaFilterWeights(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "taaFilterWeights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::Rendering::Universal::TemporalAA::getStaticF_taaFilterWeights() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "taaFilterWeights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA::setStaticF_AccumulationFormatList(
    ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>, "AccumulationFormatList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get>(
      std::forward<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>(value));
}
inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
UnityEngine::Rendering::Universal::TemporalAA::getStaticF_AccumulationFormatList() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>, "AccumulationFormatList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get>();
}
inline void UnityEngine::Rendering::Universal::TemporalAA::setStaticF_s_warnCounter(uint32_t value) {
  ::cordl_internals::setStaticField<uint32_t, "s_warnCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get>(
      std::forward<uint32_t>(value));
}
inline uint32_t UnityEngine::Rendering::Universal::TemporalAA::getStaticF_s_warnCounter() {
  return ::cordl_internals::getStaticField<uint32_t, "s_warnCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get>();
}
inline int32_t UnityEngine::Rendering::Universal::TemporalAA::CalculateTaaFrameIndex(::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings> settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "CalculateTaaFrameIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, settings);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::TemporalAA::CalculateJitterMatrix(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                     ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* jitterFunc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "CalculateJitterMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, cameraData, jitterFunc);
}
inline void UnityEngine::Rendering::Universal::TemporalAA::CalculateJitter(int32_t frameIndex, ::ByRef<::UnityEngine::Vector2> jitter, ::ByRef<bool> allowScaling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "CalculateJitter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, frameIndex, jitter, allowScaling);
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::Rendering::Universal::TemporalAA::CalculateFilterWeights(::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings> settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "CalculateFilterWeights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(nullptr, ___internal_method, settings);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::TemporalAA::TemporalAADescFromCameraDesc(::ByRef<::UnityEngine::RenderTextureDescriptor> cameraDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "TemporalAADescFromCameraDesc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor, false>(nullptr, ___internal_method, cameraDesc);
}
inline ::StringW UnityEngine::Rendering::Universal::TemporalAA::ValidateAndWarn(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool isSTPRequested) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "ValidateAndWarn", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, cameraData, isSTPRequested);
}
inline void UnityEngine::Rendering::Universal::TemporalAA::ExecutePass(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* taaMaterial,
                                                                       ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::RTHandle* source,
                                                                       ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::RenderTexture* motionVectors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, taaMaterial, cameraData, source, destination, motionVectors);
}
inline void UnityEngine::Rendering::Universal::TemporalAA::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Material* taaMaterial,
                                                                  ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                  ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> srcColor,
                                                                  ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> srcDepth,
                                                                  ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> srcMotionVectors,
                                                                  ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> dstColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::TemporalAA*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, renderGraph, taaMaterial, cameraData, srcColor, srcDepth, srcMotionVectors, dstColor);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TemporalAA::TemporalAA() {}
