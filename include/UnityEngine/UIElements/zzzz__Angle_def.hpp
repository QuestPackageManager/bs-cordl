#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Angle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Angle)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct AngleUnit;
}
namespace UnityEngine::UIElements {
struct Angle_Unit;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Angle_Unit;
}
namespace UnityEngine::UIElements {
struct Angle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Angle_Unit);
MARK_VAL_T(::UnityEngine::UIElements::Angle);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Angle/Unit
struct CORDL_TYPE Angle_Unit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Angle_Unit_Unwrapped
  enum struct __Angle_Unit_Unwrapped : int32_t {
    __E_Degree = static_cast<int32_t>(0x0),
    __E_Gradian = static_cast<int32_t>(0x1),
    __E_Radian = static_cast<int32_t>(0x2),
    __E_Turn = static_cast<int32_t>(0x3),
    __E_None = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Angle_Unit_Unwrapped() const noexcept {
    return static_cast<__Angle_Unit_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Angle_Unit();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Angle_Unit(int32_t value__) noexcept;

  /// @brief Field Degree value: I32(0)
  static ::UnityEngine::UIElements::Angle_Unit const Degree;

  /// @brief Field Gradian value: I32(1)
  static ::UnityEngine::UIElements::Angle_Unit const Gradian;

  /// @brief Field None value: I32(4)
  static ::UnityEngine::UIElements::Angle_Unit const None;

  /// @brief Field Radian value: I32(2)
  static ::UnityEngine::UIElements::Angle_Unit const Radian;

  /// @brief Field Turn value: I32(3)
  static ::UnityEngine::UIElements::Angle_Unit const Turn;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6053 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Angle_Unit, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Angle_Unit, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.Angle::Unit
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Angle
struct CORDL_TYPE Angle {
public:
  // Declarations
  using Unit = ::UnityEngine::UIElements::Angle_Unit;

  __declspec(property(get = get_value)) float_t value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Angle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Angle>*();

  /// @brief Method Equals, addr 0x4a693ec, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a693c4, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Angle other);

  /// @brief Method GetHashCode, addr 0x4a69478, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method None, addr 0x4a692e8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Angle None();

  /// @brief Method ToDegrees, addr 0x4a69310, size 0x84, virtual false, abstract: false, final false
  inline float_t ToDegrees();

  /// @brief Method ToString, addr 0x4a694a0, size 0x1d8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a69304, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::AngleUnit unit);

  /// @brief Method .ctor, addr 0x4a692f0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::Angle_Unit unit);

  /// @brief Method get_value, addr 0x4a692fc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Angle>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Angle>* i___System__IEquatable_1___UnityEngine__UIElements__Angle_();

  /// @brief Method op_Equality, addr 0x4a6939c, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Angle lhs, ::UnityEngine::UIElements::Angle rhs);

  /// @brief Method op_Implicit, addr 0x4a69394, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Angle op_Implicit___UnityEngine__UIElements__Angle(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Angle();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::Angle_Unit", modifiers: "", def_value:
  // None }]
  constexpr Angle(float_t m_Value, ::UnityEngine::UIElements::Angle_Unit m_Unit) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6054 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  float_t m_Value;

  /// @brief Field m_Unit, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::Angle_Unit m_Unit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Angle, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Angle, m_Unit) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Angle, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Angle_Unit, "UnityEngine.UIElements", "Angle/Unit");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Angle, "UnityEngine.UIElements", "Angle");
