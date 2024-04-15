#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTimeParse_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeRawInfo)
namespace System {
struct __DateTimeParse__TM;
}
// Forward declare root types
namespace System {
struct DateTimeRawInfo;
}
// Write type traits
MARK_VAL_T(::System::DateTimeRawInfo);
// Type: System::DateTimeRawInfo
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::DateTimeRawInfo
struct CORDL_TYPE DateTimeRawInfo {
public:
  // Declarations
  /// @brief Method AddNumber, addr 0x282baec, size 0x18, virtual false, abstract: false, final false
  inline void AddNumber(int32_t value);

  /// @brief Method GetNumber, addr 0x282bb04, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetNumber(int32_t index);

  /// @brief Method Init, addr 0x282bacc, size 0x20, virtual false, abstract: false, final false
  inline void Init(::cordl_internals::Ptr<int32_t> numberBuffer);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeRawInfo();

  // Ctor Parameters [CppParam { name: "num", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }, CppParam { name: "numCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dayOfWeek", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "timeMark", ty: "::System::__DateTimeParse__TM", modifiers: "",
  // def_value: None }, CppParam { name: "fraction", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "hasSameDateAndTimeSeparators", ty: "bool", modifiers: "", def_value: None }]
  constexpr DateTimeRawInfo(::cordl_internals::Ptr<int32_t> num, int32_t numCount, int32_t month, int32_t year, int32_t dayOfWeek, int32_t era, ::System::__DateTimeParse__TM timeMark,
                            double_t fraction, bool hasSameDateAndTimeSeparators) noexcept;

  /// @brief Field num, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> num;

  /// @brief Field numCount, offset: 0x8, size: 0x4, def value: None
  int32_t numCount;

  /// @brief Field month, offset: 0xc, size: 0x4, def value: None
  int32_t month;

  /// @brief Field year, offset: 0x10, size: 0x4, def value: None
  int32_t year;

  /// @brief Field dayOfWeek, offset: 0x14, size: 0x4, def value: None
  int32_t dayOfWeek;

  /// @brief Field era, offset: 0x18, size: 0x4, def value: None
  int32_t era;

  /// @brief Field timeMark, offset: 0x1c, size: 0x4, def value: None
  ::System::__DateTimeParse__TM timeMark;

  /// @brief Field fraction, offset: 0x20, size: 0x8, def value: None
  double_t fraction;

  /// @brief Field hasSameDateAndTimeSeparators, offset: 0x28, size: 0x1, def value: None
  bool hasSameDateAndTimeSeparators;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DateTimeRawInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::DateTimeRawInfo, num) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeRawInfo, numCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeRawInfo, month) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeRawInfo, year) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeRawInfo, dayOfWeek) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeRawInfo, era) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeRawInfo, timeMark) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeRawInfo, fraction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::DateTimeRawInfo, hasSameDateAndTimeSeparators) == 0x28, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeRawInfo, "System", "DateTimeRawInfo");
