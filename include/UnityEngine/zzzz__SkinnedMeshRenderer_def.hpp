#pragma once
// IWYU pragma private; include "UnityEngine/SkinnedMeshRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
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
MARK_REF_PTR_T(::UnityEngine::SkinnedMeshRenderer);
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SkinnedMeshRenderer
class CORDL_TYPE SkinnedMeshRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_bones, put = set_bones)) ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> bones;

  __declspec(property(get = get_forceMatrixRecalculationPerRender, put = set_forceMatrixRecalculationPerRender)) bool forceMatrixRecalculationPerRender;

  __declspec(property(get = get_quality, put = set_quality)) ::UnityEngine::SkinQuality quality;

  __declspec(property(get = get_rootBone, put = set_rootBone)) ::UnityW<::UnityEngine::Transform> rootBone;

  __declspec(property(get = get_sharedMesh, put = set_sharedMesh)) ::UnityW<::UnityEngine::Mesh> sharedMesh;

  __declspec(property(get = get_skinnedMotionVectors, put = set_skinnedMotionVectors)) bool skinnedMotionVectors;

  __declspec(property(get = get_updateWhenOffscreen, put = set_updateWhenOffscreen)) bool updateWhenOffscreen;

  __declspec(property(get = get_vertexBufferTarget, put = set_vertexBufferTarget)) ::UnityEngine::GraphicsBuffer_Target vertexBufferTarget;

  /// @brief Method BakeMesh, addr 0x68db3c4, size 0x8, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method BakeMesh, addr 0x68db3cc, size 0xec, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useScale);

  /// @brief Method BakeMesh_Injected, addr 0x68db4b8, size 0x54, virtual false, abstract: false, final false
  static inline void BakeMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, bool useScale);

  /// @brief Method GetBlendShapeWeight, addr 0x68db1fc, size 0x90, virtual false, abstract: false, final false
  inline float_t GetBlendShapeWeight(int32_t index);

  /// @brief Method GetBlendShapeWeight_Injected, addr 0x68db28c, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetBlendShapeWeight_Injected(::System::IntPtr _unity_self, int32_t index);

  /// @brief Method GetPreviousVertexBuffer, addr 0x68db640, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBuffer();

  /// @brief Method GetPreviousVertexBufferImpl, addr 0x68db6e0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBufferImpl();

  /// @brief Method GetPreviousVertexBufferImpl_Injected, addr 0x68db7b0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetPreviousVertexBufferImpl_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetVertexBuffer, addr 0x68db50c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer();

  /// @brief Method GetVertexBufferImpl, addr 0x68db5ac, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl();

  /// @brief Method GetVertexBufferImpl_Injected, addr 0x68db774, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetVertexBufferImpl_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::SkinnedMeshRenderer* New_ctor();

  /// @brief Method SetBlendShapeWeight, addr 0x68db2d0, size 0xa0, virtual false, abstract: false, final false
  inline void SetBlendShapeWeight(int32_t index, float_t value);

  /// @brief Method SetBlendShapeWeight_Injected, addr 0x68db370, size 0x54, virtual false, abstract: false, final false
  static inline void SetBlendShapeWeight_Injected(::System::IntPtr _unity_self, int32_t index, float_t value);

  /// @brief Method .ctor, addr 0x68db97c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bones, addr 0x68dac4c, size 0x80, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> get_bones();

  /// @brief Method get_bones_Injected, addr 0x68daccc, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> get_bones_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_forceMatrixRecalculationPerRender, addr 0x68da82c, size 0x80, virtual false, abstract: false, final false
  inline bool get_forceMatrixRecalculationPerRender();

  /// @brief Method get_forceMatrixRecalculationPerRender_Injected, addr 0x68da8ac, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_forceMatrixRecalculationPerRender_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_quality, addr 0x68da50c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::SkinQuality get_quality();

  /// @brief Method get_quality_Injected, addr 0x68da58c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SkinQuality get_quality_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rootBone, addr 0x68da9bc, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_rootBone();

  /// @brief Method get_rootBone_Injected, addr 0x68dab0c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_rootBone_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sharedMesh, addr 0x68daddc, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh();

  /// @brief Method get_sharedMesh_Injected, addr 0x68daf2c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_sharedMesh_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_skinnedMotionVectors, addr 0x68db06c, size 0x80, virtual false, abstract: false, final false
  inline bool get_skinnedMotionVectors();

  /// @brief Method get_skinnedMotionVectors_Injected, addr 0x68db0ec, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_skinnedMotionVectors_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_updateWhenOffscreen, addr 0x68da69c, size 0x80, virtual false, abstract: false, final false
  inline bool get_updateWhenOffscreen();

  /// @brief Method get_updateWhenOffscreen_Injected, addr 0x68da71c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_updateWhenOffscreen_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_vertexBufferTarget, addr 0x68db7ec, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget();

  /// @brief Method get_vertexBufferTarget_Injected, addr 0x68db86c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_bones, addr 0x68dad08, size 0x90, virtual false, abstract: false, final false
  inline void set_bones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  /// @brief Method set_bones_Injected, addr 0x68dad98, size 0x44, virtual false, abstract: false, final false
  static inline void set_bones_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  /// @brief Method set_forceMatrixRecalculationPerRender, addr 0x68da8e8, size 0x90, virtual false, abstract: false, final false
  inline void set_forceMatrixRecalculationPerRender(bool value);

  /// @brief Method set_forceMatrixRecalculationPerRender_Injected, addr 0x68da978, size 0x44, virtual false, abstract: false, final false
  static inline void set_forceMatrixRecalculationPerRender_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_quality, addr 0x68da5c8, size 0x90, virtual false, abstract: false, final false
  inline void set_quality(::UnityEngine::SkinQuality value);

  /// @brief Method set_quality_Injected, addr 0x68da658, size 0x44, virtual false, abstract: false, final false
  static inline void set_quality_Injected(::System::IntPtr _unity_self, ::UnityEngine::SkinQuality value);

  /// @brief Method set_rootBone, addr 0x68dab48, size 0xc0, virtual false, abstract: false, final false
  inline void set_rootBone(::UnityEngine::Transform* value);

  /// @brief Method set_rootBone_Injected, addr 0x68dac08, size 0x44, virtual false, abstract: false, final false
  static inline void set_rootBone_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_sharedMesh, addr 0x68daf68, size 0xc0, virtual false, abstract: false, final false
  inline void set_sharedMesh(::UnityEngine::Mesh* value);

  /// @brief Method set_sharedMesh_Injected, addr 0x68db028, size 0x44, virtual false, abstract: false, final false
  static inline void set_sharedMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_skinnedMotionVectors, addr 0x68db128, size 0x90, virtual false, abstract: false, final false
  inline void set_skinnedMotionVectors(bool value);

  /// @brief Method set_skinnedMotionVectors_Injected, addr 0x68db1b8, size 0x44, virtual false, abstract: false, final false
  static inline void set_skinnedMotionVectors_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_updateWhenOffscreen, addr 0x68da758, size 0x90, virtual false, abstract: false, final false
  inline void set_updateWhenOffscreen(bool value);

  /// @brief Method set_updateWhenOffscreen_Injected, addr 0x68da7e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_updateWhenOffscreen_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_vertexBufferTarget, addr 0x68db8a8, size 0x90, virtual false, abstract: false, final false
  inline void set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

  /// @brief Method set_vertexBufferTarget_Injected, addr 0x68db938, size 0x44, virtual false, abstract: false, final false
  static inline void set_vertexBufferTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::GraphicsBuffer_Target value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkinnedMeshRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkinnedMeshRenderer(SkinnedMeshRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkinnedMeshRenderer(SkinnedMeshRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10190 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SkinnedMeshRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SkinnedMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
