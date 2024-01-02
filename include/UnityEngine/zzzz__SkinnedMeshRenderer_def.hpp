#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SkinnedMeshRenderer)
namespace UnityEngine {
struct SkinQuality;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct __GraphicsBuffer__Target;
}
namespace UnityEngine {
class GraphicsBuffer;
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
// Type: UnityEngine::SkinnedMeshRenderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10064))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10066))
// CS Name: ::UnityEngine::SkinnedMeshRenderer*
class CORDL_TYPE SkinnedMeshRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_quality, put = set_quality))::UnityEngine::SkinQuality quality;

  __declspec(property(get = get_updateWhenOffscreen, put = set_updateWhenOffscreen)) bool updateWhenOffscreen;

  __declspec(property(get = get_forceMatrixRecalculationPerRender, put = set_forceMatrixRecalculationPerRender)) bool forceMatrixRecalculationPerRender;

  __declspec(property(get = get_rootBone, put = set_rootBone))::UnityEngine::Transform* rootBone;

  __declspec(property(get = get_bones, put = set_bones))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> bones;

  __declspec(property(get = get_sharedMesh, put = set_sharedMesh))::UnityEngine::Mesh* sharedMesh;

  __declspec(property(get = get_skinnedMotionVectors, put = set_skinnedMotionVectors)) bool skinnedMotionVectors;

  __declspec(property(get = get_vertexBufferTarget, put = set_vertexBufferTarget))::UnityEngine::__GraphicsBuffer__Target vertexBufferTarget;

  /// @brief Method get_quality, addr 0x2ca3af8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::SkinQuality get_quality();

  /// @brief Method set_quality, addr 0x2ca3b34, size 0x44, virtual false, abstract: false, final false
  inline void set_quality(::UnityEngine::SkinQuality value);

  /// @brief Method get_updateWhenOffscreen, addr 0x2ca3b78, size 0x3c, virtual false, abstract: false, final false
  inline bool get_updateWhenOffscreen();

  /// @brief Method set_updateWhenOffscreen, addr 0x2ca3bb4, size 0x44, virtual false, abstract: false, final false
  inline void set_updateWhenOffscreen(bool value);

  /// @brief Method get_forceMatrixRecalculationPerRender, addr 0x2ca3bf8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_forceMatrixRecalculationPerRender();

  /// @brief Method set_forceMatrixRecalculationPerRender, addr 0x2ca3c34, size 0x44, virtual false, abstract: false, final false
  inline void set_forceMatrixRecalculationPerRender(bool value);

  /// @brief Method get_rootBone, addr 0x2ca3c78, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_rootBone();

  /// @brief Method set_rootBone, addr 0x2ca3cb4, size 0x44, virtual false, abstract: false, final false
  inline void set_rootBone(::UnityEngine::Transform* value);

  /// @brief Method get_bones, addr 0x2ca3cf8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> get_bones();

  /// @brief Method set_bones, addr 0x2ca3d34, size 0x44, virtual false, abstract: false, final false
  inline void set_bones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  /// @brief Method get_sharedMesh, addr 0x2ca3d78, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh* get_sharedMesh();

  /// @brief Method set_sharedMesh, addr 0x2ca3db4, size 0x44, virtual false, abstract: false, final false
  inline void set_sharedMesh(::UnityEngine::Mesh* value);

  /// @brief Method get_skinnedMotionVectors, addr 0x2ca3df8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_skinnedMotionVectors();

  /// @brief Method set_skinnedMotionVectors, addr 0x2ca3e34, size 0x44, virtual false, abstract: false, final false
  inline void set_skinnedMotionVectors(bool value);

  /// @brief Method GetBlendShapeWeight, addr 0x2ca3e78, size 0x44, virtual false, abstract: false, final false
  inline float_t GetBlendShapeWeight(int32_t index);

  /// @brief Method SetBlendShapeWeight, addr 0x2ca3ebc, size 0x54, virtual false, abstract: false, final false
  inline void SetBlendShapeWeight(int32_t index, float_t value);

  /// @brief Method BakeMesh, addr 0x2ca3f10, size 0x48, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh);

  /// @brief Method BakeMesh, addr 0x2ca3f58, size 0x54, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useScale);

  /// @brief Method GetVertexBuffer, addr 0x2ca3fac, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer();

  /// @brief Method GetPreviousVertexBuffer, addr 0x2ca40ac, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBuffer();

  /// @brief Method GetVertexBufferImpl, addr 0x2ca4070, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl();

  /// @brief Method GetPreviousVertexBufferImpl, addr 0x2ca4170, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* GetPreviousVertexBufferImpl();

  /// @brief Method get_vertexBufferTarget, addr 0x2ca41ac, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::__GraphicsBuffer__Target get_vertexBufferTarget();

  /// @brief Method set_vertexBufferTarget, addr 0x2ca41e8, size 0x44, virtual false, abstract: false, final false
  inline void set_vertexBufferTarget(::UnityEngine::__GraphicsBuffer__Target value);

  static inline ::UnityEngine::SkinnedMeshRenderer* New_ctor();

  /// @brief Method .ctor, addr 0x2ca422c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkinnedMeshRenderer(SkinnedMeshRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkinnedMeshRenderer(SkinnedMeshRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkinnedMeshRenderer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SkinnedMeshRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SkinnedMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
