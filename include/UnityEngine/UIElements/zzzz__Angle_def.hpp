#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Angle)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct __Angle__Unit;
}
namespace UnityEngine::UIElements {
struct AngleUnit;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __Angle__Unit;
}
namespace UnityEngine::UIElements {
struct Angle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__Angle__Unit);
MARK_VAL_T(::UnityEngine::UIElements::Angle);
// Type: ::Unit
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7304))
// CS Name: ::Angle::Unit
struct CORDL_TYPE __Angle__Unit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Angle__Unit_Unwrapped
  enum struct ____Angle__Unit_Unwrapped : int32_t {
    __E_Degree = static_cast<int32_t>(0x0),
    __E_Gradian = static_cast<int32_t>(0x1),
    __E_Radian = static_cast<int32_t>(0x2),
    __E_Turn = static_cast<int32_t>(0x3),
    __E_None = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Angle__Unit_Unwrapped() const noexcept {
    return static_cast<____Angle__Unit_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Angle__Unit(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Angle__Unit();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Degree value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__Angle__Unit const Degree;

  /// @brief Field Gradian value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__Angle__Unit const Gradian;

  /// @brief Field Radian value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__Angle__Unit const Radian;

  /// @brief Field Turn value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__Angle__Unit const Turn;

  /// @brief Field None value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::__Angle__Unit const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Angle__Unit, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Angle__Unit, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Angle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7304))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7305))
// CS Name: ::UnityEngine.UIElements::Angle
struct CORDL_TYPE Angle {
public:
  // Declarations
  using Unit = ::UnityEngine::UIElements::__Angle__Unit;

  __declspec(property(get = get_value)) float_t value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Angle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Angle>*();

  /// @brief Method None, addr 0x2e71a38, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Angle None();

  /// @brief Method get_value, addr 0x2e71a4c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Method .ctor, addr 0x2e71a54, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::AngleUnit unit);

  /// @brief Method .ctor, addr 0x2e71a40, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::__Angle__Unit unit);

  /// @brief Method ToDegrees, addr 0x2e70910, size 0x84, virtual false, abstract: false, final false
  inline float_t ToDegrees();

  /// @brief Method op_Implicit, addr 0x2e70390, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Angle op_Implicit___UnityEngine__UIElements__Angle(float_t value);

  /// @brief Method op_Equality, addr 0x2e7049c, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Angle lhs, ::UnityEngine::UIElements::Angle rhs);

  /// @brief Method Equals, addr 0x2e71a60, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Angle other);

  /// @brief Method Equals, addr 0x2e71a88, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2e70688, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2e70718, size 0x1d8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::__Angle__Unit", modifiers: "", def_value:
  // None }]
  constexpr Angle(float_t m_Value, ::UnityEngine::UIElements::__Angle__Unit m_Unit) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Angle();

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  float_t m_Value;

  /// @brief Field m_Unit, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::__Angle__Unit m_Unit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Angle, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Angle, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Angle, m_Unit) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Angle__Unit, "UnityEngine.UIElements", "Angle/Unit");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Angle, "UnityEngine.UIElements", "Angle");
