#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaUse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaUse)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaUse;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaUse);
// Type: System.Xml.Schema::XmlSchemaUse
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::XmlSchemaUse
struct CORDL_TYPE XmlSchemaUse {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSchemaUse_Unwrapped
  enum struct __XmlSchemaUse_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Optional = static_cast<int32_t>(0x1),
    __E_Prohibited = static_cast<int32_t>(0x2),
    __E_Required = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSchemaUse_Unwrapped() const noexcept {
    return static_cast<__XmlSchemaUse_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaUse();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSchemaUse(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::XmlSchemaUse const None;

  /// @brief Field Optional value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::XmlSchemaUse const Optional;

  /// @brief Field Prohibited value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::XmlSchemaUse const Prohibited;

  /// @brief Field Required value: static_cast<int32_t>(0x3)
  static ::System::Xml::Schema::XmlSchemaUse const Required;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaUse, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaUse, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaUse, "System.Xml.Schema", "XmlSchemaUse");
