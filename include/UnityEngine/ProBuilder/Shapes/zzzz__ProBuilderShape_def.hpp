#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Shapes/ProBuilderShape.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProBuilderShape)
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
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
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Shapes.ProBuilderShape
class CORDL_TYPE ProBuilderShape : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_editionBounds)) ::UnityEngine::Bounds editionBounds;

  __declspec(property(get = get_isEditable)) bool isEditable;

  /// @brief Field m_EditionBounds, offset 0x50, size 0x18
  __declspec(property(get = __cordl_internal_get_m_EditionBounds, put = __cordl_internal_set_m_EditionBounds)) ::UnityEngine::Bounds m_EditionBounds;

  /// @brief Field m_LocalCenter, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get_m_LocalCenter, put = __cordl_internal_set_m_LocalCenter)) ::UnityEngine::Vector3 m_LocalCenter;

  /// @brief Field m_Mesh, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> m_Mesh;

  /// @brief Field m_Shape, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shape, put = __cordl_internal_set_m_Shape)) ::UnityEngine::ProBuilder::Shapes::Shape* m_Shape;

  /// @brief Field m_ShapeRotation, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ShapeRotation, put = __cordl_internal_set_m_ShapeRotation)) ::UnityEngine::Quaternion m_ShapeRotation;

  /// @brief Field m_Size, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) ::UnityEngine::Vector3 m_Size;

  /// @brief Field m_UnmodifiedMeshVersion, offset 0x40, size 0x2
  __declspec(property(get = __cordl_internal_get_m_UnmodifiedMeshVersion, put = __cordl_internal_set_m_UnmodifiedMeshVersion)) uint16_t m_UnmodifiedMeshVersion;

  __declspec(property(get = get_mesh)) ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> mesh;

  __declspec(property(get = get_shape)) ::UnityEngine::ProBuilder::Shapes::Shape* shape;

  __declspec(property(get = get_shapeLocalBounds)) ::UnityEngine::Bounds shapeLocalBounds;

  __declspec(property(get = get_shapeRotation, put = set_shapeRotation)) ::UnityEngine::Quaternion shapeRotation;

  __declspec(property(get = get_shapeWorldBounds)) ::UnityEngine::Bounds shapeWorldBounds;

  __declspec(property(get = get_shapeWorldCenter)) ::UnityEngine::Vector3 shapeWorldCenter;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector3 size;

  static inline ::UnityEngine::ProBuilder::Shapes::ProBuilderShape* New_ctor();

  /// @brief Method OnValidate, addr 0x64e9534, size 0xa8, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Rebuild, addr 0x64e993c, size 0x154, virtual false, abstract: false, final false
  inline void Rebuild();

  /// @brief Method Rebuild, addr 0x64e9a90, size 0xb4, virtual false, abstract: false, final false
  inline void Rebuild(::UnityEngine::Bounds bounds, ::UnityEngine::Quaternion rotation);

  /// @brief Method Rebuild, addr 0x64e9758, size 0x11c, virtual false, abstract: false, final false
  inline void Rebuild(::UnityEngine::Vector3 pivotPosition, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds);

  /// @brief Method RotateInsideBounds, addr 0x64e9c54, size 0x190, virtual false, abstract: false, final false
  inline void RotateInsideBounds(::UnityEngine::Quaternion deltaRotation);

  /// @brief Method SetShape, addr 0x64e9b44, size 0x110, virtual false, abstract: false, final false
  inline void SetShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  /// @brief Method UpdateBounds, addr 0x64e9874, size 0xc8, virtual false, abstract: false, final false
  inline void UpdateBounds(::UnityEngine::Bounds bounds);

  /// @brief Method UpdateShape, addr 0x64e95dc, size 0x17c, virtual false, abstract: false, final false
  inline void UpdateShape();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_EditionBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_EditionBounds();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LocalCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LocalCenter();

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>& __cordl_internal_get_m_Mesh();

  constexpr ::UnityEngine::ProBuilder::Shapes::Shape* const& __cordl_internal_get_m_Shape() const;

  constexpr ::UnityEngine::ProBuilder::Shapes::Shape*& __cordl_internal_get_m_Shape();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_ShapeRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_ShapeRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Size() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Size();

  constexpr uint16_t const& __cordl_internal_get_m_UnmodifiedMeshVersion() const;

  constexpr uint16_t& __cordl_internal_get_m_UnmodifiedMeshVersion();

  constexpr void __cordl_internal_set_m_EditionBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_LocalCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> value);

  constexpr void __cordl_internal_set_m_Shape(::UnityEngine::ProBuilder::Shapes::Shape* value);

  constexpr void __cordl_internal_set_m_ShapeRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_Size(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_UnmodifiedMeshVersion(uint16_t value);

  /// @brief Method .ctor, addr 0x64e9de4, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_editionBounds, addr 0x64e92d4, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_editionBounds();

  /// @brief Method get_isEditable, addr 0x64e9408, size 0x28, virtual false, abstract: false, final false
  inline bool get_isEditable();

  /// @brief Method get_mesh, addr 0x64e9430, size 0x104, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> get_mesh();

  /// @brief Method get_shape, addr 0x64e91bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Shapes::Shape* get_shape();

  /// @brief Method get_shapeLocalBounds, addr 0x64e938c, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_shapeLocalBounds();

  /// @brief Method get_shapeRotation, addr 0x64e9290, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_shapeRotation();

  /// @brief Method get_shapeWorldBounds, addr 0x64e93c0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_shapeWorldBounds();

  /// @brief Method get_shapeWorldCenter, addr 0x64e92a8, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_shapeWorldCenter();

  /// @brief Method get_size, addr 0x64e91c4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method set_shapeRotation, addr 0x64e929c, size 0xc, virtual false, abstract: false, final false
  inline void set_shapeRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_size, addr 0x64e91d0, size 0xc0, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16797 };

  /// @brief Field k_IconPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_IconPath{ u"Packages/com.unity.probuilder/Content/Icons/EditableMesh/EditableMesh.png" };

  /// @brief Field m_Shape, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Shapes::Shape* ___m_Shape;

  /// @brief Field m_ShapeRotation, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_ShapeRotation;

  /// @brief Field m_Mesh, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> ___m_Mesh;

  /// @brief Field m_UnmodifiedMeshVersion, offset: 0x40, size: 0x2, def value: None
  uint16_t ___m_UnmodifiedMeshVersion;

  /// @brief Field m_Size, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Size;

  /// @brief Field m_EditionBounds, offset: 0x50, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_EditionBounds;

  /// @brief Field m_LocalCenter, offset: 0x68, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_LocalCenter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Shape) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_ShapeRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Mesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_UnmodifiedMeshVersion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_Size) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_EditionBounds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::ProBuilderShape, ___m_LocalCenter) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::ProBuilderShape, 0x78>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::ProBuilderShape);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::ProBuilderShape*, "UnityEngine.ProBuilder.Shapes", "ProBuilderShape");
