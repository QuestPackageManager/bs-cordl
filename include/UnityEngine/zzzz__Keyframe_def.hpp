#pragma once
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
// Type: UnityEngine::Keyframe
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::Keyframe
struct CORDL_TYPE Keyframe {
public:
  // Declarations
  __declspec(property(get = get_inTangent, put = set_inTangent)) float_t inTangent;

  __declspec(property(get = get_outTangent, put = set_outTangent)) float_t outTangent;

  __declspec(property(get = get_time, put = set_time)) float_t time;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Method .ctor, addr 0x2d89508, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t value);

  /// @brief Method .ctor, addr 0x2d89518, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t value, float_t inTangent, float_t outTangent);

  /// @brief Method get_inTangent, addr 0x2d8954c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_inTangent();

  /// @brief Method get_outTangent, addr 0x2d8955c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_outTangent();

  /// @brief Method get_time, addr 0x2d8952c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_time();

  /// @brief Method get_value, addr 0x2d8953c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Method set_inTangent, addr 0x2d89554, size 0x8, virtual false, abstract: false, final false
  inline void set_inTangent(float_t value);

  /// @brief Method set_outTangent, addr 0x2d89564, size 0x8, virtual false, abstract: false, final false
  inline void set_outTangent(float_t value);

  /// @brief Method set_time, addr 0x2d89534, size 0x8, virtual false, abstract: false, final false
  inline void set_time(float_t value);

  /// @brief Method set_value, addr 0x2d89544, size 0x8, virtual false, abstract: false, final false
  inline void set_value(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Keyframe();

  // Ctor Parameters [CppParam { name: "m_Time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_InTangent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OutTangent", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_WeightedMode", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_InWeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_OutWeight", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Keyframe(float_t m_Time, float_t m_Value, float_t m_InTangent, float_t m_OutTangent, int32_t m_WeightedMode, float_t m_InWeight, float_t m_OutWeight) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Keyframe, 0x1c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_Time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_Value) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_InTangent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_OutTangent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_WeightedMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_InWeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Keyframe, m_OutWeight) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Keyframe, "UnityEngine", "Keyframe");
