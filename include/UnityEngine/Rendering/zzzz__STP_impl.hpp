#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/zzzz__GUIContent_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__STP_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__AccessFlags_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IBaseRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__STP_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "currentProj", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastProj", ty: "::UnityEngine::Matrix4x4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "lastLastProj", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentView", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "lastView", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastLastView", ty:
// "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::STP_PerViewConfig::STP_PerViewConfig(::UnityEngine::Matrix4x4 currentProj, ::UnityEngine::Matrix4x4 lastProj, ::UnityEngine::Matrix4x4 lastLastProj,
                                                                         ::UnityEngine::Matrix4x4 currentView, ::UnityEngine::Matrix4x4 lastView, ::UnityEngine::Matrix4x4 lastLastView) noexcept {
  this->currentProj = currentProj;
  this->lastProj = lastProj;
  this->lastLastProj = lastLastProj;
  this->currentView = currentView;
  this->lastView = lastView;
  this->lastLastView = lastLastView;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_PerViewConfig::STP_PerViewConfig() {}
// Ctor Parameters [CppParam { name: "noiseTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputColor", ty:
// "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputDepth", ty:
// "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputMotion", ty:
// "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "inputStencil", ty:
// "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "debugView", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "destination", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "historyContext", ty: "::UnityEngine::Rendering::STP_HistoryContext*", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableHwDrs", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "enableTexArray", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableMotionScaling", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "nearPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "farPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "frameIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "hasValidHistory", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "stencilMask", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "debugViewIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "lastDeltaTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "priorImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "outputImageSize", ty: "::UnityEngine::Vector2Int",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "numActiveViews", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "perViewConfigs", ty:
// "::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::STP_Config::STP_Config(
    ::UnityW<::UnityEngine::Texture2D> noiseTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputColor, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputDepth,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputMotion, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputStencil,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugView, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
    ::UnityEngine::Rendering::STP_HistoryContext* historyContext, bool enableHwDrs, bool enableTexArray, bool enableMotionScaling, float_t nearPlane, float_t farPlane, int32_t frameIndex,
    bool hasValidHistory, int32_t stencilMask, int32_t debugViewIndex, float_t deltaTime, float_t lastDeltaTime, ::UnityEngine::Vector2Int currentImageSize, ::UnityEngine::Vector2Int priorImageSize,
    ::UnityEngine::Vector2Int outputImageSize, int32_t numActiveViews, ::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig> perViewConfigs) noexcept {
  this->noiseTexture = noiseTexture;
  this->inputColor = inputColor;
  this->inputDepth = inputDepth;
  this->inputMotion = inputMotion;
  this->inputStencil = inputStencil;
  this->debugView = debugView;
  this->destination = destination;
  this->historyContext = historyContext;
  this->enableHwDrs = enableHwDrs;
  this->enableTexArray = enableTexArray;
  this->enableMotionScaling = enableMotionScaling;
  this->nearPlane = nearPlane;
  this->farPlane = farPlane;
  this->frameIndex = frameIndex;
  this->hasValidHistory = hasValidHistory;
  this->stencilMask = stencilMask;
  this->debugViewIndex = debugViewIndex;
  this->deltaTime = deltaTime;
  this->lastDeltaTime = lastDeltaTime;
  this->currentImageSize = currentImageSize;
  this->priorImageSize = priorImageSize;
  this->outputImageSize = outputImageSize;
  this->numActiveViews = numActiveViews;
  this->perViewConfigs = perViewConfigs;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_Config::STP_Config() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::STP_HistoryTextureType::STP_HistoryTextureType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_HistoryTextureType::STP_HistoryTextureType() {}
constexpr ::UnityEngine::Rendering::STP_HistoryTextureType UnityEngine::Rendering::STP_HistoryTextureType::DepthMotion{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::STP_HistoryTextureType UnityEngine::Rendering::STP_HistoryTextureType::Luma{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::STP_HistoryTextureType UnityEngine::Rendering::STP_HistoryTextureType::Convergence{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::STP_HistoryTextureType UnityEngine::Rendering::STP_HistoryTextureType::Feedback{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::STP_HistoryTextureType UnityEngine::Rendering::STP_HistoryTextureType::Count{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "preUpscaleSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "postUpscaleSize", ty: "::UnityEngine::Vector2Int",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "useHwDrs", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "useTexArray", ty: "bool", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::STP_HistoryUpdateInfo::STP_HistoryUpdateInfo(::UnityEngine::Vector2Int preUpscaleSize, ::UnityEngine::Vector2Int postUpscaleSize, bool useHwDrs,
                                                                                 bool useTexArray) noexcept {
  this->preUpscaleSize = preUpscaleSize;
  this->postUpscaleSize = postUpscaleSize;
  this->useHwDrs = useHwDrs;
  this->useTexArray = useTexArray;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_HistoryUpdateInfo::STP_HistoryUpdateInfo() {}
//  Writing Method size for method: ::UnityEngine::Rendering::STP_HistoryContext.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::STP_HistoryContext::*)(::by_ref<::UnityEngine::Rendering::STP_HistoryUpdateInfo>)>(
    &::UnityEngine::Rendering::STP_HistoryContext::Update)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x67a1828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_HistoryContext*>(),
                                                                                           { "Update", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_HistoryUpdateInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_HistoryContext.GetCurrentHistoryTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::STP_HistoryContext::*)(::UnityEngine::Rendering::STP_HistoryTextureType, int32_t)>(&::UnityEngine::Rendering::STP_HistoryContext::GetCurrentHistoryTexture)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x67a1398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_HistoryContext*>(),
                                                             { "GetCurrentHistoryTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::STP_HistoryTextureType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_HistoryContext.GetPreviousHistoryTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Rendering::STP_HistoryContext::*)(::UnityEngine::Rendering::STP_HistoryTextureType, int32_t)>(&::UnityEngine::Rendering::STP_HistoryContext::GetPreviousHistoryTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67a135c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_HistoryContext*>(),
                                                             { "GetPreviousHistoryTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::STP_HistoryTextureType>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_HistoryContext.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP_HistoryContext::*)()>(&::UnityEngine::Rendering::STP_HistoryContext::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67a1bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_HistoryContext*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_HistoryContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP_HistoryContext::*)()>(&::UnityEngine::Rendering::STP_HistoryContext::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67a1c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_HistoryContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::STP_HistoryContext::__cordl_internal_get_m_textures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textures;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::STP_HistoryContext::__cordl_internal_get_m_textures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textures;
}
constexpr void UnityEngine::Rendering::STP_HistoryContext::__cordl_internal_set_m_textures(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_textures = value;
}
constexpr ::UnityEngine::Hash128& UnityEngine::Rendering::STP_HistoryContext::__cordl_internal_get_m_hash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hash;
}
constexpr ::UnityEngine::Hash128 const& UnityEngine::Rendering::STP_HistoryContext::__cordl_internal_get_m_hash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hash;
}
constexpr void UnityEngine::Rendering::STP_HistoryContext::__cordl_internal_set_m_hash(::UnityEngine::Hash128 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_hash = value;
}
inline bool UnityEngine::Rendering::STP_HistoryContext::Update(::by_ref<::UnityEngine::Rendering::STP_HistoryUpdateInfo> info) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_HistoryContext*>(),
                                                                                         { "Update", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_HistoryUpdateInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::STP_HistoryContext::GetCurrentHistoryTexture(::UnityEngine::Rendering::STP_HistoryTextureType historyType, int32_t frameIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_HistoryContext*>(),
                                                           { "GetCurrentHistoryTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::STP_HistoryTextureType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, historyType, frameIndex);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::STP_HistoryContext::GetPreviousHistoryTexture(::UnityEngine::Rendering::STP_HistoryTextureType historyType, int32_t frameIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_HistoryContext*>(),
                                                           { "GetPreviousHistoryTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::STP_HistoryTextureType>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, historyType, frameIndex);
}
inline void UnityEngine::Rendering::STP_HistoryContext::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_HistoryContext*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::STP_HistoryContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_HistoryContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::STP_HistoryContext* UnityEngine::Rendering::STP_HistoryContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::STP_HistoryContext*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::STP_HistoryContext::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::STP_HistoryContext::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_HistoryContext::STP_HistoryContext() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::STP_StpSetupPerViewConstants::STP_StpSetupPerViewConstants(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_StpSetupPerViewConstants::STP_StpSetupPerViewConstants() {}
constexpr ::UnityEngine::Rendering::STP_StpSetupPerViewConstants UnityEngine::Rendering::STP_StpSetupPerViewConstants::Count{ static_cast<int32_t>(0x8) };
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer(
    float_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "_StpCommonConstant", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StpSetupConstants0", ty: "::UnityEngine::Vector4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_StpSetupConstants1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StpSetupConstants2", ty:
// "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StpSetupConstants3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_StpSetupConstants4", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StpSetupConstants5", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_StpSetupPerViewConstants", ty: "::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_StpDilConstants0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StpTaaConstants0", ty: "::UnityEngine::Vector4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_StpTaaConstants1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StpTaaConstants2", ty:
// "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StpTaaConstants3", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::STP_StpConstantBufferData::STP_StpConstantBufferData(
    ::UnityEngine::Vector4 _StpCommonConstant, ::UnityEngine::Vector4 _StpSetupConstants0, ::UnityEngine::Vector4 _StpSetupConstants1, ::UnityEngine::Vector4 _StpSetupConstants2,
    ::UnityEngine::Vector4 _StpSetupConstants3, ::UnityEngine::Vector4 _StpSetupConstants4, ::UnityEngine::Vector4 _StpSetupConstants5,
    ::UnityEngine::Rendering::StpConstantBufferData_STP___StpSetupPerViewConstants_e__FixedBuffer _StpSetupPerViewConstants, ::UnityEngine::Vector4 _StpDilConstants0,
    ::UnityEngine::Vector4 _StpTaaConstants0, ::UnityEngine::Vector4 _StpTaaConstants1, ::UnityEngine::Vector4 _StpTaaConstants2, ::UnityEngine::Vector4 _StpTaaConstants3) noexcept {
  this->_StpCommonConstant = _StpCommonConstant;
  this->_StpSetupConstants0 = _StpSetupConstants0;
  this->_StpSetupConstants1 = _StpSetupConstants1;
  this->_StpSetupConstants2 = _StpSetupConstants2;
  this->_StpSetupConstants3 = _StpSetupConstants3;
  this->_StpSetupConstants4 = _StpSetupConstants4;
  this->_StpSetupConstants5 = _StpSetupConstants5;
  this->_StpSetupPerViewConstants = _StpSetupPerViewConstants;
  this->_StpDilConstants0 = _StpDilConstants0;
  this->_StpTaaConstants0 = _StpTaaConstants0;
  this->_StpTaaConstants1 = _StpTaaConstants1;
  this->_StpTaaConstants2 = _StpTaaConstants2;
  this->_StpTaaConstants3 = _StpTaaConstants3;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_StpConstantBufferData::STP_StpConstantBufferData() {}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpConstantBufferData(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpConstantBufferData", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpConstantBufferData() {
  return ::cordl_internals::getStaticField<int32_t, "_StpConstantBufferData", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpBlueNoiseIn(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpBlueNoiseIn", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpBlueNoiseIn() {
  return ::cordl_internals::getStaticField<int32_t, "_StpBlueNoiseIn", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpDebugOut(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpDebugOut", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpDebugOut() {
  return ::cordl_internals::getStaticField<int32_t, "_StpDebugOut", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpInputColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpInputColor", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpInputColor() {
  return ::cordl_internals::getStaticField<int32_t, "_StpInputColor", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpInputDepth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpInputDepth", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpInputDepth() {
  return ::cordl_internals::getStaticField<int32_t, "_StpInputDepth", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpInputMotion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpInputMotion", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpInputMotion() {
  return ::cordl_internals::getStaticField<int32_t, "_StpInputMotion", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpInputStencil(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpInputStencil", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpInputStencil() {
  return ::cordl_internals::getStaticField<int32_t, "_StpInputStencil", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpIntermediateColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpIntermediateColor", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpIntermediateColor() {
  return ::cordl_internals::getStaticField<int32_t, "_StpIntermediateColor", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpIntermediateConvergence(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpIntermediateConvergence", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpIntermediateConvergence() {
  return ::cordl_internals::getStaticField<int32_t, "_StpIntermediateConvergence", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpIntermediateWeights(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpIntermediateWeights", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpIntermediateWeights() {
  return ::cordl_internals::getStaticField<int32_t, "_StpIntermediateWeights", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpPriorLuma(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpPriorLuma", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpPriorLuma() {
  return ::cordl_internals::getStaticField<int32_t, "_StpPriorLuma", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpLuma(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpLuma", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpLuma() {
  return ::cordl_internals::getStaticField<int32_t, "_StpLuma", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpPriorDepthMotion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpPriorDepthMotion", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpPriorDepthMotion() {
  return ::cordl_internals::getStaticField<int32_t, "_StpPriorDepthMotion", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpDepthMotion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpDepthMotion", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpDepthMotion() {
  return ::cordl_internals::getStaticField<int32_t, "_StpDepthMotion", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpPriorFeedback(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpPriorFeedback", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpPriorFeedback() {
  return ::cordl_internals::getStaticField<int32_t, "_StpPriorFeedback", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpFeedback(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpFeedback", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpFeedback() {
  return ::cordl_internals::getStaticField<int32_t, "_StpFeedback", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpPriorConvergence(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpPriorConvergence", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpPriorConvergence() {
  return ::cordl_internals::getStaticField<int32_t, "_StpPriorConvergence", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpConvergence(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpConvergence", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpConvergence() {
  return ::cordl_internals::getStaticField<int32_t, "_StpConvergence", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
inline void UnityEngine::Rendering::STP_ShaderResources::setStaticF__StpOutput(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StpOutput", ::UnityEngine::Rendering::STP_ShaderResources*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP_ShaderResources::getStaticF__StpOutput() {
  return ::cordl_internals::getStaticField<int32_t, "_StpOutput", ::UnityEngine::Rendering::STP_ShaderResources*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_ShaderResources::STP_ShaderResources() {}
inline void UnityEngine::Rendering::STP_ShaderKeywords::setStaticF_EnableDebugMode(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EnableDebugMode", ::UnityEngine::Rendering::STP_ShaderKeywords*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::STP_ShaderKeywords::getStaticF_EnableDebugMode() {
  return ::cordl_internals::getStaticField<::StringW, "EnableDebugMode", ::UnityEngine::Rendering::STP_ShaderKeywords*>();
}
inline void UnityEngine::Rendering::STP_ShaderKeywords::setStaticF_EnableLargeKernel(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EnableLargeKernel", ::UnityEngine::Rendering::STP_ShaderKeywords*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::STP_ShaderKeywords::getStaticF_EnableLargeKernel() {
  return ::cordl_internals::getStaticField<::StringW, "EnableLargeKernel", ::UnityEngine::Rendering::STP_ShaderKeywords*>();
}
inline void UnityEngine::Rendering::STP_ShaderKeywords::setStaticF_EnableStencilResponsive(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EnableStencilResponsive", ::UnityEngine::Rendering::STP_ShaderKeywords*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::STP_ShaderKeywords::getStaticF_EnableStencilResponsive() {
  return ::cordl_internals::getStaticField<::StringW, "EnableStencilResponsive", ::UnityEngine::Rendering::STP_ShaderKeywords*>();
}
inline void UnityEngine::Rendering::STP_ShaderKeywords::setStaticF_DisableTexture2DXArray(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "DisableTexture2DXArray", ::UnityEngine::Rendering::STP_ShaderKeywords*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::STP_ShaderKeywords::getStaticF_DisableTexture2DXArray() {
  return ::cordl_internals::getStaticField<::StringW, "DisableTexture2DXArray", ::UnityEngine::Rendering::STP_ShaderKeywords*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_ShaderKeywords::STP_ShaderKeywords() {}
//  Writing Method size for method: ::UnityEngine::Rendering::STP_RuntimeResources.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::STP_RuntimeResources::*)()>(&::UnityEngine::Rendering::STP_RuntimeResources::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a2198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_RuntimeResources.get_setupCS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::STP_RuntimeResources::*)()>(
    &::UnityEngine::Rendering::STP_RuntimeResources::get_setupCS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a21a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "get_setupCS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_RuntimeResources.set_setupCS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP_RuntimeResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::STP_RuntimeResources::set_setupCS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67a21a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "set_setupCS", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_RuntimeResources.get_preTaaCS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::STP_RuntimeResources::*)()>(
    &::UnityEngine::Rendering::STP_RuntimeResources::get_preTaaCS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a2218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "get_preTaaCS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_RuntimeResources.set_preTaaCS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP_RuntimeResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::STP_RuntimeResources::set_preTaaCS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67a2220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "set_preTaaCS", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_RuntimeResources.get_taaCS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::UnityEngine::Rendering::STP_RuntimeResources::*)()>(
    &::UnityEngine::Rendering::STP_RuntimeResources::get_taaCS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67a2290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "get_taaCS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_RuntimeResources.set_taaCS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP_RuntimeResources::*)(::UnityEngine::ComputeShader*)>(
    &::UnityEngine::Rendering::STP_RuntimeResources::set_taaCS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x67a2298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "set_taaCS", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP_RuntimeResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP_RuntimeResources::*)()>(&::UnityEngine::Rendering::STP_RuntimeResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67a2308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::STP_RuntimeResources::__cordl_internal_get_m_setupCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_setupCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::STP_RuntimeResources::__cordl_internal_get_m_setupCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_setupCS;
}
constexpr void UnityEngine::Rendering::STP_RuntimeResources::__cordl_internal_set_m_setupCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_setupCS = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::STP_RuntimeResources::__cordl_internal_get_m_preTaaCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_preTaaCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::STP_RuntimeResources::__cordl_internal_get_m_preTaaCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_preTaaCS;
}
constexpr void UnityEngine::Rendering::STP_RuntimeResources::__cordl_internal_set_m_preTaaCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_preTaaCS = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::STP_RuntimeResources::__cordl_internal_get_m_taaCS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taaCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::STP_RuntimeResources::__cordl_internal_get_m_taaCS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_taaCS;
}
constexpr void UnityEngine::Rendering::STP_RuntimeResources::__cordl_internal_set_m_taaCS(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_taaCS = value;
}
inline int32_t UnityEngine::Rendering::STP_RuntimeResources::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::STP_RuntimeResources::get_setupCS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "get_setupCS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::STP_RuntimeResources::set_setupCS(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "set_setupCS", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::STP_RuntimeResources::get_preTaaCS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "get_preTaaCS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::STP_RuntimeResources::set_preTaaCS(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "set_preTaaCS", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> UnityEngine::Rendering::STP_RuntimeResources::get_taaCS() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "get_taaCS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::STP_RuntimeResources::set_taaCS(::UnityEngine::ComputeShader* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { "set_taaCS", {}, { ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::STP_RuntimeResources::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_RuntimeResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::STP_RuntimeResources* UnityEngine::Rendering::STP_RuntimeResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::STP_RuntimeResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::STP_RuntimeResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* UnityEngine::Rendering::STP_RuntimeResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::STP_RuntimeResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::STP_RuntimeResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_RuntimeResources::STP_RuntimeResources() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::STP_ProfileId::STP_ProfileId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_ProfileId::STP_ProfileId() {}
constexpr ::UnityEngine::Rendering::STP_ProfileId UnityEngine::Rendering::STP_ProfileId::StpSetup{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::STP_ProfileId UnityEngine::Rendering::STP_ProfileId::StpPreTaa{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::STP_ProfileId UnityEngine::Rendering::STP_ProfileId::StpTaa{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::STP_SetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP_SetupData::*)()>(&::UnityEngine::Rendering::STP_SetupData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67a230c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_SetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_cs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_cs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_cs(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cs = value;
}
constexpr int32_t& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_kernelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelIndex;
}
constexpr int32_t const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_kernelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelIndex;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_kernelIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_viewCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewCount;
}
constexpr int32_t const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_viewCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewCount;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_viewCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewCount = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_dispatchSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispatchSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_dispatchSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispatchSize;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_dispatchSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dispatchSize = value;
}
constexpr ::UnityEngine::Rendering::STP_StpConstantBufferData& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_constantBufferData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constantBufferData;
}
constexpr ::UnityEngine::Rendering::STP_StpConstantBufferData const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_constantBufferData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constantBufferData;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_constantBufferData(::UnityEngine::Rendering::STP_StpConstantBufferData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___constantBufferData = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_noiseTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noiseTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_noiseTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noiseTexture;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_noiseTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noiseTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_debugView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugView;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_debugView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugView;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_debugView(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugView = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_inputColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_inputColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputColor;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_inputColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputColor = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_inputDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputDepth;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_inputDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputDepth;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_inputDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputDepth = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_inputMotion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputMotion;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_inputMotion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputMotion;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_inputMotion(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputMotion = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_inputStencil() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputStencil;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_inputStencil() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputStencil;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_inputStencil(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputStencil = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_intermediateColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_intermediateColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateColor;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_intermediateColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intermediateColor = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_intermediateConvergence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateConvergence;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_intermediateConvergence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateConvergence;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_intermediateConvergence(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intermediateConvergence = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_priorDepthMotion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorDepthMotion;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_priorDepthMotion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorDepthMotion;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_priorDepthMotion(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priorDepthMotion = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_depthMotion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthMotion;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_depthMotion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthMotion;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_depthMotion(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthMotion = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_priorLuma() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorLuma;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_priorLuma() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorLuma;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_priorLuma(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priorLuma = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_luma() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___luma;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_luma() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___luma;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_luma(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___luma = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_priorFeedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorFeedback;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_priorFeedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorFeedback;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_priorFeedback(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priorFeedback = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_priorConvergence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorConvergence;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_SetupData::__cordl_internal_get_priorConvergence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorConvergence;
}
constexpr void UnityEngine::Rendering::STP_SetupData::__cordl_internal_set_priorConvergence(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priorConvergence = value;
}
inline void UnityEngine::Rendering::STP_SetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_SetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::STP_SetupData* UnityEngine::Rendering::STP_SetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::STP_SetupData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_SetupData::STP_SetupData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::STP_PreTaaData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP_PreTaaData::*)()>(&::UnityEngine::Rendering::STP_PreTaaData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67a2310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_PreTaaData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_cs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_cs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
constexpr void UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_set_cs(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cs = value;
}
constexpr int32_t& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_kernelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelIndex;
}
constexpr int32_t const& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_kernelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelIndex;
}
constexpr void UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_set_kernelIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_viewCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewCount;
}
constexpr int32_t const& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_viewCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewCount;
}
constexpr void UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_set_viewCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewCount = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_dispatchSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispatchSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_dispatchSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispatchSize;
}
constexpr void UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_set_dispatchSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dispatchSize = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_noiseTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noiseTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_noiseTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noiseTexture;
}
constexpr void UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_set_noiseTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noiseTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_debugView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugView;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_debugView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugView;
}
constexpr void UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_set_debugView(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugView = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_intermediateConvergence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateConvergence;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_intermediateConvergence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateConvergence;
}
constexpr void UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_set_intermediateConvergence(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intermediateConvergence = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_intermediateWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateWeights;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_intermediateWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateWeights;
}
constexpr void UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_set_intermediateWeights(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intermediateWeights = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_luma() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___luma;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_luma() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___luma;
}
constexpr void UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_set_luma(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___luma = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_convergence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___convergence;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_get_convergence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___convergence;
}
constexpr void UnityEngine::Rendering::STP_PreTaaData::__cordl_internal_set_convergence(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___convergence = value;
}
inline void UnityEngine::Rendering::STP_PreTaaData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_PreTaaData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::STP_PreTaaData* UnityEngine::Rendering::STP_PreTaaData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::STP_PreTaaData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_PreTaaData::STP_PreTaaData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::STP_TaaData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP_TaaData::*)()>(&::UnityEngine::Rendering::STP_TaaData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67a2314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_TaaData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_cs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_cs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cs;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_cs(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cs = value;
}
constexpr int32_t& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_kernelIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelIndex;
}
constexpr int32_t const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_kernelIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kernelIndex;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_kernelIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kernelIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_viewCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewCount;
}
constexpr int32_t const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_viewCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewCount;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_viewCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewCount = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_dispatchSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispatchSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_dispatchSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dispatchSize;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_dispatchSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dispatchSize = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_noiseTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noiseTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_noiseTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noiseTexture;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_noiseTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noiseTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_debugView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugView;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_debugView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugView;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_debugView(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugView = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_intermediateColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_intermediateColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateColor;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_intermediateColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intermediateColor = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_intermediateWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateWeights;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_intermediateWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intermediateWeights;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_intermediateWeights(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intermediateWeights = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_priorFeedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorFeedback;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_priorFeedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorFeedback;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_priorFeedback(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priorFeedback = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_depthMotion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthMotion;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_depthMotion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthMotion;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_depthMotion(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthMotion = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_convergence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___convergence;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_convergence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___convergence;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_convergence(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___convergence = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_feedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feedback;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_feedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feedback;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_feedback(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___feedback = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_output() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::STP_TaaData::__cordl_internal_get_output() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output;
}
constexpr void UnityEngine::Rendering::STP_TaaData::__cordl_internal_set_output(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___output = value;
}
inline void UnityEngine::Rendering::STP_TaaData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP_TaaData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::STP_TaaData* UnityEngine::Rendering::STP_TaaData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::STP_TaaData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP_TaaData::STP_TaaData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::STP___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP___c::*)()>(&::UnityEngine::Rendering::STP___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67a236c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP___c._Execute_b__38_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP___c::*)(
    ::UnityEngine::Rendering::STP_SetupData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(&::UnityEngine::Rendering::STP___c::_Execute_b__38_0)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x67a2370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::STP___c*>(),
            { "<Execute>b__38_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::STP_SetupData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP___c._Execute_b__38_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP___c::*)(
    ::UnityEngine::Rendering::STP_PreTaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(&::UnityEngine::Rendering::STP___c::_Execute_b__38_1)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x67a2914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::STP___c*>(),
            { "<Execute>b__38_1", {}, { ::i2c::type_of<::UnityEngine::Rendering::STP_PreTaaData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP___c._Execute_b__38_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::STP___c::*)(
    ::UnityEngine::Rendering::STP_TaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(&::UnityEngine::Rendering::STP___c::_Execute_b__38_2)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x67a2c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::STP___c*>(),
            { "<Execute>b__38_2", {}, { ::i2c::type_of<::UnityEngine::Rendering::STP_TaaData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::STP___c::setStaticF___9(::UnityEngine::Rendering::STP___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::STP___c*, "<>9", ::UnityEngine::Rendering::STP___c*>(std::forward<::UnityEngine::Rendering::STP___c*>(value));
}
inline ::UnityEngine::Rendering::STP___c* UnityEngine::Rendering::STP___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::STP___c*, "<>9", ::UnityEngine::Rendering::STP___c*>();
}
inline void UnityEngine::Rendering::STP___c::setStaticF___9__38_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_SetupData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_SetupData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__38_0",
      ::UnityEngine::Rendering::STP___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_SetupData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_SetupData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
UnityEngine::Rendering::STP___c::getStaticF___9__38_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_SetupData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__38_0",
      ::UnityEngine::Rendering::STP___c*>();
}
inline void UnityEngine::Rendering::STP___c::setStaticF___9__38_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_PreTaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_PreTaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__38_1",
      ::UnityEngine::Rendering::STP___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_PreTaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_PreTaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
UnityEngine::Rendering::STP___c::getStaticF___9__38_1() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_PreTaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__38_1",
      ::UnityEngine::Rendering::STP___c*>();
}
inline void UnityEngine::Rendering::STP___c::setStaticF___9__38_2(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_TaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_TaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__38_2",
      ::UnityEngine::Rendering::STP___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_TaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_TaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
UnityEngine::Rendering::STP___c::getStaticF___9__38_2() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::STP_TaaData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*, "<>9__38_2",
      ::UnityEngine::Rendering::STP___c*>();
}
inline void UnityEngine::Rendering::STP___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::STP___c::_Execute_b__38_0(::UnityEngine::Rendering::STP_SetupData* data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::STP___c*>(),
          { "<Execute>b__38_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::STP_SetupData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Rendering::STP___c::_Execute_b__38_1(::UnityEngine::Rendering::STP_PreTaaData* data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::STP___c*>(),
          { "<Execute>b__38_1", {}, { ::i2c::type_of<::UnityEngine::Rendering::STP_PreTaaData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Rendering::STP___c::_Execute_b__38_2(::UnityEngine::Rendering::STP_TaaData* data, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::STP___c*>(),
                       { "<Execute>b__38_2", {}, { ::i2c::type_of<::UnityEngine::Rendering::STP_TaaData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline ::UnityEngine::Rendering::STP___c* UnityEngine::Rendering::STP___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::STP___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP___c::STP___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::STP.IsSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::STP::IsSupported)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x679e444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "IsSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.Jit16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(int32_t)>(&::UnityEngine::Rendering::STP::Jit16)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x679e4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "Jit16", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.get_debugViewDescriptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::GUIContent*> (*)()>(&::UnityEngine::Rendering::STP::get_debugViewDescriptions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x679e544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "get_debugViewDescriptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.get_debugViewIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)()>(&::UnityEngine::Rendering::STP::get_debugViewIndices)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x679e5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "get_debugViewIndices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.get_perViewConfigs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig> (*)()>(&::UnityEngine::Rendering::STP::get_perViewConfigs)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x679e5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "get_perViewConfigs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.set_perViewConfigs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig>)>(&::UnityEngine::Rendering::STP::set_perViewConfigs)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x679e658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(),
                                                                                           { "set_perViewConfigs", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.ComputeHistoryHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (*)(::by_ref<::UnityEngine::Rendering::STP_HistoryUpdateInfo>)>(&::UnityEngine::Rendering::STP::ComputeHistoryHash)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x679e6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "ComputeHistoryHash", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_HistoryUpdateInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.CalculateConvergenceTextureSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2Int)>(&::UnityEngine::Rendering::STP::CalculateConvergenceTextureSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x679e76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "CalculateConvergenceTextureSize", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.CalculateMotionScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::Rendering::STP::CalculateMotionScale)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x679e7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "CalculateMotionScale", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.ExtractRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::STP::ExtractRotation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x679e888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "ExtractRotation", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.PackVector2ToInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Vector2)>(&::UnityEngine::Rendering::STP::PackVector2ToInt)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x679e8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "PackVector2ToInt", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.PopulateConstantData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::STP_Config>, ::by_ref<::UnityEngine::Rendering::STP_StpConstantBufferData>)>(
    &::UnityEngine::Rendering::STP::PopulateConstantData)> {
  constexpr static std::size_t size = 0xadc;
  constexpr static std::size_t addrs = 0x679e91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::STP*>(),
            { "PopulateConstantData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_Config>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_StpConstantBufferData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.UseTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)(
    ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags)>(
    &::UnityEngine::Rendering::STP::UseTexture)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x679f3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "UseTexture",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                                       ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                                       ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::STP.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::STP_Config>)>(&::UnityEngine::Rendering::STP::Execute)> {
  constexpr static std::size_t size = 0x1e9c;
  constexpr static std::size_t addrs = 0x679f4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(),
                            { "Execute", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_Config>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::STP::setStaticF_s_DebugViewDescriptions(::ArrayW<::UnityEngine::GUIContent*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::GUIContent*>, "s_DebugViewDescriptions", ::UnityEngine::Rendering::STP*>(std::forward<::ArrayW<::UnityEngine::GUIContent*>>(value));
}
inline ::ArrayW<::UnityEngine::GUIContent*> UnityEngine::Rendering::STP::getStaticF_s_DebugViewDescriptions() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::GUIContent*>, "s_DebugViewDescriptions", ::UnityEngine::Rendering::STP*>();
}
inline void UnityEngine::Rendering::STP::setStaticF_s_DebugViewIndices(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_DebugViewIndices", ::UnityEngine::Rendering::STP*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::STP::getStaticF_s_DebugViewIndices() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_DebugViewIndices", ::UnityEngine::Rendering::STP*>();
}
inline void UnityEngine::Rendering::STP::setStaticF_s_PerViewConfigs(::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig>, "s_PerViewConfigs", ::UnityEngine::Rendering::STP*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig> UnityEngine::Rendering::STP::getStaticF_s_PerViewConfigs() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig>, "s_PerViewConfigs", ::UnityEngine::Rendering::STP*>();
}
inline void UnityEngine::Rendering::STP::setStaticF_kQualcommVendorId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kQualcommVendorId", ::UnityEngine::Rendering::STP*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::STP::getStaticF_kQualcommVendorId() {
  return ::cordl_internals::getStaticField<int32_t, "kQualcommVendorId", ::UnityEngine::Rendering::STP*>();
}
inline bool UnityEngine::Rendering::STP::IsSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "IsSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::STP::Jit16(int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "Jit16", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, frameIndex);
}
inline ::ArrayW<::UnityEngine::GUIContent*> UnityEngine::Rendering::STP::get_debugViewDescriptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "get_debugViewDescriptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GUIContent*>>(nullptr, ___internal_method);
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::STP::get_debugViewIndices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "get_debugViewIndices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig> UnityEngine::Rendering::STP::get_perViewConfigs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "get_perViewConfigs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::STP::set_perViewConfigs(::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "set_perViewConfigs", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::STP_PerViewConfig>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Hash128 UnityEngine::Rendering::STP::ComputeHistoryHash(::by_ref<::UnityEngine::Rendering::STP_HistoryUpdateInfo> info) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "ComputeHistoryHash", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_HistoryUpdateInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(nullptr, ___internal_method, info);
}
inline ::UnityEngine::Vector2Int UnityEngine::Rendering::STP::CalculateConvergenceTextureSize(::UnityEngine::Vector2Int historyTextureSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "CalculateConvergenceTextureSize", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, historyTextureSize);
}
inline float_t UnityEngine::Rendering::STP::CalculateMotionScale(float_t deltaTime, float_t lastDeltaTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "CalculateMotionScale", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, deltaTime, lastDeltaTime);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::STP::ExtractRotation(::UnityEngine::Matrix4x4 input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "ExtractRotation", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, input);
}
inline int32_t UnityEngine::Rendering::STP::PackVector2ToInt(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "PackVector2ToInt", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::STP::PopulateConstantData(::by_ref<::UnityEngine::Rendering::STP_Config> config, ::by_ref<::UnityEngine::Rendering::STP_StpConstantBufferData> constants) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::STP*>(),
          { "PopulateConstantData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_Config>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_StpConstantBufferData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, config, constants);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::STP::UseTexture(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(), { "UseTexture",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*>(),
                                                                                                     ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                                     ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::AccessFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, builder, texture, flags);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::STP::Execute(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                       ::by_ref<::UnityEngine::Rendering::STP_Config> config) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::STP*>(),
                          { "Execute", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_Config>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, renderGraph, config);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::STP::STP() {}
