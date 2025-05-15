#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Vector2Mask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Mask)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Vector2Mask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Vector2Mask);
// Dependencies
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.Vector2Mask
struct CORDL_TYPE Vector2Mask {
public:
  // Declarations
  /// @brief Field XY, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_XY, put = setStaticF_XY)) ::UnityEngine::ProBuilder::Vector2Mask XY;

  __declspec(property(get = get_x)) float_t x;

  __declspec(property(get = get_y)) float_t y;

  /// @brief Method .ctor, addr 0x47462b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint8_t mask);

  /// @brief Method .ctor, addr 0x474628c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 v, float_t epsilon);

  static inline ::UnityEngine::ProBuilder::Vector2Mask getStaticF_XY();

  /// @brief Method get_x, addr 0x474625c, size 0x18, virtual false, abstract: false, final false
  inline float_t get_x();

  /// @brief Method get_y, addr 0x4746274, size 0x18, virtual false, abstract: false, final false
  inline float_t get_y();

  /// @brief Method op_BitwiseAnd, addr 0x4746354, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vector2Mask op_BitwiseAnd(::UnityEngine::ProBuilder::Vector2Mask left, ::UnityEngine::ProBuilder::Vector2Mask right);

  /// @brief Method op_BitwiseOr, addr 0x4746348, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vector2Mask op_BitwiseOr(::UnityEngine::ProBuilder::Vector2Mask left, ::UnityEngine::ProBuilder::Vector2Mask right);

  /// @brief Method op_ExclusiveOr, addr 0x4746360, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vector2Mask op_ExclusiveOr(::UnityEngine::ProBuilder::Vector2Mask left, ::UnityEngine::ProBuilder::Vector2Mask right);

  /// @brief Method op_Implicit, addr 0x4746320, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vector2Mask op_Implicit___UnityEngine__ProBuilder__Vector2Mask(::UnityEngine::Vector2 v);

  /// @brief Method op_Implicit, addr 0x47462b8, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::ProBuilder::Vector2Mask mask);

  /// @brief Method op_Multiply, addr 0x474636c, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Multiply(::UnityEngine::ProBuilder::Vector2Mask mask, float_t value);

  static inline void setStaticF_XY(::UnityEngine::ProBuilder::Vector2Mask value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Mask();

  // Ctor Parameters [CppParam { name: "m_Mask", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr Vector2Mask(uint8_t m_Mask) noexcept;

  /// @brief Field X offset 0xffffffff size 0x1
  static constexpr uint8_t X{ static_cast<uint8_t>(0x1u) };

  /// @brief Field Y offset 0xffffffff size 0x1
  static constexpr uint8_t Y{ static_cast<uint8_t>(0x2u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14334 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field m_Mask, offset: 0x0, size: 0x1, def value: None
  uint8_t m_Mask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Vector2Mask, m_Mask) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Vector2Mask, 0x1>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Vector2Mask, "UnityEngine.ProBuilder", "Vector2Mask");
