#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsWorldRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsWorldRenderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_BaseDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_LineDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_PointDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsAABB;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsWorldRenderer_DrawerGroup;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_DrawResults;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_TransformPlane;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_BaseDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_LineDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_PointDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsWorldRenderer;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsWorldRenderer_DrawerGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*);
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*, "UnityEngine.LowLevelPhysics2D", "PhysicsWorldRenderer/DrawerGroup/BaseDrawer");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer*, "UnityEngine.LowLevelPhysics2D",
                    "PhysicsWorldRenderer/DrawerGroup/CapsuleGeometryDrawer");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer*, "UnityEngine.LowLevelPhysics2D", "PhysicsWorldRenderer/DrawerGroup/CircleGeometryDrawer");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer*, "UnityEngine.LowLevelPhysics2D", "PhysicsWorldRenderer/DrawerGroup/LineDrawer");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer*, "UnityEngine.LowLevelPhysics2D", "PhysicsWorldRenderer/DrawerGroup/PointDrawer");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer*, "UnityEngine.LowLevelPhysics2D",
                    "PhysicsWorldRenderer/DrawerGroup/PolygonGeometryDrawer");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer*, "UnityEngine.LowLevelPhysics2D", "PhysicsWorldRenderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*, "UnityEngine.LowLevelPhysics2D", "PhysicsWorldRenderer/DrawerGroup");
