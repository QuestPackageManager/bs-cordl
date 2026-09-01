#pragma once
// IWYU pragma private; include "GlobalNamespace\TextureProcessor3D.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3D_def.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3D_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_activePresetIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_activePresetIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_activePresetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_activePresetIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4f640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_activePresetIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_computeKernelA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextureProcessor3D_ComputeKernel (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_computeKernelA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f4f648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_computeKernelA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_computeKernelA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(::GlobalNamespace::TextureProcessor3D_ComputeKernel)>(
    &::GlobalNamespace::TextureProcessor3D::set_computeKernelA)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5f4f6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                           { "set_computeKernelA", {}, { ::i2c::type_of<::GlobalNamespace::TextureProcessor3D_ComputeKernel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_computeKernelB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextureProcessor3D_ComputeKernel (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_computeKernelB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f4f7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_computeKernelB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_computeKernelB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(::GlobalNamespace::TextureProcessor3D_ComputeKernel)>(
    &::GlobalNamespace::TextureProcessor3D::set_computeKernelB)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5f4f864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                           { "set_computeKernelB", {}, { ::i2c::type_of<::GlobalNamespace::TextureProcessor3D_ComputeKernel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_computeKernelC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextureProcessor3D_ComputeKernel (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_computeKernelC)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f4f964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_computeKernelC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_computeKernelC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(::GlobalNamespace::TextureProcessor3D_ComputeKernel)>(
    &::GlobalNamespace::TextureProcessor3D::set_computeKernelC)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f4f9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                           { "set_computeKernelC", {}, { ::i2c::type_of<::GlobalNamespace::TextureProcessor3D_ComputeKernel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_computeKernelD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TextureProcessor3D_ComputeKernel (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get_computeKernelD)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f4fae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_computeKernelD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_computeKernelD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(::GlobalNamespace::TextureProcessor3D_ComputeKernel)>(
    &::GlobalNamespace::TextureProcessor3D::set_computeKernelD)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f4fb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                           { "set_computeKernelD", {}, { ::i2c::type_of<::GlobalNamespace::TextureProcessor3D_ComputeKernel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_inputTextureIndexA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_inputTextureIndexA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f4fc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_inputTextureIndexA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_inputTextureIndexA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_inputTextureIndexA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f4fcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_inputTextureIndexA", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_inputTextureIndexB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_inputTextureIndexB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f4fd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_inputTextureIndexB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_inputTextureIndexB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_inputTextureIndexB)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f4fd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_inputTextureIndexB", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_inputTextureIndexC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_inputTextureIndexC)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f4fdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_inputTextureIndexC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_inputTextureIndexC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_inputTextureIndexC)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f4fe6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_inputTextureIndexC", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_inputTextureIndexD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_inputTextureIndexD)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f4fec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_inputTextureIndexD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_inputTextureIndexD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_inputTextureIndexD)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f4ff40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_inputTextureIndexD", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_speedA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_speedA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f4ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_speedA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_speedA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_speedA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_speedA", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_speedB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_speedB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_speedB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_speedB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_speedB)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f500dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_speedB", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_speedC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_speedC)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_speedC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_speedC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_speedC)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f501a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_speedC", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_speedD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_speedD)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_speedD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_speedD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_speedD)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_speedD", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_spatialScaleA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_spatialScaleA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f502cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_spatialScaleA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_spatialScaleA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_spatialScaleA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_spatialScaleA", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_spatialScaleB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_spatialScaleB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_spatialScaleB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_spatialScaleB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_spatialScaleB)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f5040c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_spatialScaleB", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_spatialScaleC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_spatialScaleC)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_spatialScaleC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_spatialScaleC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_spatialScaleC)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f504d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_spatialScaleC", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_spatialScaleD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_spatialScaleD)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_spatialScaleD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_spatialScaleD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_spatialScaleD)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f505a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_spatialScaleD", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_phaseA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_phaseA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f505fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_phaseA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_phaseA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_phaseA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_phaseA", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_phaseB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_phaseB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f506c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_phaseB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_phaseB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_phaseB)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f5073c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_phaseB", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_phaseC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_phaseC)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_phaseC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_phaseC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_phaseC)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_phaseC", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_phaseD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_phaseD)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_phaseD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_phaseD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_phaseD)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f508d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_phaseD", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param1A
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param1A)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f5092c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param1A", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param1A
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param1A)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f509a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param1A", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param1B
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param1B)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f509f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param1B", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param1B
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param1B)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param1B", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param1C
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param1C)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param1C", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param1C
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param1C)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param1C", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param1D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param1D)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param1D", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param1D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param1D)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param1D", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param2A
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param2A)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param2A", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param2A
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param2A)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param2A", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param2B
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param2B)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param2B", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param2B
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param2B)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param2B", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param2C
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param2C)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param2C", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param2C
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param2C)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param2C", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_param2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_param2D)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param2D", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_param2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_param2D)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f50f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param2D", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_outputOffsetA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_outputOffsetA)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f50f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_outputOffsetA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_outputOffsetA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_outputOffsetA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f51000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_outputOffsetA", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_outputOffsetB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_outputOffsetB)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f51058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_outputOffsetB", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_outputOffsetB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_outputOffsetB)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f510cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_outputOffsetB", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_outputOffsetC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_outputOffsetC)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f51124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_outputOffsetC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_outputOffsetC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_outputOffsetC)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f51198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_outputOffsetC", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_outputOffsetD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_outputOffsetD)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f511f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_outputOffsetD", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_outputOffsetD
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(float_t)>(&::GlobalNamespace::TextureProcessor3D::set_outputOffsetD)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f51264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_outputOffsetD", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_rowSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_rowSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f512bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_rowSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_rowSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_rowSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f512c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_rowSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_columnSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_columnSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f512cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_columnSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_columnSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_columnSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f512d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_columnSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get_depthSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::get_depthSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f512dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_depthSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.set_depthSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t)>(&::GlobalNamespace::TextureProcessor3D::set_depthSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f512e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_depthSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.get__activePreset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::TextureProcessor3D_MotionPreset> (::GlobalNamespace::TextureProcessor3D::*)()>(
    &::GlobalNamespace::TextureProcessor3D::get__activePreset)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f4f6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get__activePreset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::Awake)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f512ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::LateUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f51568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f51900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f51904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.CreateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::TextureProcessor3D::CreateTexture)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f51908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "CreateTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.ReleaseTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::ReleaseTextures)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f51a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "ReleaseTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.UpdateBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::UpdateBuffers)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f513f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "UpdateBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.AnimateTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::AnimateTextures)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5f515ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "AnimateTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.AnimateChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParams>, ::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::TextureProcessor3D::AnimateChannel)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5f51c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                            { "AnimateChannel", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParams>>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.ApplyIntention
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::ApplyIntention)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f51b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "ApplyIntention", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f521b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f521bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.ModifyGridSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::TextureProcessor3D::ModifyGridSize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f521c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "ModifyGridSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.Step
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::Step)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f52260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "Step", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D.GetKernelName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TextureProcessor3D::*)(::GlobalNamespace::TextureProcessor3D_ComputeKernel)>(
    &::GlobalNamespace::TextureProcessor3D::GetKernelName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5f51eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                           { "GetKernelName", {}, { ::i2c::type_of<::GlobalNamespace::TextureProcessor3D_ComputeKernel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3D::*)()>(&::GlobalNamespace::TextureProcessor3D::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f52264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3D._ApplyIntention_g__ApplyChannelIntention_163_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParams>, ::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention>)>(
        &::GlobalNamespace::TextureProcessor3D::_ApplyIntention_g__ApplyChannelIntention_163_0)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5f51ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                           { "<ApplyIntention>g__ApplyChannelIntention|163_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParams>>(),
                                                                                               ::i2c::type_of<::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention>>() } })));
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
  this->____textureGenCompute = value;
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
  this->____writeTexturesCompute = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__inputTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__inputTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputTextures;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__inputTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputTextures = value;
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
constexpr ::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__presetArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presetArray;
}
constexpr ::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__presetArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____presetArray;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__presetArray(::ArrayW<::GlobalNamespace::TextureProcessor3D_MotionPreset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____presetArray = value;
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
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__MaterialsUsingOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaterialsUsingOutput;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__MaterialsUsingOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaterialsUsingOutput;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__MaterialsUsingOutput(::ArrayW<::UnityW<::UnityEngine::Material>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaterialsUsingOutput = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__matrices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matrices;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& GlobalNamespace::TextureProcessor3D::__cordl_internal_get__matrices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____matrices;
}
constexpr void GlobalNamespace::TextureProcessor3D::__cordl_internal_set__matrices(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____matrices = value;
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
  this->____animationTextureA = value;
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
  this->____animationTextureB = value;
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
  this->____animationTextureC = value;
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
  this->____animationTextureD = value;
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
  this->____animationTextureOut = value;
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
inline void GlobalNamespace::TextureProcessor3D::setStaticF__kernelStrings(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "_kernelStrings", ::GlobalNamespace::TextureProcessor3D*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::TextureProcessor3D::getStaticF__kernelStrings() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_kernelStrings", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kLookupTexture3D(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kLookupTexture3D", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kLookupTexture3D() {
  return ::cordl_internals::getStaticField<int32_t, "kLookupTexture3D", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kSpeed(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kSpeed", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kSpeed() {
  return ::cordl_internals::getStaticField<int32_t, "kSpeed", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kSpatialScale(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kSpatialScale", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kSpatialScale() {
  return ::cordl_internals::getStaticField<int32_t, "kSpatialScale", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kColumnSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kColumnSize", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kColumnSize() {
  return ::cordl_internals::getStaticField<int32_t, "kColumnSize", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kRowSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kRowSize", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kRowSize() {
  return ::cordl_internals::getStaticField<int32_t, "kRowSize", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kDepthSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kDepthSize", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kDepthSize() {
  return ::cordl_internals::getStaticField<int32_t, "kDepthSize", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kPhase(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kPhase", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kPhase() {
  return ::cordl_internals::getStaticField<int32_t, "kPhase", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kParam1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kParam1", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kParam1() {
  return ::cordl_internals::getStaticField<int32_t, "kParam1", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kParam2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kParam2", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kParam2() {
  return ::cordl_internals::getStaticField<int32_t, "kParam2", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kOutputOffset(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kOutputOffset", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kOutputOffset() {
  return ::cordl_internals::getStaticField<int32_t, "kOutputOffset", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kInputTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kInputTexture", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kInputTexture() {
  return ::cordl_internals::getStaticField<int32_t, "kInputTexture", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kOutputTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kOutputTexture", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kOutputTexture() {
  return ::cordl_internals::getStaticField<int32_t, "kOutputTexture", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kInputTextureA(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kInputTextureA", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kInputTextureA() {
  return ::cordl_internals::getStaticField<int32_t, "kInputTextureA", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kInputTextureB(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kInputTextureB", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kInputTextureB() {
  return ::cordl_internals::getStaticField<int32_t, "kInputTextureB", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kInputTextureC(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kInputTextureC", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kInputTextureC() {
  return ::cordl_internals::getStaticField<int32_t, "kInputTextureC", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kInputTextureD(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kInputTextureD", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kInputTextureD() {
  return ::cordl_internals::getStaticField<int32_t, "kInputTextureD", ::GlobalNamespace::TextureProcessor3D*>();
}
inline void GlobalNamespace::TextureProcessor3D::setStaticF_kOutputMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kOutputMask", ::GlobalNamespace::TextureProcessor3D*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::TextureProcessor3D::getStaticF_kOutputMask() {
  return ::cordl_internals::getStaticField<int32_t, "kOutputMask", ::GlobalNamespace::TextureProcessor3D*>();
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_activePresetIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_activePresetIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_activePresetIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_activePresetIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D::get_computeKernelA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_computeKernelA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureProcessor3D_ComputeKernel>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_computeKernelA(::GlobalNamespace::TextureProcessor3D_ComputeKernel value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                         { "set_computeKernelA", {}, { ::i2c::type_of<::GlobalNamespace::TextureProcessor3D_ComputeKernel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D::get_computeKernelB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_computeKernelB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureProcessor3D_ComputeKernel>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_computeKernelB(::GlobalNamespace::TextureProcessor3D_ComputeKernel value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                         { "set_computeKernelB", {}, { ::i2c::type_of<::GlobalNamespace::TextureProcessor3D_ComputeKernel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D::get_computeKernelC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_computeKernelC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureProcessor3D_ComputeKernel>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_computeKernelC(::GlobalNamespace::TextureProcessor3D_ComputeKernel value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                         { "set_computeKernelC", {}, { ::i2c::type_of<::GlobalNamespace::TextureProcessor3D_ComputeKernel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TextureProcessor3D_ComputeKernel GlobalNamespace::TextureProcessor3D::get_computeKernelD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_computeKernelD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TextureProcessor3D_ComputeKernel>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_computeKernelD(::GlobalNamespace::TextureProcessor3D_ComputeKernel value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                         { "set_computeKernelD", {}, { ::i2c::type_of<::GlobalNamespace::TextureProcessor3D_ComputeKernel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_inputTextureIndexA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_inputTextureIndexA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_inputTextureIndexA(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_inputTextureIndexA", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_inputTextureIndexB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_inputTextureIndexB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_inputTextureIndexB(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_inputTextureIndexB", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_inputTextureIndexC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_inputTextureIndexC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_inputTextureIndexC(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_inputTextureIndexC", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_inputTextureIndexD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_inputTextureIndexD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_inputTextureIndexD(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_inputTextureIndexD", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_speedA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_speedA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_speedA(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_speedA", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_speedB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_speedB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_speedB(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_speedB", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_speedC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_speedC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_speedC(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_speedC", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_speedD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_speedD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_speedD(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_speedD", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_spatialScaleA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_spatialScaleA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_spatialScaleA(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_spatialScaleA", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_spatialScaleB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_spatialScaleB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_spatialScaleB(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_spatialScaleB", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_spatialScaleC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_spatialScaleC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_spatialScaleC(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_spatialScaleC", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_spatialScaleD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_spatialScaleD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_spatialScaleD(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_spatialScaleD", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_phaseA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_phaseA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_phaseA(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_phaseA", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_phaseB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_phaseB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_phaseB(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_phaseB", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_phaseC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_phaseC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_phaseC(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_phaseC", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_phaseD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_phaseD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_phaseD(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_phaseD", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param1A() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param1A", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param1A(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param1A", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param1B() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param1B", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param1B(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param1B", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param1C() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param1C", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param1C(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param1C", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param1D() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param1D", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param1D(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param1D", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param2A() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param2A", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param2A(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param2A", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param2B() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param2B", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param2B(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param2B", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param2C() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param2C", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param2C(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param2C", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_param2D() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_param2D", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_param2D(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_param2D", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_outputOffsetA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_outputOffsetA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_outputOffsetA(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_outputOffsetA", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_outputOffsetB() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_outputOffsetB", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_outputOffsetB(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_outputOffsetB", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_outputOffsetC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_outputOffsetC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_outputOffsetC(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_outputOffsetC", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TextureProcessor3D::get_outputOffsetD() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_outputOffsetD", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_outputOffsetD(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_outputOffsetD", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_rowSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_rowSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_rowSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_rowSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_columnSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_columnSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_columnSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_columnSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::TextureProcessor3D::get_depthSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get_depthSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::set_depthSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "set_depthSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::by_ref<::GlobalNamespace::TextureProcessor3D_MotionPreset> GlobalNamespace::TextureProcessor3D::get__activePreset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "get__activePreset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::TextureProcessor3D_MotionPreset>>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::TextureProcessor3D::CreateTexture(int32_t sizeX, int32_t sizeY, int32_t sizeZ) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "CreateTexture", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, sizeX, sizeY, sizeZ);
}
inline void GlobalNamespace::TextureProcessor3D::ReleaseTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "ReleaseTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::UpdateBuffers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "UpdateBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::AnimateTextures() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "AnimateTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::AnimateChannel(::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParams> channel, ::UnityEngine::RenderTexture* outputTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                          { "AnimateChannel", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParams>>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, outputTexture);
}
inline void GlobalNamespace::TextureProcessor3D::ApplyIntention() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "ApplyIntention", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::ModifyGridSize(int32_t rowSizeDelta, int32_t columnSizeDelta, int32_t depthSizeDelta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "ModifyGridSize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rowSizeDelta, columnSizeDelta, depthSizeDelta);
}
inline void GlobalNamespace::TextureProcessor3D::Step() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "Step", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::TextureProcessor3D::GetKernelName(::GlobalNamespace::TextureProcessor3D_ComputeKernel kernel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { "GetKernelName", {}, { ::i2c::type_of<::GlobalNamespace::TextureProcessor3D_ComputeKernel>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kernel);
}
inline void GlobalNamespace::TextureProcessor3D::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureProcessor3D::_ApplyIntention_g__ApplyChannelIntention_163_0(::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParams> channel,
                                                                                                ::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention> channelIntention) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                                                                                         { "<ApplyIntention>g__ApplyChannelIntention|163_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParams>>(),
                                                                                             ::i2c::type_of<::by_ref<::GlobalNamespace::TextureProcessor3D_ChannelParamsChangeIntention>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, channel, channelIntention);
}
template <typename T> inline void GlobalNamespace::TextureProcessor3D::_ApplyIntention_g__ApplyParamIntention_163_1(::by_ref<T> param, ::by_ref<::System::Nullable_1<T>> intention) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3D*>(),
                          { "<ApplyIntention>g__ApplyParamIntention|163_1", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, param, intention);
}
inline ::GlobalNamespace::TextureProcessor3D* GlobalNamespace::TextureProcessor3D::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextureProcessor3D*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3D::TextureProcessor3D() {}
