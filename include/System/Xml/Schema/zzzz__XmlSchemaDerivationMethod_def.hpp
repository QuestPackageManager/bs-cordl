#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaDerivationMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaDerivationMethod)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaDerivationMethod);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaDerivationMethod
struct CORDL_TYPE XmlSchemaDerivationMethod {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSchemaDerivationMethod_Unwrapped
  enum struct __XmlSchemaDerivationMethod_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_Substitution = static_cast<int32_t>(0x1),
    __E_Extension = static_cast<int32_t>(0x2),
    __E_Restriction = static_cast<int32_t>(0x4),
    __E_List = static_cast<int32_t>(0x8),
    __E_Union = static_cast<int32_t>(0x10),
    __E_All = static_cast<int32_t>(0xff),
    __E_None = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSchemaDerivationMethod_Unwrapped() const noexcept {
    return static_cast<__XmlSchemaDerivationMethod_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaDerivationMethod();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSchemaDerivationMethod(int32_t value__) noexcept;

  /// @brief Field All value: I32(255)
  static ::System::Xml::Schema::XmlSchemaDerivationMethod const All;

  /// @brief Field Empty value: I32(0)
  static ::System::Xml::Schema::XmlSchemaDerivationMethod const Empty;

  /// @brief Field Extension value: I32(2)
  static ::System::Xml::Schema::XmlSchemaDerivationMethod const Extension;

  /// @brief Field List value: I32(8)
  static ::System::Xml::Schema::XmlSchemaDerivationMethod const List;

  /// @brief Field None value: I32(256)
  static ::System::Xml::Schema::XmlSchemaDerivationMethod const None;

  /// @brief Field Restriction value: I32(4)
  static ::System::Xml::Schema::XmlSchemaDerivationMethod const Restriction;

  /// @brief Field Substitution value: I32(1)
  static ::System::Xml::Schema::XmlSchemaDerivationMethod const Substitution;

  /// @brief Field Union value: I32(16)
  static ::System::Xml::Schema::XmlSchemaDerivationMethod const Union;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7672 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaDerivationMethod, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaDerivationMethod, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaDerivationMethod, "System.Xml.Schema", "XmlSchemaDerivationMethod");