// Dependencies System.Object, UnityEngine.Bounds, UnityEngine.GraphicsBuffer::IndirectDrawIndexedArgs
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer/DrawerGroup/BaseDrawer
class CORDL_TYPE DrawerGroup_PhysicsWorldRenderer_BaseDrawer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CommandData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandData, put = __cordl_internal_set_m_CommandData)) ::ArrayW<::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs> m_CommandData;

  /// @brief Field m_CullingBounds, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get_m_CullingBounds, put = __cordl_internal_set_m_CullingBounds)) ::UnityEngine::Bounds m_CullingBounds;

  /// @brief Field m_Disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Disposed, put = __cordl_internal_set_m_Disposed)) bool m_Disposed;

  /// @brief Field m_ElementBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ElementBuffer, put = __cordl_internal_set_m_ElementBuffer)) ::UnityEngine::ComputeBuffer* m_ElementBuffer;

  /// @brief Field m_ElementBufferShaderProperty, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ElementBufferShaderProperty, put = __cordl_internal_set_m_ElementBufferShaderProperty)) int32_t m_ElementBufferShaderProperty;

  /// @brief Field m_FillAlphaShaderProperty, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FillAlphaShaderProperty, put = __cordl_internal_set_m_FillAlphaShaderProperty)) int32_t m_FillAlphaShaderProperty;

  /// @brief Field m_GraphicsBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GraphicsBuffer, put = __cordl_internal_set_m_GraphicsBuffer)) ::UnityEngine::GraphicsBuffer* m_GraphicsBuffer;

  /// @brief Field m_Mesh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::Mesh> m_Mesh;

  /// @brief Field m_ShaderMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderMaterial, put = __cordl_internal_set_m_ShaderMaterial)) ::UnityW<::UnityEngine::Material> m_ShaderMaterial;

  /// @brief Field m_ShaderMaterialPropertyBlock, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderMaterialPropertyBlock,
                      put = __cordl_internal_set_m_ShaderMaterialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* m_ShaderMaterialPropertyBlock;

  /// @brief Field m_ThicknessShaderProperty, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ThicknessShaderProperty, put = __cordl_internal_set_m_ThicknessShaderProperty)) int32_t m_ThicknessShaderProperty;

  /// @brief Field m_TransformPlaneShaderProperty, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TransformPlaneShaderProperty, put = __cordl_internal_set_m_TransformPlaneShaderProperty)) int32_t m_TransformPlaneShaderProperty;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x6fdb30c, size 0x11c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Draw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                   float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, int32_t drawCapacity);

  /// @brief Method GetMesh, addr 0x6fdb428, size 0x39c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> GetMesh();

  static inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer* New_ctor();

  constexpr ::ArrayW<::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs> const& __cordl_internal_get_m_CommandData() const;

  constexpr ::ArrayW<::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs>& __cordl_internal_get_m_CommandData();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_CullingBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_CullingBounds();

  constexpr bool const& __cordl_internal_get_m_Disposed() const;

  constexpr bool& __cordl_internal_get_m_Disposed();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_ElementBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_ElementBuffer();

  constexpr int32_t const& __cordl_internal_get_m_ElementBufferShaderProperty() const;

  constexpr int32_t& __cordl_internal_get_m_ElementBufferShaderProperty();

  constexpr int32_t const& __cordl_internal_get_m_FillAlphaShaderProperty() const;

  constexpr int32_t& __cordl_internal_get_m_FillAlphaShaderProperty();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_GraphicsBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_GraphicsBuffer();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ShaderMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ShaderMaterial();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_ShaderMaterialPropertyBlock() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_ShaderMaterialPropertyBlock();

  constexpr int32_t const& __cordl_internal_get_m_ThicknessShaderProperty() const;

  constexpr int32_t& __cordl_internal_get_m_ThicknessShaderProperty();

  constexpr int32_t const& __cordl_internal_get_m_TransformPlaneShaderProperty() const;

  constexpr int32_t& __cordl_internal_get_m_TransformPlaneShaderProperty();

  constexpr void __cordl_internal_set_m_CommandData(::ArrayW<::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs> value);

  constexpr void __cordl_internal_set_m_CullingBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_Disposed(bool value);

  constexpr void __cordl_internal_set_m_ElementBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_ElementBufferShaderProperty(int32_t value);

  constexpr void __cordl_internal_set_m_FillAlphaShaderProperty(int32_t value);

  constexpr void __cordl_internal_set_m_GraphicsBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_ShaderMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_ShaderMaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set_m_ThicknessShaderProperty(int32_t value);

  constexpr void __cordl_internal_set_m_TransformPlaneShaderProperty(int32_t value);

  /// @brief Method .ctor, addr 0x6fdb7c4, size 0x204, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawerGroup_PhysicsWorldRenderer_BaseDrawer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_BaseDrawer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawerGroup_PhysicsWorldRenderer_BaseDrawer(DrawerGroup_PhysicsWorldRenderer_BaseDrawer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_BaseDrawer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawerGroup_PhysicsWorldRenderer_BaseDrawer(DrawerGroup_PhysicsWorldRenderer_BaseDrawer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21587 };

  /// @brief Field m_Disposed, offset: 0x10, size: 0x1, def value: None
  bool ___m_Disposed;

  /// @brief Field m_Mesh, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_Mesh;

  /// @brief Field m_GraphicsBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_GraphicsBuffer;

  /// @brief Field m_CommandData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GraphicsBuffer_IndirectDrawIndexedArgs> ___m_CommandData;

  /// @brief Field m_ElementBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_ElementBuffer;

  /// @brief Field m_ShaderMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_ShaderMaterial;

  /// @brief Field m_ShaderMaterialPropertyBlock, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___m_ShaderMaterialPropertyBlock;

  /// @brief Field m_CullingBounds, offset: 0x48, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_CullingBounds;

  /// @brief Field m_ElementBufferShaderProperty, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_ElementBufferShaderProperty;

  /// @brief Field m_TransformPlaneShaderProperty, offset: 0x64, size: 0x4, def value: None
  int32_t ___m_TransformPlaneShaderProperty;

  /// @brief Field m_ThicknessShaderProperty, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_ThicknessShaderProperty;

  /// @brief Field m_FillAlphaShaderProperty, offset: 0x6c, size: 0x4, def value: None
  int32_t ___m_FillAlphaShaderProperty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_Disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_Mesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_GraphicsBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_CommandData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_ElementBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_ShaderMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_ShaderMaterialPropertyBlock) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_CullingBounds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_ElementBufferShaderProperty) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_TransformPlaneShaderProperty) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_ThicknessShaderProperty) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer, ___m_FillAlphaShaderProperty) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer) == 0x70, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer::DrawerGroup::BaseDrawer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer/DrawerGroup/PolygonGeometryDrawer
