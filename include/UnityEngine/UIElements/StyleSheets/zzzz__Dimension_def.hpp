#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Dimension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Dimension)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension_Unit;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension_Unit;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Dimension_Unit);
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Dimension);
// Dependencies
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.Dimension/Unit
struct CORDL_TYPE Dimension_Unit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Dimension_Unit_Unwrapped
  enum struct __Dimension_Unit_Unwrapped : int32_t {
    __E_Unitless = static_cast<int32_t>(0x0),
    __E_Pixel = static_cast<int32_t>(0x1),
    __E_Percent = static_cast<int32_t>(0x2),
    __E_Second = static_cast<int32_t>(0x3),
    __E_Millisecond = static_cast<int32_t>(0x4),
    __E_Degree = static_cast<int32_t>(0x5),
    __E_Gradian = static_cast<int32_t>(0x6),
    __E_Radian = static_cast<int32_t>(0x7),
    __E_Turn = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Dimension_Unit_Unwrapped() const noexcept {
    return static_cast<__Dimension_Unit_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Dimension_Unit();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Dimension_Unit(int32_t value__) noexcept;

  /// @brief Field Degree value: I32(5)
  static ::UnityEngine::UIElements::StyleSheets::Dimension_Unit const Degree;

  /// @brief Field Gradian value: I32(6)
  static ::UnityEngine::UIElements::StyleSheets::Dimension_Unit const Gradian;

  /// @brief Field Millisecond value: I32(4)
  static ::UnityEngine::UIElements::StyleSheets::Dimension_Unit const Millisecond;

  /// @brief Field Percent value: I32(2)
  static ::UnityEngine::UIElements::StyleSheets::Dimension_Unit const Percent;

  /// @brief Field Pixel value: I32(1)
  static ::UnityEngine::UIElements::StyleSheets::Dimension_Unit const Pixel;

  /// @brief Field Radian value: I32(7)
  static ::UnityEngine::UIElements::StyleSheets::Dimension_Unit const Radian;

  /// @brief Field Second value: I32(3)
  static ::UnityEngine::UIElements::StyleSheets::Dimension_Unit const Second;

  /// @brief Field Turn value: I32(8)
  static ::UnityEngine::UIElements::StyleSheets::Dimension_Unit const Turn;

  /// @brief Field Unitless value: I32(0)
  static ::UnityEngine::UIElements::StyleSheets::Dimension_Unit const Unitless;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5452 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Dimension_Unit, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Dimension_Unit, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
// Dependencies UnityEngine.UIElements.StyleSheets.Dimension::Unit
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.Dimension
struct CORDL_TYPE Dimension {
public:
  // Declarations
  using Unit = ::UnityEngine::UIElements::StyleSheets::Dimension_Unit;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>*();

  /// @brief Method Equals, addr 0x6addd24, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6addd04, size 0x20, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleSheets::Dimension other);

  /// @brief Method GetHashCode, addr 0x6adddb0, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToAngle, addr 0x6addcb8, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Angle ToAngle();

  /// @brief Method ToLength, addr 0x6addc70, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length ToLength();

  /// @brief Method ToString, addr 0x6addde0, size 0x15c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToTime, addr 0x6addca4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TimeValue ToTime();

  /// @brief Method .ctor, addr 0x6addc64, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::StyleSheets::Dimension_Unit unit);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>* i___System__IEquatable_1___UnityEngine__UIElements__StyleSheets__Dimension_();

  /// @brief Method op_Equality, addr 0x6addce4, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleSheets::Dimension lhs, ::UnityEngine::UIElements::StyleSheets::Dimension rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Dimension();

  // Ctor Parameters [CppParam { name: "unit", ty: "::UnityEngine::UIElements::StyleSheets::Dimension_Unit", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "",
  // def_value: None }]
  constexpr Dimension(::UnityEngine::UIElements::StyleSheets::Dimension_Unit unit, float_t value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5453 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field unit, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::Dimension_Unit unit;

  /// @brief Field value, offset: 0x4, size: 0x4, def value: None
  float_t value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Dimension, unit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Dimension, value) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Dimension, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Dimension_Unit, "UnityEngine.UIElements.StyleSheets", "Dimension/Unit");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Dimension, "UnityEngine.UIElements.StyleSheets", "Dimension");
