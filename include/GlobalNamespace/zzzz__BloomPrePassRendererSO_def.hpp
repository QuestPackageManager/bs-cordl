#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class IBloomPrePassParams;
}
namespace GlobalNamespace {
struct ToneMapping;
}
namespace GlobalNamespace {
struct __BloomPrePassLight__QuadData;
}
namespace GlobalNamespace {
class __BloomPrePassRendererSO__LightsRenderingData;
}
namespace GlobalNamespace {
class __BloomPrePassRendererSO__PreallocationData;
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
class __BloomPrePassRendererSO__LightsRenderingData;
}
namespace GlobalNamespace {
class __BloomPrePassRendererSO__PreallocationData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassRendererSO);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData);
MARK_REF_PTR_T(::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData);
// Type: ::PreallocationData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassRendererSO::PreallocationData*
class CORDL_TYPE __BloomPrePassRendererSO__PreallocationData : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lightType, put = __cordl_internal_set_lightType))::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> lightType;

  /// @brief Field preallocateCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_preallocateCount, put = __cordl_internal_set_preallocateCount)) int32_t preallocateCount;

  static inline ::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> const& __cordl_internal_get_lightType() const;

  constexpr ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>& __cordl_internal_get_lightType();

  constexpr int32_t const& __cordl_internal_get_preallocateCount() const;

  constexpr int32_t& __cordl_internal_get_preallocateCount();

  constexpr void __cordl_internal_set_lightType(::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> value);

  constexpr void __cordl_internal_set_preallocateCount(int32_t value);

  /// @brief Method .ctor, addr 0x23eb41c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassRendererSO__PreallocationData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassRendererSO__PreallocationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomPrePassRendererSO__PreallocationData(__BloomPrePassRendererSO__PreallocationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassRendererSO__PreallocationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomPrePassRendererSO__PreallocationData(__BloomPrePassRendererSO__PreallocationData const&) = delete;

  /// @brief Field lightType, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO> ___lightType;

  /// @brief Field preallocateCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___preallocateCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData, ___lightType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData, ___preallocateCount) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightsRenderingData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassRendererSO::LightsRenderingData*