class CORDL_TYPE DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer : public ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer {
public:
  // Declarations
  /// @brief Method Draw, addr 0x6fdb9c8, size 0x204, virtual true, abstract: false, final false
  inline void Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                   float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, int32_t drawCapacity);

  static inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer* New_ctor();

  /// @brief Method .ctor, addr 0x6fdaf24, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer(DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer(DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer) == 0x70, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer::DrawerGroup::BaseDrawer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer/DrawerGroup/CircleGeometryDrawer
class CORDL_TYPE DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer : public ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer {
public:
  // Declarations
  /// @brief Method Draw, addr 0x6fdbbcc, size 0x204, virtual true, abstract: false, final false
  inline void Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                   float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, int32_t drawCapacity);

  static inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer* New_ctor();

  /// @brief Method .ctor, addr 0x6fdafec, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer(DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer(DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21589 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer) == 0x70, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer::DrawerGroup::BaseDrawer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer/DrawerGroup/CapsuleGeometryDrawer
class CORDL_TYPE DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer : public ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer {
public:
  // Declarations
  /// @brief Method Draw, addr 0x6fdbdd0, size 0x204, virtual true, abstract: false, final false
  inline void Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                   float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, int32_t drawCapacity);

  static inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer* New_ctor();

  /// @brief Method .ctor, addr 0x6fdb0b4, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer(DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer(DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21590 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer) == 0x70, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer::DrawerGroup::BaseDrawer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer/DrawerGroup/LineDrawer
class CORDL_TYPE DrawerGroup_PhysicsWorldRenderer_LineDrawer : public ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer {
public:
  // Declarations
  /// @brief Method Draw, addr 0x6fdbfd4, size 0x1ec, virtual true, abstract: false, final false
  inline void Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                   float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, int32_t drawCapacity);

  static inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer* New_ctor();

  /// @brief Method .ctor, addr 0x6fdb17c, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawerGroup_PhysicsWorldRenderer_LineDrawer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_LineDrawer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawerGroup_PhysicsWorldRenderer_LineDrawer(DrawerGroup_PhysicsWorldRenderer_LineDrawer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_LineDrawer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawerGroup_PhysicsWorldRenderer_LineDrawer(DrawerGroup_PhysicsWorldRenderer_LineDrawer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21591 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer) == 0x70, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer::DrawerGroup::BaseDrawer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer/DrawerGroup/PointDrawer
class CORDL_TYPE DrawerGroup_PhysicsWorldRenderer_PointDrawer : public ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer {
public:
  // Declarations
  /// @brief Method Draw, addr 0x6fdc1c0, size 0xa78, virtual true, abstract: false, final false
  inline void Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                   float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, int32_t drawCapacity);

  static inline ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer* New_ctor();

  /// @brief Method .ctor, addr 0x6fdb244, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawerGroup_PhysicsWorldRenderer_PointDrawer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_PointDrawer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawerGroup_PhysicsWorldRenderer_PointDrawer(DrawerGroup_PhysicsWorldRenderer_PointDrawer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawerGroup_PhysicsWorldRenderer_PointDrawer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawerGroup_PhysicsWorldRenderer_PointDrawer(DrawerGroup_PhysicsWorldRenderer_PointDrawer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer) == 0x70, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// Dependencies System.Object, UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer::DrawerGroup::BaseDrawer
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer/DrawerGroup
class CORDL_TYPE PhysicsWorldRenderer_DrawerGroup : public ::System::Object {
public:
  // Declarations
  using BaseDrawer = ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer;

  using CapsuleGeometryDrawer = ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CapsuleGeometryDrawer;

  using CircleGeometryDrawer = ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_CircleGeometryDrawer;

  using LineDrawer = ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_LineDrawer;

  using PointDrawer = ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PointDrawer;

