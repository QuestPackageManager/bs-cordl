#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassRendererSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassRendererSO)
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class BloomPrePassLightTypeSO;
}
namespace GlobalNamespace {
struct BloomPrePassRendererSO_InputData;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO_LightsRenderingData;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO_PreallocationData;
}
namespace GlobalNamespace {
class IBloomPrePassParams;
}
namespace GlobalNamespace {
struct ToneMapping;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO_LightsRenderingData;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO_PreallocationData;
}
namespace GlobalNamespace {
struct BloomPrePassRendererSO_InputData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRendererSO);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRendererSO_PreallocationData);
MARK_VAL_T(::GlobalNamespace::BloomPrePassRendererSO_InputData);
// Dependencies UnityEngine.Color, UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: BloomPrePassRendererSO/InputData
struct CORDL_TYPE BloomPrePassRendererSO_InputData {
public:
  // Declarations
  /// @brief Method GetSize, addr 0x56b294c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetSize();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRendererSO_InputData();

  // Ctor Parameters [CppParam { name: "limitAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "useCollision", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "minAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startAlpha", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "endAlpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "calculatedLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "multiplyLengthByAlphaBloomFogMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "multiplyLengthByAlphaMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "center", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "lightWidthMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "endWidth", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "boostToWhite", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bloomFogIntensityMultiplier", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4",
  // modifiers: "", def_value: None }]
  constexpr BloomPrePassRendererSO_InputData(float_t limitAlpha, float_t useCollision, float_t minAlpha, float_t maxAlpha, float_t startAlpha, float_t endAlpha, float_t length,
                                             float_t calculatedLength, float_t multiplyLengthByAlphaBloomFogMultiplier, float_t multiplyLengthByAlphaMultiplier, float_t center,
                                             float_t lightWidthMultiplier, float_t startWidth, float_t endWidth, float_t boostToWhite, float_t bloomFogIntensityMultiplier, ::UnityEngine::Color color,
                                             ::UnityEngine::Matrix4x4 localToWorldMatrix) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19667 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field limitAlpha, offset: 0x0, size: 0x4, def value: None
  float_t limitAlpha;

  /// @brief Field useCollision, offset: 0x4, size: 0x4, def value: None
  float_t useCollision;

  /// @brief Field minAlpha, offset: 0x8, size: 0x4, def value: None
  float_t minAlpha;

  /// @brief Field maxAlpha, offset: 0xc, size: 0x4, def value: None
  float_t maxAlpha;

  /// @brief Field startAlpha, offset: 0x10, size: 0x4, def value: None
  float_t startAlpha;

  /// @brief Field endAlpha, offset: 0x14, size: 0x4, def value: None
  float_t endAlpha;

  /// @brief Field length, offset: 0x18, size: 0x4, def value: None
  float_t length;

  /// @brief Field calculatedLength, offset: 0x1c, size: 0x4, def value: None
  float_t calculatedLength;

  /// @brief Field multiplyLengthByAlphaBloomFogMultiplier, offset: 0x20, size: 0x4, def value: None
  float_t multiplyLengthByAlphaBloomFogMultiplier;

  /// @brief Field multiplyLengthByAlphaMultiplier, offset: 0x24, size: 0x4, def value: None
  float_t multiplyLengthByAlphaMultiplier;

  /// @brief Field center, offset: 0x28, size: 0x4, def value: None
  float_t center;

  /// @brief Field lightWidthMultiplier, offset: 0x2c, size: 0x4, def value: None
  float_t lightWidthMultiplier;

  /// @brief Field startWidth, offset: 0x30, size: 0x4, def value: None
  float_t startWidth;

  /// @brief Field endWidth, offset: 0x34, size: 0x4, def value: None
  float_t endWidth;

  /// @brief Field boostToWhite, offset: 0x38, size: 0x4, def value: None
  float_t boostToWhite;

  /// @brief Field bloomFogIntensityMultiplier, offset: 0x3c, size: 0x4, def value: None
  float_t bloomFogIntensityMultiplier;

