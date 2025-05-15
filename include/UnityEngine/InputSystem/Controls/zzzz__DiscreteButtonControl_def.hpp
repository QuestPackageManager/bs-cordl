#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/DiscreteButtonControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscreteButtonControl)
namespace UnityEngine::InputSystem::Controls {
struct DiscreteButtonControl_WriteMode;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
struct DiscreteButtonControl_WriteMode;
}
namespace UnityEngine::InputSystem::Controls {
class DiscreteButtonControl;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::DiscreteButtonControl);
// Dependencies
namespace UnityEngine::InputSystem::Controls {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Controls.DiscreteButtonControl/WriteMode
struct CORDL_TYPE DiscreteButtonControl_WriteMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DiscreteButtonControl_WriteMode_Unwrapped
  enum struct __DiscreteButtonControl_WriteMode_Unwrapped : int32_t {
    __E_WriteDisabled = static_cast<int32_t>(0x0),
    __E_WriteNullAndMaxValue = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DiscreteButtonControl_WriteMode_Unwrapped() const noexcept {
    return static_cast<__DiscreteButtonControl_WriteMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscreteButtonControl_WriteMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DiscreteButtonControl_WriteMode(int32_t value__) noexcept;

  /// @brief Field WriteDisabled value: I32(0)
  static ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode const WriteDisabled;

  /// @brief Field WriteNullAndMaxValue value: I32(1)
  static ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode const WriteNullAndMaxValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7041 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
// Dependencies UnityEngine.InputSystem.Controls.ButtonControl, UnityEngine.InputSystem.Controls.DiscreteButtonControl::WriteMode
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.DiscreteButtonControl
class CORDL_TYPE DiscreteButtonControl : public ::UnityEngine::InputSystem::Controls::ButtonControl {
public:
  // Declarations
  using WriteMode = ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode;

  /// @brief Field maxValue, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_maxValue, put = __cordl_internal_set_maxValue)) int32_t maxValue;

  /// @brief Field minValue, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_minValue, put = __cordl_internal_set_minValue)) int32_t minValue;

  /// @brief Field nullValue, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get_nullValue, put = __cordl_internal_set_nullValue)) int32_t nullValue;

  /// @brief Field wrapAtValue, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get_wrapAtValue, put = __cordl_internal_set_wrapAtValue)) int32_t wrapAtValue;

  /// @brief Field writeMode, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_writeMode, put = __cordl_internal_set_writeMode)) ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode writeMode;

  /// @brief Method FinishSetup, addr 0x4562404, size 0xfc, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x4562500, size 0x1a0, virtual true, abstract: false, final false
  inline float_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x45626a4, size 0x130, virtual true, abstract: false, final false
  inline void WriteValueIntoState(float_t value, ::cordl_internals::Ptr<void> statePtr);

  constexpr int32_t const& __cordl_internal_get_maxValue() const;

  constexpr int32_t& __cordl_internal_get_maxValue();

  constexpr int32_t const& __cordl_internal_get_minValue() const;

  constexpr int32_t& __cordl_internal_get_minValue();

  constexpr int32_t const& __cordl_internal_get_nullValue() const;

  constexpr int32_t& __cordl_internal_get_nullValue();

  constexpr int32_t const& __cordl_internal_get_wrapAtValue() const;

  constexpr int32_t& __cordl_internal_get_wrapAtValue();

  constexpr ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode const& __cordl_internal_get_writeMode() const;

  constexpr ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode& __cordl_internal_get_writeMode();

  constexpr void __cordl_internal_set_maxValue(int32_t value);

  constexpr void __cordl_internal_set_minValue(int32_t value);

  constexpr void __cordl_internal_set_nullValue(int32_t value);

  constexpr void __cordl_internal_set_wrapAtValue(int32_t value);

  constexpr void __cordl_internal_set_writeMode(::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode value);

  /// @brief Method .ctor, addr 0x45627d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscreteButtonControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiscreteButtonControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiscreteButtonControl(DiscreteButtonControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiscreteButtonControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiscreteButtonControl(DiscreteButtonControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7042 };

  /// @brief Field minValue, offset: 0x130, size: 0x4, def value: None
  int32_t ___minValue;

  /// @brief Field maxValue, offset: 0x134, size: 0x4, def value: None
  int32_t ___maxValue;

  /// @brief Field wrapAtValue, offset: 0x138, size: 0x4, def value: None
  int32_t ___wrapAtValue;

  /// @brief Field nullValue, offset: 0x13c, size: 0x4, def value: None
  int32_t ___nullValue;

  /// @brief Field writeMode, offset: 0x140, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode ___writeMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl, ___minValue) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl, ___maxValue) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl, ___wrapAtValue) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl, ___nullValue) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl, ___writeMode) == 0x140, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::DiscreteButtonControl, 0x148>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode, "UnityEngine.InputSystem.Controls", "DiscreteButtonControl/WriteMode");
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::DiscreteButtonControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DiscreteButtonControl*, "UnityEngine.InputSystem.Controls", "DiscreteButtonControl");
