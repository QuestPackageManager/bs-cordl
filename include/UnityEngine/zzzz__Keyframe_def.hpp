#pragma once
// IWYU pragma private; include "UnityEngine/Keyframe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Keyframe)
// Forward declare root types
namespace UnityEngine {
struct Keyframe;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Keyframe);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Keyframe
struct CORDL_TYPE Keyframe {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x485fcac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t value);

  /// @brief Method .ctor, addr 0x485fcbc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t value, float_t inTangent, float_t outTangent);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Keyframe();

  // Ctor Parameters [CppParam { name: "m_Time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_InTangent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OutTangent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_WeightedMode", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_InWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OutWeight", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Keyframe(float_t m_Time, float_t m_Value, float_t m_InTangent, float_t m_OutTangent, int32_t m_WeightedMode, float_t m_InWeight, float_t m_OutWeight) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10641 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field m_Time, offset: 0x0, size: 0x4, def value: None
  float_t m_Time;

  /// @brief Field m_Value, offset: 0x4, size: 0x4, def value: None
  float_t m_Value;

  /// @brief Field m_InTangent, offset: 0x8, size: 0x4, def value: None
  float_t m_InTangent;

  /// @brief Field m_OutTangent, offset: 0xc, size: 0x4, def value: None
  float_t m_OutTangent;

  /// @brief Field m_WeightedMode, offset: 0x10, size: 0x4, def value: None
  int32_t m_WeightedMode;

  /// @brief Field m_InWeight, offset: 0x14, size: 0x4, def value: None
  float_t m_InWeight;

  /// @brief Field m_OutWeight, offset: 0x18, size: 0x4, def value: None
  float_t m_OutWeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Keyframe, m_Time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_Value) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_InTangent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_OutTangent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_WeightedMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_InWeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_OutWeight) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Keyframe, 0x1c>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Keyframe, "UnityEngine", "Keyframe");
