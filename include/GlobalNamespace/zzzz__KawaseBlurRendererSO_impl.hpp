#pragma once
// IWYU pragma private; include "GlobalNamespace/KawaseBlurRendererSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize::KawaseBlurRendererSO_KernelSize(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize::KawaseBlurRendererSO_KernelSize() {}
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize GlobalNamespace::KawaseBlurRendererSO_KernelSize::Kernel7{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize GlobalNamespace::KawaseBlurRendererSO_KernelSize::Kernel15{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize GlobalNamespace::KawaseBlurRendererSO_KernelSize::Kernel23{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize GlobalNamespace::KawaseBlurRendererSO_KernelSize::Kernel35{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize GlobalNamespace::KawaseBlurRendererSO_KernelSize::Kernel63{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize GlobalNamespace::KawaseBlurRendererSO_KernelSize::Kernel127{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize GlobalNamespace::KawaseBlurRendererSO_KernelSize::Kernel135{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize GlobalNamespace::KawaseBlurRendererSO_KernelSize::Kernel143{ static_cast<int32_t>(0x7) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::KawaseBlurRendererSO_WeightsType::KawaseBlurRendererSO_WeightsType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KawaseBlurRendererSO_WeightsType::KawaseBlurRendererSO_WeightsType() {}
constexpr ::GlobalNamespace::KawaseBlurRendererSO_WeightsType GlobalNamespace::KawaseBlurRendererSO_WeightsType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_WeightsType GlobalNamespace::KawaseBlurRendererSO_WeightsType::AlphaWeights{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_WeightsType GlobalNamespace::KawaseBlurRendererSO_WeightsType::AlphaAndDepthWeights{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO_BloomKernel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO_BloomKernel::*)()>(&::GlobalNamespace::KawaseBlurRendererSO_BloomKernel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586c8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO_BloomKernel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize& GlobalNamespace::KawaseBlurRendererSO_BloomKernel::__cordl_internal_get_kernelSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelSize;
}
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize const& GlobalNamespace::KawaseBlurRendererSO_BloomKernel::__cordl_internal_get_kernelSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelSize;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO_BloomKernel::__cordl_internal_set_kernelSize(::GlobalNamespace::KawaseBlurRendererSO_KernelSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelSize = value;
}
constexpr int32_t& GlobalNamespace::KawaseBlurRendererSO_BloomKernel::__cordl_internal_get_sharedPartWithNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedPartWithNext;
}
constexpr int32_t const& GlobalNamespace::KawaseBlurRendererSO_BloomKernel::__cordl_internal_get_sharedPartWithNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedPartWithNext;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO_BloomKernel::__cordl_internal_set_sharedPartWithNext(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedPartWithNext = value;
}
inline void GlobalNamespace::KawaseBlurRendererSO_BloomKernel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO_BloomKernel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KawaseBlurRendererSO_BloomKernel* GlobalNamespace::KawaseBlurRendererSO_BloomKernel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KawaseBlurRendererSO_BloomKernel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KawaseBlurRendererSO_BloomKernel::KawaseBlurRendererSO_BloomKernel() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::KawaseBlurRendererSO_Pass::KawaseBlurRendererSO_Pass(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KawaseBlurRendererSO_Pass::KawaseBlurRendererSO_Pass() {}
constexpr ::GlobalNamespace::KawaseBlurRendererSO_Pass GlobalNamespace::KawaseBlurRendererSO_Pass::AlphaWeights{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_Pass GlobalNamespace::KawaseBlurRendererSO_Pass::Blur{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_Pass GlobalNamespace::KawaseBlurRendererSO_Pass::BlurAndAdd{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_Pass GlobalNamespace::KawaseBlurRendererSO_Pass::BlurWithAlphaWeights{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_Pass GlobalNamespace::KawaseBlurRendererSO_Pass::AlphaAndDepthWeights{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_Pass GlobalNamespace::KawaseBlurRendererSO_Pass::BlurGamma{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::KawaseBlurRendererSO_Pass GlobalNamespace::KawaseBlurRendererSO_Pass::BlurGammaAndAdd{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.GetBlurKernel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::GlobalNamespace::KawaseBlurRendererSO::*)(::GlobalNamespace::KawaseBlurRendererSO_KernelSize)>(
    &::GlobalNamespace::KawaseBlurRendererSO::GetBlurKernel)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x586c324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                                                                           { "GetBlurKernel", {}, { ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)()>(&::GlobalNamespace::KawaseBlurRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x586c554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(), { ::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)()>(&::GlobalNamespace::KawaseBlurRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x586c8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.Bloom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, int32_t, int32_t, float_t,
                                                                                                         float_t, ::GlobalNamespace::KawaseBlurRendererSO_WeightsType, ::ArrayW<float_t>)>(
    &::GlobalNamespace::KawaseBlurRendererSO::Bloom)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x586c914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                            { "Bloom",
                              {},
                              { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_WeightsType>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.DoubleBlur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::GlobalNamespace::KawaseBlurRendererSO_KernelSize, float_t, ::GlobalNamespace::KawaseBlurRendererSO_KernelSize, float_t, float_t,
    int32_t, bool)>(&::GlobalNamespace::KawaseBlurRendererSO::DoubleBlur)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x586d38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                                                                           { "DoubleBlur",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>(), ::i2c::type_of<float_t>(),
                                                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.Blur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::KawaseBlurRendererSO::*)(
    ::UnityEngine::Texture*, ::GlobalNamespace::KawaseBlurRendererSO_KernelSize, int32_t)>(&::GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x586d620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                            { "Blur", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.Blur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)(
    ::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::GlobalNamespace::KawaseBlurRendererSO_KernelSize, float_t, int32_t)>(&::GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x586d6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                                             { "Blur",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.Blur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)(
    ::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::ArrayW<int32_t>, float_t, int32_t, int32_t, int32_t, float_t, float_t, bool, bool, ::GlobalNamespace::KawaseBlurRendererSO_WeightsType)>(
    &::GlobalNamespace::KawaseBlurRendererSO::Blur)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x586ce34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                         { "Blur",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_WeightsType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.AlphaWeights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::KawaseBlurRendererSO::AlphaWeights)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x586d784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                                             { "AlphaWeights", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO.CreateBlurCommandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::CommandBuffer* (::GlobalNamespace::KawaseBlurRendererSO::*)(int32_t, int32_t, ::StringW, ::GlobalNamespace::KawaseBlurRendererSO_KernelSize, float_t)>(
        &::GlobalNamespace::KawaseBlurRendererSO::CreateBlurCommandBuffer)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x586d858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                                                                           { "CreateBlurCommandBuffer",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBlurRendererSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBlurRendererSO::*)()>(&::GlobalNamespace::KawaseBlurRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586db9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__kawaseBlurShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__kawaseBlurShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurShader;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_set__kawaseBlurShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kawaseBlurShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__additiveShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additiveShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__additiveShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additiveShader;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_set__additiveShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____additiveShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__tintShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__tintShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintShader;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_set__tintShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tintShader = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__kawaseBlurMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__kawaseBlurMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurMaterial;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_set__kawaseBlurMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kawaseBlurMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__additiveMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additiveMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__additiveMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additiveMaterial;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_set__additiveMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____additiveMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__tintMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__tintMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tintMaterial;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_set__tintMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tintMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__commandBuffersMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffersMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__commandBuffersMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffersMaterial;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_set__commandBuffersMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandBuffersMaterial = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__kernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernels;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__kernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernels;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_set__kernels(::ArrayW<::ArrayW<int32_t>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kernels = value;
}
constexpr ::ArrayW<::GlobalNamespace::KawaseBlurRendererSO_BloomKernel*>& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__bloomKernels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomKernels;
}
constexpr ::ArrayW<::GlobalNamespace::KawaseBlurRendererSO_BloomKernel*> const& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__bloomKernels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomKernels;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_set__bloomKernels(::ArrayW<::GlobalNamespace::KawaseBlurRendererSO_BloomKernel*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomKernels = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__blurTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blurTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_get__blurTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blurTextures;
}
constexpr void GlobalNamespace::KawaseBlurRendererSO::__cordl_internal_set__blurTextures(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blurTextures = value;
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF_kBloomIterationWeights(::ArrayW<::ArrayW<float_t>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<float_t>>, "kBloomIterationWeights", ::GlobalNamespace::KawaseBlurRendererSO*>(std::forward<::ArrayW<::ArrayW<float_t>>>(value));
}
inline ::ArrayW<::ArrayW<float_t>> GlobalNamespace::KawaseBlurRendererSO::getStaticF_kBloomIterationWeights() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<float_t>>, "kBloomIterationWeights", ::GlobalNamespace::KawaseBlurRendererSO*>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__offsetID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_offsetID", ::GlobalNamespace::KawaseBlurRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__offsetID() {
  return ::cordl_internals::getStaticField<int32_t, "_offsetID", ::GlobalNamespace::KawaseBlurRendererSO*>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__boostID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_boostID", ::GlobalNamespace::KawaseBlurRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__boostID() {
  return ::cordl_internals::getStaticField<int32_t, "_boostID", ::GlobalNamespace::KawaseBlurRendererSO*>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__additiveAlphaID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_additiveAlphaID", ::GlobalNamespace::KawaseBlurRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__additiveAlphaID() {
  return ::cordl_internals::getStaticField<int32_t, "_additiveAlphaID", ::GlobalNamespace::KawaseBlurRendererSO*>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__alphaID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_alphaID", ::GlobalNamespace::KawaseBlurRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__alphaID() {
  return ::cordl_internals::getStaticField<int32_t, "_alphaID", ::GlobalNamespace::KawaseBlurRendererSO*>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__tintColorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_tintColorID", ::GlobalNamespace::KawaseBlurRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__tintColorID() {
  return ::cordl_internals::getStaticField<int32_t, "_tintColorID", ::GlobalNamespace::KawaseBlurRendererSO*>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__alphaWeightsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_alphaWeightsID", ::GlobalNamespace::KawaseBlurRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__alphaWeightsID() {
  return ::cordl_internals::getStaticField<int32_t, "_alphaWeightsID", ::GlobalNamespace::KawaseBlurRendererSO*>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__tempTexture0ID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_tempTexture0ID", ::GlobalNamespace::KawaseBlurRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__tempTexture0ID() {
  return ::cordl_internals::getStaticField<int32_t, "_tempTexture0ID", ::GlobalNamespace::KawaseBlurRendererSO*>();
}
inline void GlobalNamespace::KawaseBlurRendererSO::setStaticF__tempTexture1ID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_tempTexture1ID", ::GlobalNamespace::KawaseBlurRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBlurRendererSO::getStaticF__tempTexture1ID() {
  return ::cordl_internals::getStaticField<int32_t, "_tempTexture1ID", ::GlobalNamespace::KawaseBlurRendererSO*>();
}
inline ::ArrayW<int32_t> GlobalNamespace::KawaseBlurRendererSO::GetBlurKernel(::GlobalNamespace::KawaseBlurRendererSO_KernelSize kernelSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                                                                         { "GetBlurKernel", {}, { ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, kernelSize);
}
inline void GlobalNamespace::KawaseBlurRendererSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KawaseBlurRendererSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KawaseBlurRendererSO::Bloom(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, int32_t iterationsStart, int32_t iterations, float_t boost,
                                                         float_t alphaWeights, ::GlobalNamespace::KawaseBlurRendererSO_WeightsType blurStartWeightsType, ::ArrayW<float_t> bloomIterationWeights) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                          { "Bloom",
                            {},
                            { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_WeightsType>(), ::i2c::type_of<::ArrayW<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest, iterationsStart, iterations, boost, alphaWeights, blurStartWeightsType, bloomIterationWeights);
}
inline void GlobalNamespace::KawaseBlurRendererSO::DoubleBlur(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest, ::GlobalNamespace::KawaseBlurRendererSO_KernelSize kernelSize0,
                                                              float_t boost0, ::GlobalNamespace::KawaseBlurRendererSO_KernelSize kernelSize1, float_t boost1, float_t secondBlurAlpha,
                                                              int32_t downsample, bool gammaCorrection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                                                                         { "DoubleBlur",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>(), ::i2c::type_of<float_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest, kernelSize0, boost0, kernelSize1, boost1, secondBlurAlpha, downsample, gammaCorrection);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::KawaseBlurRendererSO::Blur(::UnityEngine::Texture* src, ::GlobalNamespace::KawaseBlurRendererSO_KernelSize kernelSize, int32_t downsample) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                          { "Blur", {}, { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, src, kernelSize, downsample);
}
inline void GlobalNamespace::KawaseBlurRendererSO::Blur(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dest, ::GlobalNamespace::KawaseBlurRendererSO_KernelSize kernelSize, float_t boost,
                                                        int32_t downsample) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                                           { "Blur",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(),
                                                               ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest, kernelSize, boost, downsample);
}
inline void GlobalNamespace::KawaseBlurRendererSO::Blur(::UnityEngine::Texture* src, ::UnityEngine::RenderTexture* dest, ::ArrayW<int32_t> kernel, float_t boost, int32_t downsample, int32_t startIdx,
                                                        int32_t length, float_t alphaWeights, float_t additiveAlpha, bool additivelyBlendToDest, bool gammaCorrection,
                                                        ::GlobalNamespace::KawaseBlurRendererSO_WeightsType blurStartWeightsType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                       { "Blur",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_WeightsType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest, kernel, boost, downsample, startIdx, length, alphaWeights, additiveAlpha, additivelyBlendToDest,
                                                   gammaCorrection, blurStartWeightsType);
}
inline void GlobalNamespace::KawaseBlurRendererSO::AlphaWeights(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                                           { "AlphaWeights", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dest);
}
inline ::UnityEngine::Rendering::CommandBuffer* GlobalNamespace::KawaseBlurRendererSO::CreateBlurCommandBuffer(int32_t width, int32_t height, ::StringW globalTextureName,
                                                                                                               ::GlobalNamespace::KawaseBlurRendererSO_KernelSize kernelSize, float_t boost) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(),
                                                                                         { "CreateBlurCommandBuffer",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::KawaseBlurRendererSO_KernelSize>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::CommandBuffer*>(this, ___internal_method, width, height, globalTextureName, kernelSize, boost);
}
inline void GlobalNamespace::KawaseBlurRendererSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBlurRendererSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KawaseBlurRendererSO* GlobalNamespace::KawaseBlurRendererSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KawaseBlurRendererSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KawaseBlurRendererSO::KawaseBlurRendererSO() {}
