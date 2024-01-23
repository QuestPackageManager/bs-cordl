#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaContentType)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaContentType);
// Type: System.Xml.Schema::XmlSchemaContentType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11722))
// CS Name: ::System.Xml.Schema::XmlSchemaContentType
struct CORDL_TYPE XmlSchemaContentType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSchemaContentType_Unwrapped
  enum struct __XmlSchemaContentType_Unwrapped : int32_t {
    __E_TextOnly = static_cast<int32_t>(0x0),
    __E_Empty = static_cast<int32_t>(0x1),
    __E_ElementOnly = static_cast<int32_t>(0x2),
    __E_Mixed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSchemaContentType_Unwrapped() const noexcept {
    return static_cast<__XmlSchemaContentType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSchemaContentType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaContentType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field TextOnly value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::XmlSchemaContentType const TextOnly;

  /// @brief Field Empty value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::XmlSchemaContentType const Empty;

  /// @brief Field ElementOnly value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::XmlSchemaContentType const ElementOnly;

  /// @brief Field Mixed value: static_cast<int32_t>(0x3)
  static ::System::Xml::Schema::XmlSchemaContentType const Mixed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaContentType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaContentType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaContentType, "System.Xml.Schema", "XmlSchemaContentType");
