#pragma once
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
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class ProBuilderShape;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::ProBuilderShape);
// Type: UnityEngine.ProBuilder.Shapes::ProBuilderShape
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10164)),
// TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(12195))} Self: TypeDefinitionIndex(TypeDefinitionIndex(12232)) CS Name:
// ::UnityEngine.ProBuilder.Shapes::ProBuilderShape*
class CORDL_TYPE ProBuilderShape : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_Shape, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Shape, put = __set_m_Shape))::UnityEngine::ProBuilder::Shapes::Shape* m_Shape;

  /// @brief Field m_Size, offset 0x20, size 0xc
  __declspec(property(get = __get_m_Size, put = __set_m_Size))::UnityEngine::Vector3 m_Size;

  /// @brief Field m_Rotation, offset 0x2c, size 0x10
  __declspec(property(get = __get_m_Rotation, put = __set_m_Rotation))::UnityEngine::Quaternion m_Rotation;

  /// @brief Field m_Mesh, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Mesh, put = __set_m_Mesh))::UnityEngine::ProBuilder::ProBuilderMesh* m_Mesh;

  /// @brief Field m_PivotLocation, offset 0x48, size 0x4
  __declspec(property(get = __get_m_PivotLocation, put = __set_m_PivotLocation))::UnityEngine::ProBuilder::PivotLocation m_PivotLocation;

  /// @brief Field m_PivotPosition, offset 0x4c, size 0xc
  __declspec(property(get = __get_m_PivotPosition, put = __set_m_PivotPosition))::UnityEngine::Vector3 m_PivotPosition;

  /// @brief Field m_UnmodifiedMeshVersion, offset 0x58, size 0x2
  __declspec(property(get = __get_m_UnmodifiedMeshVersion, put = __set_m_UnmodifiedMeshVersion)) uint16_t m_UnmodifiedMeshVersion;

  /// @brief Field m_EditionBounds, offset 0x5c, size 0x18
  __declspec(property(get = __get_m_EditionBounds, put = __set_m_EditionBounds))::UnityEngine::Bounds m_EditionBounds;

  /// @brief Field m_ShapeBox, offset 0x74, size 0x18
  __declspec(property(get = __get_m_ShapeBox, put = __set_m_ShapeBox))::UnityEngine::Bounds m_ShapeBox;

  __declspec(property(get = get_shape, put = set_shape))::UnityEngine::ProBuilder::Shapes::Shape* shape;

  __declspec(property(get = get_pivotLocation, put = set_pivotLocation))::UnityEngine::ProBuilder::PivotLocation pivotLocation;

  __declspec(property(get = get_pivotLocalPosition, put = set_pivotLocalPosition))::UnityEngine::Vector3 pivotLocalPosition;

  __declspec(property(get = get_pivotGlobalPosition, put = set_pivotGlobalPosition))::UnityEngine::Vector3 pivotGlobalPosition;

  __declspec(property(get = get_size, put = set_size))::UnityEngine::Vector3 size;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_editionBounds))::UnityEngine::Bounds editionBounds;

  __declspec(property(get = get_shapeBox))::UnityEngine::Bounds shapeBox;

  __declspec(property(get = get_isEditable)) bool isEditable;

  __declspec(property(get = get_mesh))::UnityEngine::ProBuilder::ProBuilderMesh* mesh;

  constexpr ::UnityEngine::ProBuilder::Shapes::Shape*& __get_m_Shape();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Shapes::Shape*> const& __get_m_Shape() const;

  constexpr void __set_m_Shape(::UnityEngine::ProBuilder::Shapes::Shape* value);

  constexpr ::UnityEngine::Vector3& __get_m_Size();

  constexpr ::UnityEngine::Vector3 const& __get_m_Size() const;

  constexpr void __set_m_Size(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_m_Rotation();

  constexpr ::UnityEngine::Quaternion const& __get_m_Rotation() const;

  constexpr void __set_m_Rotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::ProBuilder::ProBuilderMesh*& __get_m_Mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::ProBuilderMesh*> const& __get_m_Mesh() const;

  constexpr void __set_m_Mesh(::UnityEngine::ProBuilder::ProBuilderMesh* value);

  constexpr ::UnityEngine::ProBuilder::PivotLocation& __get_m_PivotLocation();

  constexpr ::UnityEngine::ProBuilder::PivotLocation const& __get_m_PivotLocation() const;

  constexpr void __set_m_PivotLocation(::UnityEngine::ProBuilder::PivotLocation value);

  constexpr ::UnityEngine::Vector3& __get_m_PivotPosition();

  constexpr ::UnityEngine::Vector3 const& __get_m_PivotPosition() const;

  constexpr void __set_m_PivotPosition(::UnityEngine::Vector3 value);

  constexpr uint16_t& __get_m_UnmodifiedMeshVersion();

  constexpr uint16_t const& __get_m_UnmodifiedMeshVersion() const;

  constexpr void __set_m_UnmodifiedMeshVersion(uint16_t value);

  constexpr ::UnityEngine::Bounds& __get_m_EditionBounds();

  constexpr ::UnityEngine::Bounds const& __get_m_EditionBounds() const;

  constexpr void __set_m_EditionBounds(::UnityEngine::Bounds value);

  constexpr ::UnityEngine::Bounds& __get_m_ShapeBox();

  constexpr ::UnityEngine::Bounds const& __get_m_ShapeBox() const;

  constexpr void __set_m_ShapeBox(::UnityEngine::Bounds value);

  /// @brief Method get_shape, addr 0x2b8cbc4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Shapes::Shape* get_shape();

  /// @brief Method set_shape, addr 0x2b8cbcc, size 0x8, virtual false, abstract: false, final false
  inline void set_shape(::UnityEngine::ProBuilder::Shapes::Shape* value);

  /// @brief Method get_pivotLocation, addr 0x2b8cbd4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::PivotLocation get_pivotLocation();

  /// @brief Method set_pivotLocation, addr 0x2b8cbdc, size 0x8, virtual false, abstract: false, final false
  inline void set_pivotLocation(::UnityEngine::ProBuilder::PivotLocation value);

  /// @brief Method get_pivotLocalPosition, addr 0x2b8cbe4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivotLocalPosition();

  /// @brief Method set_pivotLocalPosition, addr 0x2b8cbf0, size 0xc, virtual false, abstract: false, final false
  inline void set_pivotLocalPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_pivotGlobalPosition, addr 0x2b8cbfc, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivotGlobalPosition();

  /// @brief Method set_pivotGlobalPosition, addr 0x2b8cd28, size 0x60, virtual false, abstract: false, final false
  inline void set_pivotGlobalPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_size, addr 0x2b8cd88, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method set_size, addr 0x2b8cd94, size 0xbc, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method get_rotation, addr 0x2b8ce50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method set_rotation, addr 0x2b8ce5c, size 0xc, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method get_editionBounds, addr 0x2b8ce68, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_editionBounds();

  /// @brief Method get_shapeBox, addr 0x2b8cf34, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_shapeBox();

  /// @brief Method get_isEditable, addr 0x2b8cf48, size 0x28, virtual false, abstract: false, final false
  inline bool get_isEditable();

  /// @brief Method get_mesh, addr 0x2b8cc30, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::ProBuilderMesh* get_mesh();

  /// @brief Method OnValidate, addr 0x2b8cf70, size 0xa4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method UpdateComponent, addr 0x2b8d014, size 0x34, virtual false, abstract: false, final false
  inline void UpdateComponent();

  /// @brief Method UpdateBounds, addr 0x2b8d3f8, size 0xcc, virtual false, abstract: false, final false
  inline void UpdateBounds(::UnityEngine::Bounds bounds);

  /// @brief Method Rebuild, addr 0x2b8d4c4, size 0xec, virtual false, abstract: false, final false
  inline void Rebuild(::UnityEngine::Bounds bounds, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 cornerPivot);

  /// @brief Method Rebuild, addr 0x2b8d264, size 0x194, virtual false, abstract: false, final false
  inline void Rebuild();

  /// @brief Method SetShape, addr 0x2b8d7f0, size 0x250, virtual false, abstract: false, final false
  inline void SetShape(::UnityEngine::ProBuilder::Shapes::Shape* shape, ::UnityEngine::ProBuilder::PivotLocation location);

  /// @brief Method RotateInsideBounds, addr 0x2b8da40, size 0xd4, virtual false, abstract: false, final false
  inline void RotateInsideBounds(::UnityEngine::Quaternion deltaRotation);

  /// @brief Method ResetPivot, addr 0x2b8d048, size 0x21c, virtual false, abstract: false, final false
  inline void ResetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method RebuildPivot, addr 0x2b8d5b0, size 0x240, virtual false, abstract: false, final false
  inline void RebuildPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  static inline ::UnityEngine::ProBuilder::Shapes::ProBuilderShape* New_ctor();

  /// @brief Method .ctor, addr 0x2b8db14, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderShape", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProBuilderShape(ProBuilderShape&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProBuilderShape", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProBuilderShape(ProBuilderShape const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProBuilderShape();

public:
  /// @brief Field m_Shape, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Shapes::Shape* ___m_Shape;

  /// @brief Field m_Size, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Size;

  /// @brief Field m_Rotation, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_Rotation;

  /// @brief Field m_Mesh, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::ProBuilderMesh* ___m_Mesh;

  /// @brief Field m_PivotLocation, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::PivotLocation ___m_PivotLocation;

  /// @brief Field m_PivotPosition, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_PivotPosition;

  /// @brief Field m_UnmodifiedMeshVersion, offset: 0x58, size: 0x2, def value: None
  uint16_t ___m_UnmodifiedMeshVersion;

  /// @brief Field m_EditionBounds, offset: 0x5c, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_EditionBounds;

  /// @brief Field m_ShapeBox, offset: 0x74, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_ShapeBox;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::ProBuilderShape, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Shape) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Rotation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Mesh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_PivotLocation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_PivotPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_UnmodifiedMeshVersion) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_EditionBounds) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_ShapeBox) == 0x74, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::ProBuilderShape);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::ProBuilderShape*, "UnityEngine.ProBuilder.Shapes", "ProBuilderShape");
