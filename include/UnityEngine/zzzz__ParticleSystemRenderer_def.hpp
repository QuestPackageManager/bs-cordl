#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemRenderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
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
MARK_REF_T(::UnityEngine::ParticleSystemRenderer*);
MARK_VAL_T(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemRenderer*, "UnityEngine", "ParticleSystemRenderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput, "UnityEngine", "ParticleSystemRenderer/BakeTextureOutput");
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

  // Ctor Parameters [CppParam { name: "vertices", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty:
  // "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }]
  constexpr ParticleSystemRenderer_BakeTextureOutput(::UnityW<::UnityEngine::Texture2D> vertices, ::UnityW<::UnityEngine::Texture2D> indices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21935 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [NativeName("first")]
  /// @brief Field vertices, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> vertices;

  /// [NativeName("second")]
  /// @brief Field indices, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> indices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput, indices) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystemRenderer_BakeTextureOutput) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemRendererScriptBindings.h")]
// [NativeHeader("Modules/ParticleSystem/ParticleSystemRenderer.h")]
// [NativeHeader("ParticleSystemScriptingClasses.h")]
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

  /// @brief [NativeName("RenderAlignment")]
  __declspec(property(get = get_alignment, put = set_alignment)) ::UnityEngine::ParticleSystemRenderSpace alignment;

  __declspec(property(get = get_allowRoll, put = set_allowRoll)) bool allowRoll;

  __declspec(property(get = get_applyActiveColorSpace, put = set_applyActiveColorSpace)) bool applyActiveColorSpace;

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

  /// [Obsolete("AreVertexStreamsEnabled is deprecated. Use GetActiveVertexStreams instead.", false)]
  /// @brief Method AreVertexStreamsEnabled, addr 0x7008cb8, size 0x1c, virtual false, abstract: false, final false
  inline bool AreVertexStreamsEnabled(::UnityEngine::ParticleSystemVertexStreams streams);

  /// [Obsolete("BakeMesh with useTransform is deprecated. Use BakeMesh with ParticleSystemBakeMeshOptions instead.", false)]
  /// @brief Method BakeMesh, addr 0x70093e0, size 0x14, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeMesh, addr 0x700c348, size 0x38, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// [Obsolete("BakeMesh with useTransform is deprecated. Use BakeMesh with ParticleSystemBakeMeshOptions instead.", false)]
  /// @brief Method BakeMesh, addr 0x70093a0, size 0x40, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method BakeMesh, addr 0x70093f4, size 0x158, virtual false, abstract: false, final false
  inline void BakeMesh(/* [NotNull] */ ::UnityEngine::Mesh* mesh, /* [NotNull] */ ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeMesh_Injected, addr 0x700c380, size 0x5c, virtual false, abstract: false, final false
  static inline void BakeMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, ::System::IntPtr camera, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeTexture, addr 0x700c4a8, size 0xac, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTexture, addr 0x700c820, size 0x40, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::Camera* camera,
                             ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTexture, addr 0x700c7bc, size 0x64, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTexture, addr 0x700c470, size 0x38, virtual false, abstract: false, final false
  inline int32_t BakeTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::BakeTexture", HasExplicitThis = true)]
  /// @brief Method BakeTextureInternal, addr 0x700c860, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput BakeTextureInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture,
                                                                                     /* [NotNull] */ ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeTextureOptions options,
                                                                                     ::by_ref<int32_t> indexCount);

  /// @brief Method BakeTextureInternal_Injected, addr 0x700c9d4, size 0x84, virtual false, abstract: false, final false
  static inline void BakeTextureInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr verticesTexture, ::System::IntPtr indicesTexture, ::System::IntPtr camera,
                                                  ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount,
                                                  ::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput> ret);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::BakeTextureNoIndices", HasExplicitThis = true)]
  /// @brief Method BakeTextureNoIndicesInternal, addr 0x700c554, size 0x1fc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> BakeTextureNoIndicesInternal(::UnityEngine::Texture2D* verticesTexture, /* [NotNull] */ ::UnityEngine::Camera* camera,
                                                                         ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount);

  /// @brief Method BakeTextureNoIndicesInternal_Injected, addr 0x700c750, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::IntPtr BakeTextureNoIndicesInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr verticesTexture, ::System::IntPtr camera,
                                                                       ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount);

  /// [Obsolete("BakeTrailsMesh with useTransform is deprecated. Use BakeTrailsMesh with ParticleSystemBakeMeshOptions instead.", false)]
  /// @brief Method BakeTrailsMesh, addr 0x700958c, size 0x14, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeTrailsMesh, addr 0x700c3dc, size 0x38, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// [Obsolete("BakeTrailsMesh with useTransform is deprecated. Use BakeTrailsMesh with ParticleSystemBakeMeshOptions instead.", false)]
  /// @brief Method BakeTrailsMesh, addr 0x700954c, size 0x40, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method BakeTrailsMesh, addr 0x70095a0, size 0x158, virtual false, abstract: false, final false
  inline void BakeTrailsMesh(/* [NotNull] */ ::UnityEngine::Mesh* mesh, /* [NotNull] */ ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeTrailsMesh_Injected, addr 0x700c414, size 0x5c, virtual false, abstract: false, final false
  static inline void BakeTrailsMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, ::System::IntPtr camera, ::UnityEngine::ParticleSystemBakeMeshOptions options);

  /// @brief Method BakeTrailsTexture, addr 0x700cabc, size 0x40, virtual false, abstract: false, final false
  inline int32_t BakeTrailsTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::Camera* camera,
                                   ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// @brief Method BakeTrailsTexture, addr 0x700ca58, size 0x64, virtual false, abstract: false, final false
  inline int32_t BakeTrailsTexture(::by_ref<::UnityEngine::Texture2D*> verticesTexture, ::by_ref<::UnityEngine::Texture2D*> indicesTexture, ::UnityEngine::ParticleSystemBakeTextureOptions options);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::BakeTrailsTexture", HasExplicitThis = true)]
  /// @brief Method BakeTrailsTextureInternal, addr 0x700cafc, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderer_BakeTextureOutput BakeTrailsTextureInternal(::UnityEngine::Texture2D* verticesTexture, ::UnityEngine::Texture2D* indicesTexture,
                                                                                           /* [NotNull] */ ::UnityEngine::Camera* camera, ::UnityEngine::ParticleSystemBakeTextureOptions options,
                                                                                           ::by_ref<int32_t> indexCount);

  /// @brief Method BakeTrailsTextureInternal_Injected, addr 0x700cc70, size 0x84, virtual false, abstract: false, final false
  static inline void BakeTrailsTextureInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr verticesTexture, ::System::IntPtr indicesTexture, ::System::IntPtr camera,
                                                        ::UnityEngine::ParticleSystemBakeTextureOptions options, ::by_ref<int32_t> indexCount,
                                                        ::by_ref<::UnityEngine::ParticleSystemRenderer_BakeTextureOutput> ret);

  /// [Obsolete("DisableVertexStreams is deprecated. Use SetActiveVertexStreams instead.", false)]
  /// @brief Method DisableVertexStreams, addr 0x7008cb0, size 0x8, virtual false, abstract: false, final false
  inline void DisableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// [Obsolete("EnableVertexStreams is deprecated. Use SetActiveVertexStreams instead.", false)]
  /// @brief Method EnableVertexStreams, addr 0x70080cc, size 0x8, virtual false, abstract: false, final false
  inline void EnableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::GetActiveTrailVertexStreams", HasExplicitThis = true)]
  /// @brief Method GetActiveTrailVertexStreams, addr 0x700d0b8, size 0x200, virtual false, abstract: false, final false
  inline void GetActiveTrailVertexStreams(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method GetActiveTrailVertexStreams_Injected, addr 0x700d2b8, size 0x44, virtual false, abstract: false, final false
  static inline void GetActiveTrailVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::GetActiveVertexStreams", HasExplicitThis = true)]
  /// @brief Method GetActiveVertexStreams, addr 0x7008fa0, size 0x200, virtual false, abstract: false, final false
  inline void GetActiveVertexStreams(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method GetActiveVertexStreams_Injected, addr 0x700cd74, size 0x44, virtual false, abstract: false, final false
  static inline void GetActiveVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams);

  /// [Obsolete("GetEnabledVertexStreams is deprecated. Use GetActiveVertexStreams instead.", false)]
  /// @brief Method GetEnabledVertexStreams, addr 0x7008f1c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemVertexStreams GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::GetMeshWeightings", HasExplicitThis = true)]
  /// @brief Method GetMeshWeightings, addr 0x700bf28, size 0x190, virtual false, abstract: false, final false
  inline int32_t GetMeshWeightings(/* [NotNull] */ ::ArrayW<float_t> weightings);

  /// @brief Method GetMeshWeightings_Injected, addr 0x700c0b8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetMeshWeightings_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> weightings);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::GetMeshes", HasExplicitThis = true)]
  /// [RequiredByNativeCode]
  /// @brief Method GetMeshes, addr 0x700bcfc, size 0xbc, virtual false, abstract: false, final false
  inline int32_t GetMeshes(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes);

  /// @brief Method GetMeshes_Injected, addr 0x700bdb8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetMeshes_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Mesh*> meshes);

  /// [Obsolete("Internal_GetVertexStreams is deprecated. Use GetActiveVertexStreams instead.", false)]
  /// @brief Method Internal_GetEnabledVertexStreams, addr 0x7008cd4, size 0x248, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemVertexStreams Internal_GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams);

  /// [Obsolete("Internal_SetVertexStreams is deprecated. Use SetActiveVertexStreams instead.", false)]
  /// @brief Method Internal_SetVertexStreams, addr 0x70080d4, size 0xbdc, virtual false, abstract: false, final false
  inline void Internal_SetVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams, bool enabled);

  static inline ::UnityEngine::ParticleSystemRenderer* New_ctor();

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::SetActiveTrailVertexStreams", HasExplicitThis = true)]
  /// @brief Method SetActiveTrailVertexStreams, addr 0x700ce74, size 0x200, virtual false, abstract: false, final false
  inline void SetActiveTrailVertexStreams(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method SetActiveTrailVertexStreams_Injected, addr 0x700d074, size 0x44, virtual false, abstract: false, final false
  static inline void SetActiveTrailVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::SetActiveVertexStreams", HasExplicitThis = true)]
  /// @brief Method SetActiveVertexStreams, addr 0x70091a0, size 0x200, virtual false, abstract: false, final false
  inline void SetActiveVertexStreams(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams);

  /// @brief Method SetActiveVertexStreams_Injected, addr 0x700cd30, size 0x44, virtual false, abstract: false, final false
  static inline void SetActiveVertexStreams_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> streams);

  /// @brief Method SetMeshWeightings, addr 0x700c278, size 0x14, virtual false, abstract: false, final false
  inline void SetMeshWeightings(::ArrayW<float_t> weightings);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::SetMeshWeightings", HasExplicitThis = true)]
  /// @brief Method SetMeshWeightings, addr 0x700c0fc, size 0x128, virtual false, abstract: false, final false
  inline void SetMeshWeightings(/* [NotNull] */ ::ArrayW<float_t> weightings, int32_t size);

  /// @brief Method SetMeshWeightings_Injected, addr 0x700c224, size 0x54, virtual false, abstract: false, final false
  static inline void SetMeshWeightings_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> weightings, int32_t size);

  /// @brief Method SetMeshes, addr 0x700bf14, size 0x14, virtual false, abstract: false, final false
  inline void SetMeshes(::ArrayW<::UnityEngine::Mesh*> meshes);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::SetMeshes", HasExplicitThis = true)]
  /// @brief Method SetMeshes, addr 0x700bdfc, size 0xc4, virtual false, abstract: false, final false
  inline void SetMeshes(/* [NotNull] */ ::ArrayW<::UnityEngine::Mesh*> meshes, int32_t size);

  /// @brief Method SetMeshes_Injected, addr 0x700bec0, size 0x54, virtual false, abstract: false, final false
  static inline void SetMeshes_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Mesh*> meshes, int32_t size);

  /// @brief Method .ctor, addr 0x700d2fc, size 0x5f4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeTrailVertexStreamsCount, addr 0x700cdb8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_activeTrailVertexStreamsCount();

  /// @brief Method get_activeTrailVertexStreamsCount_Injected, addr 0x700ce38, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_activeTrailVertexStreamsCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_activeVertexStreamsCount, addr 0x7008f20, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_activeVertexStreamsCount();

  /// @brief Method get_activeVertexStreamsCount_Injected, addr 0x700ccf4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_activeVertexStreamsCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_alignment, addr 0x70096f8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderSpace get_alignment();

  /// @brief Method get_alignment_Injected, addr 0x7009778, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemRenderSpace get_alignment_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_allowRoll, addr 0x700b42c, size 0x80, virtual false, abstract: false, final false
  inline bool get_allowRoll();

  /// @brief Method get_allowRoll_Injected, addr 0x700b4ac, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_allowRoll_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_applyActiveColorSpace, addr 0x700b8dc, size 0x80, virtual false, abstract: false, final false
  inline bool get_applyActiveColorSpace();

  /// @brief Method get_applyActiveColorSpace_Injected, addr 0x700b95c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_applyActiveColorSpace_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cameraVelocityScale, addr 0x700a068, size 0x80, virtual false, abstract: false, final false
  inline float_t get_cameraVelocityScale();

  /// @brief Method get_cameraVelocityScale_Injected, addr 0x700a0e8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_cameraVelocityScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableGPUInstancing, addr 0x700b29c, size 0x80, virtual false, abstract: false, final false
  inline bool get_enableGPUInstancing();

  /// @brief Method get_enableGPUInstancing_Injected, addr 0x700b31c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableGPUInstancing_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_flip, addr 0x700abb8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_flip();

  /// @brief Method get_flip_Injected, addr 0x700ac58, size 0x44, virtual false, abstract: false, final false
  static inline void get_flip_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_freeformStretching, addr 0x700b5bc, size 0x80, virtual false, abstract: false, final false
  inline bool get_freeformStretching();

  /// @brief Method get_freeformStretching_Injected, addr 0x700b63c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_freeformStretching_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_lengthScale, addr 0x7009d38, size 0x80, virtual false, abstract: false, final false
  inline float_t get_lengthScale();

  /// @brief Method get_lengthScale_Injected, addr 0x7009db8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_lengthScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maskInteraction, addr 0x700ad78, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction();

  /// @brief Method get_maskInteraction_Injected, addr 0x700adf8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxParticleSize, addr 0x700a860, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxParticleSize();

  /// @brief Method get_maxParticleSize_Injected, addr 0x700a8e0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxParticleSize_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::GetMesh", HasExplicitThis = true)]
  /// @brief Method get_mesh, addr 0x700ba6c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_mesh();

  /// @brief Method get_meshCount, addr 0x700c28c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_meshCount();

  /// @brief Method get_meshCount_Injected, addr 0x700c30c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_meshCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_meshDistribution, addr 0x7009a18, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemMeshDistribution get_meshDistribution();

  /// @brief Method get_meshDistribution_Injected, addr 0x7009a98, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemMeshDistribution get_meshDistribution_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_mesh_Injected, addr 0x700bbbc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_mesh_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_minParticleSize, addr 0x700a6c8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_minParticleSize();

  /// @brief Method get_minParticleSize_Injected, addr 0x700a748, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_minParticleSize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_normalDirection, addr 0x700a200, size 0x80, virtual false, abstract: false, final false
  inline float_t get_normalDirection();

  /// @brief Method get_normalDirection_Injected, addr 0x700a280, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_normalDirection_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_pivot, addr 0x700a9f8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivot();

  /// @brief Method get_pivot_Injected, addr 0x700aa98, size 0x44, virtual false, abstract: false, final false
  static inline void get_pivot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_renderMode, addr 0x7009888, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemRenderMode get_renderMode();

  /// @brief Method get_renderMode_Injected, addr 0x7009908, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemRenderMode get_renderMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rotateWithStretchDirection, addr 0x700b74c, size 0x80, virtual false, abstract: false, final false
  inline bool get_rotateWithStretchDirection();

  /// @brief Method get_rotateWithStretchDirection_Injected, addr 0x700b7cc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_rotateWithStretchDirection_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowBias, addr 0x700a398, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shadowBias();

  /// @brief Method get_shadowBias_Injected, addr 0x700a418, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shadowBias_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortMode, addr 0x7009ba8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ParticleSystemSortMode get_sortMode();

  /// @brief Method get_sortMode_Injected, addr 0x7009c28, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ParticleSystemSortMode get_sortMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sortingFudge, addr 0x700a530, size 0x80, virtual false, abstract: false, final false
  inline float_t get_sortingFudge();

  /// @brief Method get_sortingFudge_Injected, addr 0x700a5b0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_sortingFudge_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_trailMaterial, addr 0x700af08, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_trailMaterial();

  /// @brief Method get_trailMaterial_Injected, addr 0x700b058, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_trailMaterial_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocityScale, addr 0x7009ed0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_velocityScale();

  /// @brief Method get_velocityScale_Injected, addr 0x7009f50, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_velocityScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_alignment, addr 0x70097b4, size 0x90, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::ParticleSystemRenderSpace value);

  /// @brief Method set_alignment_Injected, addr 0x7009844, size 0x44, virtual false, abstract: false, final false
  static inline void set_alignment_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemRenderSpace value);

  /// @brief Method set_allowRoll, addr 0x700b4e8, size 0x90, virtual false, abstract: false, final false
  inline void set_allowRoll(bool value);

  /// @brief Method set_allowRoll_Injected, addr 0x700b578, size 0x44, virtual false, abstract: false, final false
  static inline void set_allowRoll_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_applyActiveColorSpace, addr 0x700b998, size 0x90, virtual false, abstract: false, final false
  inline void set_applyActiveColorSpace(bool value);

  /// @brief Method set_applyActiveColorSpace_Injected, addr 0x700ba28, size 0x44, virtual false, abstract: false, final false
  static inline void set_applyActiveColorSpace_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_cameraVelocityScale, addr 0x700a124, size 0x90, virtual false, abstract: false, final false
  inline void set_cameraVelocityScale(float_t value);

  /// @brief Method set_cameraVelocityScale_Injected, addr 0x700a1b4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_cameraVelocityScale_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_enableGPUInstancing, addr 0x700b358, size 0x90, virtual false, abstract: false, final false
  inline void set_enableGPUInstancing(bool value);

  /// @brief Method set_enableGPUInstancing_Injected, addr 0x700b3e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableGPUInstancing_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_flip, addr 0x700ac9c, size 0x98, virtual false, abstract: false, final false
  inline void set_flip(::UnityEngine::Vector3 value);

  /// @brief Method set_flip_Injected, addr 0x700ad34, size 0x44, virtual false, abstract: false, final false
  static inline void set_flip_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_freeformStretching, addr 0x700b678, size 0x90, virtual false, abstract: false, final false
  inline void set_freeformStretching(bool value);

  /// @brief Method set_freeformStretching_Injected, addr 0x700b708, size 0x44, virtual false, abstract: false, final false
  static inline void set_freeformStretching_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_lengthScale, addr 0x7009df4, size 0x90, virtual false, abstract: false, final false
  inline void set_lengthScale(float_t value);

  /// @brief Method set_lengthScale_Injected, addr 0x7009e84, size 0x4c, virtual false, abstract: false, final false
  static inline void set_lengthScale_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maskInteraction, addr 0x700ae34, size 0x90, virtual false, abstract: false, final false
  inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_maskInteraction_Injected, addr 0x700aec4, size 0x44, virtual false, abstract: false, final false
  static inline void set_maskInteraction_Injected(::System::IntPtr _unity_self, ::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_maxParticleSize, addr 0x700a91c, size 0x90, virtual false, abstract: false, final false
  inline void set_maxParticleSize(float_t value);

  /// @brief Method set_maxParticleSize_Injected, addr 0x700a9ac, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxParticleSize_Injected(::System::IntPtr _unity_self, float_t value);

  /// [FreeFunction(Name = "ParticleSystemRendererScriptBindings::SetMesh", HasExplicitThis = true)]
  /// @brief Method set_mesh, addr 0x700bbf8, size 0xc0, virtual false, abstract: false, final false
  inline void set_mesh(::UnityEngine::Mesh* value);

  /// @brief Method set_meshDistribution, addr 0x7009ad4, size 0x90, virtual false, abstract: false, final false
  inline void set_meshDistribution(::UnityEngine::ParticleSystemMeshDistribution value);

  /// @brief Method set_meshDistribution_Injected, addr 0x7009b64, size 0x44, virtual false, abstract: false, final false
  static inline void set_meshDistribution_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemMeshDistribution value);

  /// @brief Method set_mesh_Injected, addr 0x700bcb8, size 0x44, virtual false, abstract: false, final false
  static inline void set_mesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_minParticleSize, addr 0x700a784, size 0x90, virtual false, abstract: false, final false
  inline void set_minParticleSize(float_t value);

  /// @brief Method set_minParticleSize_Injected, addr 0x700a814, size 0x4c, virtual false, abstract: false, final false
  static inline void set_minParticleSize_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_normalDirection, addr 0x700a2bc, size 0x90, virtual false, abstract: false, final false
  inline void set_normalDirection(float_t value);

  /// @brief Method set_normalDirection_Injected, addr 0x700a34c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_normalDirection_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_oldTrailMaterial, addr 0x700b198, size 0xc0, virtual false, abstract: false, final false
  inline void set_oldTrailMaterial(::UnityEngine::Material* value);

  /// @brief Method set_oldTrailMaterial_Injected, addr 0x700b258, size 0x44, virtual false, abstract: false, final false
  static inline void set_oldTrailMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_pivot, addr 0x700aadc, size 0x98, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector3 value);

  /// @brief Method set_pivot_Injected, addr 0x700ab74, size 0x44, virtual false, abstract: false, final false
  static inline void set_pivot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_renderMode, addr 0x7009944, size 0x90, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::ParticleSystemRenderMode value);

  /// @brief Method set_renderMode_Injected, addr 0x70099d4, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemRenderMode value);

  /// @brief Method set_rotateWithStretchDirection, addr 0x700b808, size 0x90, virtual false, abstract: false, final false
  inline void set_rotateWithStretchDirection(bool value);

  /// @brief Method set_rotateWithStretchDirection_Injected, addr 0x700b898, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotateWithStretchDirection_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_shadowBias, addr 0x700a454, size 0x90, virtual false, abstract: false, final false
  inline void set_shadowBias(float_t value);

  /// @brief Method set_shadowBias_Injected, addr 0x700a4e4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_shadowBias_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_sortMode, addr 0x7009c64, size 0x90, virtual false, abstract: false, final false
  inline void set_sortMode(::UnityEngine::ParticleSystemSortMode value);

  /// @brief Method set_sortMode_Injected, addr 0x7009cf4, size 0x44, virtual false, abstract: false, final false
  static inline void set_sortMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::ParticleSystemSortMode value);

  /// @brief Method set_sortingFudge, addr 0x700a5ec, size 0x90, virtual false, abstract: false, final false
  inline void set_sortingFudge(float_t value);

  /// @brief Method set_sortingFudge_Injected, addr 0x700a67c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_sortingFudge_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_trailMaterial, addr 0x700b094, size 0xc0, virtual false, abstract: false, final false
  inline void set_trailMaterial(::UnityEngine::Material* value);

  /// @brief Method set_trailMaterial_Injected, addr 0x700b154, size 0x44, virtual false, abstract: false, final false
  static inline void set_trailMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_velocityScale, addr 0x7009f8c, size 0x90, virtual false, abstract: false, final false
  inline void set_velocityScale(float_t value);

  /// @brief Method set_velocityScale_Injected, addr 0x700a01c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_velocityScale_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemRenderer(ParticleSystemRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemRenderer(ParticleSystemRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21936 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ParticleSystemRenderer) == 0x18, "Size mismatch!");

} // namespace UnityEngine
