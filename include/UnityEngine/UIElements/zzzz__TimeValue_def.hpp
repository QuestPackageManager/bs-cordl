#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TimeUnit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeValue)
namespace UnityEngine::UIElements {
struct TimeUnit;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TimeValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TimeValue);
// Type: UnityEngine.UIElements::TimeValue
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7408))
// CS Name: ::UnityEngine.UIElements::TimeValue
struct CORDL_TYPE TimeValue {
public:
  // Declarations
  __declspec(property(get = get_value)) float_t value;

  __declspec(property(get = get_unit))::UnityEngine::UIElements::TimeUnit unit;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>*();

  /// @brief Method get_value addr 0x2d0ce7c size 0x8 virtual false final false
  inline float_t get_value();

  /// @brief Method get_unit addr 0x2d0ce84 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::TimeUnit get_unit();

  /// @brief Method .ctor addr 0x2d04e24 size 0xc virtual false final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor addr 0x2d0ce8c size 0xc virtual false final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::TimeUnit unit);

  /// @brief Method op_Implicit addr 0x2d0ce98 size 0x8 virtual false final false
  static inline ::UnityEngine::UIElements::TimeValue op_Implicit___UnityEngine__UIElements__TimeValue(float_t value);

  /// @brief Method op_Equality addr 0x2d0cea0 size 0x28 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::TimeValue lhs, ::UnityEngine::UIElements::TimeValue rhs);

  /// @brief Method op_Inequality addr 0x2d04dfc size 0x28 virtual false final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TimeValue lhs, ::UnityEngine::UIElements::TimeValue rhs);

  /// @brief Method Equals addr 0x2d0cec8 size 0x28 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::TimeValue other);

  /// @brief Method Equals addr 0x2d0cef0 size 0x8c virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2d04ab4 size 0x28 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2d0cf7c size 0xf8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::TimeUnit", modifiers: "", def_value: None
  // }]
  constexpr TimeValue(float_t m_Value, ::UnityEngine::UIElements::TimeUnit m_Unit) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeValue();

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  float_t m_Value;

  /// @brief Field m_Unit, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::TimeUnit m_Unit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimeValue, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimeValue, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimeValue, m_Unit) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimeValue, "UnityEngine.UIElements", "TimeValue");
