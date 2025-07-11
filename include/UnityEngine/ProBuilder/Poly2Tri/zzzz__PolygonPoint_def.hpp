#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/PolygonPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PolygonPoint)
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonPoint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint);
// Dependencies UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
class CORDL_TYPE PolygonPoint : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint {
public:
  // Declarations
  __declspec(property(get = get_Next, put = set_Next)) ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* Next;

  __declspec(property(get = get_Previous, put = set_Previous)) ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* Previous;

  /// @brief Field <Next>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Next_k__BackingField, put = __cordl_internal_set__Next_k__BackingField)) ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Next_k__BackingField;

  /// @brief Field <Previous>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Previous_k__BackingField,
                      put = __cordl_internal_set__Previous_k__BackingField)) ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Previous_k__BackingField;

  static inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* New_ctor(double_t x, double_t y, int32_t index);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* const& __cordl_internal_get__Next_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*& __cordl_internal_get__Next_k__BackingField();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* const& __cordl_internal_get__Previous_k__BackingField() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*& __cordl_internal_get__Previous_k__BackingField();

  constexpr void __cordl_internal_set__Next_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value);

  constexpr void __cordl_internal_set__Previous_k__BackingField(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value);

  /// @brief Method .ctor, addr 0x46f7f7c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(double_t x, double_t y, int32_t index);

  /// @brief Method get_Next, addr 0x46f7ff4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* get_Next();

  /// @brief Method get_Previous, addr 0x46f8004, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* get_Previous();

  /// @brief Method set_Next, addr 0x46f7ffc, size 0x8, virtual false, abstract: false, final false
  inline void set_Next(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value);

  /// @brief Method set_Previous, addr 0x46f800c, size 0x8, virtual false, abstract: false, final false
  inline void set_Previous(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolygonPoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PolygonPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolygonPoint(PolygonPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolygonPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolygonPoint(PolygonPoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17824 };

  /// @brief Field <Next>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* ____Next_k__BackingField;

  /// @brief Field <Previous>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* ____Previous_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint, ____Next_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint, ____Previous_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint, 0x40>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*, "UnityEngine.ProBuilder.Poly2Tri", "PolygonPoint");
