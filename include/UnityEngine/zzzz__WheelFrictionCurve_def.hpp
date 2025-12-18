#pragma once
// IWYU pragma private; include "UnityEngine/WheelFrictionCurve.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(WheelFrictionCurve)
// Forward declare root types
namespace UnityEngine {
struct WheelFrictionCurve;
}
// Write type traits
MARK_VAL_T(::UnityEngine::WheelFrictionCurve);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.WheelFrictionCurve
struct CORDL_TYPE WheelFrictionCurve {
public:
  // Declarations
  __declspec(property(get = get_asymptoteSlip, put = set_asymptoteSlip)) float_t asymptoteSlip;

  __declspec(property(get = get_asymptoteValue, put = set_asymptoteValue)) float_t asymptoteValue;

  __declspec(property(get = get_extremumSlip, put = set_extremumSlip)) float_t extremumSlip;

  __declspec(property(get = get_extremumValue, put = set_extremumValue)) float_t extremumValue;

  __declspec(property(get = get_stiffness, put = set_stiffness)) float_t stiffness;

  /// @brief Method get_asymptoteSlip, addr 0x69a6f70, size 0x8, virtual false, abstract: false, final false
  inline float_t get_asymptoteSlip();

  /// @brief Method get_asymptoteValue, addr 0x69a6f80, size 0x8, virtual false, abstract: false, final false
  inline float_t get_asymptoteValue();

  /// @brief Method get_extremumSlip, addr 0x69a6f50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_extremumSlip();

  /// @brief Method get_extremumValue, addr 0x69a6f60, size 0x8, virtual false, abstract: false, final false
  inline float_t get_extremumValue();

  /// @brief Method get_stiffness, addr 0x69a6f90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_stiffness();

  /// @brief Method set_asymptoteSlip, addr 0x69a6f78, size 0x8, virtual false, abstract: false, final false
  inline void set_asymptoteSlip(float_t value);

  /// @brief Method set_asymptoteValue, addr 0x69a6f88, size 0x8, virtual false, abstract: false, final false
  inline void set_asymptoteValue(float_t value);

  /// @brief Method set_extremumSlip, addr 0x69a6f58, size 0x8, virtual false, abstract: false, final false
  inline void set_extremumSlip(float_t value);

  /// @brief Method set_extremumValue, addr 0x69a6f68, size 0x8, virtual false, abstract: false, final false
  inline void set_extremumValue(float_t value);

  /// @brief Method set_stiffness, addr 0x69a6f98, size 0x8, virtual false, abstract: false, final false
  inline void set_stiffness(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr WheelFrictionCurve();

  // Ctor Parameters [CppParam { name: "m_ExtremumSlip", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ExtremumValue", ty: "float_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_AsymptoteSlip", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AsymptoteValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Stiffness",
  // ty: "float_t", modifiers: "", def_value: None }]
  constexpr WheelFrictionCurve(float_t m_ExtremumSlip, float_t m_ExtremumValue, float_t m_AsymptoteSlip, float_t m_AsymptoteValue, float_t m_Stiffness) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18587 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_ExtremumSlip, offset: 0x0, size: 0x4, def value: None
  float_t m_ExtremumSlip;

  /// @brief Field m_ExtremumValue, offset: 0x4, size: 0x4, def value: None
  float_t m_ExtremumValue;

  /// @brief Field m_AsymptoteSlip, offset: 0x8, size: 0x4, def value: None
  float_t m_AsymptoteSlip;

  /// @brief Field m_AsymptoteValue, offset: 0xc, size: 0x4, def value: None
  float_t m_AsymptoteValue;

  /// @brief Field m_Stiffness, offset: 0x10, size: 0x4, def value: None
  float_t m_Stiffness;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::WheelFrictionCurve, m_ExtremumSlip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WheelFrictionCurve, m_ExtremumValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WheelFrictionCurve, m_AsymptoteSlip) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WheelFrictionCurve, m_AsymptoteValue) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::WheelFrictionCurve, m_Stiffness) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::WheelFrictionCurve, 0x14>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WheelFrictionCurve, "UnityEngine", "WheelFrictionCurve");
