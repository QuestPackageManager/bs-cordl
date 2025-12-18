#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__LayoutUnit_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutValue)
namespace System {
class Object;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutUnit;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutValue);
// Dependencies UnityEngine.UIElements.Layout.LayoutUnit
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutValue
struct CORDL_TYPE LayoutValue {
public:
  // Declarations
  __declspec(property(get = get_Unit)) ::UnityEngine::UIElements::Layout::LayoutUnit Unit;

  __declspec(property(get = get_Value)) float_t Value;

  /// @brief Method Auto, addr 0x6b35ec0, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutValue Auto();

  /// @brief Method Equals, addr 0x6b38300, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6b3829c, size 0x64, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::UIElements::Layout::LayoutValue other);

  /// @brief Method GetHashCode, addr 0x6b383c8, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Percent, addr 0x6b35f4c, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutValue Percent(float_t value);

  /// @brief Method Point, addr 0x6b35ecc, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutValue Point(float_t value);

  /// @brief Method Undefined, addr 0x6b35f6c, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutValue Undefined();

  /// @brief Method get_Unit, addr 0x6b3828c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutUnit get_Unit();

  /// @brief Method get_Value, addr 0x6b38294, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Value();

  /// @brief Method op_Implicit, addr 0x6b383ec, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutValue op_Implicit___UnityEngine__UIElements__Layout__LayoutValue(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutValue();

  // Ctor Parameters [CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "unit", ty: "::UnityEngine::UIElements::Layout::LayoutUnit", modifiers: "", def_value:
  // None }]
  constexpr LayoutValue(float_t value, ::UnityEngine::UIElements::Layout::LayoutUnit unit) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5437 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  float_t value;

  /// @brief Field unit, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::Layout::LayoutUnit unit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutValue, value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutValue, unit) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutValue, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutValue, "UnityEngine.UIElements.Layout", "LayoutValue");
