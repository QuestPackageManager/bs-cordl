#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Torus)
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
class Torus;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Torus);
// Type: UnityEngine.ProBuilder.Shapes::Torus
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12239))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Torus*
class CORDL_TYPE Torus : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field m_Rows, offset 0x10, size 0x4
  __declspec(property(get = __get_m_Rows, put = __set_m_Rows)) int32_t m_Rows;

  /// @brief Field m_Columns, offset 0x14, size 0x4
  __declspec(property(get = __get_m_Columns, put = __set_m_Columns)) int32_t m_Columns;

  /// @brief Field m_TubeRadius, offset 0x18, size 0x4
  __declspec(property(get = __get_m_TubeRadius, put = __set_m_TubeRadius)) float_t m_TubeRadius;

  /// @brief Field m_HorizontalCircumference, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_HorizontalCircumference, put = __set_m_HorizontalCircumference)) float_t m_HorizontalCircumference;

  /// @brief Field m_VerticalCircumference, offset 0x20, size 0x4
  __declspec(property(get = __get_m_VerticalCircumference, put = __set_m_VerticalCircumference)) float_t m_VerticalCircumference;

  /// @brief Field m_Smooth, offset 0x24, size 0x1
  __declspec(property(get = __get_m_Smooth, put = __set_m_Smooth)) bool m_Smooth;

  constexpr int32_t& __get_m_Rows();

  constexpr int32_t const& __get_m_Rows() const;

  constexpr void __set_m_Rows(int32_t value);

  constexpr int32_t& __get_m_Columns();

  constexpr int32_t const& __get_m_Columns() const;

  constexpr void __set_m_Columns(int32_t value);

  constexpr float_t& __get_m_TubeRadius();

  constexpr float_t const& __get_m_TubeRadius() const;

  constexpr void __set_m_TubeRadius(float_t value);

  constexpr float_t& __get_m_HorizontalCircumference();

  constexpr float_t const& __get_m_HorizontalCircumference() const;

  constexpr void __set_m_HorizontalCircumference(float_t value);

  constexpr float_t& __get_m_VerticalCircumference();

  constexpr float_t const& __get_m_VerticalCircumference() const;

  constexpr void __set_m_VerticalCircumference(float_t value);

  constexpr bool& __get_m_Smooth();

  constexpr bool const& __get_m_Smooth() const;

  constexpr void __set_m_Smooth(bool value);

  /// @brief Method CopyShape, addr 0x2b914f0, size 0x8c, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  /// @brief Method UpdateBounds, addr 0x2b9157c, size 0x88, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds);

  /// @brief Method RebuildMesh, addr 0x2b91604, size 0x984, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method GetCirclePoints, addr 0x2b91f88, size 0x34c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetCirclePoints(int32_t segments, float_t radius, float_t circumference, ::UnityEngine::Quaternion rotation,
                                                                                                   float_t offset);

  /// @brief Method GetCirclePoints, addr 0x2b922d4, size 0x298, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetCirclePoints(int32_t segments, float_t radius, float_t circumference, ::UnityEngine::Quaternion rotation,
                                                                                                   ::UnityEngine::Vector3 offset);

  static inline ::UnityEngine::ProBuilder::Shapes::Torus* New_ctor();

  /// @brief Method .ctor, addr 0x2b9256c, size 0x102c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Torus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Torus(Torus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Torus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Torus(Torus const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Torus();

public:
  /// @brief Field m_Rows, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Rows;

  /// @brief Field m_Columns, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_Columns;

  /// @brief Field m_TubeRadius, offset: 0x18, size: 0x4, def value: None
  float_t ___m_TubeRadius;

  /// @brief Field m_HorizontalCircumference, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_HorizontalCircumference;

  /// @brief Field m_VerticalCircumference, offset: 0x20, size: 0x4, def value: None
  float_t ___m_VerticalCircumference;

  /// @brief Field m_Smooth, offset: 0x24, size: 0x1, def value: None
  bool ___m_Smooth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Torus, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Torus, ___m_Rows) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Torus, ___m_Columns) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Torus, ___m_TubeRadius) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Torus, ___m_HorizontalCircumference) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Torus, ___m_VerticalCircumference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Torus, ___m_Smooth) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Torus);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Torus*, "UnityEngine.ProBuilder.Shapes", "Torus");