  /// @brief Field color, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field localToWorldMatrix, offset: 0x50, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 localToWorldMatrix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, limitAlpha) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, useCollision) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, minAlpha) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, maxAlpha) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, startAlpha) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, endAlpha) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, length) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, calculatedLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, multiplyLengthByAlphaBloomFogMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, multiplyLengthByAlphaMultiplier) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, center) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, lightWidthMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, startWidth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, endWidth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, boostToWhite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, bloomFogIntensityMultiplier) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, color) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_InputData, localToWorldMatrix) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRendererSO_InputData, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRendererSO/PreallocationData
class CORDL_TYPE BloomPrePassRendererSO_PreallocationData : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lightType, put = __cordl_internal_set_lightType)) ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> lightType;

  /// @brief Field preallocateCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_preallocateCount, put = __cordl_internal_set_preallocateCount)) int32_t preallocateCount;

  static inline ::GlobalNamespace::BloomPrePassRendererSO_PreallocationData* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> const& __cordl_internal_get_lightType() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>& __cordl_internal_get_lightType();

  constexpr int32_t const& __cordl_internal_get_preallocateCount() const;

  constexpr int32_t& __cordl_internal_get_preallocateCount();

  constexpr void __cordl_internal_set_lightType(::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> value);

  constexpr void __cordl_internal_set_preallocateCount(int32_t value);

  /// @brief Method .ctor, addr 0x56b2954, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRendererSO_PreallocationData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererSO_PreallocationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRendererSO_PreallocationData(BloomPrePassRendererSO_PreallocationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererSO_PreallocationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRendererSO_PreallocationData(BloomPrePassRendererSO_PreallocationData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19668 };

  /// @brief Field lightType, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> ___lightType;

  /// @brief Field preallocateCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___preallocateCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_PreallocationData, ___lightType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_PreallocationData, ___preallocateCount) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.Rendering.SubMeshDescriptor
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRendererSO/LightsRenderingData
class CORDL_TYPE BloomPrePassRendererSO_LightsRenderingData : public ::System::Object {
public:
  // Declarations
  /// @brief Field computeShader, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_computeShader, put = __cordl_internal_set_computeShader)) ::UnityW<::UnityEngine::ComputeShader> computeShader;

  /// @brief Field computeShaderGroupSize, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_computeShaderGroupSize, put = __cordl_internal_set_computeShaderGroupSize)) int32_t computeShaderGroupSize;

  /// @brief Field computeShaderKernel, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_computeShaderKernel, put = __cordl_internal_set_computeShaderKernel)) int32_t computeShaderKernel;

  /// @brief Field inputData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_inputData,
                      put = __cordl_internal_set_inputData)) ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*>
      inputData;

  /// @brief Field inputDataBuffer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_inputDataBuffer, put = __cordl_internal_set_inputDataBuffer)) ::UnityEngine::ComputeBuffer* inputDataBuffer;

  /// @brief Field mesh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mesh, put = __cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field subMeshDescriptor, offset 0x18, size 0x30
  __declspec(property(get = __cordl_internal_get_subMeshDescriptor, put = __cordl_internal_set_subMeshDescriptor)) ::UnityEngine::Rendering::SubMeshDescriptor subMeshDescriptor;

  /// @brief Field vertexDataBuffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_vertexDataBuffer, put = __cordl_internal_set_vertexDataBuffer)) ::UnityEngine::GraphicsBuffer* vertexDataBuffer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x56b17fc, size 0xc8, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData* New_ctor();

  /// @brief Method Prepare, addr 0x56b2290, size 0x3d8, virtual false, abstract: false, final false
  inline void Prepare(int32_t numberOfLights);

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_computeShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_computeShader();

  constexpr int32_t const& __cordl_internal_get_computeShaderGroupSize() const;

  constexpr int32_t& __cordl_internal_get_computeShaderGroupSize();

  constexpr int32_t const& __cordl_internal_get_computeShaderKernel() const;

  constexpr int32_t& __cordl_internal_get_computeShaderKernel();

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*> const& __cordl_internal_get_inputData() const;

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*>& __cordl_internal_get_inputData();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_inputDataBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_inputDataBuffer();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh();

  constexpr ::UnityEngine::Rendering::SubMeshDescriptor const& __cordl_internal_get_subMeshDescriptor() const;

  constexpr ::UnityEngine::Rendering::SubMeshDescriptor& __cordl_internal_get_subMeshDescriptor();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_vertexDataBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_vertexDataBuffer();

  constexpr void __cordl_internal_set_computeShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_computeShaderGroupSize(int32_t value);

  constexpr void __cordl_internal_set_computeShaderKernel(int32_t value);

  constexpr void __cordl_internal_set_inputData(::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*> value);

  constexpr void __cordl_internal_set_inputDataBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_subMeshDescriptor(::UnityEngine::Rendering::SubMeshDescriptor value);

  constexpr void __cordl_internal_set_vertexDataBuffer(::UnityEngine::GraphicsBuffer* value);

  /// @brief Method .ctor, addr 0x56b147c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRendererSO_LightsRenderingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererSO_LightsRenderingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRendererSO_LightsRenderingData(BloomPrePassRendererSO_LightsRenderingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererSO_LightsRenderingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRendererSO_LightsRenderingData(BloomPrePassRendererSO_LightsRenderingData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19669 };

  /// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___mesh;

  /// @brief Field subMeshDescriptor, offset: 0x18, size: 0x30, def value: None
  ::UnityEngine::Rendering::SubMeshDescriptor ___subMeshDescriptor;

  /// @brief Field vertexDataBuffer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___vertexDataBuffer;

  /// @brief Field inputDataBuffer, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___inputDataBuffer;

  /// @brief Field inputData, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_InputData, ::Array<::GlobalNamespace::BloomPrePassRendererSO_InputData>*> ___inputData;

  /// @brief Field computeShader, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___computeShader;

  /// @brief Field computeShaderKernel, offset: 0x68, size: 0x4, def value: None
  int32_t ___computeShaderKernel;

  /// @brief Field computeShaderGroupSize, offset: 0x6c, size: 0x4, def value: None
  int32_t ___computeShaderGroupSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___mesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___subMeshDescriptor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___vertexDataBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___inputDataBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___inputData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___computeShader) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___computeShaderKernel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___computeShaderGroupSize) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRendererSO
