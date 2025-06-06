#pragma once
// IWYU pragma private; include "UnityEngine/SkinnedMeshRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SkinnedMeshRenderer)
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

  /// @brief Method BakeMesh, addr 0x488706c, size 0x48, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method BakeMesh, addr 0x48870b4, size 0x54, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useScale);

  /// @brief Method GetBlendShapeWeight, addr 0x4886fd4, size 0x44, virtual false, abstract: false, final false
  inline float_t GetBlendShapeWeight(int32_t index);

  /// @brief Method GetPreviousVertexBuffer, addr 0x4887200, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBuffer();

  /// @brief Method GetPreviousVertexBufferImpl, addr 0x48872bc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBufferImpl();

  /// @brief Method GetVertexBuffer, addr 0x4887108, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer();

  /// @brief Method GetVertexBufferImpl, addr 0x48871c4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl();

  static inline ::UnityEngine::SkinnedMeshRenderer* New_ctor();

  /// @brief Method SetBlendShapeWeight, addr 0x4887018, size 0x54, virtual false, abstract: false, final false
  inline void SetBlendShapeWeight(int32_t index, float_t value);

  /// @brief Method .ctor, addr 0x4887378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bones, addr 0x4886e54, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> get_bones();

  /// @brief Method get_forceMatrixRecalculationPerRender, addr 0x4886d54, size 0x3c, virtual false, abstract: false, final false
  inline bool get_forceMatrixRecalculationPerRender();

  /// @brief Method get_quality, addr 0x4886c54, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::SkinQuality get_quality();

  /// @brief Method get_rootBone, addr 0x4886dd4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_rootBone();

  /// @brief Method get_sharedMesh, addr 0x4886ed4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh();

  /// @brief Method get_skinnedMotionVectors, addr 0x4886f54, size 0x3c, virtual false, abstract: false, final false
  inline bool get_skinnedMotionVectors();

  /// @brief Method get_updateWhenOffscreen, addr 0x4886cd4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_updateWhenOffscreen();

  /// @brief Method get_vertexBufferTarget, addr 0x48872f8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget();

  /// @brief Method set_bones, addr 0x4886e90, size 0x44, virtual false, abstract: false, final false
  inline void set_bones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  /// @brief Method set_forceMatrixRecalculationPerRender, addr 0x4886d90, size 0x44, virtual false, abstract: false, final false
  inline void set_forceMatrixRecalculationPerRender(bool value);

  /// @brief Method set_quality, addr 0x4886c90, size 0x44, virtual false, abstract: false, final false
  inline void set_quality(::UnityEngine::SkinQuality value);

  /// @brief Method set_rootBone, addr 0x4886e10, size 0x44, virtual false, abstract: false, final false
  inline void set_rootBone(::UnityEngine::Transform* value);

  /// @brief Method set_sharedMesh, addr 0x4886f10, size 0x44, virtual false, abstract: false, final false
  inline void set_sharedMesh(::UnityEngine::Mesh* value);

  /// @brief Method set_skinnedMotionVectors, addr 0x4886f90, size 0x44, virtual false, abstract: false, final false
  inline void set_skinnedMotionVectors(bool value);

  /// @brief Method set_updateWhenOffscreen, addr 0x4886d10, size 0x44, virtual false, abstract: false, final false
  inline void set_updateWhenOffscreen(bool value);

  /// @brief Method set_vertexBufferTarget, addr 0x4887334, size 0x44, virtual false, abstract: false, final false
  inline void set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10779 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SkinnedMeshRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SkinnedMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
