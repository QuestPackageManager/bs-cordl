#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaValidationFlags)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaValidationFlags;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaValidationFlags);
// Type: System.Xml.Schema::XmlSchemaValidationFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::XmlSchemaValidationFlags
struct CORDL_TYPE XmlSchemaValidationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSchemaValidationFlags_Unwrapped
  enum struct __XmlSchemaValidationFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ProcessInlineSchema = static_cast<int32_t>(0x1),
    __E_ProcessSchemaLocation = static_cast<int32_t>(0x2),
    __E_ReportValidationWarnings = static_cast<int32_t>(0x4),
    __E_ProcessIdentityConstraints = static_cast<int32_t>(0x8),
    __E_AllowXmlAttributes = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSchemaValidationFlags_Unwrapped() const noexcept {
    return static_cast<__XmlSchemaValidationFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaValidationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSchemaValidationFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllowXmlAttributes value: static_cast<int32_t>(0x10)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const AllowXmlAttributes;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const None;

  /// @brief Field ProcessIdentityConstraints value: static_cast<int32_t>(0x8)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessIdentityConstraints;

  /// @brief Field ProcessInlineSchema value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessInlineSchema;

  /// @brief Field ProcessSchemaLocation value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessSchemaLocation;

  /// @brief Field ReportValidationWarnings value: static_cast<int32_t>(0x4)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const ReportValidationWarnings;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaValidationFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidationFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaValidationFlags, "System.Xml.Schema", "XmlSchemaValidationFlags");
