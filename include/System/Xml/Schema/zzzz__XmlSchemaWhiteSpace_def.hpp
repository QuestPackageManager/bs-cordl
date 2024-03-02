#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaWhiteSpace)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaWhiteSpace);
// Type: System.Xml.Schema::XmlSchemaWhiteSpace
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::XmlSchemaWhiteSpace
struct CORDL_TYPE XmlSchemaWhiteSpace {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSchemaWhiteSpace_Unwrapped
  enum struct __XmlSchemaWhiteSpace_Unwrapped : int32_t {
    __E_Preserve = static_cast<int32_t>(0x0),
    __E_Replace = static_cast<int32_t>(0x1),
    __E_Collapse = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSchemaWhiteSpace_Unwrapped() const noexcept {
    return static_cast<__XmlSchemaWhiteSpace_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaWhiteSpace();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSchemaWhiteSpace(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Collapse value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::XmlSchemaWhiteSpace const Collapse;

  /// @brief Field Preserve value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::XmlSchemaWhiteSpace const Preserve;

  /// @brief Field Replace value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::XmlSchemaWhiteSpace const Replace;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaWhiteSpace, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaWhiteSpace, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaWhiteSpace, "System.Xml.Schema", "XmlSchemaWhiteSpace");
