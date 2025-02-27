#pragma once
// IWYU pragma private; include "HMUI/TimeSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSlider)
namespace HMUI {
struct TimeSlider_TimeType;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace HMUI {
struct TimeSlider_TimeType;
}
namespace HMUI {
class TimeSlider;
}
// Write type traits
MARK_VAL_T(::HMUI::TimeSlider_TimeType);
MARK_REF_PTR_T(::HMUI::TimeSlider);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.TimeSlider/TimeType
struct CORDL_TYPE TimeSlider_TimeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimeSlider_TimeType_Unwrapped
  enum struct __TimeSlider_TimeType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Milliseconds = static_cast<int32_t>(0x1),
    __E_Normalized = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeSlider_TimeType_Unwrapped() const noexcept {
    return static_cast<__TimeSlider_TimeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSlider_TimeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimeSlider_TimeType(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::HMUI::TimeSlider_TimeType const Default;

  /// @brief Field Milliseconds value: I32(1)
  static ::HMUI::TimeSlider_TimeType const Milliseconds;

  /// @brief Field Normalized value: I32(2)
  static ::HMUI::TimeSlider_TimeType const Normalized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16062 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::TimeSlider_TimeType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::TimeSlider_TimeType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.RangeValuesTextSlider, HMUI.TimeSlider::TimeType
namespace HMUI {
// Is value type: false
// CS Name: HMUI.TimeSlider
class CORDL_TYPE TimeSlider : public ::HMUI::RangeValuesTextSlider {
public:
  // Declarations
  using TimeType = ::HMUI::TimeSlider_TimeType;

  /// @brief Field _lowerValue, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get__lowerValue, put = __cordl_internal_set__lowerValue)) float_t _lowerValue;

  /// @brief Field _timeType, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get__timeType, put = __cordl_internal_set__timeType)) ::HMUI::TimeSlider_TimeType _timeType;

  /// @brief Field _upperValue, offset 0x17c, size 0x4
  __declspec(property(get = __cordl_internal_get__upperValue, put = __cordl_internal_set__upperValue)) float_t _upperValue;

  /// @brief Field _valuesValid, offset 0x174, size 0x1
  __declspec(property(get = __cordl_internal_get__valuesValid, put = __cordl_internal_set__valuesValid)) bool _valuesValid;

  /// @brief Method FormatTimeSpan, addr 0x3a01104, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW FormatTimeSpan(::System::TimeSpan ts);

  static inline ::HMUI::TimeSlider* New_ctor();

  /// @brief Method SetBounds, addr 0x3a00ea0, size 0x14, virtual false, abstract: false, final false
  inline void SetBounds(bool valuesValid, float_t lowerValue, float_t upperValue);

  /// @brief Method TextForValue, addr 0x3a00eb4, size 0x250, virtual true, abstract: false, final false
  inline ::StringW TextForValue(float_t value);

  constexpr float_t const& __cordl_internal_get__lowerValue() const;

  constexpr float_t& __cordl_internal_get__lowerValue();

  constexpr ::HMUI::TimeSlider_TimeType const& __cordl_internal_get__timeType() const;

  constexpr ::HMUI::TimeSlider_TimeType& __cordl_internal_get__timeType();

  constexpr float_t const& __cordl_internal_get__upperValue() const;

  constexpr float_t& __cordl_internal_get__upperValue();

  constexpr bool const& __cordl_internal_get__valuesValid() const;

  constexpr bool& __cordl_internal_get__valuesValid();

  constexpr void __cordl_internal_set__lowerValue(float_t value);

  constexpr void __cordl_internal_set__timeType(::HMUI::TimeSlider_TimeType value);

  constexpr void __cordl_internal_set__upperValue(float_t value);

  constexpr void __cordl_internal_set__valuesValid(bool value);

  /// @brief Method .ctor, addr 0x3a01258, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSlider(TimeSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSlider(TimeSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16063 };

  /// @brief Field _timeType, offset: 0x170, size: 0x4, def value: None
  ::HMUI::TimeSlider_TimeType ____timeType;

  /// @brief Field _valuesValid, offset: 0x174, size: 0x1, def value: None
  bool ____valuesValid;

  /// @brief Field _lowerValue, offset: 0x178, size: 0x4, def value: None
  float_t ____lowerValue;

  /// @brief Field _upperValue, offset: 0x17c, size: 0x4, def value: None
  float_t ____upperValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::TimeSlider, ____timeType) == 0x170, "Offset mismatch!");

static_assert(offsetof(::HMUI::TimeSlider, ____valuesValid) == 0x174, "Offset mismatch!");

static_assert(offsetof(::HMUI::TimeSlider, ____lowerValue) == 0x178, "Offset mismatch!");

static_assert(offsetof(::HMUI::TimeSlider, ____upperValue) == 0x17c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::TimeSlider, 0x180>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TimeSlider_TimeType, "HMUI", "TimeSlider/TimeType");
NEED_NO_BOX(::HMUI::TimeSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TimeSlider*, "HMUI", "TimeSlider");
