#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_CurveInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_CurveType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_CurveInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CurveInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_CurveInfo);
// Dependencies HoudiniEngineUnity.HAPI_CurveType
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_CurveInfo
struct CORDL_TYPE HAPI_CurveInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_CurveInfo();

  // Ctor Parameters [CppParam { name: "curveType", ty: "::HoudiniEngineUnity::HAPI_CurveType", modifiers: "", def_value: None }, CppParam { name: "curveCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "vertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "knotCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "isPeriodic", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isRational", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "order", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "hasKnots", ty: "bool", modifiers: "", def_value: None }]
  constexpr HAPI_CurveInfo(::HoudiniEngineUnity::HAPI_CurveType curveType, int32_t curveCount, int32_t vertexCount, int32_t knotCount, bool isPeriodic, bool isRational, int32_t order,
                           bool hasKnots) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11735 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field curveType, offset: 0x0, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_CurveType curveType;

  /// @brief Field curveCount, offset: 0x4, size: 0x4, def value: None
  int32_t curveCount;

  /// @brief Field vertexCount, offset: 0x8, size: 0x4, def value: None
  int32_t vertexCount;

  /// @brief Field knotCount, offset: 0xc, size: 0x4, def value: None
  int32_t knotCount;

  /// @brief Field isPeriodic, offset: 0x10, size: 0x1, def value: None
  bool isPeriodic;

  /// @brief Field isRational, offset: 0x11, size: 0x1, def value: None
  bool isRational;

  /// @brief Field order, offset: 0x14, size: 0x4, def value: None
  int32_t order;

  /// @brief Field hasKnots, offset: 0x18, size: 0x1, def value: None
  bool hasKnots;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_CurveInfo, curveType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CurveInfo, curveCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CurveInfo, vertexCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CurveInfo, knotCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CurveInfo, isPeriodic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CurveInfo, isRational) == 0x11, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CurveInfo, order) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CurveInfo, hasKnots) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_CurveInfo, 0x1c>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CurveInfo, "HoudiniEngineUnity", "HAPI_CurveInfo");