class CORDL_TYPE __BloomPrePassRendererSO__LightsRenderingData : public ::System::Object {
public:
  // Declarations
  /// @brief Field lightQuads, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lightQuads,
                      put = __cordl_internal_set_lightQuads))::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*> lightQuads;

  /// @brief Field mesh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mesh, put = __cordl_internal_set_mesh))::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field subMeshDescriptor, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_subMeshDescriptor, put = __cordl_internal_set_subMeshDescriptor))::UnityEngine::Rendering::SubMeshDescriptor subMeshDescriptor;

  static inline ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*> const& __cordl_internal_get_lightQuads() const;

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*>& __cordl_internal_get_lightQuads();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh();

  constexpr ::UnityEngine::Rendering::SubMeshDescriptor const& __cordl_internal_get_subMeshDescriptor() const;

  constexpr ::UnityEngine::Rendering::SubMeshDescriptor& __cordl_internal_get_subMeshDescriptor();

  constexpr void __cordl_internal_set_lightQuads(::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*> value);

  constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_subMeshDescriptor(::UnityEngine::Rendering::SubMeshDescriptor value);

  /// @brief Method .ctor, addr 0x23ea40c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomPrePassRendererSO__LightsRenderingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassRendererSO__LightsRenderingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomPrePassRendererSO__LightsRenderingData(__BloomPrePassRendererSO__LightsRenderingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomPrePassRendererSO__LightsRenderingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomPrePassRendererSO__LightsRenderingData(__BloomPrePassRendererSO__LightsRenderingData const&) = delete;

  /// @brief Field mesh, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___mesh;

  /// @brief Field lightQuads, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BloomPrePassLight__QuadData, ::Array<::GlobalNamespace::__BloomPrePassLight__QuadData>*> ___lightQuads;

  /// @brief Field subMeshDescriptor, offset: 0x20, size: 0x30, def value: None
  ::UnityEngine::Rendering::SubMeshDescriptor ___subMeshDescriptor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData, ___mesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData, ___lightQuads) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData, ___subMeshDescriptor) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BloomPrePassRendererSO
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassRendererSO*
class CORDL_TYPE BloomPrePassRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LightsRenderingData = ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData;

  using PreallocationData = ::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData;

  /// @brief Field _blackTexture, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__blackTexture, put = __cordl_internal_set__blackTexture))::UnityW<::UnityEngine::Texture2D> _blackTexture;

  /// @brief Field _bloomFog, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bloomFog, put = __cordl_internal_set__bloomFog))::UnityW<::GlobalNamespace::BloomFogSO> _bloomFog;

  /// @brief Field _bloomPrePassTextureID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__bloomPrePassTextureID, put = setStaticF__bloomPrePassTextureID)) int32_t _bloomPrePassTextureID;

  /// @brief Field _commandBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__commandBuffer, put = __cordl_internal_set__commandBuffer))::UnityEngine::Rendering::CommandBuffer* _commandBuffer;

  /// @brief Field _customFogTextureToScreenRatioID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__customFogTextureToScreenRatioID, put = setStaticF__customFogTextureToScreenRatioID)) int32_t _customFogTextureToScreenRatioID;

  /// @brief Field _initialized, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _lightsRenderingData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightsRenderingData, put = __cordl_internal_set__lightsRenderingData))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>* _lightsRenderingData;

  /// @brief Field _lowestResBloomTexture, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lowestResBloomTexture, put = __cordl_internal_set__lowestResBloomTexture))::UnityW<::UnityEngine::RenderTexture> _lowestResBloomTexture;

  /// @brief Field _preallocationData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__preallocationData,
                      put = __cordl_internal_set__preallocationData))::ArrayW<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*,
                                                                              ::Array<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>*> _preallocationData;

  /// @brief Field _stereoCameraEyeOffsetID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__stereoCameraEyeOffsetID, put = setStaticF__stereoCameraEyeOffsetID)) int32_t _stereoCameraEyeOffsetID;

  /// @brief Field _vertexTransformMatrixID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__vertexTransformMatrixID, put = setStaticF__vertexTransformMatrixID)) int32_t _vertexTransformMatrixID;

  /// @brief Method Cleanup, addr 0x23ea274, size 0x198, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CreateBloomPrePassRenderTextureIfNeeded, addr 0x23e5cec, size 0x2f0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> CreateBloomPrePassRenderTextureIfNeeded(::UnityEngine::RenderTexture* renderTexture, ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams);

  /// @brief Method DisableBloomFog, addr 0x23e6b8c, size 0x1c, virtual false, abstract: false, final false
  inline void DisableBloomFog();

  /// @brief Method EnableBloomFog, addr 0x23e69e8, size 0x1c, virtual false, abstract: false, final false
  inline void EnableBloomFog();

  /// @brief Method GetCameraParams, addr 0x23e5b44, size 0x1a8, virtual false, abstract: false, final false
  inline void GetCameraParams(::UnityEngine::Camera* camera, ByRef<::UnityEngine::Matrix4x4> projectionMatrix, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<float_t> stereoCameraEyeOffset);

  /// @brief Method Init, addr 0x23e5708, size 0x144, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method MatrixLerp, addr 0x23eb1ec, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 MatrixLerp(::UnityEngine::Matrix4x4 from, ::UnityEngine::Matrix4x4 to, float_t t);

  static inline ::GlobalNamespace::BloomPrePassRendererSO* New_ctor();

  /// @brief Method OnDisable, addr 0x23ea270, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x23ea254, size 0x1c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PrepareLightsMeshRendering, addr 0x23ea414, size 0x4fc, virtual false, abstract: false, final false
  inline void PrepareLightsMeshRendering(::GlobalNamespace::BloomPrePassLightTypeSO* lightType, ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData* data, int32_t numberOfLights);

  /// @brief Method RenderAllLights, addr 0x23ea910, size 0x7c4, virtual false, abstract: false, final false
  inline void RenderAllLights(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float_t linesWidth);

  /// @brief Method RenderAndSetData, addr 0x23e5fdc, size 0xa0c, virtual false, abstract: false, final false
  inline void RenderAndSetData(::UnityEngine::Vector3 cameraPos, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix, float_t stereoCameraEyeOffset,
                               ::GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, ::UnityEngine::RenderTexture* dest, ByRef<::UnityEngine::Vector2> textureToScreenRatio,
                               ByRef<::GlobalNamespace::ToneMapping> toneMapping);

  /// @brief Method SetCustomStereoCameraEyeOffset, addr 0x23eb168, size 0x6c, virtual false, abstract: false, final false
  inline void SetCustomStereoCameraEyeOffset(float_t stereoCameraEyeOffset);

  /// @brief Method SetDataToShaders, addr 0x23e6a04, size 0xf4, virtual false, abstract: false, final false
  static inline void SetDataToShaders(float_t stereoCameraEyeOffset, ::UnityEngine::Vector2 textureToScreenRatio, ::UnityEngine::Texture* bloomFogTexture, ::GlobalNamespace::ToneMapping toneMapping);

  /// @brief Method UpdateBloomFogParams, addr 0x23eb1d4, size 0x18, virtual false, abstract: false, final false
  inline void UpdateBloomFogParams();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__blackTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__blackTexture();

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& __cordl_internal_get__bloomFog() const;

  constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& __cordl_internal_get__bloomFog();

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__commandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get__commandBuffer() const;

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>*&
  __cordl_internal_get__lightsRenderingData();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>*> const&
  __cordl_internal_get__lightsRenderingData() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__lowestResBloomTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__lowestResBloomTexture();

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*, ::Array<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>*> const&
  __cordl_internal_get__preallocationData() const;

  constexpr ::ArrayW<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*, ::Array<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>*>&
  __cordl_internal_get__preallocationData();

  constexpr void __cordl_internal_set__blackTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value);

  constexpr void __cordl_internal_set__commandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__lightsRenderingData(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>* value);

  constexpr void __cordl_internal_set__lowestResBloomTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void
  __cordl_internal_set__preallocationData(::ArrayW<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*, ::Array<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>*> value);

  /// @brief Method .ctor, addr 0x23eb2a4, size 0x7c, virtual false, abstract: false, final false
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

  /// @brief Field _bloomFog, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BloomFogSO> ____bloomFog;

  /// @brief Field _preallocationData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*, ::Array<::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*>*> ____preallocationData;

  /// @brief Field _lightsRenderingData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::BloomPrePassLightTypeSO>, ::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*>* ____lightsRenderingData;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassRendererSO, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____bloomFog) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____preallocationData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____lightsRenderingData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____commandBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____initialized) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____blackTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassRendererSO, ____lowestResBloomTexture) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO*, "", "BloomPrePassRendererSO");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassRendererSO__LightsRenderingData*, "", "BloomPrePassRendererSO/LightsRenderingData");
NEED_NO_BOX(::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BloomPrePassRendererSO__PreallocationData*, "", "BloomPrePassRendererSO/PreallocationData");
