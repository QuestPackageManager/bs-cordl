#pragma once
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13680))
// CS Name: ::TimeSlider::TimeType
struct CORDL_TYPE __TimeSlider__TimeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TimeSlider__TimeType_Unwrapped
  enum struct ____TimeSlider__TimeType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Miliseconds = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimeSlider__TimeType_Unwrapped() const noexcept {
    return static_cast<____TimeSlider__TimeType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TimeSlider__TimeType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeSlider__TimeType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::HMUI::__TimeSlider__TimeType const Default;

  /// @brief Field Miliseconds value: static_cast<int32_t>(0x1)
  static ::HMUI::__TimeSlider__TimeType const Miliseconds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__TimeSlider__TimeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__TimeSlider__TimeType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::TimeSlider
// SizeInfo { instance_size: 368, native_size: -1, calculated_instance_size: 368, calculated_native_size: 364, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13680)), TypeDefinitionIndex(TypeDefinitionIndex(13677))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13681))
// CS Name: ::HMUI::TimeSlider*
class CORDL_TYPE TimeSlider : public ::HMUI::RangeValuesTextSlider {
public:
  // Declarations
  using TimeType = ::HMUI::__TimeSlider__TimeType;

  /// @brief Field _timeType, offset 0x168, size 0x4
  __declspec(property(get = __get__timeType, put = __set__timeType))::HMUI::__TimeSlider__TimeType _timeType;

  constexpr ::HMUI::__TimeSlider__TimeType& __get__timeType();

  constexpr ::HMUI::__TimeSlider__TimeType const& __get__timeType() const;

  constexpr void __set__timeType(::HMUI::__TimeSlider__TimeType value);

  /// @brief Method TextForValue addr 0x1fcdf24 size 0x254 virtual true final false
  inline ::StringW TextForValue(float_t value);

  static inline ::HMUI::TimeSlider* New_ctor();

  /// @brief Method .ctor addr 0x1fce178 size 0xc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TimeSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeSlider(TimeSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeSlider(TimeSlider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeSlider();

public:
  /// @brief Field _timeType, offset: 0x168, size: 0x4, def value: None
  ::HMUI::__TimeSlider__TimeType ____timeType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TimeSlider, 0x170>, "Size mismatch!");

static_assert(offsetof(::HMUI::TimeSlider, ____timeType) == 0x168, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TimeSlider__TimeType, "HMUI", "TimeSlider/TimeType");
NEED_NO_BOX(::HMUI::TimeSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TimeSlider*, "HMUI", "TimeSlider");
