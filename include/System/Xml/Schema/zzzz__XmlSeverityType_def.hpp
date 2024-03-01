#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSeverityType)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSeverityType;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSeverityType);
// Type: System.Xml.Schema::XmlSeverityType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::XmlSeverityType
struct CORDL_TYPE XmlSeverityType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSeverityType_Unwrapped
  enum struct __XmlSeverityType_Unwrapped : int32_t {
    __E_Error = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSeverityType_Unwrapped() const noexcept {
    return static_cast<__XmlSeverityType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSeverityType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSeverityType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Error value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::XmlSeverityType const Error;

  /// @brief Field Warning value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::XmlSeverityType const Warning;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSeverityType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSeverityType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSeverityType, "System.Xml.Schema", "XmlSeverityType");
