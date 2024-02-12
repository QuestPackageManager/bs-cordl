#pragma once
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
// Type: UnityEngine.ProBuilder.Shapes::Plane
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12131))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12128))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Plane*
class CORDL_TYPE Plane : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field m_HeightSegments, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HeightSegments, put = __cordl_internal_set_m_HeightSegments)) int32_t m_HeightSegments;

  /// @brief Field m_WidthSegments, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WidthSegments, put = __cordl_internal_set_m_WidthSegments)) int32_t m_WidthSegments;

  constexpr int32_t& __cordl_internal_get_m_HeightSegments();

  constexpr int32_t const& __cordl_internal_get_m_HeightSegments() const;

  constexpr void __cordl_internal_set_m_HeightSegments(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_WidthSegments();

  constexpr int32_t const& __cordl_internal_get_m_WidthSegments() const;

  constexpr void __cordl_internal_set_m_WidthSegments(int32_t value);

  /// @brief Method CopyShape, addr 0x2b8ac08, size 0xac, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  /// @brief Method RebuildMesh, addr 0x2b8acb4, size 0x24c, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  static inline ::UnityEngine::ProBuilder::Shapes::Plane* New_ctor();

  /// @brief Method .ctor, addr 0x2b8af00, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Plane", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Plane(Plane&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Plane", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Plane(Plane const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Plane();

public:
  /// @brief Field m_HeightSegments, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_HeightSegments;

  /// @brief Field m_WidthSegments, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_WidthSegments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Plane, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Plane, ___m_HeightSegments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Plane, ___m_WidthSegments) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Plane);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Plane*, "UnityEngine.ProBuilder.Shapes", "Plane");
