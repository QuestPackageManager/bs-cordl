#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__StepGenerationType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Stairs)
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
class Stairs;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Stairs);
// Type: UnityEngine.ProBuilder.Shapes::Stairs
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Shapes::Stairs*
class CORDL_TYPE Stairs : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field m_Circumference, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Circumference, put = __cordl_internal_set_m_Circumference)) float_t m_Circumference;

  /// @brief Field m_HomogeneousSteps, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HomogeneousSteps, put = __cordl_internal_set_m_HomogeneousSteps)) bool m_HomogeneousSteps;

  /// @brief Field m_InnerRadius, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InnerRadius, put = __cordl_internal_set_m_InnerRadius)) float_t m_InnerRadius;

  /// @brief Field m_Sides, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Sides, put = __cordl_internal_set_m_Sides)) bool m_Sides;

  /// @brief Field m_StepGenerationType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StepGenerationType, put = __cordl_internal_set_m_StepGenerationType))::UnityEngine::ProBuilder::Shapes::StepGenerationType m_StepGenerationType;

  /// @brief Field m_StepsCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StepsCount, put = __cordl_internal_set_m_StepsCount)) int32_t m_StepsCount;

  /// @brief Field m_StepsHeight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StepsHeight, put = __cordl_internal_set_m_StepsHeight)) float_t m_StepsHeight;

  __declspec(property(get = get_sides, put = set_sides)) bool sides;

  /// @brief Method BuildCurvedStairs, addr 0x2c75f04, size 0x1174, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds BuildCurvedStairs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method BuildStairs, addr 0x2c77078, size 0xf28, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds BuildStairs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method CopyShape, addr 0x2c75e08, size 0x9c, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  static inline ::UnityEngine::ProBuilder::Shapes::Stairs* New_ctor();

  /// @brief Method RebuildMesh, addr 0x2c75ea4, size 0x60, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method UpdateBounds, addr 0x2c77fa0, size 0x164, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds);

  constexpr float_t const& __cordl_internal_get_m_Circumference() const;

  constexpr float_t& __cordl_internal_get_m_Circumference();

  constexpr bool const& __cordl_internal_get_m_HomogeneousSteps() const;

  constexpr bool& __cordl_internal_get_m_HomogeneousSteps();

  constexpr float_t const& __cordl_internal_get_m_InnerRadius() const;

  constexpr float_t& __cordl_internal_get_m_InnerRadius();

  constexpr bool const& __cordl_internal_get_m_Sides() const;

  constexpr bool& __cordl_internal_get_m_Sides();

  constexpr ::UnityEngine::ProBuilder::Shapes::StepGenerationType const& __cordl_internal_get_m_StepGenerationType() const;

  constexpr ::UnityEngine::ProBuilder::Shapes::StepGenerationType& __cordl_internal_get_m_StepGenerationType();

  constexpr int32_t const& __cordl_internal_get_m_StepsCount() const;

  constexpr int32_t& __cordl_internal_get_m_StepsCount();

  constexpr float_t const& __cordl_internal_get_m_StepsHeight() const;

  constexpr float_t& __cordl_internal_get_m_StepsHeight();

  constexpr void __cordl_internal_set_m_Circumference(float_t value);

  constexpr void __cordl_internal_set_m_HomogeneousSteps(bool value);

  constexpr void __cordl_internal_set_m_InnerRadius(float_t value);

  constexpr void __cordl_internal_set_m_Sides(bool value);

  constexpr void __cordl_internal_set_m_StepGenerationType(::UnityEngine::ProBuilder::Shapes::StepGenerationType value);

  constexpr void __cordl_internal_set_m_StepsCount(int32_t value);

  constexpr void __cordl_internal_set_m_StepsHeight(float_t value);

  /// @brief Method .ctor, addr 0x2c78104, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_sides, addr 0x2c75df4, size 0x8, virtual false, abstract: false, final false
  inline bool get_sides();

  /// @brief Method set_sides, addr 0x2c75dfc, size 0xc, virtual false, abstract: false, final false
  inline void set_sides(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Stairs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Stairs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Stairs(Stairs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Stairs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Stairs(Stairs const&) = delete;

  /// @brief Field m_StepGenerationType, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::Shapes::StepGenerationType ___m_StepGenerationType;

  /// @brief Field m_StepsHeight, offset: 0x14, size: 0x4, def value: None
  float_t ___m_StepsHeight;

  /// @brief Field m_StepsCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_StepsCount;

  /// @brief Field m_HomogeneousSteps, offset: 0x1c, size: 0x1, def value: None
  bool ___m_HomogeneousSteps;

  /// @brief Field m_Circumference, offset: 0x20, size: 0x4, def value: None
  float_t ___m_Circumference;

  /// @brief Field m_Sides, offset: 0x24, size: 0x1, def value: None
  bool ___m_Sides;

  /// @brief Field m_InnerRadius, offset: 0x28, size: 0x4, def value: None
  float_t ___m_InnerRadius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Stairs, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Stairs, ___m_StepGenerationType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Stairs, ___m_StepsHeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Stairs, ___m_StepsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Stairs, ___m_HomogeneousSteps) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Stairs, ___m_Circumference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Stairs, ___m_Sides) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Stairs, ___m_InnerRadius) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Stairs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Stairs*, "UnityEngine.ProBuilder.Shapes", "Stairs");
