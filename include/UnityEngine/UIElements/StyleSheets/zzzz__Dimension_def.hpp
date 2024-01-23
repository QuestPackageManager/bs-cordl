#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_def.hpp"
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
struct __Dimension__Unit;
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
struct __Dimension__Unit;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::__Dimension__Unit);
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Dimension);
// Type: ::Unit
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7471))
// CS Name: ::Dimension::Unit
struct CORDL_TYPE __Dimension__Unit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Dimension__Unit_Unwrapped
  enum struct ____Dimension__Unit_Unwrapped : int32_t {
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
  constexpr operator ____Dimension__Unit_Unwrapped() const noexcept {
    return static_cast<____Dimension__Unit_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Dimension__Unit(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dimension__Unit();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unitless value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit const Unitless;

  /// @brief Field Pixel value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit const Pixel;

  /// @brief Field Percent value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit const Percent;

  /// @brief Field Second value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit const Second;

  /// @brief Field Millisecond value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit const Millisecond;

  /// @brief Field Degree value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit const Degree;

  /// @brief Field Gradian value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit const Gradian;

  /// @brief Field Radian value: static_cast<int32_t>(0x7)
  static ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit const Radian;

  /// @brief Field Turn value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit const Turn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::__Dimension__Unit, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::__Dimension__Unit, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
// Type: UnityEngine.UIElements.StyleSheets::Dimension
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7471))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7472))
// CS Name: ::UnityEngine.UIElements.StyleSheets::Dimension
struct CORDL_TYPE Dimension {
public:
  // Declarations
  using Unit = ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>* i___System__IEquatable_1___UnityEngine__UIElements__StyleSheets__Dimension_();

  /// @brief Method .ctor, addr 0x2dea320, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit unit);

  /// @brief Method ToLength, addr 0x2de68c8, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length ToLength();

  /// @brief Method ToTime, addr 0x2de68f8, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TimeValue ToTime();

  /// @brief Method ToAngle, addr 0x2de959c, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Angle ToAngle();

  /// @brief Method op_Equality, addr 0x2dea32c, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StyleSheets::Dimension lhs, ::UnityEngine::UIElements::StyleSheets::Dimension rhs);

  /// @brief Method Equals, addr 0x2dea354, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleSheets::Dimension other);

  /// @brief Method Equals, addr 0x2dea37c, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2dea408, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2de5cf4, size 0x130, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "unit", ty: "::UnityEngine::UIElements::StyleSheets::__Dimension__Unit", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers:
  // "", def_value: None }]
  constexpr Dimension(::UnityEngine::UIElements::StyleSheets::__Dimension__Unit unit, float_t value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Dimension();

  /// @brief Field unit, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::__Dimension__Unit unit;

  /// @brief Field value, offset: 0x4, size: 0x4, def value: None
  float_t value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::Dimension, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Dimension, unit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Dimension, value) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::__Dimension__Unit, "UnityEngine.UIElements.StyleSheets", "Dimension/Unit");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::Dimension, "UnityEngine.UIElements.StyleSheets", "Dimension");
