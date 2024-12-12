#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassRendererSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassRendererSO)
namespace GlobalNamespace {
class BloomFogSO;
}
namespace GlobalNamespace {
class BloomPrePassLightTypeSO;
}
namespace GlobalNamespace {
struct BloomPrePassLight_QuadData;
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
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRendererSO);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData);
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRendererSO_PreallocationData);
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

  /// @brief Method .ctor, addr 0x39daf3c, size 0x10, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16259 };

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
  /// @brief Field lightQuads, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lightQuads,
                      put = __cordl_internal_set_lightQuads)) ::ArrayW<::GlobalNamespace::BloomPrePassLight_QuadData, ::Array<::GlobalNamespace::BloomPrePassLight_QuadData>*>
      lightQuads;

  /// @brief Field mesh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mesh, put = __cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field subMeshDescriptor, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_subMeshDescriptor, put = __cordl_internal_set_subMeshDescriptor)) ::UnityEngine::Rendering::SubMeshDescriptor subMeshDescriptor;

  static inline ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassLight_QuadData, ::Array<::GlobalNamespace::BloomPrePassLight_QuadData>*> const& __cordl_internal_get_lightQuads() const;

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassLight_QuadData, ::Array<::GlobalNamespace::BloomPrePassLight_QuadData>*>& __cordl_internal_get_lightQuads();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh();

  constexpr ::UnityEngine::Rendering::SubMeshDescriptor const& __cordl_internal_get_subMeshDescriptor() const;

  constexpr ::UnityEngine::Rendering::SubMeshDescriptor& __cordl_internal_get_subMeshDescriptor();

  constexpr void __cordl_internal_set_lightQuads(::ArrayW<::GlobalNamespace::BloomPrePassLight_QuadData, ::Array<::GlobalNamespace::BloomPrePassLight_QuadData>*> value);

  constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_subMeshDescriptor(::UnityEngine::Rendering::SubMeshDescriptor value);

  /// @brief Method .ctor, addr 0x39d9f70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16260 };

  /// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___mesh;

  /// @brief Field lightQuads, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BloomPrePassLight_QuadData, ::Array<::GlobalNamespace::BloomPrePassLight_QuadData>*> ___lightQuads;

  /// @brief Field subMeshDescriptor, offset: 0x20, size: 0x30, def value: None
  ::UnityEngine::Rendering::SubMeshDescriptor ___subMeshDescriptor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___mesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___lightQuads) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, ___subMeshDescriptor) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassRendererSO
class CORDL_TYPE BloomPrePassRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LightsRenderingData = ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData;

  using PreallocationData = ::GlobalNamespace::BloomPrePassRendererSO_PreallocationData;

  /// @brief Field _blackTexture, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__blackTexture, put = __cordl_internal_set__blackTexture)) ::UnityW<::UnityEngine::Texture2D> _blackTexture;

  /// @brief Field _bloomFog, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog)) ::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _bloomPrePassTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__bloomPrePassTextureID, put = setStaticF__bloomPrePassTextureID)) int32_t _bloomPrePassTextureID;

  /// @brief Field _commandBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__commandBuffer, put = __cordl_internal_set__commandBuffer)) ::UnityEngine::Rendering::CommandBuffer* _commandBuffer;

  /// @brief Field _customFogTextureToScreenRatioID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__customFogTextureToScreenRatioID, put = setStaticF__customFogTextureToScreenRatioID)) int32_t _customFogTextureToScreenRatioID;

  /// @brief Field _initialized, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _lightsRenderingData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightsRenderingData, put = __cordl_internal_set__lightsRenderingData)) ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>* _lightsRenderingData;

  /// @brief Field _lowestResBloomTexture, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lowestResBloomTexture, put = __cordl_internal_set__lowestResBloomTexture)) ::UnityW<::UnityEngine::RenderTexture> _lowestResBloomTexture;

  /// @brief Field _preallocationData, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__preallocationData,
      put = __cordl_internal_set__preallocationData)) ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*>
      _preallocationData;

  /// @brief Field _stereoCameraEyeOffsetID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__stereoCameraEyeOffsetID, put = setStaticF__stereoCameraEyeOffsetID)) int32_t _stereoCameraEyeOffsetID;

  /// @brief Field _vertexTransformMatrixID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__vertexTransformMatrixID, put = setStaticF__vertexTransformMatrixID)) int32_t _vertexTransformMatrixID;

  /// @brief Method Cleanup, addr 0x39d9dd8, size 0x198, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CreateBloomPrePassRenderTextureIfNeeded, addr 0x39d5e50, size 0x2f0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> CreateBloomPrePassRenderTextureIfNeeded(::UnityEngine::RenderTexture* renderTexture, ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams);

  /// @brief Method DisableBloomFog, addr 0x39d6ce4, size 0x1c, virtual false, abstract: false, final false
  inline void DisableBloomFog();

  /// @brief Method EnableBloomFog, addr 0x39d6b40, size 0x1c, virtual false, abstract: false, final false
  inline void EnableBloomFog();

  /// @brief Method GetCameraParams, addr 0x39d5cdc, size 0x174, virtual false, abstract: false, final false
  inline void GetCameraParams(::UnityEngine::Camera* camera, ::ByRef<::UnityEngine::Matrix4x4> projectionMatrix, ::ByRef<::UnityEngine::Matrix4x4> viewMatrix, ::ByRef<float_t> stereoCameraEyeOffset);

  /// @brief Method Init, addr 0x39d589c, size 0x140, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method MatrixLerp, addr 0x39dad0c, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 MatrixLerp(::UnityEngine::Matrix4x4 from, ::UnityEngine::Matrix4x4 to, float_t t);

  static inline ::GlobalNamespace::BloomPrePassRendererSO* New_ctor();

  /// @brief Method OnDisable, addr 0x39d9dd4, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x39d9db8, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PrepareLightsMeshRendering, addr 0x39d9f78, size 0x4f4, virtual false, abstract: false, final false
  inline void PrepareLightsMeshRendering(::GlobalNamespace::BloomPrePassLightTypeSO* lightType, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData* data, int32_t numberOfLights);

  /// @brief Method RenderAllLights, addr 0x39da46c, size 0x788, virtual false, abstract: false, final false
  inline void RenderAllLights(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t linesWidth);

  /// @brief Method RenderAndSetData, addr 0x39d6140, size 0xa00, virtual false, abstract: false, final false
  inline void RenderAndSetData(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix, float_t stereoCameraEyeOffset,
                               ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, ::UnityEngine::RenderTexture* dest, ::ByRef<::UnityEngine::Vector2> textureToScreenRatio,
                               ::ByRef<::GlobalNamespace::ToneMapping> toneMapping);

  /// @brief Method SetCustomStereoCameraEyeOffset, addr 0x39dac88, size 0x6c, virtual false, abstract: false, final false
  inline void SetCustomStereoCameraEyeOffset(float_t stereoCameraEyeOffset);

  /// @brief Method SetDataToShaders, addr 0x39d6b5c, size 0xf4, virtual false, abstract: false, final false
  static inline void SetDataToShaders(float_t stereoCameraEyeOffset, ::UnityEngine::Vector2 textureToScreenRatio, ::UnityEngine::Texture* bloomFogTexture, ::GlobalNamespace::ToneMapping toneMapping);

  /// @brief Method UpdateBloomFogParams, addr 0x39dacf4, size 0x18, virtual false, abstract: false, final false
  inline void UpdateBloomFogParams();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__blackTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__blackTexture();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__commandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__commandBuffer();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>* const&
  __cordl_internal_get__lightsRenderingData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>*&
  __cordl_internal_get__lightsRenderingData();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__lowestResBloomTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__lowestResBloomTexture();

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*> const&
  __cordl_internal_get__preallocationData() const;

  constexpr ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*>& __cordl_internal_get__preallocationData();

  constexpr void __cordl_internal_set__blackTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__commandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__lightsRenderingData(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>* value);

  constexpr void __cordl_internal_set__lowestResBloomTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void
  __cordl_internal_set__preallocationData(::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*> value);

  /// @brief Method .ctor, addr 0x39dadc4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__bloomPrePassTextureID();

  static inline int32_t getStaticF__customFogTextureToScreenRatioID();

  static inline int32_t getStaticF__stereoCameraEyeOffsetID();

  static inline int32_t getStaticF__vertexTransformMatrixID();

  static inline void setStaticF__bloomPrePassTextureID(int32_t value);

  static inline void setStaticF__customFogTextureToScreenRatioID(int32_t value);

  static inline void setStaticF__stereoCameraEyeOffsetID(int32_t value);

  static inline void setStaticF__vertexTransformMatrixID(int32_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16261 };

  /// @brief Field _bloomFog, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  /// @brief Field _preallocationData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, ::Array<::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*>*> ____preallocationData;

  /// @brief Field _lightsRenderingData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*>* ____lightsRenderingData;

  /// @brief Field _commandBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ____commandBuffer;

  /// @brief Field _initialized, offset: 0x38, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _blackTexture, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____blackTexture;

  /// @brief Field _lowestResBloomTexture, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____lowestResBloomTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____bloomFog) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____preallocationData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____lightsRenderingData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____commandBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____initialized) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____blackTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____lowestResBloomTexture) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRendererSO, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO*, "", "BloomPrePassRendererSO");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO_LightsRenderingData*, "", "BloomPrePassRendererSO/LightsRenderingData");
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererSO_PreallocationData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO_PreallocationData*, "", "BloomPrePassRendererSO/PreallocationData");
