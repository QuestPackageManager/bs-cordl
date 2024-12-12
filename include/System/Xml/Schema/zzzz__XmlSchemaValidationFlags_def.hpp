#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaValidationFlags.hpp"
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
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaValidationFlags
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

  /// @brief Field AllowXmlAttributes value: I32(16)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const AllowXmlAttributes;

  /// @brief Field None value: I32(0)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const None;

  /// @brief Field ProcessIdentityConstraints value: I32(8)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessIdentityConstraints;

  /// @brief Field ProcessInlineSchema value: I32(1)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessInlineSchema;

  /// @brief Field ProcessSchemaLocation value: I32(2)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessSchemaLocation;

  /// @brief Field ReportValidationWarnings value: I32(4)
  static ::System::Xml::Schema::XmlSchemaValidationFlags const ReportValidationWarnings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7730 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaValidationFlags, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaValidationFlags, "System.Xml.Schema", "XmlSchemaValidationFlags");