  using PolygonGeometryDrawer = ::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_PolygonGeometryDrawer;

  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Field m_Drawers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Drawers, put = __cordl_internal_set_m_Drawers)) ::ArrayW<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*> m_Drawers;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x6fda54c, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Draw, addr 0x6fdae74, size 0xa0, virtual false, abstract: false, final false
  inline void Draw(::UnityEngine::Rendering::CommandBuffer* rendererCommandBuffer, ::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults> drawResults, float_t thickness,
                   float_t fillAlpha, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, int32_t drawCapacity);

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup* New_ctor();

  constexpr ::ArrayW<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*> const& __cordl_internal_get_m_Drawers() const;

  constexpr ::ArrayW<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*>& __cordl_internal_get_m_Drawers();

  constexpr void __cordl_internal_set_m_Drawers(::ArrayW<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*> value);

  /// @brief Method .ctor, addr 0x6fdac6c, size 0x208, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isValid, addr 0x6fdaf14, size 0x10, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorldRenderer_DrawerGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsWorldRenderer_DrawerGroup", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsWorldRenderer_DrawerGroup(PhysicsWorldRenderer_DrawerGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsWorldRenderer_DrawerGroup", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsWorldRenderer_DrawerGroup(PhysicsWorldRenderer_DrawerGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21593 };

  /// @brief Field m_Drawers, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::LowLevelPhysics2D::DrawerGroup_PhysicsWorldRenderer_BaseDrawer*> ___m_Drawers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup, ___m_Drawers) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup) == 0x18, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
// [RequiredByNativeCode(GenerateProxy = true)]
// Dependencies System.Object, UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer::DrawerGroup
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsWorldRenderer
class CORDL_TYPE PhysicsWorldRenderer : public ::System::Object {
public:
  // Declarations
  using DrawerGroup = ::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup;

  /// @brief Field s_DrawerGroups, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DrawerGroups, put = setStaticF_s_DrawerGroups)) ::ArrayW<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*> s_DrawerGroups;

  /// @brief Field s_IsInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_IsInitialized, put = setStaticF_s_IsInitialized)) bool s_IsInitialized;

  /// @brief Field s_RendererCommandBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RendererCommandBuffer, put = setStaticF_s_RendererCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer* s_RendererCommandBuffer;

  /// @brief Field s_UsingBIRP, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_UsingBIRP, put = setStaticF_s_UsingBIRP)) bool s_UsingBIRP;

  /// @brief Method BIRP_RenderAllWorlds, addr 0x6fda674, size 0x230, virtual false, abstract: false, final false
  static inline void BIRP_RenderAllWorlds(::UnityEngine::Camera* camera);

  /// @brief Method GetCameraViewAABB, addr 0x6fda5bc, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsAABB GetCameraViewAABB(::UnityEngine::Camera* camera);

  /// [RequiredByNativeCode]
  /// @brief Method InitializeRendering, addr 0x6fda120, size 0x238, virtual false, abstract: false, final false
  static inline void InitializeRendering();

  /// @brief Method IsCameraTypeValid, addr 0x6fda650, size 0x24, virtual false, abstract: false, final false
  static inline bool IsCameraTypeValid(::UnityEngine::Camera* camera);

  /// @brief Method SRP_RenderAllWorlds, addr 0x6fda8a4, size 0x238, virtual false, abstract: false, final false
  static inline void SRP_RenderAllWorlds(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// [RequiredByNativeCode]
  /// @brief Method SendDrawResultsToCommandBuffer, addr 0x6fdaadc, size 0x190, virtual false, abstract: false, final false
  static inline void SendDrawResultsToCommandBuffer(::UnityEngine::LowLevelPhysics2D::PhysicsWorld physicsWorld, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_DrawResults drawResults,
                                                    ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane, float_t thickness, float_t fillAlpha, int32_t drawCapacity);

  /// [RequiredByNativeCode]
  /// @brief Method ShutdownRendering, addr 0x6fda358, size 0x1f4, virtual false, abstract: false, final false
  static inline void ShutdownRendering();

  static inline ::ArrayW<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*> getStaticF_s_DrawerGroups();

  static inline bool getStaticF_s_IsInitialized();

  static inline ::UnityEngine::Rendering::CommandBuffer* getStaticF_s_RendererCommandBuffer();

  static inline bool getStaticF_s_UsingBIRP();

  static inline void setStaticF_s_DrawerGroups(::ArrayW<::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer_DrawerGroup*> value);

  static inline void setStaticF_s_IsInitialized(bool value);

  static inline void setStaticF_s_RendererCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  static inline void setStaticF_s_UsingBIRP(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsWorldRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsWorldRenderer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsWorldRenderer(PhysicsWorldRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsWorldRenderer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsWorldRenderer(PhysicsWorldRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21594 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsWorldRenderer) == 0x10, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
