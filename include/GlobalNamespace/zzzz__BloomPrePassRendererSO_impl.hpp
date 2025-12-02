#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassRendererSO.hpp"
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
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO_InputData.GetSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::BloomPrePassRendererSO_InputData::GetSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5651ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO_InputData>::get(),
                                                                               "GetSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::BloomPrePassRendererSO_InputData::GetSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO_InputData>::get(),
                                                                             "GetSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO_PreallocationData::*)()>(
    &::GlobalNamespace::BloomPrePassRendererSO_PreallocationData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5651cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRendererSO_PreallocationData* GlobalNamespace::BloomPrePassRendererSO_PreallocationData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererSO_PreallocationData::BloomPrePassRendererSO_PreallocationData() {}
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData.Prepare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::*)(int32_t)>(
    &::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::Prepare)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x565161c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>::get(), "Prepare",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::*)()>(
    &::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::Dispose)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5650bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::*)()>(
    &::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5650834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vertexDataBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputDataBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*>&
GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_inputData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputData;
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*> const&
GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_get_inputData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputData;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::__cordl_internal_set_inputData(
    ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inputData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___computeShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>::get(), "Prepare",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfLights);
}
inline void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData* GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>());
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x56506a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56506d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::Init)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x564bfe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::Cleanup)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x56506d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "Cleanup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.RenderAndSetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t, ::GlobalNamespace::IBloomPrePassParams*, ::UnityEngine::RenderTexture*, ::ByRef<::UnityEngine::Vector2>,
    ::ByRef<::GlobalNamespace::ToneMapping>)>(&::GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData)> {
  constexpr static std::size_t size = 0x958;
  constexpr static std::size_t addrs = 0x564c82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "RenderAndSetData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::ToneMapping>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.SetDataToShaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, ::UnityEngine::Vector2, ::UnityEngine::Texture*, ::GlobalNamespace::ToneMapping)>(
    &::GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x564d1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "SetDataToShaders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.SetCustomStereoCameraEyeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(float_t)>(
    &::GlobalNamespace::BloomPrePassRendererSO::SetCustomStereoCameraEyeOffset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x56514bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "SetCustomStereoCameraEyeOffset",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.CreateBloomPrePassRenderTextureIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::UnityEngine::RenderTexture*, ::GlobalNamespace::IBloomPrePassParams*)>(&::GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x564c530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "CreateBloomPrePassRenderTextureIfNeeded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.EnableBloomFog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x564d184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                               "EnableBloomFog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.DisableBloomFog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x564d35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                               "DisableBloomFog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.UpdateBloomFogParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(
    &::GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x565154c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                               "UpdateBloomFogParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.GetCameraParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::UnityEngine::Camera*, ::ByRef<::UnityEngine::Matrix4x4>, ::ByRef<::UnityEngine::Matrix4x4>, ::ByRef<float_t>)>(&::GlobalNamespace::BloomPrePassRendererSO::GetCameraParams)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x564c3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "GetCameraParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.RenderAllLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(
    &::GlobalNamespace::BloomPrePassRendererSO::RenderAllLights)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0x5650c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "RenderAllLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.PrepareLightsMeshRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::GlobalNamespace::BloomPrePassLightTypeSO*, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*, int32_t)>(&::GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5650838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "PrepareLightsMeshRendering", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO.MatrixLerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::BloomPrePassRendererSO::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float_t)>(&::GlobalNamespace::BloomPrePassRendererSO::MatrixLerp)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5651560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "MatrixLerp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassRendererSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassRendererSO::*)()>(&::GlobalNamespace::BloomPrePassRendererSO::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x56519f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomFog)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*>&
GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__preallocationData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preallocationData;
}
constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*> const&
GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__preallocationData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preallocationData;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_set__preallocationData(
    ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preallocationData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____computeShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightsRenderingData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__commandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffer;
}
constexpr ::UnityEngine::Rendering::CommandBuffer* const& GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_get__commandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandBuffer;
}
constexpr void GlobalNamespace::BloomPrePassRendererSO::__cordl_internal_set__commandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blackTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF_bloomPrePassTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "bloomPrePassTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF_bloomPrePassTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "bloomPrePassTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__vertexTransformMatrixID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_vertexTransformMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__vertexTransformMatrixID() {
  return ::cordl_internals::getStaticField<int32_t, "_vertexTransformMatrixID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__stereoCameraEyeOffsetID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_stereoCameraEyeOffsetID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__stereoCameraEyeOffsetID() {
  return ::cordl_internals::getStaticField<int32_t, "_stereoCameraEyeOffsetID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__customFogTextureToScreenRatioID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_customFogTextureToScreenRatioID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__customFogTextureToScreenRatioID() {
  return ::cordl_internals::getStaticField<int32_t, "_customFogTextureToScreenRatioID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__vertices(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_vertices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__vertices() {
  return ::cordl_internals::getStaticField<int32_t, "_vertices", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__lightData(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lightData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__lightData() {
  return ::cordl_internals::getStaticField<int32_t, "_lightData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__viewMatrix(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_viewMatrix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__viewMatrix() {
  return ::cordl_internals::getStaticField<int32_t, "_viewMatrix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__projectionMatrix(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_projectionMatrix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__projectionMatrix() {
  return ::cordl_internals::getStaticField<int32_t, "_projectionMatrix", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::setStaticF__lineWidth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lineWidth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BloomPrePassRendererSO::getStaticF__lineWidth() {
  return ::cordl_internals::getStaticField<int32_t, "_lineWidth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get>();
}
inline void GlobalNamespace::BloomPrePassRendererSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::RenderAndSetData(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix,
                                                                      float_t stereoCameraEyeOffset, ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, ::UnityEngine::RenderTexture* dest,
                                                                      ::ByRef<::UnityEngine::Vector2> textureToScreenRatio, ::ByRef<::GlobalNamespace::ToneMapping> toneMapping) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "RenderAndSetData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::ToneMapping>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraPos, projectionMatrix, viewMatrix, stereoCameraEyeOffset, bloomPrePassParams, dest, textureToScreenRatio,
                                                          toneMapping);
}
inline void GlobalNamespace::BloomPrePassRendererSO::SetDataToShaders(float_t stereoCameraEyeOffset, ::UnityEngine::Vector2 textureToScreenRatio, ::UnityEngine::Texture* bloomFogTexture,
                                                                      ::GlobalNamespace::ToneMapping toneMapping) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "SetDataToShaders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ToneMapping>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stereoCameraEyeOffset, textureToScreenRatio, bloomFogTexture, toneMapping);
}
inline void GlobalNamespace::BloomPrePassRendererSO::SetCustomStereoCameraEyeOffset(float_t stereoCameraEyeOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "SetCustomStereoCameraEyeOffset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stereoCameraEyeOffset);
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::BloomPrePassRendererSO::CreateBloomPrePassRenderTextureIfNeeded(::UnityEngine::RenderTexture* renderTexture,
                                                                                                                               ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "CreateBloomPrePassRenderTextureIfNeeded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBloomPrePassParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>, false>(this, ___internal_method, renderTexture, bloomPrePassParams);
}
inline void GlobalNamespace::BloomPrePassRendererSO::EnableBloomFog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                             "EnableBloomFog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::DisableBloomFog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                             "DisableBloomFog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::UpdateBloomFogParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                             "UpdateBloomFogParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassRendererSO::GetCameraParams(::UnityEngine::Camera* camera, ::ByRef<::UnityEngine::Matrix4x4> projectionMatrix, ::ByRef<::UnityEngine::Matrix4x4> viewMatrix,
                                                                     ::ByRef<float_t> stereoCameraEyeOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "GetCameraParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, projectionMatrix, viewMatrix, stereoCameraEyeOffset);
}
inline void GlobalNamespace::BloomPrePassRendererSO::RenderAllLights(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t linesWidth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(),
                                                                             "RenderAllLights", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewMatrix, projectionMatrix, linesWidth);
}
inline void GlobalNamespace::BloomPrePassRendererSO::PrepareLightsMeshRendering(::GlobalNamespace::BloomPrePassLightTypeSO* lightType,
                                                                                ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData* data, int32_t numberOfLights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "PrepareLightsMeshRendering", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassLightTypeSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightType, data, numberOfLights);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::BloomPrePassRendererSO::MatrixLerp(::UnityEngine::Matrix4x4 from, ::UnityEngine::Matrix4x4 to, float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), "MatrixLerp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, from, to, t);
}
inline void GlobalNamespace::BloomPrePassRendererSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassRendererSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassRendererSO* GlobalNamespace::BloomPrePassRendererSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassRendererSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassRendererSO::BloomPrePassRendererSO() {}
