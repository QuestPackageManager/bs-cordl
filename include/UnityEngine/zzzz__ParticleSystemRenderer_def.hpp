#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
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
struct ParticleSystemMeshDistribution;
}
namespace UnityEngine {
struct ParticleSystemRenderMode;
}
namespace UnityEngine {
struct ParticleSystemRenderSpace;
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
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystemRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ParticleSystemRenderer);
// Type: UnityEngine::ParticleSystemRenderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ParticleSystemRenderer*
class CORDL_TYPE ParticleSystemRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_activeVertexStreamsCount)) int32_t activeVertexStreamsCount;

  __declspec(property(get = get_alignment, put = set_alignment))::UnityEngine::ParticleSystemRenderSpace alignment;

  __declspec(property(get = get_allowRoll, put = set_allowRoll)) bool allowRoll;

  __declspec(property(get = get_cameraVelocityScale, put = set_cameraVelocityScale)) float_t cameraVelocityScale;

  __declspec(property(get = get_enableGPUInstancing, put = set_enableGPUInstancing)) bool enableGPUInstancing;

  __declspec(property(get = get_flip, put = set_flip))::UnityEngine::Vector3 flip;

  __declspec(property(get = get_freeformStretching, put = set_freeformStretching)) bool freeformStretching;

  __declspec(property(get = get_lengthScale, put = set_lengthScale)) float_t lengthScale;

  __declspec(property(get = get_maskInteraction, put = set_maskInteraction))::UnityEngine::SpriteMaskInteraction maskInteraction;

  __declspec(property(get = get_maxParticleSize, put = set_maxParticleSize)) float_t maxParticleSize;

  __declspec(property(get = get_mesh, put = set_mesh))::UnityW<::UnityEngine::Mesh> mesh;

  __declspec(property(get = get_meshCount)) int32_t meshCount;

  __declspec(property(get = get_meshDistribution, put = set_meshDistribution))::UnityEngine::ParticleSystemMeshDistribution meshDistribution;

  __declspec(property(get = get_minParticleSize, put = set_minParticleSize)) float_t minParticleSize;

  __declspec(property(get = get_normalDirection, put = set_normalDirection)) float_t normalDirection;

  __declspec(property(put = set_oldTrailMaterial))::UnityW<::UnityEngine::Material> oldTrailMaterial;

  __declspec(property(get = get_pivot, put = set_pivot))::UnityEngine::Vector3 pivot;

  __declspec(property(get = get_renderMode, put = set_renderMode))::UnityEngine::ParticleSystemRenderMode renderMode;

  __declspec(property(get = get_rotateWithStretchDirection, put = set_rotateWithStretchDirection)) bool rotateWithStretchDirection;

  __declspec(property(get = get_shadowBias, put = set_shadowBias)) float_t shadowBias;

  __declspec(property(get = get_sortMode, put = set_sortMode))::UnityEngine::ParticleSystemSortMode sortMode;

  __declspec(property(get = get_sortingFudge, put = set_sortingFudge)) float_t sortingFudge;

  __declspec(property(get = get_trailMaterial, put = set_trailMaterial))::UnityW<::UnityEngine::Material> trailMaterial;

  __declspec(property(get = get_velocityScale, put = set_velocityScale)) float_t velocityScale;

  /// @brief Method AreVertexStreamsEnabled, addr 0x2e0e134, size 0x1c, virtual false, abstract: false, final false
  inline bool AreVertexStreamsEnabled(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method BakeMesh, addr 0x2e0d398, size 0x5c, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeMesh, addr 0x2e0d334, size 0x64, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method BakeTrailsMesh, addr 0x2e0d458, size 0x5c, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeTrailsMesh, addr 0x2e0d3f4, size 0x64, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method DisableVertexStreams, addr 0x2e0e12c, size 0x8, virtual false, abstract: false, final false
  inline void DisableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method EnableVertexStreams, addr 0x2e0d578, size 0x8, virtual false, abstract: false, final false
  inline void EnableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method GetActiveVertexStreams, addr 0x2e0d534, size 0x44, virtual false, abstract: false, final false
  inline void GetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method GetEnabledVertexStreams, addr 0x2e0e3cc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemVertexStreams GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method GetMeshWeightings, addr 0x2e0d204, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetMeshWeightings(ByRef<::ArrayW<float_t, ::Array<float_t>*>> weightings);

  /// @brief Method GetMeshes, addr 0x2e0d110, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetMeshes(ByRef<::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*>> meshes);

  /// @brief Method Internal_GetEnabledVertexStreams, addr 0x2e0e150, size 0x27c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemVertexStreams Internal_GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// @brief Method Internal_SetVertexStreams, addr 0x2e0d580, size 0xbac, virtual false, abstract: false, final false
  inline void Internal_SetVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams, bool enabled);

  static inline ::UnityEngine::ParticleSystemRenderer* New_ctor();

  /// @brief Method SetActiveVertexStreams, addr 0x2e0d4f0, size 0x44, virtual false, abstract: false, final false
  inline void SetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method SetMeshWeightings, addr 0x2e0d29c, size 0x5c, virtual false, abstract: false, final false
  inline void SetMeshWeightings(::ArrayW<float_t, ::Array<float_t>*> weightings);

  /// @brief Method SetMeshWeightings, addr 0x2e0d248, size 0x54, virtual false, abstract: false, final false
  inline void SetMeshWeightings(::ArrayW<float_t, ::Array<float_t>*> weightings, int32_t size);

  /// @brief Method SetMeshes, addr 0x2e0d1a8, size 0x5c, virtual false, abstract: false, final false
  inline void SetMeshes(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes);

  /// @brief Method SetMeshes, addr 0x2e0d154, size 0x54, virtual false, abstract: false, final false
  inline void SetMeshes(::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, int32_t size);

  /// @brief Method .ctor, addr 0x2e0e3d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeVertexStreamsCount, addr 0x2e0d4b4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_activeVertexStreamsCount();

  /// @brief Method get_alignment, addr 0x2e0c49c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderSpace get_alignment();

  /// @brief Method get_allowRoll, addr 0x2e0cf10, size 0x3c, virtual false, abstract: false, final false
  inline bool get_allowRoll();

  /// @brief Method get_cameraVelocityScale, addr 0x2e0c7ac, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_cameraVelocityScale();

  /// @brief Method get_enableGPUInstancing, addr 0x2e0ce90, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enableGPUInstancing();

  /// @brief Method get_flip, addr 0x2e0cc14, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_flip();

  /// @brief Method get_flip_Injected, addr 0x2e0cc70, size 0x44, virtual false, abstract: false, final false
  inline void get_flip_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_freeformStretching, addr 0x2e0cf90, size 0x3c, virtual false, abstract: false, final false
  inline bool get_freeformStretching();

  /// @brief Method get_lengthScale, addr 0x2e0c69c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_lengthScale();

  /// @brief Method get_maskInteraction, addr 0x2e0cd4c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction();

  /// @brief Method get_maxParticleSize, addr 0x2e0ca54, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxParticleSize();

  /// @brief Method get_mesh, addr 0x2e0d090, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_meshCount, addr 0x2e0d2f8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_meshCount();

  /// @brief Method get_meshDistribution, addr 0x2e0c59c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemMeshDistribution get_meshDistribution();

  /// @brief Method get_minParticleSize, addr 0x2e0c9cc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_minParticleSize();

  /// @brief Method get_normalDirection, addr 0x2e0c834, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_normalDirection();

  /// @brief Method get_pivot, addr 0x2e0cadc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivot();

  /// @brief Method get_pivot_Injected, addr 0x2e0cb38, size 0x44, virtual false, abstract: false, final false
  inline void get_pivot_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_renderMode, addr 0x2e0c51c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderMode get_renderMode();

  /// @brief Method get_rotateWithStretchDirection, addr 0x2e0d010, size 0x3c, virtual false, abstract: false, final false
  inline bool get_rotateWithStretchDirection();

  /// @brief Method get_shadowBias, addr 0x2e0c8bc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_shadowBias();

  /// @brief Method get_sortMode, addr 0x2e0c61c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemSortMode get_sortMode();

  /// @brief Method get_sortingFudge, addr 0x2e0c944, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_sortingFudge();

  /// @brief Method get_trailMaterial, addr 0x2e0cdcc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_trailMaterial();

  /// @brief Method get_velocityScale, addr 0x2e0c724, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_velocityScale();

  /// @brief Method set_alignment, addr 0x2e0c4d8, size 0x44, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::ParticleSystemRenderSpace value);

  /// @brief Method set_allowRoll, addr 0x2e0cf4c, size 0x44, virtual false, abstract: false, final false
  inline void set_allowRoll(bool value);

  /// @brief Method set_cameraVelocityScale, addr 0x2e0c7e8, size 0x4c, virtual false, abstract: false, final false
  inline void set_cameraVelocityScale(float_t value);

  /// @brief Method set_enableGPUInstancing, addr 0x2e0cecc, size 0x44, virtual false, abstract: false, final false
  inline void set_enableGPUInstancing(bool value);

  /// @brief Method set_flip, addr 0x2e0ccb4, size 0x54, virtual false, abstract: false, final false
  inline void set_flip(::UnityEngine::Vector3 value);

  /// @brief Method set_flip_Injected, addr 0x2e0cd08, size 0x44, virtual false, abstract: false, final false
  inline void set_flip_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_freeformStretching, addr 0x2e0cfcc, size 0x44, virtual false, abstract: false, final false
  inline void set_freeformStretching(bool value);

  /// @brief Method set_lengthScale, addr 0x2e0c6d8, size 0x4c, virtual false, abstract: false, final false
  inline void set_lengthScale(float_t value);

  /// @brief Method set_maskInteraction, addr 0x2e0cd88, size 0x44, virtual false, abstract: false, final false
  inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_maxParticleSize, addr 0x2e0ca90, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxParticleSize(float_t value);

  /// @brief Method set_mesh, addr 0x2e0d0cc, size 0x44, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method set_meshDistribution, addr 0x2e0c5d8, size 0x44, virtual false, abstract: false, final false
  inline void set_meshDistribution(::UnityEngine::ParticleSystemMeshDistribution value);

  /// @brief Method set_minParticleSize, addr 0x2e0ca08, size 0x4c, virtual false, abstract: false, final false
  inline void set_minParticleSize(float_t value);

  /// @brief Method set_normalDirection, addr 0x2e0c870, size 0x4c, virtual false, abstract: false, final false
  inline void set_normalDirection(float_t value);

  /// @brief Method set_oldTrailMaterial, addr 0x2e0ce4c, size 0x44, virtual false, abstract: false, final false
  inline void set_oldTrailMaterial(::UnityEngine::Material* value);

  /// @brief Method set_pivot, addr 0x2e0cb7c, size 0x54, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector3 value);

  /// @brief Method set_pivot_Injected, addr 0x2e0cbd0, size 0x44, virtual false, abstract: false, final false
  inline void set_pivot_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_renderMode, addr 0x2e0c558, size 0x44, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::ParticleSystemRenderMode value);

  /// @brief Method set_rotateWithStretchDirection, addr 0x2e0d04c, size 0x44, virtual false, abstract: false, final false
  inline void set_rotateWithStretchDirection(bool value);

  /// @brief Method set_shadowBias, addr 0x2e0c8f8, size 0x4c, virtual false, abstract: false, final false
  inline void set_shadowBias(float_t value);

  /// @brief Method set_sortMode, addr 0x2e0c658, size 0x44, virtual false, abstract: false, final false
  inline void set_sortMode(::UnityEngine::ParticleSystemSortMode value);

  /// @brief Method set_sortingFudge, addr 0x2e0c980, size 0x4c, virtual false, abstract: false, final false
  inline void set_sortingFudge(float_t value);

  /// @brief Method set_trailMaterial, addr 0x2e0ce08, size 0x44, virtual false, abstract: false, final false
  inline void set_trailMaterial(::UnityEngine::Material* value);

  /// @brief Method set_velocityScale, addr 0x2e0c760, size 0x4c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ParticleSystemRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemRenderer*, "UnityEngine", "ParticleSystemRenderer");
