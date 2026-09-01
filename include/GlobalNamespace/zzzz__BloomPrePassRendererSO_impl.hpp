#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassRendererSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassLightTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__IBloomPrePassParams_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO_InputData.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::BloomPrePassRendererSO_InputData::GetSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5865f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO_InputData>(), { "GetSize", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::BloomPrePassRendererSO_InputData::GetSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO_InputData>(), { "GetSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "limitAlpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "useCollision", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "minAlpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxAlpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "startAlpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "endAlpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "calculatedLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "multiplyLengthByAlphaBloomFogMultiplier", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "multiplyLengthByAlphaMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "center", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightWidthMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startWidth", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "endWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "boostToWhite", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "bloomFogIntensityMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BloomPrePassRendererSO_InputData::BloomPrePassRendererSO_InputData(float_t limitAlpha, float_t useCollision, float_t minAlpha, float_t maxAlpha, float_t startAlpha,
                                                                                                float_t endAlpha, float_t length, float_t calculatedLength,
                                                                                                float_t multiplyLengthByAlphaBloomFogMultiplier, float_t multiplyLengthByAlphaMultiplier,
                                                                                                float_t center, float_t lightWidthMultiplier, float_t startWidth, float_t endWidth,
                                                                                                float_t boostToWhite, float_t bloomFogIntensityMultiplier, ::UnityEngine::Color color,
                                                                                                ::UnityEngine::Matrix4x4 localToWorldMatrix) noexcept {
  this->limitAlpha = limitAlpha;
  this->useCollision = useCollision;
  this->minAlpha = minAlpha;
  this->maxAlpha = maxAlpha;
  this->startAlpha = startAlpha;
  this->endAlpha = endAlpha;
  this->length = length;
  this->calculatedLength = calculatedLength;
  this->multiplyLengthByAlphaBloomFogMultiplier = multiplyLengthByAlphaBloomFogMultiplier;
  this->multiplyLengthByAlphaMultiplier = multiplyLengthByAlphaMultiplier;
  this->center = center;
  this->lightWidthMultiplier = lightWidthMultiplier;
  this->startWidth = startWidth;
  this->endWidth = endWidth;
  this->boostToWhite = boostToWhite;
  this->bloomFogIntensityMultiplier = bloomFogIntensityMultiplier;
  this->color = color;
  this->localToWorldMatrix = localToWorldMatrix;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererSO_InputData::BloomPrePassRendererSO_InputData() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO_PreallocationData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO_PreallocationData::*)()>(&::GlobalNamespace::BloomPrePassRendererSO_PreallocationData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5865f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>& GlobalNamespace::BloomPrePassRendererSO_PreallocationData::__cordl_internal_get_lightType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightType;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> const& GlobalNamespace::BloomPrePassRendererSO_PreallocationData::__cordl_internal_get_lightType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightType;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_PreallocationData::__cordl_internal_set_lightType(::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightType = value;
}
constexpr int32_t& GlobalNamespace::BloomPrePassRendererSO_PreallocationData::__cordl_internal_get_preallocateCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preallocateCount;
}
constexpr int32_t const& GlobalNamespace::BloomPrePassRendererSO_PreallocationData::__cordl_internal_get_preallocateCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preallocateCount;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_PreallocationData::__cordl_internal_set_preallocateCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preallocateCount = value;
}
inline void GlobalNamespace::BloomPrePassRendererSO_PreallocationData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRendererSO_PreallocationData* GlobalNamespace::BloomPrePassRendererSO_PreallocationData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererSO_PreallocationData::BloomPrePassRendererSO_PreallocationData() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData.Prepare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::*)(int32_t)>(
    &::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::Prepare)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5865868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>(), { "Prepare", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::*)()>(
    &::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::Dispose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x586495c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::*)()>(
    &::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58645dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_mesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_mesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mesh;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mesh = value;
}
constexpr ::UnityEngine::Rendering::SubMeshDescriptor& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_subMeshDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subMeshDescriptor;
}
constexpr ::UnityEngine::Rendering::SubMeshDescriptor const& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_subMeshDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subMeshDescriptor;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_set_subMeshDescriptor(::UnityEngine::Rendering::SubMeshDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subMeshDescriptor = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_vertexDataBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexDataBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_vertexDataBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vertexDataBuffer;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_set_vertexDataBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vertexDataBuffer = value;
}
constexpr ::UnityEngine::ComputeBuffer*& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_inputDataBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputDataBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_inputDataBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputDataBuffer;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_set_inputDataBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputDataBuffer = value;
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData>& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_inputData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputData;
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData> const& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_inputData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputData;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_set_inputData(::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputData = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_computeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_computeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShader;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_set_computeShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___computeShader = value;
}
constexpr int32_t& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_computeShaderKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShaderKernel;
}
constexpr int32_t const& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_computeShaderKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShaderKernel;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_set_computeShaderKernel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___computeShaderKernel = value;
}
constexpr int32_t& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_computeShaderGroupSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShaderGroupSize;
}
constexpr int32_t const& GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_computeShaderGroupSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShaderGroupSize;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_set_computeShaderGroupSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___computeShaderGroupSize = value;
}
inline void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::Prepare(int32_t numberOfLights) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>(), { "Prepare", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfLights);
}
inline void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData* GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::BloomPrePassRendererSO_LightsRenderingData() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5864450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586447c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::Init)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x585f59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::Cleanup)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5864480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.RenderAndSetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector4, ::GlobalNamespace::IBloomPrePassParams*,
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::by_ref<::UnityEngine::Vector2>, ::by_ref<::GlobalNamespace::ToneMapping>)>(&::GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData)> {
  constexpr static std::size_t size = 0x8a8;
  constexpr static std::size_t addrs = 0x5863a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                         { "RenderAndSetData",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                             ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::GlobalNamespace::IBloomPrePassParams*>(),
                                             ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ToneMapping>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.SetDataToShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::GlobalNamespace::ToneMapping)>(
    &::GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58642d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                                                           { "SetDataToShaders",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::GlobalNamespace::ToneMapping>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.CreateBloomPrePassRenderTextureIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::UnityEngine::RenderTexture*, ::GlobalNamespace::IBloomPrePassParams*)>(&::GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x586520c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                            { "CreateBloomPrePassRenderTextureIfNeeded", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::GlobalNamespace::IBloomPrePassParams*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.EnableBloomFog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5864a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "EnableBloomFog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.DisableBloomFog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5865518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "DisableBloomFog", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.UpdateBloomFogParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5865530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "UpdateBloomFogParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.GetCameraParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>,
                                                                ::by_ref<::UnityEngine::Vector4>)>(&::GlobalNamespace::BloomPrePassRendererSO::GetCameraParams)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5863864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                             { "GetCameraParams",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.GetCameraParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Vector4>)>(
    &::GlobalNamespace::BloomPrePassRendererSO::GetCameraParams)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x58656c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                             { "GetCameraParams",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.ComputeStereoCameraEyeOffsets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::BloomPrePassRendererSO::ComputeStereoCameraEyeOffsets)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5865600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
            { "ComputeStereoCameraEyeOffsets", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.RenderAllLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4,
                                                                                                           float_t)>(&::GlobalNamespace::BloomPrePassRendererSO::RenderAllLights)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x5864a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                                                           { "RenderAllLights",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                                               ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.PrepareLightsMeshRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::GlobalNamespace::BloomPrePassLightTypeSO*, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*, int32_t)>(&::GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x58645e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                             { "PrepareLightsMeshRendering",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BloomPrePassLightTypeSO*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.MatrixLerp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(
    &::GlobalNamespace::BloomPrePassRendererSO::MatrixLerp)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5865544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                { "MatrixLerp", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5865c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__bloomFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__bloomFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomFog = value;
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__preallocationData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preallocationData;
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*> const& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__preallocationData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preallocationData;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_set__preallocationData(::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preallocationData = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__computeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____computeShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__computeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____computeShader;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_set__computeShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____computeShader = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>*&
GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__lightsRenderingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsRenderingData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>* const&
GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__lightsRenderingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightsRenderingData;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_set__lightsRenderingData(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightsRenderingData = value;
}
constexpr bool& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__blackTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__blackTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackTexture;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_set__blackTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blackTexture = value;
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF_useAsymmetricStereoBloomOffsets(bool value) {
  ::cordl_internals::setStaticField<bool, "useAsymmetricStereoBloomOffsets", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::BloomPrePassRendererSO::getStaticF_useAsymmetricStereoBloomOffsets() {
  return ::cordl_internals::getStaticField<bool, "useAsymmetricStereoBloomOffsets", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF_bloomPrePassTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "bloomPrePassTextureID", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF_bloomPrePassTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "bloomPrePassTextureID", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__vertexTransformMatrixID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_vertexTransformMatrixID", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__vertexTransformMatrixID() {
  return ::cordl_internals::getStaticField<int32_t, "_vertexTransformMatrixID", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__stereoCameraEyeOffsetsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stereoCameraEyeOffsetsID", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__stereoCameraEyeOffsetsID() {
  return ::cordl_internals::getStaticField<int32_t, "_stereoCameraEyeOffsetsID", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__customFogTextureToScreenRatioID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_customFogTextureToScreenRatioID", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__customFogTextureToScreenRatioID() {
  return ::cordl_internals::getStaticField<int32_t, "_customFogTextureToScreenRatioID", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__vertices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_vertices", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__vertices() {
  return ::cordl_internals::getStaticField<int32_t, "_vertices", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__lightData(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lightData", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__lightData() {
  return ::cordl_internals::getStaticField<int32_t, "_lightData", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__viewMatrix(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_viewMatrix", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__viewMatrix() {
  return ::cordl_internals::getStaticField<int32_t, "_viewMatrix", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__numberOfLights(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_numberOfLights", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__numberOfLights() {
  return ::cordl_internals::getStaticField<int32_t, "_numberOfLights", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__projectionMatrix(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_projectionMatrix", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__projectionMatrix() {
  return ::cordl_internals::getStaticField<int32_t, "_projectionMatrix", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__lineWidth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lineWidth", ::GlobalNamespace::BloomPrePassRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__lineWidth() {
  return ::cordl_internals::getStaticField<int32_t, "_lineWidth", ::GlobalNamespace::BloomPrePassRendererSO*>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector3 cameraPos, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                      ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Vector4 stereoCameraEyeOffsets,
                                                                      ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams,
                                                                      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempTextures,
                                                                      ::UnityEngine::Rendering::RenderGraphModule::TextureHandle lightsTexture,
                                                                      ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destTexture, ::by_ref<::UnityEngine::Vector2> textureToScreenRatio,
                                                                      ::by_ref<::GlobalNamespace::ToneMapping> toneMapping) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                       { "RenderAndSetData",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                           ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::GlobalNamespace::IBloomPrePassParams*>(),
                                           ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ToneMapping>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffsets, bloomPrePassParams, tempTextures, lightsTexture,
                                                   destTexture, textureToScreenRatio, toneMapping);
}
inline void GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 stereoCameraEyeOffsets,
                                                                      ::UnityEngine::Vector2 textureToScreenRatio, ::GlobalNamespace::ToneMapping toneMapping) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                                                         { "SetDataToShaders",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(),
                                                                                             ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::GlobalNamespace::ToneMapping>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, stereoCameraEyeOffsets, textureToScreenRatio, toneMapping);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded(::UnityEngine::RenderTexture* renderTexture,
                                                                                                                               ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                          { "CreateBloomPrePassRenderTextureIfNeeded", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::GlobalNamespace::IBloomPrePassParams*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method, renderTexture, bloomPrePassParams);
}
inline void GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "EnableBloomFog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "DisableBloomFog", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { "UpdateBloomFogParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::GetCameraParams(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::by_ref<::UnityEngine::Matrix4x4> projectionMatrix,
                                                                     ::by_ref<::UnityEngine::Matrix4x4> viewMatrix, ::by_ref<::UnityEngine::Vector4> stereoCameraEyeOffsets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                           { "GetCameraParams",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraData, projectionMatrix, viewMatrix, stereoCameraEyeOffsets);
}
inline void GlobalNamespace::BloomPrePassRendererSO::GetCameraParams(::UnityEngine::Camera* camera, ::by_ref<::UnityEngine::Matrix4x4> projectionMatrix, ::by_ref<::UnityEngine::Matrix4x4> viewMatrix,
                                                                     ::by_ref<::UnityEngine::Vector4> stereoCameraEyeOffsets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                           { "GetCameraParams",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, projectionMatrix, viewMatrix, stereoCameraEyeOffsets);
}
inline ::UnityEngine::Vector4 GlobalNamespace::BloomPrePassRendererSO::ComputeStereoCameraEyeOffsets(::UnityEngine::Matrix4x4 leftEyeProjectionMatrix,
                                                                                                     ::UnityEngine::Matrix4x4 rightEyeProjectionMatrix, ::UnityEngine::Matrix4x4 prepassProjection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
          { "ComputeStereoCameraEyeOffsets", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, leftEyeProjectionMatrix, rightEyeProjectionMatrix, prepassProjection);
}
inline void GlobalNamespace::BloomPrePassRendererSO::RenderAllLights(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                     float_t linesWidth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                                                         { "RenderAllLights",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                                             ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, viewMatrix, projectionMatrix, linesWidth);
}
inline void GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering(::GlobalNamespace::BloomPrePassLightTypeSO* lightType,
                                                                                ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData* data, int32_t numberOfLights) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                                           { "PrepareLightsMeshRendering",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BloomPrePassLightTypeSO*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightType, data, numberOfLights);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::BloomPrePassRendererSO::MatrixLerp(::UnityEngine::Matrix4x4 from, ::UnityEngine::Matrix4x4 to, float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(),
                                              { "MatrixLerp", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, from, to, t);
}
inline void GlobalNamespace::BloomPrePassRendererSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassRendererSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRendererSO* GlobalNamespace::BloomPrePassRendererSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassRendererSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererSO::BloomPrePassRendererSO() {}
