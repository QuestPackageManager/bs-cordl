#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LinearColor)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::LinearColor);
// Type: UnityEngine.Experimental.GlobalIllumination::LinearColor
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10390))
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::LinearColor
struct CORDL_TYPE LinearColor {
public:
  // Declarations
  __declspec(property(get = get_red, put = set_red)) float_t red;

  __declspec(property(get = get_green, put = set_green)) float_t green;

  __declspec(property(get = get_blue, put = set_blue)) float_t blue;

  /// @brief Method get_red, addr 0x2cf1f08, size 0x8, virtual false, abstract: false, final false
  inline float_t get_red();

  /// @brief Method set_red, addr 0x2cf1f10, size 0xb4, virtual false, abstract: false, final false
  inline void set_red(float_t value);

  /// @brief Method get_green, addr 0x2cf1fc4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_green();

  /// @brief Method set_green, addr 0x2cf1fcc, size 0xb4, virtual false, abstract: false, final false
  inline void set_green(float_t value);

  /// @brief Method get_blue, addr 0x2cf2080, size 0x8, virtual false, abstract: false, final false
  inline float_t get_blue();

  /// @brief Method set_blue, addr 0x2cf2088, size 0xb4, virtual false, abstract: false, final false
  inline void set_blue(float_t value);

  /// @brief Method Convert, addr 0x2cf213c, size 0x338, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor Convert(::UnityEngine::Color color, float_t intensity);

  /// @brief Method Black, addr 0x2cf2474, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor Black();

  // Ctor Parameters [CppParam { name: "m_red", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_green", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_blue",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_intensity", ty: "float_t", modifiers: "", def_value: None }]
  constexpr LinearColor(float_t m_red, float_t m_green, float_t m_blue, float_t m_intensity) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LinearColor();

  /// @brief Field m_red, offset: 0x0, size: 0x4, def value: None
  float_t m_red;

  /// @brief Field m_green, offset: 0x4, size: 0x4, def value: None
  float_t m_green;

  /// @brief Field m_blue, offset: 0x8, size: 0x4, def value: None
  float_t m_blue;

  /// @brief Field m_intensity, offset: 0xc, size: 0x4, def value: None
  float_t m_intensity;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::LinearColor, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LinearColor, m_red) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LinearColor, m_green) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LinearColor, m_blue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LinearColor, m_intensity) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LinearColor, "UnityEngine.Experimental.GlobalIllumination", "LinearColor");
