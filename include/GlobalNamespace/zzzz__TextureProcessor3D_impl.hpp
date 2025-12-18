#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureProcessor3D.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3D_def.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3D_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel::TextureProcessor3D_ComputeKernel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel::TextureProcessor3D_ComputeKernel() {}
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::Constant{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::Texture{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::PlanarWave{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::CylindricalWave{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::SphericalWave{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::PerlinNoise3D{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::Ramp3D{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::SplitPlane{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::WaveRipple{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::RectRipple{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::TextureMaskMult{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D_ComputeKernel::TextureMaskAdd{ static_cast<int32_t>(0xb) };
// Ctor Parameters [CppParam { name: "_computeKernel", ty: "::GlobalNamespace::TextureProcessor3D_ComputeKernel", modifiers: "", def_value: Some("{}") }, CppParam { name: "_inputTextureIndex", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_speed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_spatialScale", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_phase", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_param1", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_param2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_outputOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextureProcessor3D_ChannelParams::TextureProcessor3D_ChannelParams(::GlobalNamespace::TextureProcessor3D_ComputeKernel _computeKernel, int32_t _inputTextureIndex,
                                                                                                float_t _speed, float_t _spatialScale, float_t _phase, float_t _param1, float_t _param2,
                                                                                                float_t _outputOffset) noexcept {
  this->_computeKernel = _computeKernel;
  this->_inputTextureIndex = _inputTextureIndex;
  this->_speed = _speed;
  this->_spatialScale = _spatialScale;
  this->_phase = _phase;
  this->_param1 = _param1;
  this->_param2 = _param2;
  this->_outputOffset = _outputOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3D_ChannelParams::TextureProcessor3D_ChannelParams() {}
// Ctor Parameters [CppParam { name: "channelA", ty: "::GlobalNamespace::TextureProcessor3D_ChannelParams", modifiers: "", def_value: Some("{}") }, CppParam { name: "channelB", ty:
// "::GlobalNamespace::TextureProcessor3D_ChannelParams", modifiers: "", def_value: Some("{}") }, CppParam { name: "channelC", ty: "::GlobalNamespace::TextureProcessor3D_ChannelParams", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "channelD", ty: "::GlobalNamespace::TextureProcessor3D_ChannelParams", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextureProcessor3D_MotionPreset::TextureProcessor3D_MotionPreset(::GlobalNamespace::TextureProcessor3D_ChannelParams channelA,
                                                                                              ::GlobalNamespace::TextureProcessor3D_ChannelParams channelB,
                                                                                              ::GlobalNamespace::TextureProcessor3D_ChannelParams channelC,
                                                                                              ::GlobalNamespace::TextureProcessor3D_ChannelParams channelD) noexcept {
  this->channelA = channelA;
  this->channelB = channelB;
  this->channelC = channelC;
  this->channelD = channelD;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3D_MotionPreset::TextureProcessor3D_MotionPreset() {}
// Ctor Parameters [CppParam { name: "_computeKernel", ty: "::System::Nullable_1<::GlobalNamespace::TextureProcessor3D_ComputeKernel>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_inputTextureIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_speed", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_spatialScale", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_phase", ty: "::System::Nullable_1<float_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_param1", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_param2", ty:
// "::System::Nullable_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_outputOffset", ty: "::System::Nullable_1<float_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention::TextureProcessor3D_ChannelParamsChangeIntention(
    ::System::Nullable_1<::GlobalNamespace::TextureProcessor3D_ComputeKernel> _computeKernel, ::System::Nullable_1<int32_t> _inputTextureIndex, ::System::Nullable_1<float_t> _speed,
    ::System::Nullable_1<float_t> _spatialScale, ::System::Nullable_1<float_t> _phase, ::System::Nullable_1<float_t> _param1, ::System::Nullable_1<float_t> _param2,
    ::System::Nullable_1<float_t> _outputOffset) noexcept {
  this->_computeKernel = _computeKernel;
  this->_inputTextureIndex = _inputTextureIndex;
  this->_speed = _speed;
  this->_spatialScale = _spatialScale;
  this->_phase = _phase;
  this->_param1 = _param1;
  this->_param2 = _param2;
  this->_outputOffset = _outputOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention::TextureProcessor3D_ChannelParamsChangeIntention() {}
// Ctor Parameters [CppParam { name: "channelA", ty: "::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention", modifiers: "", def_value: Some("{}") }, CppParam { name: "channelB", ty:
// "::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention", modifiers: "", def_value: Some("{}") }, CppParam { name: "channelC", ty:
// "::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention", modifiers: "", def_value: Some("{}") }, CppParam { name: "channelD", ty:
// "::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention::TextureProcessor3D_MotionPresetChangeIntention(
    ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelA, ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelB,
    ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelC, ::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention channelD) noexcept {
  this->channelA = channelA;
  this->channelB = channelB;
  this->channelC = channelC;
  this->channelD = channelD;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention::TextureProcessor3D_MotionPresetChangeIntention() {}
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_activePresetIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_activePresetIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9ad60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_activePresetIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_activePresetIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_activePresetIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9ad68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_activePresetIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_computeKernelA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::TextureProcessor3D_ComputeKernel (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_computeKernelA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9ad70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_computeKernelA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_computeKernelA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(::GlobalNamespace::TextureProcessor3D_ComputeKernel)>(
    &::GlobalNamespace::TextureProcessor3D::set_computeKernelA)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d9ae18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_computeKernelA", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextureProcessor3D_ComputeKernel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_computeKernelB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::TextureProcessor3D_ComputeKernel (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_computeKernelB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9af18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_computeKernelB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_computeKernelB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(::GlobalNamespace::TextureProcessor3D_ComputeKernel)>(
    &::GlobalNamespace::TextureProcessor3D::set_computeKernelB)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d9af8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_computeKernelB", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextureProcessor3D_ComputeKernel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_computeKernelC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::TextureProcessor3D_ComputeKernel (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_computeKernelC)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d9b08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_computeKernelC", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_computeKernelC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(::GlobalNamespace::TextureProcessor3D_ComputeKernel)>(
    &::GlobalNamespace::TextureProcessor3D::set_computeKernelC)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d9b104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_computeKernelC", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextureProcessor3D_ComputeKernel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_computeKernelD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::TextureProcessor3D_ComputeKernel (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_computeKernelD)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d9b208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_computeKernelD", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_computeKernelD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(::GlobalNamespace::TextureProcessor3D_ComputeKernel)>(
    &::GlobalNamespace::TextureProcessor3D::set_computeKernelD)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d9b280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_computeKernelD", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextureProcessor3D_ComputeKernel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_inputTextureIndexA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_inputTextureIndexA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9b384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_inputTextureIndexA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_inputTextureIndexA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_inputTextureIndexA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9b3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_inputTextureIndexA",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_inputTextureIndexB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_inputTextureIndexB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9b450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_inputTextureIndexB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_inputTextureIndexB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_inputTextureIndexB)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9b4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_inputTextureIndexB",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_inputTextureIndexC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_inputTextureIndexC)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d9b51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_inputTextureIndexC", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_inputTextureIndexC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_inputTextureIndexC)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d9b594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_inputTextureIndexC",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_inputTextureIndexD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_inputTextureIndexD)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d9b5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_inputTextureIndexD", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_inputTextureIndexD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_inputTextureIndexD)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d9b668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_inputTextureIndexD",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_speedA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_speedA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9b6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_speedA",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_speedA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_speedA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9b738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_speedA", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_speedB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_speedB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9b790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_speedB",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_speedB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_speedB)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9b804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_speedB", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_speedC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_speedC)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9b85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_speedC",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_speedC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_speedC)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9b8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_speedC", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_speedD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_speedD)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9b928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_speedD",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_speedD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_speedD)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9b99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_speedD", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_spatialScaleA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_spatialScaleA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9b9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_spatialScaleA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_spatialScaleA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_spatialScaleA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9ba68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_spatialScaleA",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_spatialScaleB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_spatialScaleB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9bac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_spatialScaleB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_spatialScaleB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_spatialScaleB)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9bb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_spatialScaleB",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_spatialScaleC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_spatialScaleC)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9bb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_spatialScaleC", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_spatialScaleC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_spatialScaleC)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9bc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_spatialScaleC",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_spatialScaleD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_spatialScaleD)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9bc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_spatialScaleD", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_spatialScaleD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_spatialScaleD)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9bccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_spatialScaleD",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_phaseA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_phaseA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9bd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_phaseA",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_phaseA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_phaseA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9bd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_phaseA", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_phaseB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_phaseB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9bdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_phaseB",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_phaseB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_phaseB)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9be64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_phaseB", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_phaseC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_phaseC)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9bebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_phaseC",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_phaseC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_phaseC)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9bf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_phaseC", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_phaseD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_phaseD)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9bf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_phaseD",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_phaseD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_phaseD)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9bffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_phaseD", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param1A
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param1A)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param1A",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param1A
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param1A)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param1A", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param1B
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param1B)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param1B",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param1B
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param1B)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param1B", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param1C
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param1C)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param1C",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param1C
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param1C)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param1C", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param1D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param1D)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param1D",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param1D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param1D)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param1D", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param2A
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param2A)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param2A",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param2A
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param2A)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param2A", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param2B
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param2B)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param2B",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param2B
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param2B)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param2B", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param2C
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param2C)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param2C",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param2C
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param2C)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param2C", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param2D)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param2D",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param2D)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param2D", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_outputOffsetA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_outputOffsetA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_outputOffsetA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_outputOffsetA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_outputOffsetA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_outputOffsetA",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_outputOffsetB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_outputOffsetB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_outputOffsetB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_outputOffsetB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_outputOffsetB)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_outputOffsetB",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_outputOffsetC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_outputOffsetC)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_outputOffsetC", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_outputOffsetC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_outputOffsetC)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_outputOffsetC",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_outputOffsetD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_outputOffsetD)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d9c918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get_outputOffsetD", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_outputOffsetD
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(
    &::GlobalNamespace::TextureProcessor3D::set_outputOffsetD)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d9c98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_outputOffsetD",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_rowSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_rowSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9c9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_rowSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_rowSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_rowSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9c9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_rowSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_columnSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_columnSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9c9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_columnSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_columnSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_columnSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9c9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_columnSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_depthSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_depthSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9ca04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_depthSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_depthSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_depthSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9ca0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_depthSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get__activePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::GlobalNamespace::TextureProcessor3D_MotionPreset> (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get__activePreset)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d9ade4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                               "get__activePreset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::Awake)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d9ca14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::LateUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5d9cc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d9cf48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d9cf4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "OnValidate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.CreateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t)>(
    &::GlobalNamespace::TextureProcessor3D::CreateTexture)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d9cf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "CreateTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.ReleaseTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::ReleaseTextures)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5d9d040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "ReleaseTextures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.UpdateBuffers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::UpdateBuffers)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5d9cb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "UpdateBuffers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.AnimateTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::AnimateTextures)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5d9ccd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "AnimateTextures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.AnimateChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(
    ::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParams>, ::UnityEngine::RenderTexture*)>(&::GlobalNamespace::TextureProcessor3D::AnimateChannel)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5d9d248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "AnimateChannel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParams>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.ApplyIntention
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::ApplyIntention)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d9d1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "ApplyIntention",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d9d7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d9d7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.ModifyGridSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t, int32_t, int32_t)>(
    &::GlobalNamespace::TextureProcessor3D::ModifyGridSize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d9d7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "ModifyGridSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.Step
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::Step)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d9d87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "Step",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.GetKernelName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::TextureProcessor3D::*)(::GlobalNamespace::TextureProcessor3D_ComputeKernel)>(
    &::GlobalNamespace::TextureProcessor3D::GetKernelName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5d9d4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "GetKernelName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextureProcessor3D_ComputeKernel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d9d880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D._ApplyIntention_g__ApplyChannelIntention_163_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParams>, ::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention>)>(
        &::GlobalNamespace::TextureProcessor3D::_ApplyIntention_g__ApplyChannelIntention_163_0)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5d9d60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "<ApplyIntention>g__ApplyChannelIntention|163_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__textureGenCompute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureGenCompute;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__textureGenCompute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureGenCompute;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__textureGenCompute(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textureGenCompute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__writeTexturesCompute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeTexturesCompute;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__writeTexturesCompute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeTexturesCompute;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__writeTexturesCompute(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writeTexturesCompute)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__inputTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__inputTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputTextures;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__inputTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__rowSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowSize;
}
constexpr int32_t const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__rowSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowSize;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__rowSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowSize = value;
}
constexpr int32_t& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__columnSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnSize;
}
constexpr int32_t const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__columnSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnSize;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__columnSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____columnSize = value;
}
constexpr int32_t& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__depthSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthSize;
}
constexpr int32_t const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__depthSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthSize;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__depthSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depthSize = value;
}
constexpr ::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset, ::Array<::GlobalNamespace::TextureProcessor3D_MotionPreset>*>&
GlobalNamespace::TextureProcessor3D::__cordl_internal_get__presetArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presetArray;
}
constexpr ::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset, ::Array<::GlobalNamespace::TextureProcessor3D_MotionPreset>*> const&
GlobalNamespace::TextureProcessor3D::__cordl_internal_get__presetArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presetArray;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__presetArray(
    ::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset, ::Array<::GlobalNamespace::TextureProcessor3D_MotionPreset>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____presetArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__activePresetIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePresetIndex;
}
constexpr int32_t const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__activePresetIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePresetIndex;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__activePresetIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activePresetIndex = value;
}
constexpr int32_t& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__activePresetIndexOld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePresetIndexOld;
}
constexpr int32_t const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__activePresetIndexOld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePresetIndexOld;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__activePresetIndexOld(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activePresetIndexOld = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__MaterialsUsingOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaterialsUsingOutput;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__MaterialsUsingOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaterialsUsingOutput;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__MaterialsUsingOutput(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MaterialsUsingOutput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__matrices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matrices;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__matrices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matrices;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__matrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____matrices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__numInstances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numInstances;
}
constexpr int32_t const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__numInstances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numInstances;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__numInstances(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numInstances = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__animationTextureA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTextureA;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__animationTextureA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTextureA;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__animationTextureA(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationTextureA)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__animationTextureB() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTextureB;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__animationTextureB() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTextureB;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__animationTextureB(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationTextureB)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__animationTextureC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTextureC;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__animationTextureC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTextureC;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__animationTextureC(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationTextureC)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__animationTextureD() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTextureD;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__animationTextureD() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTextureD;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__animationTextureD(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationTextureD)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__animationTextureOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTextureOut;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__animationTextureOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationTextureOut;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__animationTextureOut(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationTextureOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__textureArrayLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureArrayLength;
}
constexpr int32_t const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__textureArrayLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textureArrayLength;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__textureArrayLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textureArrayLength = value;
}
constexpr int32_t& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__testMaterialArrayCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____testMaterialArrayCount;
}
constexpr int32_t const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__testMaterialArrayCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____testMaterialArrayCount;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__testMaterialArrayCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____testMaterialArrayCount = value;
}
constexpr int32_t& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__kernelIndexMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernelIndexMax;
}
constexpr int32_t const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__kernelIndexMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernelIndexMax;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__kernelIndexMax(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kernelIndexMax = value;
}
constexpr ::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__activePresetChangeIntention() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePresetChangeIntention;
}
constexpr ::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__activePresetChangeIntention() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activePresetChangeIntention;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__activePresetChangeIntention(::GlobalNamespace::TextureProcessor3D_MotionPresetChangeIntention value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activePresetChangeIntention = value;
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF__kernelStrings(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "_kernelStrings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> GlobalNamespace::TextureProcessor3D::getStaticF__kernelStrings() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "_kernelStrings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kLookupTexture3D(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kLookupTexture3D", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kLookupTexture3D() {
  return ::cordl_internals::getStaticField<int32_t, "kLookupTexture3D", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kSpeed(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kSpeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kSpeed() {
  return ::cordl_internals::getStaticField<int32_t, "kSpeed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kSpatialScale(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kSpatialScale", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kSpatialScale() {
  return ::cordl_internals::getStaticField<int32_t, "kSpatialScale", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kColumnSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kColumnSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kColumnSize() {
  return ::cordl_internals::getStaticField<int32_t, "kColumnSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kRowSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kRowSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kRowSize() {
  return ::cordl_internals::getStaticField<int32_t, "kRowSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kDepthSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kDepthSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kDepthSize() {
  return ::cordl_internals::getStaticField<int32_t, "kDepthSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kPhase(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kPhase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kPhase() {
  return ::cordl_internals::getStaticField<int32_t, "kPhase", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kParam1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kParam1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kParam1() {
  return ::cordl_internals::getStaticField<int32_t, "kParam1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kParam2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kParam2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kParam2() {
  return ::cordl_internals::getStaticField<int32_t, "kParam2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kOutputOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kOutputOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kOutputOffset() {
  return ::cordl_internals::getStaticField<int32_t, "kOutputOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kInputTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kInputTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kInputTexture() {
  return ::cordl_internals::getStaticField<int32_t, "kInputTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kOutputTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kOutputTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kOutputTexture() {
  return ::cordl_internals::getStaticField<int32_t, "kOutputTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kInputTextureA(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kInputTextureA", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kInputTextureA() {
  return ::cordl_internals::getStaticField<int32_t, "kInputTextureA", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kInputTextureB(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kInputTextureB", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kInputTextureB() {
  return ::cordl_internals::getStaticField<int32_t, "kInputTextureB", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kInputTextureC(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kInputTextureC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kInputTextureC() {
  return ::cordl_internals::getStaticField<int32_t, "kInputTextureC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kInputTextureD(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kInputTextureD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kInputTextureD() {
  return ::cordl_internals::getStaticField<int32_t, "kInputTextureD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kOutputMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kOutputMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kOutputMask() {
  return ::cordl_internals::getStaticField<int32_t, "kOutputMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get>();
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_activePresetIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                             "get_activePresetIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_activePresetIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_activePresetIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D::get_computeKernelA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                             "get_computeKernelA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureProcessor3D_ComputeKernel, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_computeKernelA(::GlobalNamespace::TextureProcessor3D_ComputeKernel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_computeKernelA", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextureProcessor3D_ComputeKernel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D::get_computeKernelB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                             "get_computeKernelB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureProcessor3D_ComputeKernel, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_computeKernelB(::GlobalNamespace::TextureProcessor3D_ComputeKernel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_computeKernelB", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextureProcessor3D_ComputeKernel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D::get_computeKernelC() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                             "get_computeKernelC", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureProcessor3D_ComputeKernel, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_computeKernelC(::GlobalNamespace::TextureProcessor3D_ComputeKernel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_computeKernelC", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextureProcessor3D_ComputeKernel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D::get_computeKernelD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                             "get_computeKernelD", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureProcessor3D_ComputeKernel, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_computeKernelD(::GlobalNamespace::TextureProcessor3D_ComputeKernel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_computeKernelD", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextureProcessor3D_ComputeKernel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_inputTextureIndexA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                             "get_inputTextureIndexA", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_inputTextureIndexA(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_inputTextureIndexA",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_inputTextureIndexB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                             "get_inputTextureIndexB", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_inputTextureIndexB(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_inputTextureIndexB",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_inputTextureIndexC() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                             "get_inputTextureIndexC", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_inputTextureIndexC(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_inputTextureIndexC",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_inputTextureIndexD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(),
                                                                             "get_inputTextureIndexD", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_inputTextureIndexD(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_inputTextureIndexD",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_speedA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_speedA",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_speedA(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_speedA",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_speedB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_speedB",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_speedB(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_speedB",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_speedC() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_speedC",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_speedC(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_speedC",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_speedD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_speedD",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_speedD(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_speedD",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_spatialScaleA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_spatialScaleA",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_spatialScaleA(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_spatialScaleA",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_spatialScaleB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_spatialScaleB",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_spatialScaleB(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_spatialScaleB",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_spatialScaleC() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_spatialScaleC",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_spatialScaleC(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_spatialScaleC",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_spatialScaleD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_spatialScaleD",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_spatialScaleD(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_spatialScaleD",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_phaseA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_phaseA",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_phaseA(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_phaseA",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_phaseB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_phaseB",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_phaseB(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_phaseB",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_phaseC() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_phaseC",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_phaseC(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_phaseC",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_phaseD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_phaseD",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_phaseD(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_phaseD",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param1A() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param1A",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param1A(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param1A",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param1B() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param1B",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param1B(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param1B",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param1C() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param1C",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param1C(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param1C",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param1D() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param1D",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param1D(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param1D",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param2A() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param2A",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param2A(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param2A",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param2B() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param2B",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param2B(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param2B",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param2C() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param2C",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param2C(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param2C",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param2D() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_param2D",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param2D(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_param2D",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_outputOffsetA() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_outputOffsetA",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_outputOffsetA(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_outputOffsetA",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_outputOffsetB() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_outputOffsetB",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_outputOffsetB(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_outputOffsetB",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_outputOffsetC() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_outputOffsetC",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_outputOffsetC(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_outputOffsetC",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_outputOffsetD() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_outputOffsetD",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_outputOffsetD(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_outputOffsetD",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_rowSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_rowSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_rowSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_rowSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_columnSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_columnSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_columnSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_columnSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_depthSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get_depthSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_depthSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "set_depthSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ByRef<::GlobalNamespace::TextureProcessor3D_MotionPreset> GlobalNamespace::TextureProcessor3D::get__activePreset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "get__activePreset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::GlobalNamespace::TextureProcessor3D_MotionPreset>, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "OnValidate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::TextureProcessor3D::CreateTexture(int32_t sizeX, int32_t sizeY, int32_t sizeZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "CreateTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(nullptr, ___internal_method, sizeX, sizeY, sizeZ);
}
inline void GlobalNamespace::TextureProcessor3D::ReleaseTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "ReleaseTextures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::UpdateBuffers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "UpdateBuffers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::AnimateTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "AnimateTextures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::AnimateChannel(::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParams> channel, ::UnityEngine::RenderTexture* outputTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "AnimateChannel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParams>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, channel, outputTexture);
}
inline void GlobalNamespace::TextureProcessor3D::ApplyIntention() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "ApplyIntention",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::ModifyGridSize(int32_t rowSizeDelta, int32_t columnSizeDelta, int32_t depthSizeDelta) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "ModifyGridSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rowSizeDelta, columnSizeDelta, depthSizeDelta);
}
inline void GlobalNamespace::TextureProcessor3D::Step() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "Step",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::TextureProcessor3D::GetKernelName(::GlobalNamespace::TextureProcessor3D_ComputeKernel kernel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "GetKernelName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TextureProcessor3D_ComputeKernel>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, kernel);
}
inline void GlobalNamespace::TextureProcessor3D::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::_ApplyIntention_g__ApplyChannelIntention_163_0(::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParams> channel,
                                                                                                ::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention> channelIntention) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "<ApplyIntention>g__ApplyChannelIntention|163_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, channel, channelIntention);
}
template <typename T> inline void GlobalNamespace::TextureProcessor3D::_ApplyIntention_g__ApplyParamIntention_163_1(::ByRef<T> param, ::ByRef<::System::Nullable_1<T>> intention) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextureProcessor3D*>::get(), "<ApplyIntention>g__ApplyParamIntention|163_1",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Nullable_1<T>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, param, intention);
}
inline ::GlobalNamespace::TextureProcessor3D* GlobalNamespace::TextureProcessor3D::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TextureProcessor3D*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3D::TextureProcessor3D() {}
