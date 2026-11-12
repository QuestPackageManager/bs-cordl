#pragma once
// IWYU pragma private; include "UnityEngine/SkinnedMeshRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SkinnedMeshRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct SkinQuality;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::SkinnedMeshRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
// [RequiredByNativeCode]
// [NativeHeader("Runtime/Graphics/Mesh/SkinnedMeshRenderer.h")]
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SkinnedMeshRenderer
class CORDL_TYPE SkinnedMeshRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_bones, put = set_bones)) ::ArrayW<::UnityW<::UnityEngine::Transform>> bones;

  __declspec(property(get = get_forceMatrixRecalculationPerRender, put = set_forceMatrixRecalculationPerRender)) bool forceMatrixRecalculationPerRender;

  __declspec(property(get = get_quality, put = set_quality)) ::UnityEngine::SkinQuality quality;

  __declspec(property(get = get_rootBone, put = set_rootBone)) ::UnityW<::UnityEngine::Transform> rootBone;

  /// @brief [NativeProperty("Mesh")]
  __declspec(property(get = get_sharedMesh, put = set_sharedMesh)) ::UnityW<::UnityEngine::Mesh> sharedMesh;

  /// @brief [NativeProperty("SkinnedMeshMotionVectors")]
  __declspec(property(get = get_skinnedMotionVectors, put = set_skinnedMotionVectors)) bool skinnedMotionVectors;

  __declspec(property(get = get_updateWhenOffscreen, put = set_updateWhenOffscreen)) bool updateWhenOffscreen;

  __declspec(property(get = get_vertexBufferTarget, put = set_vertexBufferTarget)) ::UnityEngine::GraphicsBuffer_Target vertexBufferTarget;

  /// @brief Method BakeMesh, addr 0x6f39624, size 0x8, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method BakeMesh, addr 0x6f3962c, size 0xec, virtual false, abstract: false, final false
  inline void BakeMesh(/* [NotNull] */ ::UnityEngine::Mesh* mesh, bool useScale);

  /// @brief Method BakeMesh_Injected, addr 0x6f39718, size 0x54, virtual false, abstract: false, final false
  static inline void BakeMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, bool useScale);

  /// @brief Method GetBlendShapeWeight, addr 0x6f3945c, size 0x90, virtual false, abstract: false, final false
  inline float_t GetBlendShapeWeight(int32_t index);

  /// @brief Method GetBlendShapeWeight_Injected, addr 0x6f394ec, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetBlendShapeWeight_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetPreviousVertexBuffer, addr 0x6f398a0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBuffer();

  /// [FreeFunction(Name = "SkinnedMeshRendererScripting::GetPreviousVertexBufferPtr", HasExplicitThis = true)]
  /// @brief Method GetPreviousVertexBufferImpl, addr 0x6f39940, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBufferImpl();

  /// @brief Method GetPreviousVertexBufferImpl_Injected, addr 0x6f39a10, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetPreviousVertexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetShaderUserValue, addr 0x6f39d70, size 0x4, virtual false, abstract: false, final false
  inline uint32_t GetShaderUserValue();

  /// @brief Method GetVertexBuffer, addr 0x6f3976c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer();

  /// [FreeFunction(Name = "SkinnedMeshRendererScripting::GetVertexBufferPtr", HasExplicitThis = true)]
  /// @brief Method GetVertexBufferImpl, addr 0x6f3980c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl();

  /// @brief Method GetVertexBufferImpl_Injected, addr 0x6f399d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "SkinnedMeshRendererScripting::GetShaderUserValue", HasExplicitThis = true)]
  /// @brief Method Internal_GetShaderUserValueUInt, addr 0x6f39cb4, size 0x80, virtual false, abstract: false, final false
  inline uint32_t Internal_GetShaderUserValueUInt();

  /// @brief Method Internal_GetShaderUserValueUInt_Injected, addr 0x6f39d34, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t Internal_GetShaderUserValueUInt_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction(Name = "SkinnedMeshRendererScripting::SetShaderUserValue", HasExplicitThis = true)]
  /// @brief Method Internal_SetShaderUserValueUInt, addr 0x6f39bdc, size 0x90, virtual false, abstract: false, final false
  inline void Internal_SetShaderUserValueUInt(uint32_t v);

  /// @brief Method Internal_SetShaderUserValueUInt_Injected, addr 0x6f39c6c, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_SetShaderUserValueUInt_Injected(::System::IntPtr _unity_self, uint32_t v);

  static inline ::UnityEngine::SkinnedMeshRenderer* New_ctor();

  /// @brief Method SetBlendShapeWeight, addr 0x6f39530, size 0xa0, virtual false, abstract: false, final false
  inline void SetBlendShapeWeight(int32_t index, float_t value);

  /// @brief Method SetBlendShapeWeight_Injected, addr 0x6f395d0, size 0x54, virtual false, abstract: false, final false
  static inline void SetBlendShapeWeight_Injected(::System::IntPtr _unity_self, int32_t index, float_t value);

  /// @brief Method SetShaderUserValue, addr 0x6f39cb0, size 0x4, virtual false, abstract: false, final false
  inline void SetShaderUserValue(uint32_t v);

  /// @brief Method .ctor, addr 0x6f39d74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bones, addr 0x6f38eac, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_bones();

  /// @brief Method get_bones_Injected, addr 0x6f38f2c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Transform>> get_bones_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_forceMatrixRecalculationPerRender, addr 0x6f38a8c, size 0x80, virtual false, abstract: false, final false
  inline bool get_forceMatrixRecalculationPerRender();

  /// @brief Method get_forceMatrixRecalculationPerRender_Injected, addr 0x6f38b0c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_forceMatrixRecalculationPerRender_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_quality, addr 0x6f3876c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::SkinQuality get_quality();

  /// @brief Method get_quality_Injected, addr 0x6f387ec, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SkinQuality get_quality_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rootBone, addr 0x6f38c1c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_rootBone();

  /// @brief Method get_rootBone_Injected, addr 0x6f38d6c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_rootBone_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sharedMesh, addr 0x6f3903c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh();

  /// @brief Method get_sharedMesh_Injected, addr 0x6f3918c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_sharedMesh_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_skinnedMotionVectors, addr 0x6f392cc, size 0x80, virtual false, abstract: false, final false
  inline bool get_skinnedMotionVectors();

  /// @brief Method get_skinnedMotionVectors_Injected, addr 0x6f3934c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_skinnedMotionVectors_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_updateWhenOffscreen, addr 0x6f388fc, size 0x80, virtual false, abstract: false, final false
  inline bool get_updateWhenOffscreen();

  /// @brief Method get_updateWhenOffscreen_Injected, addr 0x6f3897c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_updateWhenOffscreen_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertexBufferTarget, addr 0x6f39a4c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget();

  /// @brief Method get_vertexBufferTarget_Injected, addr 0x6f39acc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_bones, addr 0x6f38f68, size 0x90, virtual false, abstract: false, final false
  inline void set_bones(::ArrayW<::UnityEngine::Transform*> value);

  /// @brief Method set_bones_Injected, addr 0x6f38ff8, size 0x44, virtual false, abstract: false, final false
  static inline void set_bones_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Transform*> value);

  /// @brief Method set_forceMatrixRecalculationPerRender, addr 0x6f38b48, size 0x90, virtual false, abstract: false, final false
  inline void set_forceMatrixRecalculationPerRender(bool value);

  /// @brief Method set_forceMatrixRecalculationPerRender_Injected, addr 0x6f38bd8, size 0x44, virtual false, abstract: false, final false
  static inline void set_forceMatrixRecalculationPerRender_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_quality, addr 0x6f38828, size 0x90, virtual false, abstract: false, final false
  inline void set_quality(::UnityEngine::SkinQuality value);

  /// @brief Method set_quality_Injected, addr 0x6f388b8, size 0x44, virtual false, abstract: false, final false
  static inline void set_quality_Injected(::System::IntPtr _unity_self, ::UnityEngine::SkinQuality value);

  /// @brief Method set_rootBone, addr 0x6f38da8, size 0xc0, virtual false, abstract: false, final false
  inline void set_rootBone(::UnityEngine::Transform* value);

  /// @brief Method set_rootBone_Injected, addr 0x6f38e68, size 0x44, virtual false, abstract: false, final false
  static inline void set_rootBone_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_sharedMesh, addr 0x6f391c8, size 0xc0, virtual false, abstract: false, final false
  inline void set_sharedMesh(::UnityEngine::Mesh* value);

  /// @brief Method set_sharedMesh_Injected, addr 0x6f39288, size 0x44, virtual false, abstract: false, final false
  static inline void set_sharedMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_skinnedMotionVectors, addr 0x6f39388, size 0x90, virtual false, abstract: false, final false
  inline void set_skinnedMotionVectors(bool value);

  /// @brief Method set_skinnedMotionVectors_Injected, addr 0x6f39418, size 0x44, virtual false, abstract: false, final false
  static inline void set_skinnedMotionVectors_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_updateWhenOffscreen, addr 0x6f389b8, size 0x90, virtual false, abstract: false, final false
  inline void set_updateWhenOffscreen(bool value);

  /// @brief Method set_updateWhenOffscreen_Injected, addr 0x6f38a48, size 0x44, virtual false, abstract: false, final false
  static inline void set_updateWhenOffscreen_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_vertexBufferTarget, addr 0x6f39b08, size 0x90, virtual false, abstract: false, final false
  inline void set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertexBufferTarget_Injected, addr 0x6f39b98, size 0x44, virtual false, abstract: false, final false
  static inline void set_vertexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkinnedMeshRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkinnedMeshRenderer(SkinnedMeshRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkinnedMeshRenderer(SkinnedMeshRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9800 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer) == 0x18, "Size mismatch!");

} // namespace UnityEngine