class CORDL_TYPE BloomPrePassRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using InputData = ::GlobalNamespace::BloomPrePassRendererSO_InputData;

  using LightsRenderingData = ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData;

  using PreallocationData = ::GlobalNamespace::BloomPrePassRendererSO_PreallocationData;

  /// @brief Field _blackTexture, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__blackTexture, put = __cordl_internal_set__blackTexture)) ::UnityW<::UnityEngine::Texture2D> _blackTexture;

  /// @brief Field _bloomFog, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _commandBuffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__commandBuffer, put = __cordl_internal_set__commandBuffer)) ::UnityEngine::Rendering::CommandBuffer* _commandBuffer;

  /// @brief Field _computeShader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__computeShader, put = __cordl_internal_set__computeShader)) ::UnityW<::UnityEngine::ComputeShader> _computeShader;

  /// @brief Field _customFogTextureToScreenRatioID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__customFogTextureToScreenRatioID, put = setStaticF__customFogTextureToScreenRatioID)) int32_t _customFogTextureToScreenRatioID;

  /// @brief Field _initialized, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _lightData, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__lightData, put = setStaticF__lightData)) int32_t _lightData;

  /// @brief Field _lightsRenderingData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lightsRenderingData, put = __cordl_internal_set__lightsRenderingData)) ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>* _lightsRenderingData;

  /// @brief Field _lineWidth, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__lineWidth, put = setStaticF__lineWidth)) int32_t _lineWidth;

  /// @brief Field _numberOfLights, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__numberOfLights, put = setStaticF__numberOfLights)) int32_t _numberOfLights;

  /// @brief Field _preallocationData, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__preallocationData,
      put = __cordl_internal_set__preallocationData)) ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*>
      _preallocationData;

  /// @brief Field _projectionMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__projectionMatrix, put = setStaticF__projectionMatrix)) int32_t _projectionMatrix;

  /// @brief Field _stereoCameraEyeOffsetID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__stereoCameraEyeOffsetID, put = setStaticF__stereoCameraEyeOffsetID)) int32_t _stereoCameraEyeOffsetID;

  /// @brief Field _vertexTransformMatrixID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__vertexTransformMatrixID, put = setStaticF__vertexTransformMatrixID)) int32_t _vertexTransformMatrixID;

  /// @brief Field _vertices, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__vertices, put = setStaticF__vertices)) int32_t _vertices;

  /// @brief Field _viewMatrix, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__viewMatrix, put = setStaticF__viewMatrix)) int32_t _viewMatrix;

  /// @brief Field bloomPrePassTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_bloomPrePassTextureID, put = setStaticF_bloomPrePassTextureID)) int32_t bloomPrePassTextureID;

  /// @brief Method Cleanup, addr 0x56b1320, size 0x15c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CreateBloomPrePassRenderTextureIfNeeded, addr 0x56ad178, size 0x2fc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> CreateBloomPrePassRenderTextureIfNeeded(::UnityEngine::RenderTexture* renderTexture, ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams);

  /// @brief Method DisableBloomFog, addr 0x56adfa4, size 0x24, virtual false, abstract: false, final false
  inline void DisableBloomFog();

  /// @brief Method EnableBloomFog, addr 0x56addcc, size 0x28, virtual false, abstract: false, final false
  inline void EnableBloomFog();

  /// @brief Method GetCameraParams, addr 0x56ad020, size 0x158, virtual false, abstract: false, final false
  inline void GetCameraParams(::UnityEngine::Camera* camera, ::ByRef<::UnityEngine::Matrix4x4> projectionMatrix, ::ByRef<::UnityEngine::Matrix4x4> viewMatrix, ::ByRef<float_t> stereoCameraEyeOffset);

  /// @brief Method Init, addr 0x56acc2c, size 0x16c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method MatrixLerp, addr 0x56b21d4, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 MatrixLerp(::UnityEngine::Matrix4x4 from, ::UnityEngine::Matrix4x4 to, float_t t);

  static inline ::GlobalNamespace::BloomPrePassRendererSO* New_ctor();

  /// @brief Method OnDisable, addr 0x56b131c, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x56b12f0, size 0x2c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PrepareLightsMeshRendering, addr 0x56b1480, size 0x37c, virtual false, abstract: false, final false
  inline void PrepareLightsMeshRendering(::GlobalNamespace::BloomPrePassLightTypeSO* lightType, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData* data, int32_t numberOfLights);

  /// @brief Method RenderAllLights, addr 0x56b18c4, size 0x808, virtual false, abstract: false, final false
  inline void RenderAllLights(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t linesWidth);

  /// @brief Method RenderAndSetData, addr 0x56ad474, size 0x958, virtual false, abstract: false, final false
  inline void RenderAndSetData(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix, float_t stereoCameraEyeOffset,
                               ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, ::UnityEngine::RenderTexture* dest, ::ByRef<::UnityEngine::Vector2> textureToScreenRatio,
                               ::ByRef<::GlobalNamespace::ToneMapping> toneMapping);

  /// @brief Method SetCustomStereoCameraEyeOffset, addr 0x56b2130, size 0x90, virtual false, abstract: false, final false
  inline void SetCustomStereoCameraEyeOffset(float_t stereoCameraEyeOffset);

  /// @brief Method SetDataToShaders, addr 0x56addf4, size 0x114, virtual false, abstract: false, final false
  static inline void SetDataToShaders(float_t stereoCameraEyeOffset, ::UnityEngine::Vector2 textureToScreenRatio, ::UnityEngine::Texture* bloomFogTexture, ::GlobalNamespace::ToneMapping toneMapping);

  /// @brief Method UpdateBloomFogParams, addr 0x56b21c0, size 0x14, virtual false, abstract: false, final false
  inline void UpdateBloomFogParams();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__blackTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__blackTexture();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__commandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__commandBuffer();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__computeShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__computeShader();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>* const&
  __cordl_internal_get__lightsRenderingData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>*&
  __cordl_internal_get__lightsRenderingData();

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*> const&
  __cordl_internal_get__preallocationData() const;

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*>& __cordl_internal_get__preallocationData();

  constexpr void __cordl_internal_set__blackTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__commandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set__computeShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__lightsRenderingData(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>* value);

  constexpr void
  __cordl_internal_set__preallocationData(::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*> value);

  /// @brief Method .ctor, addr 0x56b2668, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__customFogTextureToScreenRatioID();

  static inline int32_t getStaticF__lightData();

  static inline int32_t getStaticF__lineWidth();

  static inline int32_t getStaticF__numberOfLights();

  static inline int32_t getStaticF__projectionMatrix();

  static inline int32_t getStaticF__stereoCameraEyeOffsetID();

  static inline int32_t getStaticF__vertexTransformMatrixID();

  static inline int32_t getStaticF__vertices();

  static inline int32_t getStaticF__viewMatrix();

  static inline int32_t getStaticF_bloomPrePassTextureID();

  static inline void setStaticF__customFogTextureToScreenRatioID(int32_t value);

  static inline void setStaticF__lightData(int32_t value);

  static inline void setStaticF__lineWidth(int32_t value);

  static inline void setStaticF__numberOfLights(int32_t value);

  static inline void setStaticF__projectionMatrix(int32_t value);

  static inline void setStaticF__stereoCameraEyeOffsetID(int32_t value);

  static inline void setStaticF__vertexTransformMatrixID(int32_t value);

  static inline void setStaticF__vertices(int32_t value);

  static inline void setStaticF__viewMatrix(int32_t value);

  static inline void setStaticF_bloomPrePassTextureID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassRendererSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassRendererSO(BloomPrePassRendererSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassRendererSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassRendererSO(BloomPrePassRendererSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19670 };

  /// @brief Field _bloomFog, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  /// @brief Field _preallocationData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*> ____preallocationData;

  /// @brief Field _computeShader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____computeShader;

  /// @brief Field _lightsRenderingData, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>* ____lightsRenderingData;

  /// @brief Field _commandBuffer, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____commandBuffer;

  /// @brief Field _initialized, offset: 0x40, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _blackTexture, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____blackTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____bloomFog) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____preallocationData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____computeShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____lightsRenderingData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____commandBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____initialized) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____blackTexture) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRendererSO, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO*, "", "BloomPrePassRendererSO");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*, "", "BloomPrePassRendererSO/LightsRenderingData");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererSO_PreallocationData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, "", "BloomPrePassRendererSO/PreallocationData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO_InputData, "", "BloomPrePassRendererSO/InputData");
