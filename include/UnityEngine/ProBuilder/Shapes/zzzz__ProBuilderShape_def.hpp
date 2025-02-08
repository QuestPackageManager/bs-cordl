#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Shapes/ProBuilderShape.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/zzzz__PivotLocation_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProBuilderShape)
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class ProBuilderShape;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::ProBuilderShape);
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.ProBuilder.PivotLocation, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Shapes.ProBuilderShape
class CORDL_TYPE ProBuilderShape : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_editionBounds)) ::UnityEngine::Bounds editionBounds;

  __declspec(property(get = get_isEditable)) bool isEditable;

  /// @brief Field m_EditionBounds, offset 0x64, size 0x18
  __declspec(property(get = __cordl_internal_get_m_EditionBounds, put = __cordl_internal_set_m_EditionBounds)) ::UnityEngine::Bounds m_EditionBounds;

  /// @brief Field m_Mesh, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> m_Mesh;

  /// @brief Field m_PivotLocation, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PivotLocation, put = __cordl_internal_set_m_PivotLocation)) ::UnityEngine::ProBuilder::PivotLocation m_PivotLocation;

  /// @brief Field m_PivotPosition, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_m_PivotPosition, put = __cordl_internal_set_m_PivotPosition)) ::UnityEngine::Vector3 m_PivotPosition;

  /// @brief Field m_Rotation, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Rotation, put = __cordl_internal_set_m_Rotation)) ::UnityEngine::Quaternion m_Rotation;

  /// @brief Field m_Shape, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shape, put = __cordl_internal_set_m_Shape)) ::UnityEngine::ProBuilder::Shapes::Shape* m_Shape;

  /// @brief Field m_ShapeBox, offset 0x7c, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ShapeBox, put = __cordl_internal_set_m_ShapeBox)) ::UnityEngine::Bounds m_ShapeBox;

  /// @brief Field m_Size, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) ::UnityEngine::Vector3 m_Size;

  /// @brief Field m_UnmodifiedMeshVersion, offset 0x60, size 0x2
  __declspec(property(get = __cordl_internal_get_m_UnmodifiedMeshVersion, put = __cordl_internal_set_m_UnmodifiedMeshVersion)) uint16_t m_UnmodifiedMeshVersion;

  __declspec(property(get = get_mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> mesh;

  __declspec(property(get = get_pivotGlobalPosition, put = set_pivotGlobalPosition)) ::UnityEngine::Vector3 pivotGlobalPosition;

  __declspec(property(get = get_pivotLocalPosition, put = set_pivotLocalPosition)) ::UnityEngine::Vector3 pivotLocalPosition;

  __declspec(property(get = get_pivotLocation, put = set_pivotLocation)) ::UnityEngine::ProBuilder::PivotLocation pivotLocation;

  __declspec(property(get = get_rotation, put = set_rotation)) ::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_shape, put = set_shape)) ::UnityEngine::ProBuilder::Shapes::Shape* shape;

  __declspec(property(get = get_shapeBox)) ::UnityEngine::Bounds shapeBox;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector3 size;

  static inline ::UnityEngine::ProBuilder::Shapes::ProBuilderShape* New_ctor();

  /// @brief Method OnValidate, addr 0x4756f0c, size 0xa4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Rebuild, addr 0x47571f4, size 0x1a0, virtual false, abstract: false, final false
  inline void Rebuild();

  /// @brief Method Rebuild, addr 0x4757424, size 0xdc, virtual false, abstract: false, final false
  inline void Rebuild(::UnityEngine::Bounds bounds, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 cornerPivot);

  /// @brief Method RebuildPivot, addr 0x4757500, size 0x234, virtual false, abstract: false, final false
  inline void RebuildPivot(::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method ResetPivot, addr 0x4756fe4, size 0x210, virtual false, abstract: false, final false
  inline void ResetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method RotateInsideBounds, addr 0x47578a8, size 0xd4, virtual false, abstract: false, final false
  inline void RotateInsideBounds(::UnityEngine::Quaternion deltaRotation);

  /// @brief Method SetShape, addr 0x4757734, size 0x174, virtual false, abstract: false, final false
  inline void SetShape(::UnityEngine::ProBuilder::Shapes::Shape* shape, ::UnityEngine::ProBuilder::PivotLocation location);

  /// @brief Method UpdateBounds, addr 0x4757394, size 0x90, virtual false, abstract: false, final false
  inline void UpdateBounds(::UnityEngine::Bounds bounds);

  /// @brief Method UpdateComponent, addr 0x4756fb0, size 0x34, virtual false, abstract: false, final false
  inline void UpdateComponent();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_EditionBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_EditionBounds();

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& __cordl_internal_get_m_Mesh();

  constexpr ::UnityEngine::ProBuilder::PivotLocation const& __cordl_internal_get_m_PivotLocation() const;

  constexpr ::UnityEngine::ProBuilder::PivotLocation& __cordl_internal_get_m_PivotLocation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PivotPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PivotPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_Rotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_Rotation();

  constexpr ::UnityEngine::ProBuilder::Shapes::Shape* const& __cordl_internal_get_m_Shape() const;

  constexpr ::UnityEngine::ProBuilder::Shapes::Shape*& __cordl_internal_get_m_Shape();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_ShapeBox() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_ShapeBox();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Size() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Size();

  constexpr uint16_t const& __cordl_internal_get_m_UnmodifiedMeshVersion() const;

  constexpr uint16_t& __cordl_internal_get_m_UnmodifiedMeshVersion();

  constexpr void __cordl_internal_set_m_EditionBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value);

  constexpr void __cordl_internal_set_m_PivotLocation(::UnityEngine::ProBuilder::PivotLocation value);

  constexpr void __cordl_internal_set_m_PivotPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Rotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_Shape(::UnityEngine::ProBuilder::Shapes::Shape* value);

  constexpr void __cordl_internal_set_m_ShapeBox(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_Size(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_UnmodifiedMeshVersion(uint16_t value);

  /// @brief Method .ctor, addr 0x475797c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_editionBounds, addr 0x4756e14, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_editionBounds();

  /// @brief Method get_isEditable, addr 0x4756ee4, size 0x28, virtual false, abstract: false, final false
  inline bool get_isEditable();

  /// @brief Method get_mesh, addr 0x4756bdc, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> get_mesh();

  /// @brief Method get_pivotGlobalPosition, addr 0x4756ba8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivotGlobalPosition();

  /// @brief Method get_pivotLocalPosition, addr 0x4756b90, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivotLocalPosition();

  /// @brief Method get_pivotLocation, addr 0x4756b80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::PivotLocation get_pivotLocation();

  /// @brief Method get_rotation, addr 0x4756dfc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_shape, addr 0x4756b70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Shapes::Shape* get_shape();

  /// @brief Method get_shapeBox, addr 0x4756ed0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_shapeBox();

  /// @brief Method get_size, addr 0x4756d34, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method set_pivotGlobalPosition, addr 0x4756cd4, size 0x60, virtual false, abstract: false, final false
  inline void set_pivotGlobalPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_pivotLocalPosition, addr 0x4756b9c, size 0xc, virtual false, abstract: false, final false
  inline void set_pivotLocalPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_pivotLocation, addr 0x4756b88, size 0x8, virtual false, abstract: false, final false
  inline void set_pivotLocation(::UnityEngine::ProBuilder::PivotLocation value);

  /// @brief Method set_rotation, addr 0x4756e08, size 0xc, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_shape, addr 0x4756b78, size 0x8, virtual false, abstract: false, final false
  inline void set_shape(::UnityEngine::ProBuilder::Shapes::Shape* value);

  /// @brief Method set_size, addr 0x4756d40, size 0xbc, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProBuilderShape();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderShape", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProBuilderShape(ProBuilderShape&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderShape", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProBuilderShape(ProBuilderShape const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14349 };

  /// @brief Field m_Shape, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Shapes::Shape* ___m_Shape;

  /// @brief Field m_Size, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Size;

  /// @brief Field m_Rotation, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_Rotation;

  /// @brief Field m_Mesh, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> ___m_Mesh;

  /// @brief Field m_PivotLocation, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::PivotLocation ___m_PivotLocation;

  /// @brief Field m_PivotPosition, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_PivotPosition;

  /// @brief Field m_UnmodifiedMeshVersion, offset: 0x60, size: 0x2, def value: None
  uint16_t ___m_UnmodifiedMeshVersion;

  /// @brief Field m_EditionBounds, offset: 0x64, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_EditionBounds;

  /// @brief Field m_ShapeBox, offset: 0x7c, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_ShapeBox;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Shape) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Size) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Rotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Mesh) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_PivotLocation) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_PivotPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_UnmodifiedMeshVersion) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_EditionBounds) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_ShapeBox) == 0x7c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::ProBuilderShape, 0x98>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::ProBuilderShape);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::ProBuilderShape*, "UnityEngine.ProBuilder.Shapes", "ProBuilderShape");
