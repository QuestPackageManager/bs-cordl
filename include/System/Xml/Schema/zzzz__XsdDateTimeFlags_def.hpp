#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDateTimeFlags)
// Forward declare root types
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XsdDateTimeFlags);
// Type: System.Xml.Schema::XsdDateTimeFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::XsdDateTimeFlags
struct CORDL_TYPE XsdDateTimeFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XsdDateTimeFlags_Unwrapped
  enum struct __XsdDateTimeFlags_Unwrapped : int32_t {
    __E_DateTime = static_cast<int32_t>(0x1),
    __E_Time = static_cast<int32_t>(0x2),
    __E_Date = static_cast<int32_t>(0x4),
    __E_GYearMonth = static_cast<int32_t>(0x8),
    __E_GYear = static_cast<int32_t>(0x10),
    __E_GMonthDay = static_cast<int32_t>(0x20),
    __E_GDay = static_cast<int32_t>(0x40),
    __E_GMonth = static_cast<int32_t>(0x80),
    __E_XdrDateTimeNoTz = static_cast<int32_t>(0x100),
    __E_XdrDateTime = static_cast<int32_t>(0x200),
    __E_XdrTimeNoTz = static_cast<int32_t>(0x400),
    __E_AllXsd = static_cast<int32_t>(0xff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XsdDateTimeFlags_Unwrapped() const noexcept {
    return static_cast<__XsdDateTimeFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdDateTimeFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XsdDateTimeFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllXsd value: static_cast<int32_t>(0xff)
  static ::System::Xml::Schema::XsdDateTimeFlags const AllXsd;

  /// @brief Field Date value: static_cast<int32_t>(0x4)
  static ::System::Xml::Schema::XsdDateTimeFlags const Date;

  /// @brief Field DateTime value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::XsdDateTimeFlags const DateTime;

  /// @brief Field GDay value: static_cast<int32_t>(0x40)
  static ::System::Xml::Schema::XsdDateTimeFlags const GDay;

  /// @brief Field GMonth value: static_cast<int32_t>(0x80)
  static ::System::Xml::Schema::XsdDateTimeFlags const GMonth;

  /// @brief Field GMonthDay value: static_cast<int32_t>(0x20)
  static ::System::Xml::Schema::XsdDateTimeFlags const GMonthDay;

  /// @brief Field GYear value: static_cast<int32_t>(0x10)
  static ::System::Xml::Schema::XsdDateTimeFlags const GYear;

  /// @brief Field GYearMonth value: static_cast<int32_t>(0x8)
  static ::System::Xml::Schema::XsdDateTimeFlags const GYearMonth;

  /// @brief Field Time value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::XsdDateTimeFlags const Time;

  /// @brief Field XdrDateTime value: static_cast<int32_t>(0x200)
  static ::System::Xml::Schema::XsdDateTimeFlags const XdrDateTime;

  /// @brief Field XdrDateTimeNoTz value: static_cast<int32_t>(0x100)
  static ::System::Xml::Schema::XsdDateTimeFlags const XdrDateTimeNoTz;

  /// @brief Field XdrTimeNoTz value: static_cast<int32_t>(0x400)
  static ::System::Xml::Schema::XsdDateTimeFlags const XdrTimeNoTz;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdDateTimeFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTimeFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDateTimeFlags, "System.Xml.Schema", "XsdDateTimeFlags");
