#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Shapes/Plane.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Plane)
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
class Plane;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Plane);
// Dependencies UnityEngine.ProBuilder.Shapes.Shape
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Shapes.Plane
class CORDL_TYPE Plane : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field m_HeightSegments, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HeightSegments, put = __cordl_internal_set_m_HeightSegments)) int32_t m_HeightSegments;

  /// @brief Field m_WidthSegments, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WidthSegments, put = __cordl_internal_set_m_WidthSegments)) int32_t m_WidthSegments;

  /// @brief Method CopyShape, addr 0x64e870c, size 0xbc, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  static inline ::UnityEngine::ProBuilder::Shapes::Plane* New_ctor();

  /// @brief Method RebuildMesh, addr 0x64e87c8, size 0x25c, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  constexpr int32_t const& __cordl_internal_get_m_HeightSegments() const;

  constexpr int32_t& __cordl_internal_get_m_HeightSegments();

  constexpr int32_t const& __cordl_internal_get_m_WidthSegments() const;

  constexpr int32_t& __cordl_internal_get_m_WidthSegments();

  constexpr void __cordl_internal_set_m_HeightSegments(int32_t value);

  constexpr void __cordl_internal_set_m_WidthSegments(int32_t value);

  /// @brief Method .ctor, addr 0x64e8a24, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Plane();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Plane", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Plane(Plane&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Plane", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Plane(Plane const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16795 };

  /// @brief Field m_HeightSegments, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_HeightSegments;

  /// @brief Field m_WidthSegments, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_WidthSegments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Plane, ___m_HeightSegments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Plane, ___m_WidthSegments) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Plane, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Plane);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Plane*, "UnityEngine.ProBuilder.Shapes", "Plane");
