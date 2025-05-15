#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TimeValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeUnit_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeValue)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct TimeUnit;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TimeValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TimeValue);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.TimeUnit
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TimeValue
struct CORDL_TYPE TimeValue {
public:
  // Declarations
  __declspec(property(get = get_unit)) ::UnityEngine::UIElements::TimeUnit unit;

  __declspec(property(get = get_value)) float_t value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>*();

  /// @brief Method Equals, addr 0x4a87abc, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a87a94, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TimeValue other);

  /// @brief Method GetHashCode, addr 0x4a87b48, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4a87b70, size 0xf8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a87a24, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x4a87a30, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::TimeUnit unit);

  /// @brief Method get_unit, addr 0x4a87a1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TimeUnit get_unit();

  /// @brief Method get_value, addr 0x4a87a14, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>* i___System__IEquatable_1___UnityEngine__UIElements__TimeValue_();

  /// @brief Method op_Equality, addr 0x4a87a44, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TimeValue lhs, ::UnityEngine::UIElements::TimeValue rhs);

  /// @brief Method op_Implicit, addr 0x4a87a3c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TimeValue op_Implicit___UnityEngine__UIElements__TimeValue(float_t value);

  /// @brief Method op_Inequality, addr 0x4a87a6c, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TimeValue lhs, ::UnityEngine::UIElements::TimeValue rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeValue();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::TimeUnit", modifiers: "", def_value: None
  // }]
  constexpr TimeValue(float_t m_Value, ::UnityEngine::UIElements::TimeUnit m_Unit) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6115 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  float_t m_Value;

  /// @brief Field m_Unit, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::TimeUnit m_Unit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TimeValue, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimeValue, m_Unit) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimeValue, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimeValue, "UnityEngine.UIElements", "TimeValue");
