#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_Keyframe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_Keyframe)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Keyframe;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_Keyframe);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_Keyframe
struct CORDL_TYPE HAPI_Keyframe {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3a48430, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t t, float_t v, float_t in_tangent, float_t out_tangent);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_Keyframe();

  // Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "inTangent",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "outTangent", ty: "float_t", modifiers: "", def_value: None }]
  constexpr HAPI_Keyframe(float_t time, float_t value, float_t inTangent, float_t outTangent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11732 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field time, offset: 0x0, size: 0x4, def value: None
  float_t time;

  /// @brief Field value, offset: 0x4, size: 0x4, def value: None
  float_t value;

  /// @brief Field inTangent, offset: 0x8, size: 0x4, def value: None
  float_t inTangent;

  /// @brief Field outTangent, offset: 0xc, size: 0x4, def value: None
  float_t outTangent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_Keyframe, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Keyframe, value) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Keyframe, inTangent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Keyframe, outTangent) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Keyframe, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Keyframe, "HoudiniEngineUnity", "HAPI_Keyframe");
