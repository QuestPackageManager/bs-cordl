#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemRenderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct ParticleSystemBakeMeshOptions;
}
namespace UnityEngine {
struct ParticleSystemBakeTextureOptions;
}
namespace UnityEngine {
struct ParticleSystemMeshDistribution;
}
namespace UnityEngine {
struct ParticleSystemRenderMode;
}
namespace UnityEngine {
struct ParticleSystemRenderSpace;
}
namespace UnityEngine {
struct ParticleSystemRenderer_BakeTextureOutput;
}
namespace UnityEngine {
struct ParticleSystemSortMode;
}
namespace UnityEngine {
struct ParticleSystemVertexStream;
}
namespace UnityEngine {
struct ParticleSystemVertexStreams;
}
namespace UnityEngine {
struct SpriteMaskInteraction;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystemRenderer;
}
namespace UnityEngine {
struct ParticleSystemRenderer_BakeTextureOutput;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ParticleSystemRenderer);
MARK_VAL_T(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemRenderer/BakeTextureOutput
struct CORDL_TYPE ParticleSystemRenderer_BakeTextureOutput {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemRenderer_BakeTextureOutput();

  // Ctor Parameters [CppParam { name: "vertices", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::UnityW<::UnityEngine::Texture2D>",
  // modifiers: "", def_value: None }]
  constexpr ParticleSystemRenderer_BakeTextureOutput(::UnityW<::UnityEngine::Texture2D> vertices, ::UnityW<::UnityEngine::Texture2D> indices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17304 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field vertices, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> vertices;

  /// @brief Field indices, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> indices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput, indices) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystemRenderer
class CORDL_TYPE ParticleSystemRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  using BakeTextureOutput = ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput;

  __declspec(property(get = get_activeTrailVertexStreamsCount)) int32_t activeTrailVertexStreamsCount;

  __declspec(property(get = get_activeVertexStreamsCount)) int32_t activeVertexStreamsCount;

  __declspec(property(get = get_alignment, put = set_alignment)) ::UnityEngine::ParticleSystemRenderSpace alignment;

  __declspec(property(get = get_allowRoll, put = set_allowRoll)) bool allowRoll;

  __declspec(property(get = get_cameraVelocityScale, put = set_cameraVelocityScale)) float_t cameraVelocityScale;

  __declspec(property(get = get_enableGPUInstancing, put = set_enableGPUInstancing)) bool enableGPUInstancing;

  __declspec(property(get = get_flip, put = set_flip)) ::UnityEngine::Vector3 flip;

  __declspec(property(get = get_freeformStretching, put = set_freeformStretching)) bool freeformStretching;

  __declspec(property(get = get_lengthScale, put = set_lengthScale)) float_t lengthScale;

  __declspec(property(get = get_maskInteraction, put = set_maskInteraction)) ::UnityEngine::SpriteMaskInteraction maskInteraction;

  __declspec(property(get = get_maxParticleSize, put = set_maxParticleSize)) float_t maxParticleSize;

  __declspec(property(get = get_mesh, put = set_mesh)) ::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_meshCount)) int32_t meshCount;

  __declspec(property(get = get_meshDistribution, put = set_meshDistribution)) ::UnityEngine::ParticleSystemMeshDistribution meshDistribution;

  __declspec(property(get = get_minParticleSize, put = set_minParticleSize)) float_t minParticleSize;

  __declspec(property(get = get_normalDirection, put = set_normalDirection)) float_t normalDirection;

  __declspec(property(put = set_oldTrailMaterial)) ::UnityW<::UnityEngine::Material> oldTrailMaterial;

  __declspec(property(get = get_pivot, put = set_pivot)) ::UnityEngine::Vector3 pivot;

  __declspec(property(get = get_renderMode, put = set_renderMode)) ::UnityEngine::ParticleSystemRenderMode renderMode;

  __declspec(property(get = get_rotateWithStretchDirection, put = set_rotateWithStretchDirection)) bool rotateWithStretchDirection;

  __declspec(property(get = get_shadowBias, put = set_shadowBias)) float_t shadowBias;

  __declspec(property(get = get_sortMode, put = set_sortMode)) ::UnityEngine::ParticleSystemSortMode sortMode;

  __declspec(property(get = get_sortingFudge, put = set_sortingFudge)) float_t sortingFudge;

  __declspec(property(get = get_trailMaterial, put = set_trailMaterial)) ::UnityW<::UnityEngine::Material> trailMaterial;

  __declspec(property(get = get_velocityScale, put = set_velocityScale)) float_t velocityScale;

  /// @brief Method AreVertexStreamsEnabled, addr 0x48f2520, size 0x1c, virtual false, abstract: false, final false
  inline bool AreVertexStreamsEnabled(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method BakeMesh, addr 0x48f291c, size 0x5c, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeMesh, addr 0x48f28b8, size 0x64, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeMesh, addr 0x48f3908, size 0x64, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeMesh, addr 0x48f2880, size 0x38, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method BakeTexture, addr 0x48f3a08, size 0xf4, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::ByRef<::UnityEngine::Texture2D*> verticesTexture, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTexture, addr 0x48f3bc8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::ByRef<::UnityEngine::Texture2D*> verticesTexture, ::ByRef<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::Camera* camera,
                             ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTexture, addr 0x48f3b68, size 0x60, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::ByRef<::UnityEngine::Texture2D*> verticesTexture, ::ByRef<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTexture, addr 0x48f39d0, size 0x38, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::ByRef<::UnityEngine::Texture2D*> verticesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTextureInternal, addr 0x48f3c04, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput BakeTextureInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture, ::UnityEngine::Camera* camera,
                                                                                     ::UnityEngine::ParticleSystemBakeTextureOptions options, ::ByRef<int32_t> indexCount);

  /// @brief Method BakeTextureInternal_Injected, addr 0x48f3c90, size 0x84, virtual false, abstract: false, final false
  inline void BakeTextureInternal_Injected(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture, ::UnityEngine::Camera* camera,
                                           ::UnityEngine::ParticleSystemBakeTextureOptions options, ::ByRef<int32_t> indexCount, ::ByRef<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput> ret);

  /// @brief Method BakeTextureNoIndicesInternal, addr 0x48f3afc, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> BakeTextureNoIndicesInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Camera* camera,
                                                                         ::UnityEngine::ParticleSystemBakeTextureOptions options, ::ByRef<int32_t> indexCount);

  /// @brief Method BakeTrailsMesh, addr 0x48f2a14, size 0x5c, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeTrailsMesh, addr 0x48f29b0, size 0x64, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeTrailsMesh, addr 0x48f396c, size 0x64, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeTrailsMesh, addr 0x48f2978, size 0x38, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method BakeTrailsTexture, addr 0x48f3d74, size 0x3c, virtual false, abstract: false, final false
  inline int32_t BakeTrailsTexture(::ByRef<::UnityEngine::Texture2D*> verticesTexture, ::ByRef<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::Camera* camera,
                                   ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTrailsTexture, addr 0x48f3d14, size 0x60, virtual false, abstract: false, final false
  inline int32_t BakeTrailsTexture(::ByRef<::UnityEngine::Texture2D*> verticesTexture, ::ByRef<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTrailsTextureInternal, addr 0x48f3db0, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput BakeTrailsTextureInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture,
                                                                                           ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeTextureOptions options,
                                                                                           ::ByRef<int32_t> indexCount);

  /// @brief Method BakeTrailsTextureInternal_Injected, addr 0x48f3e3c, size 0x84, virtual false, abstract: false, final false
  inline void BakeTrailsTextureInternal_Injected(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture, ::UnityEngine::Camera* camera,
                                                 ::UnityEngine::ParticleSystemBakeTextureOptions options, ::ByRef<int32_t> indexCount,
                                                 ::ByRef<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput> ret);

  /// @brief Method DisableVertexStreams, addr 0x48f2518, size 0x8, virtual false, abstract: false, final false
  inline void DisableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method EnableVertexStreams, addr 0x48f1848, size 0x8, virtual false, abstract: false, final false
  inline void EnableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method GetActiveTrailVertexStreams, addr 0x48f3f40, size 0x44, virtual false, abstract: false, final false
  inline void GetActiveTrailVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method GetActiveVertexStreams, addr 0x48f27f8, size 0x44, virtual false, abstract: false, final false
  inline void GetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method GetEnabledVertexStreams, addr 0x48f27b8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemVertexStreams GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method GetMeshWeightings, addr 0x48f37d8, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetMeshWeightings(::ByRef<::ArrayW<float_t, ::Array<float_t>*>> weightings);

  /// @brief Method GetMeshes, addr 0x48f36e4, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetMeshes(::ByRef<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>> meshes);

  /// @brief Method Internal_GetEnabledVertexStreams, addr 0x48f253c, size 0x27c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemVertexStreams Internal_GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method Internal_SetVertexStreams, addr 0x48f1850, size 0xcc8, virtual false, abstract: false, final false
  inline void Internal_SetVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams, bool enabled);

  static inline ::UnityEngine::ParticleSystemRenderer* New_ctor();

  /// @brief Method SetActiveTrailVertexStreams, addr 0x48f3efc, size 0x44, virtual false, abstract: false, final false
  inline void SetActiveTrailVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method SetActiveVertexStreams, addr 0x48f283c, size 0x44, virtual false, abstract: false, final false
  inline void SetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method SetMeshWeightings, addr 0x48f3870, size 0x5c, virtual false, abstract: false, final false
  inline void SetMeshWeightings(::ArrayW<float_t, ::Array<float_t>*> weightings);

  /// @brief Method SetMeshWeightings, addr 0x48f381c, size 0x54, virtual false, abstract: false, final false
  inline void SetMeshWeightings(::ArrayW<float_t, ::Array<float_t>*> weightings, int32_t size);

  /// @brief Method SetMeshes, addr 0x48f377c, size 0x5c, virtual false, abstract: false, final false
  inline void SetMeshes(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes);

  /// @brief Method SetMeshes, addr 0x48f3728, size 0x54, virtual false, abstract: false, final false
  inline void SetMeshes(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, int32_t size);

  /// @brief Method .ctor, addr 0x48f3f84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeTrailVertexStreamsCount, addr 0x48f3ec0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_activeTrailVertexStreamsCount();

  /// @brief Method get_activeVertexStreamsCount, addr 0x48f27bc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_activeVertexStreamsCount();

  /// @brief Method get_alignment, addr 0x48f2a70, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderSpace get_alignment();

  /// @brief Method get_allowRoll, addr 0x48f34e4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowRoll();

  /// @brief Method get_cameraVelocityScale, addr 0x48f2d80, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_cameraVelocityScale();

  /// @brief Method get_enableGPUInstancing, addr 0x48f3464, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enableGPUInstancing();

  /// @brief Method get_flip, addr 0x48f31e8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_flip();

  /// @brief Method get_flip_Injected, addr 0x48f3244, size 0x44, virtual false, abstract: false, final false
  inline void get_flip_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_freeformStretching, addr 0x48f3564, size 0x3c, virtual false, abstract: false, final false
  inline bool get_freeformStretching();

  /// @brief Method get_lengthScale, addr 0x48f2c70, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_lengthScale();

  /// @brief Method get_maskInteraction, addr 0x48f3320, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction();

  /// @brief Method get_maxParticleSize, addr 0x48f3028, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxParticleSize();

  /// @brief Method get_mesh, addr 0x48f3664, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_meshCount, addr 0x48f38cc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_meshCount();

  /// @brief Method get_meshDistribution, addr 0x48f2b70, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemMeshDistribution get_meshDistribution();

  /// @brief Method get_minParticleSize, addr 0x48f2fa0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_minParticleSize();

  /// @brief Method get_normalDirection, addr 0x48f2e08, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_normalDirection();

  /// @brief Method get_pivot, addr 0x48f30b0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivot();

  /// @brief Method get_pivot_Injected, addr 0x48f310c, size 0x44, virtual false, abstract: false, final false
  inline void get_pivot_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_renderMode, addr 0x48f2af0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderMode get_renderMode();

  /// @brief Method get_rotateWithStretchDirection, addr 0x48f35e4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_rotateWithStretchDirection();

  /// @brief Method get_shadowBias, addr 0x48f2e90, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_shadowBias();

  /// @brief Method get_sortMode, addr 0x48f2bf0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemSortMode get_sortMode();

  /// @brief Method get_sortingFudge, addr 0x48f2f18, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_sortingFudge();

  /// @brief Method get_trailMaterial, addr 0x48f33a0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_trailMaterial();

  /// @brief Method get_velocityScale, addr 0x48f2cf8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_velocityScale();

  /// @brief Method set_alignment, addr 0x48f2aac, size 0x44, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::ParticleSystemRenderSpace value);

  /// @brief Method set_allowRoll, addr 0x48f3520, size 0x44, virtual false, abstract: false, final false
  inline void set_allowRoll(bool value);

  /// @brief Method set_cameraVelocityScale, addr 0x48f2dbc, size 0x4c, virtual false, abstract: false, final false
  inline void set_cameraVelocityScale(float_t value);

  /// @brief Method set_enableGPUInstancing, addr 0x48f34a0, size 0x44, virtual false, abstract: false, final false
  inline void set_enableGPUInstancing(bool value);

  /// @brief Method set_flip, addr 0x48f3288, size 0x54, virtual false, abstract: false, final false
  inline void set_flip(::UnityEngine::Vector3 value);

  /// @brief Method set_flip_Injected, addr 0x48f32dc, size 0x44, virtual false, abstract: false, final false
  inline void set_flip_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_freeformStretching, addr 0x48f35a0, size 0x44, virtual false, abstract: false, final false
  inline void set_freeformStretching(bool value);

  /// @brief Method set_lengthScale, addr 0x48f2cac, size 0x4c, virtual false, abstract: false, final false
  inline void set_lengthScale(float_t value);

  /// @brief Method set_maskInteraction, addr 0x48f335c, size 0x44, virtual false, abstract: false, final false
  inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_maxParticleSize, addr 0x48f3064, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxParticleSize(float_t value);

  /// @brief Method set_mesh, addr 0x48f36a0, size 0x44, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method set_meshDistribution, addr 0x48f2bac, size 0x44, virtual false, abstract: false, final false
  inline void set_meshDistribution(::UnityEngine::ParticleSystemMeshDistribution value);

  /// @brief Method set_minParticleSize, addr 0x48f2fdc, size 0x4c, virtual false, abstract: false, final false
  inline void set_minParticleSize(float_t value);

  /// @brief Method set_normalDirection, addr 0x48f2e44, size 0x4c, virtual false, abstract: false, final false
  inline void set_normalDirection(float_t value);

  /// @brief Method set_oldTrailMaterial, addr 0x48f3420, size 0x44, virtual false, abstract: false, final false
  inline void set_oldTrailMaterial(::UnityEngine::Material* value);

  /// @brief Method set_pivot, addr 0x48f3150, size 0x54, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector3 value);

  /// @brief Method set_pivot_Injected, addr 0x48f31a4, size 0x44, virtual false, abstract: false, final false
  inline void set_pivot_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_renderMode, addr 0x48f2b2c, size 0x44, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::ParticleSystemRenderMode value);

  /// @brief Method set_rotateWithStretchDirection, addr 0x48f3620, size 0x44, virtual false, abstract: false, final false
  inline void set_rotateWithStretchDirection(bool value);

  /// @brief Method set_shadowBias, addr 0x48f2ecc, size 0x4c, virtual false, abstract: false, final false
  inline void set_shadowBias(float_t value);

  /// @brief Method set_sortMode, addr 0x48f2c2c, size 0x44, virtual false, abstract: false, final false
  inline void set_sortMode(::UnityEngine::ParticleSystemSortMode value);

  /// @brief Method set_sortingFudge, addr 0x48f2f54, size 0x4c, virtual false, abstract: false, final false
  inline void set_sortingFudge(float_t value);

  /// @brief Method set_trailMaterial, addr 0x48f33dc, size 0x44, virtual false, abstract: false, final false
  inline void set_trailMaterial(::UnityEngine::Material* value);

  /// @brief Method set_velocityScale, addr 0x48f2d34, size 0x4c, virtual false, abstract: false, final false
  inline void set_velocityScale(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemRenderer(ParticleSystemRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemRenderer(ParticleSystemRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17305 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ParticleSystemRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemRenderer*, "UnityEngine", "ParticleSystemRenderer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput, "UnityEngine", "ParticleSystemRenderer/BakeTextureOutput");
