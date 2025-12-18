#pragma once
// IWYU pragma private; include "TMPro/MarkPositionAdjustment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MarkPositionAdjustment)
// Forward declare root types
namespace TMPro {
struct MarkPositionAdjustment;
}
// Write type traits
MARK_VAL_T(::TMPro::MarkPositionAdjustment);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.MarkPositionAdjustment
struct CORDL_TYPE MarkPositionAdjustment {
public:
  // Declarations
  __declspec(property(get = get_xPositionAdjustment, put = set_xPositionAdjustment)) float_t xPositionAdjustment;

  __declspec(property(get = get_yPositionAdjustment, put = set_yPositionAdjustment)) float_t yPositionAdjustment;

  /// @brief Method .ctor, addr 0x677f388, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t x, float_t y);

  /// @brief Method get_xPositionAdjustment, addr 0x677f368, size 0x8, virtual false, abstract: false, final false
  inline float_t get_xPositionAdjustment();

  /// @brief Method get_yPositionAdjustment, addr 0x677f378, size 0x8, virtual false, abstract: false, final false
  inline float_t get_yPositionAdjustment();

  /// @brief Method set_xPositionAdjustment, addr 0x677f370, size 0x8, virtual false, abstract: false, final false
  inline void set_xPositionAdjustment(float_t value);

  /// @brief Method set_yPositionAdjustment, addr 0x677f380, size 0x8, virtual false, abstract: false, final false
  inline void set_yPositionAdjustment(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkPositionAdjustment();

  // Ctor Parameters [CppParam { name: "m_XPositionAdjustment", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YPositionAdjustment", ty: "float_t", modifiers: "", def_value: None
  // }]
  constexpr MarkPositionAdjustment(float_t m_XPositionAdjustment, float_t m_YPositionAdjustment) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15819 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_XPositionAdjustment, offset: 0x0, size: 0x4, def value: None
  float_t m_XPositionAdjustment;

  /// @brief Field m_YPositionAdjustment, offset: 0x4, size: 0x4, def value: None
  float_t m_YPositionAdjustment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::MarkPositionAdjustment, m_XPositionAdjustment) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::MarkPositionAdjustment, m_YPositionAdjustment) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::MarkPositionAdjustment, 0x8>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MarkPositionAdjustment, "TMPro", "MarkPositionAdjustment");
