#pragma once
// IWYU pragma private; include "HMUI/TimeSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "HMUI/zzzz__TimeSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSlider)
namespace HMUI {
struct __TimeSlider__TimeType;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace HMUI {
struct __TimeSlider__TimeType;
}
namespace HMUI {
class TimeSlider;
}
// Write type traits
MARK_VAL_T(::HMUI::__TimeSlider__TimeType);
MARK_REF_PTR_T(::HMUI::TimeSlider);
// Type: ::TimeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::TimeSlider::TimeType
struct CORDL_TYPE __TimeSlider__TimeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimeSlider__TimeType_Unwrapped
  enum struct ____TimeSlider__TimeType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Milliseconds = static_cast<int32_t>(0x1),
    __E_Normalized = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimeSlider__TimeType_Unwrapped() const noexcept {
    return static_cast<____TimeSlider__TimeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSlider__TimeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimeSlider__TimeType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::HMUI::__TimeSlider__TimeType const Default;

  /// @brief Field Milliseconds value: static_cast<int32_t>(0x1)
  static ::HMUI::__TimeSlider__TimeType const Milliseconds;

  /// @brief Field Normalized value: static_cast<int32_t>(0x2)
  static ::HMUI::__TimeSlider__TimeType const Normalized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16018 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__TimeSlider__TimeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__TimeSlider__TimeType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::TimeSlider
// SizeInfo { instance_size: 384, native_size: -1, calculated_instance_size: 384, calculated_native_size: 384, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::TimeSlider*
class CORDL_TYPE TimeSlider : public ::HMUI::RangeValuesTextSlider {
public:
  // Declarations
  using TimeType = ::HMUI::__TimeSlider__TimeType;

  /// @brief Field _lowerValue, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get__lowerValue, put = __cordl_internal_set__lowerValue)) float_t _lowerValue;

  /// @brief Field _timeType, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get__timeType, put = __cordl_internal_set__timeType)) ::HMUI::__TimeSlider__TimeType _timeType;

  /// @brief Field _upperValue, offset 0x17c, size 0x4
  __declspec(property(get = __cordl_internal_get__upperValue, put = __cordl_internal_set__upperValue)) float_t _upperValue;

  /// @brief Field _valuesValid, offset 0x174, size 0x1
  __declspec(property(get = __cordl_internal_get__valuesValid, put = __cordl_internal_set__valuesValid)) bool _valuesValid;

  /// @brief Method FormatTimeSpan, addr 0x399ccf4, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW FormatTimeSpan(::System::TimeSpan ts);

  static inline ::HMUI::TimeSlider* New_ctor();

  /// @brief Method SetBounds, addr 0x399ca90, size 0x14, virtual false, abstract: false, final false
  inline void SetBounds(bool valuesValid, float_t lowerValue, float_t upperValue);

  /// @brief Method TextForValue, addr 0x399caa4, size 0x250, virtual true, abstract: false, final false
  inline ::StringW TextForValue(float_t value);

  constexpr float_t const& __cordl_internal_get__lowerValue() const;

  constexpr float_t& __cordl_internal_get__lowerValue();

  constexpr ::HMUI::__TimeSlider__TimeType const& __cordl_internal_get__timeType() const;

  constexpr ::HMUI::__TimeSlider__TimeType& __cordl_internal_get__timeType();

  constexpr float_t const& __cordl_internal_get__upperValue() const;

  constexpr float_t& __cordl_internal_get__upperValue();

  constexpr bool const& __cordl_internal_get__valuesValid() const;

  constexpr bool& __cordl_internal_get__valuesValid();

  constexpr void __cordl_internal_set__lowerValue(float_t value);

  constexpr void __cordl_internal_set__timeType(::HMUI::__TimeSlider__TimeType value);

  constexpr void __cordl_internal_set__upperValue(float_t value);

  constexpr void __cordl_internal_set__valuesValid(bool value);

  /// @brief Method .ctor, addr 0x399ce48, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Field _timeType, offset: 0x170, size: 0x4, def value: None
  ::HMUI::__TimeSlider__TimeType ____timeType;

  /// @brief Field _valuesValid, offset: 0x174, size: 0x1, def value: None
  bool ____valuesValid;

  /// @brief Field _lowerValue, offset: 0x178, size: 0x4, def value: None
  float_t ____lowerValue;

  /// @brief Field _upperValue, offset: 0x17c, size: 0x4, def value: None
  float_t ____upperValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16019 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TimeSlider, 0x180>, "Size mismatch!");

static_assert(offsetof(::HMUI::TimeSlider, ____timeType) == 0x170, "Offset mismatch!");

static_assert(offsetof(::HMUI::TimeSlider, ____valuesValid) == 0x174, "Offset mismatch!");

static_assert(offsetof(::HMUI::TimeSlider, ____lowerValue) == 0x178, "Offset mismatch!");

static_assert(offsetof(::HMUI::TimeSlider, ____upperValue) == 0x17c, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TimeSlider__TimeType, "HMUI", "TimeSlider/TimeType");
NEED_NO_BOX(::HMUI::TimeSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TimeSlider*, "HMUI", "TimeSlider");
